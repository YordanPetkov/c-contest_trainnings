#include<iostream>
#include<set>
using namespace std;
int a[1000][1000];
set <int> ch[1000];
int n,m,k,min1=201,max1=0,X,Y;
bool used[1000];
void way(int x,int y)
{
    used[x]=true;
    for(int i=0;i<n;i++)
    {
        if(a[x][i]!=0 && used[i]==false)
        {
            if(i==y)
            {
               // cout<<"AAAAAAAAAAAAAAAA"<<endl;
                //cout<<"min1="<<min1<<"  a["<<x<<"]["<<i<<"]="<<a[x][i]<<endl;
               // cout<<"a["<<X<<"]["<<Y<<"]="<<a[X][Y]<<endl;
                if(a[x][i]<min1)min1=a[x][i];
                if(min1>a[X][Y])a[X][Y]=min1;
                //cout<<endl;cout<<"NAPRAVENA E RAZMQNA -> if(a[x][i]<min1)min1=a[x][i]; i if(min1>a[X][Y])a[X][Y]=min1;"<<endl;
                //cout<<"min1="<<min1<<"  a["<<x<<"]["<<i<<"]="<<a[x][i]<<endl;
                //cout<<"a["<<X<<"]["<<Y<<"]="<<a[X][Y]<<endl;
                min1=201;
                //cout<<"BBBBBBBBBBBBBBBBBBBB"<<endl;
                
            }
            else{
            used[i]=true;
            int OF=min1;
            if(a[x][i]<min1){min1=a[x][i];}
             way(i,y);
             min1=OF;
             used[i]=false;
                }
        }
    }
    return;
}
int main()
{
    
    cin>>n>>m>>k;
    for(int i=0;i<m;i++)
    {
        int l,r;
        cin>>l>>r;
        cin>>a[l-1][r-1];
        a[r-1][l-1]=a[l-1][r-1];
        
    }
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<n;j++)used[i]=false;
        /*for(int I=0;I<n;I++){
            for(int J=0;J<n;J++)
            {
                cout<<a[I][J];
            }cout<<endl;}
            cout<<endl;
            cout<<endl;*/
        cin>>X>>Y;
        X=X-1;
        Y=Y-1;
            
        way(X,Y);
       
             /*for(int I=0;I<n;I++){
            for(int J=0;J<n;J++)
            {
                cout<<a[I][J];
            }cout<<endl;}cout<<endl;*/
        cout<<a[X][Y]<<endl; 
    }
    return 0;
    
}