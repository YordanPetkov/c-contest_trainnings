#include<iostream>
#include<cmath>
using namespace std;

class Circle
{
    public:
        double x;
    double  y;
    double r;

    void show()
    {
        cout<<x<<" "<<y<<" "<<r<<endl;
    }
}c[30001];
bool CinCirc(int i,int j)
{
    if(c[i].r<c[j].r)return false;
    if(abs(sqrt(pow(abs(c[i].x-c[j].x),2)+pow(abs(c[i].y-c[j].y),2)))>c[i].r+c[j].r)return false;
    if(abs(sqrt(pow(abs(c[i].x-c[j].x),2)+pow(abs(c[i].y-c[j].y),2)))==c[i].r+c[j].r && (c[i].x!=c[j].x || c[i].y!=c[j].y))return false;
    return true;

}
int brC[30001];
int main()
{
    int n;

    cin>>n;

    for(int i=0;i<n;i++)
        cin>>c[i].x>>c[i].y>>c[i].r;
    for(int i=0;i<n;i++)
    {brC[i]++;

        for(int j=0;j<n;j++)
            if(i!=j && CinCirc(i,j)){brC[j]++;}//c[i].show();c[j].show();
    }

    int maxi=0;
    for(int i=0;i<n;i++)
        if(brC[i]>maxi)maxi=brC[i];
    cout<<maxi<<endl;
    return 0;
}
