#include<iostream>
using namespace std;
long long Solve(int n , int m , int p){
    int ans = 0;
    if(p==0 || n+m==2)return 0;
    if(n==2 && m==2 && p==1)return 1;
    if(n+m == 3 && p==1)return 1;
    if(n>1)ans+=Solve(n-1 , m , p-1);
    if(m>1)ans+=Solve(n , m-1 , p-1);
    if(m>1 && n>1)ans+=Solve(n-1 , m-1 , p-1);
    return ans;
}
int main()
{
    int n,m,p;
    cin>>n>>m>>p;

    long long ans = Solve(n,m,p-1) % (2<<30);
    cout<<ans<<endl;
    return 0;
}
