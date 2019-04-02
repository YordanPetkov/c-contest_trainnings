#include<iostream>
using namespace std;
int main()
{
    int n,m,Curbr=0,La=0,Curi,minBr;
    bool CAN=true;
    cin>>n>>m;
    minBr=n*m;
    for(int i=1;i<=n;i++)
    {
        int j;
        cin>>j;
        Curi++;

        if(j>m ){CAN=false;}
        if(Curi==m && CAN)
        {
            if(Curbr<minBr)Curbr=minBr;
            Curbr-=La;
            Curbr-=m-1;
            La=0;
            Curi=0;
        }
        if(Curi<m && CAN)
        {
            Curbr+=Curi-j;
        }
        if(Curi==1)La=Curbr;
    }
    if(CAN)cout<<minBr<<endl;
    //if(br==m)cout<<0<<endl;
    else cout<<-1<<endl;
    return 0;
}
