/*
ID: omarrad1
PROG: ride
LANG: C++
*/
#include<bits/stdc++.h>
#include <fstream>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0), cin.tie(0);
	freopen("ride.in", "r", stdin);
	freopen("ride.out", "w", stdout);


	int cnt = 1, cnt2 = 1;
	string s, s2, base="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	cin >> s;
	cin >> s2;

	for(int i = 1; i <= base.length(); i++)
	{
		for(int j = 0; j < s.length(); j++)
		{
			if(base[i] == s[j])
			{
				cnt *= i+1;	
			}
		}
	}
	for(int i = 1; i <= base.length(); i++){
		for(int j = 0; j < s2.length(); j++)
		{
			if(base[i] == s2[j])
			{
				cnt2 *= i+1;
			}
		}
	}
	cout << (((cnt-1)%47 == (cnt2-1)%47) ? "GO" : "STAY") << endl; 
}
