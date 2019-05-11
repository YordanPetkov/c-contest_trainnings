#include<iostream>
#include <algorithm>
using namespace std;
struct point
{
    int x;
    int k;
};

bool SortPoints(point a,point b)
{ 
    if(a.x<b.x)return true;
    if(a.x>b.x)return false;
    if(a.k<b.k)return true;
    return false;
    
}
int main()
{
    int n,maxSP=0,curSP=0,sum=0;
    //int used=–(1000000001) ;
    int used;
    
    cin>>n;
    point Line[n*2];
    //bool used[n+n];
    for(int i=0;i<n*2;i=i+2)
    {
        cin>>Line[i].x;
        cin>>Line[i+1].x;
        Line[i].k=1;
        Line[i+1].k=-1;
    }
    sort(Line,Line+n*2,SortPoints);
    used = NULL;
    for(int i=0;i<n*2;i++)
    {
        curSP+=Line[i].k;
        if(maxSP<curSP) maxSP=curSP;
    }
    curSP=0;
    for(int i=0;i<n*2;i++)
    {
      curSP+=Line[i].k;
      if(maxSP==curSP)
      {
        sum=sum+Line[i+1].x-Line[i].x+1;
        //if(used[a[i].x]) sum--;
        if(used != NULL && used==Line[i].x) sum--;
        used=Line[i+1].x;
      }
    }
    cout<<sum<<endl;
    return 0;
}