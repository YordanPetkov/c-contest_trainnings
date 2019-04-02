#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
int Sum[1001];
int main()
{
    int n,m,t;
    bool flag;
    cin>>n>>m;
    set<int> a[n];
    bool eq[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        {
            cin>>t;
            Sum[i]+=t;
            a[i].insert(t);
        }
        eq[i]=false;
    }
    if(n==0 || m==0){cout<<0<<endl;return 0;}
    set<int>::iterator k;
    set<int>::iterator l;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            flag=false;
            if(i==j || eq[j]==true || eq[i]==true || Sum[i]!=Sum[j])continue;
            for( k=a[i].begin(),l=a[j].begin();k!=a[i].end(),l!=a[j].end();k++,l++)
            {
                //cout<<i<<" "<<j<<endl;
                //cout<<*k<<" "<<*l<<endl;
                
                if(*k!=*l){flag=true;break;}
                
            }
            
            if(!flag)eq[j]=true;
            
        }
    }
    /*set<int>::iterator j;
    for(int i=0;i<n;i++){
        for( j=a[i].begin();j!=a[i].end();j++)
        cout<<*j<<" ";
        cout<<endl;}*/
        
        int BR=0;
        for(int i=0;i<n;i++)
        if(eq[i]==false)BR++;
        cout<<BR<<endl;
    
    return 0;
}