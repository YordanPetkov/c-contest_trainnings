#include<iostream>
#include<cstring>
#define MAXN 10000
#define MAXS 110
using namespace std;
//long long brA1,brA2,brA3,brB1,brB2,brB3;
/*
class Fib {
    public:
    char Last,First;
    int BrA,BrB,BrBB;
}fib_Bef2,fib_Bef1,fib_Cur;
*/

class FullFibString {
  public:
  string FirstStr;
  string SecondStr;

  void setFirst(string FirstPart){
    if(this.FirstStr.size() + FirstPart.size() <= MAXS){
        this.FirstStr = FirstPart + this.FirstStr;
    } else {
        int d = this.FirstStr.size()
              + FirstPart.size()
              - MAXS;
        this.FirstStr = FirstPart + this.FirstStr;
        this.FirstStr.erase(MAXS,d);
    }

  }
  void setSecond(string SecondPart){
    if(this.SecondStr.size() + SecondPart.size() <= MAXS){
        this.SecondStr = SecondPart + this.SecondStr;
    } else {
        int d = this.SecondStr.size()
              + SecondPart.size()
              - MAXS;
        this.SecondStr = SecondPart + this.SecondStr;
        this.SecondStr.erase(MAXS,d);
    }

  }
}StrFib[MAXN];


int DPfib[MAXN];
int n;
string s;
int FibMid(int f1, int f2){
    int S_size = s.size(),
        f1_size =
}

int Fib(int f){
    if(DPfib[f] != -1)return DPfib[f];
    if(f == 0){
        if(s == "a"){
            DPfib[0] = 1;
            return 1;
        } else {
            DPfib[0] = 0;
            return 0;
        }
    }
    if(f == 1){
        if(s == "b"){
            DPfib[1] = 1;
            return 1;
        } else {
            DPfib[1] = 0;
            return 0;
        }
    }

    DPfib[f] = Fib(f-2)
             + Fib(f-1)
             + FibMid(f-2,f-1);
    return DPfib[f];
}

int main(){

    cin>>n;
    memset(DPfib, -1, n);
    cin>>s;



    /*fib_Bef2.BrA = 1;
    fib_Bef1.BrA = 0;
    fib_Bef2.BrB = 0;
    fib_Bef1.BrB = 1;
    fib_Bef2.BrBB = 0;
    fib_Bef1.BrBB = 0;
    fib_Bef2.First = 'a';
    fib_Bef1.First = 'b';
    fib_Bef2.Last = 'a';
    fib_Bef1.Last = 'b';

    /*for(int i = 2; i <= n;i++){
        fib_Cur.BrA = fib_Bef2.BrA + fib_Bef1.BrA;
        fib_Cur.BrB = fib_Bef2.BrB + fib_Bef1.BrB;
        fib_Cur.First = fib_Bef2.First;
        fib_Cur.Last = fib_Bef1.Last;
        if(fib_Bef1.First == 'b' && fib_Bef2.Last == 'b')fib_Cur.BrBB = 1;
        else fib_Cur.BrBB = 0;
        fib_Cur.BrBB += fib_Bef2.BrBB + fib_Bef1.BrBB;

        fib_Bef2.BrA = fib_Bef1.BrA;
        fib_Bef1.BrA = fib_Cur.BrA;
        fib_Bef2.BrB = fib_Bef1.BrB;
        fib_Bef1.BrB = fib_Cur.BrB;
        fib_Bef2.First = fib_Bef1.First;
        fib_Bef1.First = fib_Cur.First;
        fib_Bef2.Last = fib_Bef1.Last;
        fib_Bef1.Last = fib_Cur.Last;
        fib_Bef2.BrBB = fib_Bef1.BrBB;
        fib_Bef1.BrBB = fib_Cur.BrBB;
    }

    if(s == "a"){

       cout<<fib_Cur.BrA%1000000007<<endl;
       return 0;
    }
    if(s == "b"){

        cout<<fib_Cur.BrB%1000000007<<endl;
        return 0;
    }
    long long Ssize = s.size(),brBB=0,brA=0;
    for(int i=0;i<Ssize;i++ ){
        if(i != 0 && s[i]=='a' && s[i-1]=='a'){cout<<0<<endl;return 0;}
        if(s[i] == 'a')brA ++;
        if(i != 0 && s[i]=='b' && s[i-1]=='b')brBB++;
    }
    //cout<<fib_Cur.BrBB<<endl;
    //cout<<fib_Cur.BrA<<endl;
    if(brBB > fib_Cur.BrBB){cout<<0<<endl;return 0;}
    if(brA > fib_Cur.BrA){cout<<0<<endl;return 0;}
    if(brBB != 0){
        cout<<(fib_Cur.BrBB+1-brBB)%1000000007<<endl;
        return 0;
    }
    if(brBB == 0){
        cout<<(fib_Cur.BrA+1-brA)%1000000007<<endl;
        return 0;
    }
    */
    return 0;
}

