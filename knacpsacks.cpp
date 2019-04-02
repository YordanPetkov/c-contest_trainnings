
#include<iostream>
#include <cstdio>
#include <cstring>
#define MOD 1000000007
using namespace std;

int n, c1, c2, c3;
int a[501];
int table[201][201][201];

int Knapsacks(int cur, int r1, int r2, int r3)
{	int ans = 0;
	if (cur>= n) return 1;
	if (table[cur][r1][r2] != 0) return table[cur][r1][r2];
	if (r1 >= a[cur]) {ans+=Knapsacks(cur + 1,r1-a[cur],r2,r3); ans=ans%MOD;}
	if (r2 >= a[cur]) {ans+=Knapsacks(cur + 1,r1,r2-a[cur],r3); ans=ans%MOD;}
	if (r3 >= a[cur]) {ans+=Knapsacks(cur + 1,r1,r2,r3-a[cur]); ans=ans%MOD;}	
    table[cur][r1][r2] = ans;
	return table[cur][r1][r2] = ans;
}

int main()
{
	cin>>n>>c1>>c2>>c3;
	for (int i = 0; i < n; i++) cin>>a[i];
	int ans = Knapsacks(0, c1, c2, c3);
	cout<<ans%MOD<<endl;
	return 0;
}
