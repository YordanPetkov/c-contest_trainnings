#include<iostream>
using namespace std;
class Line
{
    public:
    int brP;
    int point[51];
};
int main()
{
    Line l[51];
    int n,m,br=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>m;
        l[i].brP=m;
        for(int j=1;j<=m;j++)
        {
            cin>>l[i].point[j];
        }
    }
    bool ij=false,ik=false,jk=false;
    for(int i=1;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<=n;k++)
            {
                //cout<<br<<endl;
                ij=false;ik=false;jk=false;
                int hi=l[i].brP,hj=l[j].brP,hk=l[k].brP;
                for(int ii=1;ii<=hi;ii++)
                    for(int jj=1;jj<=hj;jj++)
                        for(int kk=1;kk<=hk;kk++)
                        {
                            
                            int hhi=l[i].point[ii],hhj=l[j].point[jj],hhk=l[k].point[kk];
                            
                            if(hhi==hhk && hhi==hhj && hhj==hhk)br--;
                            if(hhi==hhj){ij=true;}//cout<<hhi<<" ijk ->"<<i<<" "<<j<<" "<<k<<" -> ij"<<" BOOL :"<<ij<<ik<<jk<<endl;}
                            
                            else if(hhi==hhk){ik=true;}//cout<<hhi<<" ijk ->"<<i<<" "<<j<<" "<<k<<" -> ik"<<" BOOL :"<<ij<<ik<<jk<<endl;}
                            
                            else if(hhj==hhk){jk=true;}//cout<<hhj<<" ijk ->"<<i<<" "<<j<<" "<<k<<" -> jk"<<" BOOL :"<<ij<<ik<<jk<<endl;}
                            //if(ij==true && ik==true && jk==true)goto next;
                            //if(ij==true && ik==true && jk==true)cout<<"BLA5"<<endl;
                        }
                    //next:
                   if(ij==true && ik==true && jk==true)
                {br++;
                
                } ij=false;ik=false;jk=false;
                
                
            }
        }
    }
    cout<<br<<endl;
    return 0;
}