#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <cstdio>
#include <cmath>
#include <map>
using namespace std;
map<int ,int> used;
int bg[100001], end[100001], pt[200002], ots[200002];
int bins(int x,int n,int a[])
{
    int l=0,r=n-1,mid=0;
    while(l<r)
    {
               mid=(l+r)/2;
               if(x==a[mid]) return mid;
               if(x==a[l]) return l;
               if(x==a[r]) return r;
               if(x>a[mid]) l=mid;
               if(x<a[mid]) r=mid;
    }
}               
int main()
{
    int n,m=0,j=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
            cin >> bg[i] >> end[i];
            if(!used[bg[i]]){ pt[m]=bg[i]; m++; used[bg[i]]=1;} 
            if(!used[end[i]]){pt[m]=end[i]; m++; used[end[i]]=1;}
    }
    sort(pt, pt+m);
    int k,l,mx=0;
    //cout << m << endl;
    //for(int i=0; i<m; i++)
    //cout << pt[i] << ' ';
    //cout << endl;
    
    for(int i=0; i<n; i++)
    {
          k=bins(end[i],m,pt);
          l=bins(bg[i],m,pt);
          /*cout << k << ' ' << l << endl;
          system("pause");*/
          for(int t=l; t<k; t++)
          {       
                   ots[t]++;
                  mx=max(mx,ots[t]);
          } 
    }
    int res=0;
    for(int i=0; i<m-1; i++)
    {
            if(ots[i]==mx && ots[i+1]==mx) res=res+(pt[i+1]-pt[i]);
            else if(ots[i]==mx) res=res+(pt[i+1]-pt[i])+1;
    } 
    cout << res << endl;
    return 0;
}
    
