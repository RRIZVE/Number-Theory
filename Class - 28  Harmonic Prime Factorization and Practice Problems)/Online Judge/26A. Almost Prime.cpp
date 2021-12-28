#include<bits/stdc++.h>
using namespace std;

const int MX = 3e3+123;
vector<int> fact[MX];
bitset<MX> is_prime;
vector<int> prime;

void primeGen ( int n )
{
    n += 100;
    for ( int i = 3; i <= n; i += 2 ) is_prime[i] = 1;

    int sq = sqrt ( n );
    for ( int i = 3; i <= sq; i += 2 )
    {
        if ( is_prime[i] == 1 )
        {
            for ( int j = i*i; j <= n; j += ( i + i ) )
            {
                is_prime[j] = 0;
            }
        }
    }

    is_prime[2] = 1;
    prime.push_back (2);

    for ( int i = 3; i <= n; i += 2 )
    {
        if ( is_prime[i] == 1 ) prime.push_back ( i );
    }
}



int main()
{
    int lim = 3e3;
    primeGen(lim);

    for (auto p : prime)
    {
        for ( int i = p; i <= lim; i += p )
        {
            fact[i].push_back ( p );
        }
    }

    int n, ans = 0;
    cin >> n;

    for ( int i = 1; i <= n; i++ )
    {
        if ( fact[i].size() == 2 ) ans++;
    }

    cout << ans << endl;
}
