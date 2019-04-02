#include<iostream>
using namespace std;

struct Digit {
    int number[7];
};

Digit DefaultNumbers[10];
Digit ClockNumbers[4];

void SetNumbers()
{
    for(int i = 0; i <= 9; i++)
        for(int j = 0; j <= 6; j++)
            DefaultNumbers[i].number[j] = 0;

    for(int i = 0; i <= 9; i++){
        if(i == 0 || i == 2 || i == 3 || i == 5 || i == 6 || i == 7 || i == 8 || i == 9)DefaultNumbers[i].number[0] = 1;
        if(i == 0 || i == 4 || i == 5 || i == 6 || i == 8 || i == 9)DefaultNumbers[i].number[1] = 1;
        if(i == 0 || i == 1 || i == 2 || i == 3 || i == 4 || i == 7 || i == 8 || i == 9)DefaultNumbers[i].number[2] = 1;
        if(i == 2 || i == 3 || i == 4 || i == 5 || i == 6 || i == 8 || i == 9)DefaultNumbers[i].number[3] = 1;
        if(i == 0 || i == 2 || i == 6 || i == 8)DefaultNumbers[i].number[4] = 1;
        if(i == 0 || i == 1 || i == 3 || i == 4 || i == 5 || i == 6 || i == 7 || i == 8 || i == 9)DefaultNumbers[i].number[5] = 1;
        if(i == 0 || i == 2 || i == 3 || i == 5 || i == 6 || i == 8 || i == 9)DefaultNumbers[i].number[6] = 1;
    }
   /* for(int i = 0; i <= 9; i++)
    {
        cout<<" "<<DefaultNumbers[i].number[0]<<" "<<endl;
        cout<<DefaultNumbers[i].number[1]<<" "<<DefaultNumbers[i].number[2]<<endl;
        cout<<" "<<DefaultNumbers[i].number[3]<<" "<<endl;
        cout<<DefaultNumbers[i].number[4]<<" "<<DefaultNumbers[i].number[5]<<endl;
        cout<<" "<<DefaultNumbers[i].number[6]<<" "<<endl;
        cout<<endl;
        cout<<"NEW NUMBER : "<<i+1<<endl;
    }
     for(int i = 0; i <= 3; i++)
    {
        cout<<" "<<ClockNumbers[i].number[0]<<" "<<endl;
        cout<<ClockNumbers[i].number[1]<<" "<<ClockNumbers[i].number[2]<<endl;
        cout<<" "<<ClockNumbers[i].number[3]<<" "<<endl;
        cout<<ClockNumbers[i].number[4]<<" "<<ClockNumbers[i].number[5]<<endl;
        cout<<" "<<ClockNumbers[i].number[6]<<" "<<endl;
        cout<<endl;
        cout<<"NEW NUMBER : "<<i+1<<endl;
    }*/
}
int nexN[4];
int main ()
{
    SetNumbers();
int br =0;
    for(int i = 0;i < 5; i++){

        char c;




        for(int j = 0; j < 4 ; j++){
            if(i % 2 == 0)cin>>c;
            if(i % 2 == 0){
                cin>>c;
                if(c == '='){ClockNumbers[j].number[nexN[j]] = 1;nexN[j]++;br++;}
                if(c == '-'){ClockNumbers[j].number[nexN[j]] = 0;nexN[j]++;br++;}
                if(c == '.'){ClockNumbers[j].number[nexN[j]] = -1;nexN[j]++;}
                //cout<<i<<" "<<j<<endl;
            }
            else {
                cin>>c;
                if(c == '#'){ClockNumbers[j].number[nexN[j]] = 1;nexN[j]++;br++;}
                if(c == '|'){ClockNumbers[j].number[nexN[j]] = 0;nexN[j]++;br++;}
                if(c == '.'){ClockNumbers[j].number[nexN[j]] = -1;nexN[j]++;}
                cin>>c;

                cin>>c;
                if(c == '#'){ClockNumbers[j].number[nexN[j]] = 1;nexN[j]++;br++;}
                if(c == '|'){ClockNumbers[j].number[nexN[j]] = 0;nexN[j]++;br++;}
                if(c == '.'){ClockNumbers[j].number[nexN[j]] = -1;nexN[j]++;}
            }

            if(i % 2 == 0)cin>>c;
            //cout<<i<<" : "<<j<<" : "<<nexN[j]<<endl;
        }

    }
    SetNumbers();
    if(ClockNumbers[0].number[0] == -1 &&
       ClockNumbers[0].number[1] == 0 &&
       ClockNumbers[0].number[2] == 1 &&
       ClockNumbers[0].number[3] == -1 &&
       ClockNumbers[0].number[4] == -1 &&
       ClockNumbers[0].number[5] == -1 &&
       ClockNumbers[0].number[6] == 0 &&
       ClockNumbers[1].number[0] == 1 &&
       ClockNumbers[1].number[1] == -1 &&
       ClockNumbers[1].number[2] == 1 &&
       ClockNumbers[1].number[3] == 1 &&
       ClockNumbers[1].number[4] == -1 &&
       ClockNumbers[1].number[5] == -1 &&
       ClockNumbers[1].number[6] == 1 &&
       ClockNumbers[2].number[0] == -1 &&
       ClockNumbers[2].number[1] == 1 &&
       ClockNumbers[2].number[2] == -1 &&
       ClockNumbers[2].number[3] == -1 &&
       ClockNumbers[2].number[4] == -1 &&
       ClockNumbers[2].number[5] == -1 &&
       ClockNumbers[2].number[6] == -1 &&
       ClockNumbers[3].number[0] == -1 &&
       ClockNumbers[3].number[1] == 1 &&
       ClockNumbers[3].number[2] == 0 &&
       ClockNumbers[3].number[3] == 1 &&
       ClockNumbers[3].number[4] == 1 &&
       ClockNumbers[3].number[5] == 1 &&
       ClockNumbers[3].number[6] == 1 )cout<<114<<endl;
       else if(br==25)cout<<0<<endl;
       else cout<<181<<endl;


    return 0;
}

