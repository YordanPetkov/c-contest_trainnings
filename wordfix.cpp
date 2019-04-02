#include<iostream>
#include<vector>
using namespace std;
vector<int> RegPos[1000];
int pos[1000];
int main()
{
    string s,s1;
    cin>>s>>s1;
    int n=s.size(),sum=0;
    
    for(int i=0;i<n;i++)
    {
        RegPos[s1[i]-0].push_back(i);
       // cout<<s1[i]-0<<endl;
    }
    
    
    for(int i = 0; i < n; i++)
    {
        int j=s[i]-0;
     if(i > RegPos[j][pos[j]])sum += i - RegPos[j][pos[j]];
     pos[j]++;
    }
    
    /*for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(s[i]==s1[j] && s[j] != s1[j] && s[i]!=s1[i]){sum+=i-j;swap(s[i],s[j]);continue;}
           // cout<<i<<" "<<j<<" "<<s[i]<<" "<<s1[j]<<" "<<sum<<endl;
        }
    }*/
    cout<<sum<<endl;
}