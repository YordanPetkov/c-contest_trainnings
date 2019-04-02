#include<iostream>
using namespace std;
int br1[1000],br2[1000];
int main()
{
    int n;
    cin>>n;
    int a[n],maxa[n][3];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        br1[a[i]]++;
        maxa[i][0]=a[i];
        maxa[i][1]=br1[a[i]];

    }
    for(int i=0;i<n;i++)
    {
        maxa[i][2]=br1[a[i]]-maxa[i][1]+1;
    }
    int maxbr=0;
    int helpbr;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(maxa[i][0]!=maxa[j][0])
            {
                if(maxbr<maxa[i][1]+maxa[j][2])maxbr=maxa[i][1]+maxa[j][2];
                //cout<<i<<" "<<j<<" "<<maxa[i][0]<<" "<<maxa[i][1]<<" "<<maxa[j][0]<<" "<<maxa[j][2]<<"              "<<maxa[i][1]+maxa[j][2]<<endl;
            }
        }
    }
    cout<<n-maxbr<<endl;
    return 0;
}
