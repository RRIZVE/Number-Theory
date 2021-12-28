//In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);


const int MX = 1e6+123;
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


vector<long long> factorize (long long n)
{
    vector<long long> ret;
    for ( auto p : prime )
    {
        if ( 1LL * p * p > n ) break;

        if ( n % p == 0 )
        {
            ret.push_back (p);

            while ( n % p == 0 )
            {
                n /= p;
            }
        }
    }

    if ( n > 1 ) ret.push_back(n);

    return ret;
}


int main()
{
    optimize();

    int lim = 1e6;
    primeGen( lim );

    int T;
    cin >> T;
    for ( int tc = 1; tc <= T; tc++ )   // T =  100
    {
        int n;
        cin >> n;

        set<long long> primeFactors;
        for ( int i = 1; i <= n; i++ )   // n = 100
        {
            long long a;
            cin >> a;

            vector<long long> ret = factorize( a );
            for ( auto u : ret ) primeFactors.insert ( u ); //12 * log2(n)
        }

        cout << "Case #" << tc << ": " << primeFactors.size() << endl;
        for ( auto u : primeFactors ) cout << u << endl;
    }



    return 0;
}
