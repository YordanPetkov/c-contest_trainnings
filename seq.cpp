#include<iostream>
using namespace std;

bool ans(int* arr,int Size);
bool vhod(int m)
{ bool flag=true;
    int a[m],maxi=0,maxa=0;
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
        if(a[i]>maxa)
            {flag=true;
                maxa=a[i];maxi=i;

            }
        if(i-maxi>1)
        {
            if(a[i-1]>=a[i])flag=false;
        }

    }
    if(flag==false)return false;

    int *p =&a[0];
    return ans(p,maxi);


}

bool ans(int* arr,int Size)
{
    if(Size==1)
    {
        return true;
    }
    bool flag=true;
    int maxi=0,maxa=0;
    for(int i=0;i<Size;i++)
    {
        if(arr[i]>=maxa){flag=true;maxa=arr[i],maxi=i;}
        if(i-maxi>1)
        {
            if(arr[i-1]>=arr[i])flag=false;
        }
    }
    bool fl2=true;
    if(flag==false)return false;
    for(int i=0;i<maxi;i++)
    {
       if(arr[i]>=arr[i+1])fl2=false;
    }
    if(fl2)return true;
    int *p=&arr[0];
    return ans(p,maxi);
}
int main()
{
    int n,m;
    string s="";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>m;
        if(vhod(m))s+='1';
        else s+='0';
    }
    cout<<s<<endl;
    return 0;
}
