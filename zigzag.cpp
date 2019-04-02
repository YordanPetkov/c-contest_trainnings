#include<iostream>
using namespace std;
int a[102][102];
int main()
{
    int n,k;
    int cI=1,cJ=1;
    
    cin>>n>>k;
    int a[n+2][n+2];
    a[1][1]=1;
    if(k==1)
    {
        cout<<1<<" "<<1<<endl;
    }
    for(int i=0;i<=n+1;i++)
    {
        for(int j=0;j<=n+1;j++)
        {
            if(i==1 && j==1)a[i][j]=1;
            else if(i==0 || j==0 || i==n+1 || j==n+1)
            a[i][j]=-1;
            else 
            a[i][j]=0;
        }
    }
       /* for(int i=0;i<=n+1;i++){
        for(int j=0;j<=n+1;j++)
        cout<<a[i][j]<<" ";
        cout<<endl;
        }*/
    for(int i=2;i<=n*n;i++)
    {
        
        if(a[cI-1][cJ+1]==0)
        {
            a[cI-1][cJ+1]=i;
            cI=cI-1;
            cJ=cJ+1;
            if(k==i){cout<<cI<<" "<<cJ<<endl;return 0;}
        }
        else if(a[cI+1][cJ-1]==0)
        {
            a[cI+1][cJ-1]=i;
            cI=cI+1;
            cJ=cJ-1;
            if(k==i){cout<<cI<<" "<<cJ<<endl;return 0;}
            
        }
        else
        {
            if(cI==1 && a[cI][cJ+1]==0)
            {
                cI=cI;
                cJ=cJ+1;
                a[cI][cJ]=i;
                if(k==i){cout<<cI<<" "<<cJ<<endl;return 0;}
            }
            else if(cJ==1 && a[cI+1][cJ]==0)
            {
                cI=cI+1;
                cJ=cJ;
                a[cI][cJ]=i;
                if(k==i){cout<<cI<<" "<<cJ<<endl;return 0;}
                
            }
            else if(a[cI+1][cJ]==0)
            {
                cI=cI+1;
                cJ=cJ;
                a[cI][cJ]=i;
                if(k==i){cout<<cI<<" "<<cJ<<endl;return 0;}
            }
            else if(a[cI][cJ+1]==0)
            {
                cI=cI;
                cJ=cJ+1;
                a[cI][cJ]=i;
                if(k==i){cout<<cI<<" "<<cJ<<endl;return 0;}
            }
                
        }
    }
    
    /*start: 
        for(int i=0;i<=n+1;i++){
        for(int j=0;j<=n+1;j++)
        cout<<a[i][j]<<" ";
        cout<<endl;
        }*/
    return 0;
}