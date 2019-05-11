#include<iostream>
using namespace std;
int main()
{
    int n,c1,c2,c3,a[501];
    cin>>n>>c1>>c2>>c3;
    if(c1>c2)swap(c1,c2);
    if(c2>c3)swap(c2,c3);
    if(c1>c3)swap(c1,c3);
    if(c1>c2)swap(c1,c2);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        
        if(a[i]>c1 && a[i]>c2)
        {
            c3-=a[i];
            a[i]=0;
        }
    }
}