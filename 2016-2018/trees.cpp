#include<iostream>
#include<cmath>
#include<stack>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

int n,used[101],br=0;
pair<int,int> elnivo[30001];
vector<int>a[30001];
void dfs(int k,int br)
{
  for(int i=0; i<a[k].size(); i++)
  {
    if(used[a[k][i]]) continue;
    used[a[k][i]]=1;
    dfs(a[k][i],br+1);
  }
    elnivo[k].first=br;
    elnivo[k].second=k;
}
int main()
{
    int m,parent[30001],brCanCut;
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
        a[i].push_back(parent[i]);
        a[parent[i]].push_back(i);
    }
    for (int i=0; i<n; i++)   sort(a[i].begin(),a[i].end());
    used[0]=1;
    dfs(0,0);
    int Nivo=0;

    for(int i=1;i<=m;i++)
    {
        int h;
        cin>>h;
        while(h!=0)
        {
            Cut[h]=false;
            h=parent[h];
            //Nivo++;
        }
        //elnivo[i].first=Nivo;
      //  elnivo[i].second=i;
    }
    sort(elnivo+1,elnivo+n+1);
    for(int i=1;i<=n;i++)
        if(Cut[i]==false)brCanCut--;
    brCut=ceil(k/100*n);

    if(brCut>brCanCut){cout<<brCanCut<<endl;return 0;}
    if(brCut==0){cout<<0<<endl;return 0;}
    int j=brCut;
    stack<int> q;
    for(int i=n;i>=0,j>0;i--)
    {
        if(Cut[elnivo[i].second]==true){q.push(elnivo[i].second);j--;}
    }
    int elq[int(brCut)],i=0;
    while(!q.empty())
    {
        elq[i]=q.top();
        q.pop();
        i++;
    }
    sort(elq,elq+int(brCut));
    for(int i=0;i<brCut-1;i++)
        cout<<elq[i]<<" ";
    cout<<elq[int(brCut)-1]<<endl;
    cout<<endl;
    return 0;
}
