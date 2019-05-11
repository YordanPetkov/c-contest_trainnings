#include<iostream>
#include<utility>
using namespace std;
int n,S,ans=0;
pair<int,int> bar[201];
bool BrF(int k)
{
    if(k==n-1)
    {
        if(S<=bar[k].second && S>=bar[k].first)return 1;
        else return 0;
    }
    else
    {
        for(int i=bar[k].first;i<=bar[k].second;i++)
        {
            if(i>S)return 0;
            else
            {
                S-=i;
               ans+=BrF(k+1);
                S+=i;
            }
        }
    }
    return 0;
}
int main()
{
    cin>>n>>S;
    for(int i=0;i<n;i++)
    {
        cin>>bar[i].first>>bar[i].second;
    }
    BrF(0);
    cout<<ans<<endl;
}