#include<iostream>
using namespace std;
class Melody
{
    public:
    int br=0,a[1000];
    int lastEl=-1;
    int firstEl=-1;

};
int main()
{
    Melody m[128];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        m[k].br++;
        m[k].a[br-1]=i;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m[i].br;j++)
        {
            if(m[i].a[j]==i)
        }
    }
    cout<<n-maxe<<endl;
    return 0;

}
