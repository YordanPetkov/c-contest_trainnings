#include<iostream>
#include<vector>
#define MAXN 1999
#define MAXP 1999
#define MOD 1020847
using namespace std;

struct Long {
    vector <int> digit;
};

Long Hedge[MAXN][MAXP];
Long SumLongNum(Long a,Long b){
    int I=0;
    if(a.digit.size() > b.digit.size())
    {
        for(int i=0;i<a.digit.size()-b.digit.size();i++)
            b.digit.push_back(0);
    }
    else if(b.digit.size() > a.digit.size())
    {
        for(int i=0;i<b.digit.size()-a.digit.size();i++)
            a.digit.push_back(0);
    }
    Long c;
    for(int i=a.digit.size()-1;i>=0;i--){
        int k = a.digit[i]-'0' + b.digit[i]-'0';
        if(k>=10){
            I=k/10;
            k=k%10;
        }
        c.digit[i]='0'+k+I;
        I=0;
    }
    return c;
}

Long Multipl(Long a, int k){

    int brDig;
    if(k > 999)brDig = 4;
    else if(k > 99)brDig = 3;
    else  if(k > 9)brDig = 2;
    else brDig = 1;
    int I=0;
    Long c,ans;
    for(int i=1;i<=brDig;i++)
    {
        int F;
        if(i == 1 && brDig == 4)F=k%10;
        if(i == 1 && brDig == 3)F=k%10;
        if(i == 1 && brDig == 2)F=k%10;
        if(i == 1 && brDig == 1)F=k;
        if(i == 2)F=(k%100)/10;
        if(i == 3)F=(k%1000)/100;
        if(i == 4)F=k/1000;
        for(int j=a.digit.size()-1;j>=0;j++){
            int D = a.digit[i]-'0' * F;
            if(D>=10){
                I=D/10;
                D=D%10;
            }
            c.digit[i]='0'+D+I;
            I=0;
        }
        ans = SumLongNum(ans,c);
    }
    return ans;
}

Long Del(Long a,int k){

}

Long Solve(int N,int P){
    if(Hedge[N][P])return Hedge[N][P];

    if(N == 1 && P == 1){Hedge[N][P] = 1;return Hedge[N][P];}
    if(P>N || N<2 || P<1)return 0;
    if(N == P){return Hedge[N][P];}
    if(P == 1){return Hedge[N][P];}
   // Hedge[N][P] = P*Solve(N-1,P) + (N-(P-1))*Solve(N-1,P-1);
    Hedge[N][P] = SumLongNum((Multipl(Solve(N-1,P),P),Multipl(Solve(N-1,P-1),N-P+1));
    return Hedge[N][P];
}

int main()
{
    long long n,p;
    cin>>n>>p;
    /*Hedge[1][1] = 1;
    for(int i=1;i<=n;i++){
        Hedge[i][i] = 1;
    }*/

    Hedge[n][p] = Solve(n,p);
    /*for(int i = 2; i <= n; i++){
        for(int j = 1; j < i; j++){
            if(i == j)continue;
            Hedge[i][j] = j*Hedge[i-1][j] + (i-(j-1))*Hedge[i-1][j-1];
        }
    }*/
    /*for(int i = 0; i <= n; i++){
        for(int j = 0; j <= i; j++){
            cout<<"N="<<i<<" M="<<j<<" :"<<endl;
            cout<<Hedge[i][j]<<endl;
        }
    }*/
    cout<<Hedge[n][p]%MOD<<endl;
    return 0;
}

