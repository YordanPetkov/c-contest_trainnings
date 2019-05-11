#include<iostream>
using namespace std;
int main()
{
    string s,s1;
    cin>>s>>s1;
    int n=s.size(),sum=0;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(s[i]==s1[j] && s[j] != s1[j] && s[i]!=s1[i]){sum+=i-j;swap(s[i],s[j]);continue;}
           // cout<<i<<" "<<j<<" "<<s[i]<<" "<<s1[j]<<" "<<sum<<endl;
        }
    }
    cout<<sum<<endl;
}