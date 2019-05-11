#include<iostream>
#include<stack>
using namespace std;
struct Stack
{
    stack<int> s;

}STACK[100000];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        char a;
        cin>>a;
        if(a=='A')
        {
            int x,y,k;
            cin>>x>>y>>k;
            for(int j=x;j<=y;j++)
            {
                STACK[j].s.push(k);
            }
        }
        if(a=='R')
        {
            int x;
            cin>>x;
            STACK[x].s.pop();
        }
        if(a=='G')
        {
            int x;
            cin>>x;
            if(STACK[x].s.empty())cout<<-1<<endl;
            else cout<<STACK[x].s.top()<<endl;
        }
    }
    return 0;

}
