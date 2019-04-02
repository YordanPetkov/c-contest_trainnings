#include<iostream>
#include<algorithm>
using namespace std;
struct Idol
{
        string Name;
        float Bal;
        int pos;
};
vector<Idol> man;
void SortIdol()
{
    for(int i=)
}
bool acompare(Idol lhs, Idol rhs)
{ return lhs.Bal <= rhs.Bal; }
int main()
{
    int n,m,k,Pos=0,brMans=0;
    
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cin>>m;
        
        for(int j=0;j<m;j++)
        {
            Idol pr;
            cin>>pr.Name>>pr.Bal;
            brMans++;
            pr.pos=brMans;
            man.push_back(pr);
        }
        cin>>k;
        
        sort(man,man+brMans,acompare);
        /*for(int ii=brMans+1; ii>1; ii--)
        for(int jj=1; jj<ii-1; jj++)
            if(man[jj].Bal <= man[jj+1].Bal)
            {
                //cout<<man[j].Name<< " "<<man[j+1].Name<<endl;
                swap(man[jj],man[jj+1]);
                //cout<<man[j].Name<< " "<<man[j+1].Name<<endl;
            }
            */
            /*for(int i=brMans; i>0; i--)
    cout<<man[i].Name<<" "<<man[i].Bal<<endl;*/
        for(int ij=brMans-1;ij>brMans-k-1;ij--)
        man[ij].Bal=0;
        Pos+=k;
    }
    sort(man,man+brMans,acompare);
    /*for(int i=brMans+1; i>1; i--)
        for(int j=1; j<i-1; j++)
            if(man[j].Bal < man[j+1].Bal)
            {
                //cout<<man[j].Name<< " "<<man[j+1].Name<<endl;
                swap(man[j],man[j+1]);
                //cout<<man[j].Name<< " "<<man[j+1].Name<<endl;
            }*/
   /* for(int i=brMans; i>0; i--)
    cout<<man[i].Name<<" "<<man[i].Bal<<endl;*/
    cout<<man[Pos+1].Name<<endl;
    
    return 0;
    
}