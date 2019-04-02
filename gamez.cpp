#include<iostream>
#include<cmath>
using namespace std;
int table[502][502];

void SetTable()
{
    for(int i=1;i<=500;i++)
    {
        for(int j=1;j<=500;j++)
        {
            int Si = sqrt(i);

            int Sj = sqrt(j);

            bool flag = false;
            if(i==1 && j==1){table[i][j]=0;continue;}
            if(i==1 && j==2){table[i][j]=1;continue;}
            if(i==2 && j==1){table[i][j]=1;continue;}
            for(int k = 1;k <= Si;k++)
            {
                if(i-k*k < 1)break;
                //cout<<i<<":"<<j<<" "<<i-k*k<<":"<<j<<table[i-k*k][j]<<endl;

                if(table[i-k*k][j] == 0){table[i][j]=1;flag=true;break;}
            }
            if(flag == true)continue;

            for(int k = 1;k <= Sj;k++)
            {
                if(j-k*k < 1)break;
                //cout<<j<<"=j k="<<k<<" k*k="<<k*k<<" j-k*k"<<j-k*k<<endl;
                //cout<<i<<" "<<j<<" "<<i<<":"<<j-k*k<<" "<<table[i][j-k*k]<<endl;
                if(table[i][j-k*k] == 0){table[i][j]=1;flag=true;break;}
            }
        }
    }
}

void PrintTable()
{
    for(int i=1;i<=30;i++){
        for(int j=1;j<=30;j++){
            cout<<table[i][j]<<" ";
        }
    cout<<endl;
    }
}
int main()
{
    int i1,j1,i2,j2;
    cin>>i1>>j1>>i2>>j2;
    int br=0;
    SetTable();
    //PrintTable();
    for(int i=i1+1 ; i<i2 ; i++)
        for(int j=j1+1 ; j<j2 ; j++)
            if(table[i][j]==1){br++;}
    cout<<br<<endl;
    return 0;
}


