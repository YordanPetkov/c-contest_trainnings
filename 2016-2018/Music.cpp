#include<iostream>
#include<algorithm>
using namespace std;
struct Idol
{
    public:
    int pos;
    string Name;
    double Bal;
};


bool SortByBal(Idol struct1,Idol struct2){
if(struct1.Bal < struct2.Bal)return true;
        if(struct1.Bal == struct2.Bal && struct1.pos > struct2.pos)return true;
        return false;
}
int main()
{
    int n,m,k,Pos=0,brMans=0;
    vector <Idol> man;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cin>>m;
        
        for(int j=0;j<m;j++)
        {
            Idol P;
            cin>>P.Name>>P.Bal;
            P.pos=brMans;
            brMans++;
            man.push_back(P);
        }
        cin>>k;
        sort(man.begin(), man.end(), SortByBal);            //for(int i=0; i<brMans; ++i)
            //cout<<man[i].first<<" "<<man[i].second<<endl;
       for(int i=0;i<k;i++)
       man.pop_back();
    }
           
                
    
    cout<<man[man.size()-1].Name<<endl;
    
    return 0;
    
}