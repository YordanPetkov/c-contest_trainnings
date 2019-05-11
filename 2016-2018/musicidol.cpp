#include<iostream>
#include<algorithm>
using namespace std;
pair<double,string> man[100001];

vector<double> man;
vector<string> manN;
int main()
{
    int n,m,k,Pos=0,brMans=0;
    
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cin>>m;
        
        for(int j=0;j<m;j++)
        {
            cin>>man[brMans].second>>man[brMans].first;
            brMans++;
        }
        cin>>k;
        if(k==0)continue;
       for(int i=0; i<brMans; ++i)
        for(int j=brMans-1; j>i; --j)
                {
                    if(man[j-1].first>=man[j].first)swap(man[j-1],man[j]);
                }
            //for(int i=0; i<brMans; ++i)
            //cout<<man[i].first<<" "<<man[i].second<<endl;
        for(int ij=brMans-1;ij>brMans-k-1;ij--)
        man[ij].first=0;
        Pos+=k;
    }
           for(int i=0; i<brMans; ++i)
        for(int j=brMans-1; j>i; --j)
                {
                    if(man[j-1].first>man[j].first)swap(man[j-1],man[j]);
                }
                
    
    cout<<man[Pos].second<<endl;
    
    return 0;
    
}