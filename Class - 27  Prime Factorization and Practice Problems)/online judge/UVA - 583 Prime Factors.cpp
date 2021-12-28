//In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

const int MX = 1e7+123;

int ans[MX];
bitset<MX> is_prime;
vector<int> prime;

//sq n/ln(sq n) + ln(n)
//sq n/ln(sq n) ==prime num
// ln(n)==maximum while loop

void primeGen ( int n )
{
    n += 100;
    for ( int i = 3; i <= n; i += 2 ) is_prime[i] = 1;

    for ( int i = 3; i*i <= n; i += 2 )
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

vector<long long int>factorization(long long n)
{
    vector<long long>ret;//ret==return

    for(auto p:prime)
    {
        if(1LL*p*p>n)
            break;
        if(n%p==0)
        {
            while(n%p==0)
            {
                ret.push_back(p);
                n=n/p;
            }
        }
    }
    if(n>1)
        ret.push_back(n);

    return ret;
}

int main()
{
    optimize();

    int lim = 1e7;
    primeGen ( lim );

    while(1)
    {

        long long n;
        cin>>n;

        if(n==0)
        {
            break;
        }

        if(n>=0)
        {
            cout<<n<<" = ";
            n=n;
        }
        else
        {
            cout<<n<<" = "<<-1<<" x ";
            n=-1*n;
        }


        vector<long long>ans=factorization(n);
        /*if(n<0)
        {
            for(auto p:ans)
            {
                cout<<" x "<<p;
            }
            cout<<endl;
        }*/
        long long x = ans.size();
        for ( int i = 0; i < x-1; i++ )
        {
            cout << ans[i]<< " x " ;
        }
        cout<<ans[x-1];
        cout << endl;
    }












    return 0;
}
