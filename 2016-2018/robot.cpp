#include<iostream>
using namespace std;
//bool R[1002][1002],L[1002][1002],U[1002][1002],D[1002][1002];
char Table[1002][1002];
int Sum[100002][2];
int startI,startJ,br=0;
int main()
{
    int n,t;
    int Iu=-1,Id=1,Ir=0,Il=0,Ju=0,Jd=0,Jr=1,Jl=-1;
    cin>>n>>t;

    string s;
    char symbol;
    cin>>s;

    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= n;j++){
            cin>>Table[i][j];
            if(Table[i][j] == '@'){
                startI = i;
                startJ = j;
            }
            /*
            if(Table[i][j] == '#'){
                R[i][j] = false;
                L[i][j] = false;
                U[i][j] = false;
                D[i][j] = false;
            }

            if(Table[i][j] == '.' || Table[i][j] == '@'){
                if(Table[i+Iu][j+Ju] == '.' || Table[i+Iu][j+Ju] == '@'){
                    U[i][j] = true;
                    D[i+Iu][j+Ju] = true;
                }

                if(Table[i+Il][j+Jl] == '.' || Table[i+Il][j+Jl] == '@'){
                    L[i][j] = true;
                    R[i+Il][j+Jl] = true;
                }
            }
            */
        }

    }

    switch(s[0])
    {
    case 'R':
        Sum[0][1] += 1;
        break;
    case 'L':
        Sum[0][1] += -1;
        break;
    case 'U':
        Sum[0][0] += -1;
        break;
    case 'D':
        Sum[0][0] += +1;
        break;
    }
 //   cout<<Sum[0][0]<<" - "<<Sum[0][1]<<endl;

    for(int i = 1;i < t;i++){
            switch(s[i])
            {
            case 'R':
                Sum[i][1] = Sum[i-1][1]+1;
                Sum[i][0] = Sum[i-1][0];

                break;
            case 'L':
                Sum[i][1] = Sum[i-1][1]-1;
                Sum[i][0] = Sum[i-1][0];
                break;
            case 'U':
                Sum[i][0] = Sum[i-1][0]-1;
                Sum[i][1] = Sum[i-1][1];
                break;
            case 'D':
                Sum[i][0] = Sum[i-1][0]+1;
                Sum[i][1] = Sum[i-1][1];
                break;
            default:
                break;
            }
           // cout<<Sum[i][0]<<" - "<<Sum[i][1]<<endl;
    }

    for(int i=0;i<t;i++){
            int PrI;
            int PrJ;

            if(i==0){PrI=0;PrJ=0;}
            else {PrI=Sum[i-1][0];PrJ=Sum[i-1][1];}



        for(int j=i;j<t;j++){
            int CurI=startI+Sum[j][0]-PrI;
            int CurJ=startJ+Sum[j][1]-PrJ;
            //cout<<i<<" "<<j<<" "<<CurI<<" "<<CurJ;
            if(Table[CurI][CurJ] != '.' && Table[CurI][CurJ] != '@'){break;}
            else {
                br++;

            }
        }
    }
    cout<<br<<endl;

    /*
    cout<<"R:"<<endl;
    cout<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
                cout<<R[i][j]<< " ";
        }
        cout<<endl;
    }

    cout<<"L:"<<endl;
    cout<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
                cout<<L[i][j]<< " ";
        }
        cout<<endl;
    }
    cout<<"U:"<<endl;
    cout<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
                cout<<U[i][j]<< " ";
        }
        cout<<endl;
    }
    cout<<"D:"<<endl;
    cout<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
                cout<<D[i][j]<< " ";
        }
        cout<<endl;
    }
*/
return 0;

}
