#include<iostream>
#define MAXN 1999
#define MAXP 1999
using namespace std;

long long Hedge[MAXN][MAXP];
int main()
{
    long long n,p;
    cin>>n>>p;
    Hedge[1][1] = 1;
    for(int i=1;i<=n;i++){
        Hedge[i][i] = 1;
    }

    for(int i = 2; i <= n; i++){
        for(int j = 1; j < i; j++){
            if(i == j)continue;
            Hedge[i][j] = j*Hedge[i-1][j] + (i-(j-1))*Hedge[i-1][j-1];
        }
    }
    /*for(int i = 0; i <= n; i++){
        for(int j = 0; j <= i; j++){
            cout<<"N="<<i<<" M="<<j<<" :"<<endl;
            cout<<Hedge[i][j]<<endl;
        }
    }*/
    cout<<Hedge[n][p] % 1020847<<endl;
    return 0;
}
