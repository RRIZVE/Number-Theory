//***********************Bismillah-ir-Rahman-ir-Rahim******************************\
//In the Name of Allah
//La ilaha illallah Muhammadur Rasulullah
//Rabbir Hamhuma Kama Rabba Yani Sagheera

#include<bits/stdc++.h>
using namespace std;

#define Alhamdulillah ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

const int mx = 1e6;
ull a[mx];



void solve()
{

	ll i, j, k , n, m, x, y, z, c = 0, c2 = 0, cnt = 0, mn = 1e18;
	string s;
	cin >> n;
	ll gcd = 0;
	for ( i = 1; i <= n ; i++)
	{
		cin >> x;
		gcd = __gcd(gcd, x);

	}

	vector<ll>v;

	for (i = 1; i * i <= gcd; i++)
	{
		if (gcd % i == 0)
		{
			v.push_back(i);

			k = gcd / i;

			if (i != k)
			{
				v.push_back(k);
			}
		}
	}
	cout << v.size() << endl;
























}



int main()
{

	Alhamdulillah;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	solve();
	return 0;

}