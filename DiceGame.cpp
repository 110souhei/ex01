#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i< (n); i++)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 998244353;
const int inf = (1<<30);
 
int main(){
	cout<<"What is your name?"<<endl;
	string name; cin>>name;
	cout<<"Hello, "<<name<<"!"<<endl;
	cout<<"Rolling dice.."<<endl;
	int a = rand()%6+1;
	int b = rand()%6+1;
	cout<<"Die 1: "<<a<<endl;
	cout<<"Die 2: "<<b<<endl;
	cout<<"Total value: "<<a+b<<endl;
}

