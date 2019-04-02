#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s,s1,ss="",s1s1="";
    cin>>ss>>s1s1;
    int n=s.size(),br=0;

    /*for(int i=0;i<n;i++)
    {

        if(s[i]!=s1[i])
        {
            ss+=s[i];
            s1s1+=s1[i];
        }

    }*/
    for(int i=0;ss.size()!=0;i++)
    {
        if(ss==s1s1)break;
        if(ss[i]==s1s1[i]){goto end;}
        for(int j=0;j<s1s1.size();j++)
        {
            if(i==j)continue;
            if(s1s1[j]==ss[j])continue;
            if(ss[i]==s1s1[j]){swap(s1s1[i],s1s1[j]);br+=max(j,i)-min(i,j);}
           // cout<<i<<" "<<j<<endl;
           // cout<<ss<<" "<<s1s1<<endl;
            
        }
        end:
        if(i==ss.size()-2)i=0;
    }
    //cout<<ss<<endl;
   // cout<<s1s1<<endl;
    cout<<br<<endl;
    return 0;
}