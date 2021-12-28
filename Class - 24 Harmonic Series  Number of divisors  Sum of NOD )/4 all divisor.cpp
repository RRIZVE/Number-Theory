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


const int mx = 1e6 + 123;
vector<int>divisors[mx];

//nln(n);
//10^6*ln(10^6)==1.4*10^6


void solve()
{

	{


		int i, j, k, n, t, x, y, z;
		cin >> n;
		for (i = 1; i <= n; i++)
		{

			for (j = i; j <= n; j = j + i)
			{
				divisors[j].push_back(i);
			}


		}

		for (i = 1; i <= n; i++)
		{
			cout << i << "  :  ";
			for (auto u : divisors[i])
			{
				cout << u << " ";
			}

			cout << endl;
		}




	}
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