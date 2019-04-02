#include<iostream>
#include<cmath>
#include<stack>
using namespace std;

int main()
{
    int n,m,parent[30001],brCanCut;
    double brCut,k;
    bool Cut[30001];
    Cut[0]=true;
    cin>>n>>m>>k;
    brCanCut=n;
    if(n==0){cout<<0<<endl;return 0;}
    for(int i=1;i<=n;i++)
    {
        cin>>parent[i];
        Cut[i]=true;
    }
    for(int i=1;i<=m;i++)
    {
        int h;
        cin>>h; 
        while(h!=0)
        {
            Cut[h]=false;
            h=parent[h];
        }
    }
    for(int i=1;i<=n;i++)
        if(Cut[i]==false)brCanCut--;
    brCut=ceil(k/100*n);
    if(brCut>brCanCut){cout<<brCanCut<<endl;return 0;}
    if(brCut==0){cout<<0<<endl;return 0;}
    int j=brCut;
    stack<int> q;
    for(int i=n;i>=1,j>0;i--)
    {
        if(Cut[i]==true){q.push(i);j--;}
    }
    while(!q.empty())
    {
        cout<<q.top();
        q.pop();
        if(!q.empty())cout<<" ";
    }
    cout<<endl;
    
    return 0;
}