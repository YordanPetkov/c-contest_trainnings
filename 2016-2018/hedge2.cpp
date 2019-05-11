#include<iostream>
#define MAXN 1999
#define MAXP 1999
using namespace std;

long long Hedge[MAXN][MAXP];

long long Solve(int N,int P){
    if(Hedge[N][P] != 0)return Hedge[N][P];
    if(N == P){Hedge[N][P] = 1;return Hedge[N][P];}
    if(P == 1){Hedge[N][P] = 1;return Hedge[N][P];}
    Hedge[N][P] = P*Solve(N-1,P) + (N-(P-1))*Solve(N-1,P-1);
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
    cout<<Hedge[n][p] % 1020847<<endl;
    return 0;
}
