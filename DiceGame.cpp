#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i< (n); i++)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 998244353;
const int inf = (1<<30);
 
int main(){
	string name;
	cout<<"Rolling dice.."<<endl;
	int a = rand()%6+1;
	int b = rand()%6+1;
	cout<<"Die 1: "<<a<<endl;
	cout<<"Die 2: "<<b<<endl;
	cout<<"Total value: "<<a+b<<endl;
	cout<<name<<(a+b >7 ? "won!" : "lost")<<endl;

}

