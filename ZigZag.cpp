 #include<iostream>
using namespace std;
int main()
{
    int n,k,x,y,h=1,s=0;
    cin>>n>>k;
    if(n%2==0){ /// четно
        if(k<=(n*n-n)/2)  /// под диагонала
        {
            for(int i=n-1;i>=1;i--)
            {s+=i;
                if((n*n-n)/2-s<k)
                {
                    if(i%2==0)
                    {
                        x=k-((n*n-n)/2-s);
                        y=(i-x)+1;
                        cout<<x<<" "<<y<<endl;
                        return 0;
                    }
                    else 
                    {
                        y=k-((n*n-n)/2-s);
                        x=(i-y)+1;
                        cout<<x<<" "<<y<<endl;
                        return 0;
                    }
                }
            }
        }
        if((n*n-n)/2<k && k<=(n*n-n)/2+n) /// на диагонала
        {
            x=k-(n*n-n)/2;
            y=(n-x)+1;
            cout<<x<<" "<<y<<endl;
            return 0;
        }
        if(k>(n*n-n)/2+n) /// над диагонала
        {
            for(int i=n-1;i>=1;i--)
            {s+=i;
                if((n*n+n)/2+n+s+1>k)
                {
                    if(i%2==0)
                    {
                        x=n-((n*n+n)/2+s+1)-k+1;
                        y=(n-x)+(n-i)+1;
                        cout<<x<<" "<<y<<endl;
                        return 0;
                    }
                    else 
                    {
                        y=n-((n*n+n)/2+s+1)-k+1;
                        x=(n-y)+(n-i)+1;
                        cout<<x<<" "<<y<<endl;
                        return 0;
                    }
                }
            }
        }
    }

    if(n%2!=0){ /// нечетно
        if(k<=(n*n-n)/2)  /// под диагонала
        {
            for(int i=n-1;i>=1;i--)
            {s=s+i;
                if((n*n-n)/2-s<k)
                {
                    if(i%2!=0)
                    {
                        x=k-((n*n-n)/2-s);
                        y=(i-x)+1;
                        cout<<x<<" "<<y<<endl;
                        return 0;
                    }
                    else 
                    {
                        y=k-((n*n-n)/2-s);
                        x=(i-y)+1;
                        cout<<x<<" "<<y<<endl;
                        return 0;
                    }
                }
            }
        }
        if((n*n-n)/2<k && k<=(n*n-n)/2+n) /// на диагонала
        {
            x=k-(n*n-n)/2;
            y=(n-x)+1;
            cout<<x<<" "<<y<<endl;
            return 0;
        }
        if(k>(n*n-n)/2+n) /// над диагонала
        {
            for(int i=n-1;i>=1;i--)
            {s+=i;
                if((n*n+n)/2+n+s+1>k)
                {
                    if(i%2!=0)
                    {
                        y=n-((n*n+n)/2+n+s+1)-k+1;
                        x=(n-y)+(n-i)+1;
                        cout<<x<<" "<<y<<endl;
                        return 0;
                    }
                    else 
                    {
                        x=n-((n*n+n)/2+n+s+1)-k+1;
                        y=(n-x)+(n-i)+1;
                        cout<<x<<" "<<y<<endl;
                        return 0;
                    }
                }
            }
        }
        }
    return 0;
} 