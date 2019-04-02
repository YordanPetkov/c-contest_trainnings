#include<iostream>
#define MAXN 1001
using namespace std;

int n,k,P[MAXN],Population[MAXN],HM[MAXN][MAXN];

int Human_Minutes(int i,int j){
    if(HM[i][j] != 0)return HM[i][j];
    if(i == j || i == j-1){HM[i][j] = 0;return 0;}
    //if(!(i <= j+1)){HM[i][j] = 0;return 0;}
    HM[i][j] = Human_Minutes(i+1,j-1) + Population[j-1] - Population[i];
    return HM[i][j];

}

int Answers[MAXN][MAXN][2];

int Solve(int i, int Stations){
    if(Answers[i][Stations][1] != 0)return Answers[i][Stations][1];
    if(i >= n)return 0;
    if(Stations == 0){Answers[i][Stations][1] = Human_Minutes(i,n);Answers[i][Stations][0] = 0;return Human_Minutes(i,n);}
    int Min=-1,Minj;
    for(int j = i+1; j < n; j++){
        if(Min == -1)Min = Human_Minutes(i,j) + Solve(j,Stations-1);
        else if(Min > (Human_Minutes(i,j) + Solve(j,Stations-1)))
        {Min = Human_Minutes(i,j) + Solve(j,Stations-1);Answers[i][Stations][0] = j;}
        if(Answers[i+1][Stations-1][0] > 0 && Answers[i+1][Stations-1][0] <= j)break;
    }
    Answers[i][Stations][1] = Min;

    return Min;
}
int main()
{
    cin>>n>>k;

    for(int i = 1; i <= n; i++){
        cin>>P[i];
        Population[i]+=P[i]+Population[i-1];
        //for(int j = i ; j <= n ; j++)
        //Population[j]+=P[i];
    }
    /*for(int i = 1; i <= n; i++)
        for(int j = 1 ; j <= n-i ; j++){
        cout<<i<<" : "<<j<<" = "<<Solve(i,j)<<endl;
        }*/
        cout<<Solve(1,k-2)<<endl;
   /*for(int i = 1; i <= n; i++)
   cout<<Population[i]<<endl;
   for(int i = 1; i < n; i++)
        for(int j = i ; j <= n ; j++)
            cout<<i<<" "<<j<<" : "<<Human_Minutes(i,j)<<endl;*/
    return 0;
}
