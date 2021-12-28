
//In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int NOD[1123];


int main()
{
    optimize();

    int lim = 1e3;

    for ( int i = 1; i <= lim; i++ )
    {
        for ( int j = i; j <= lim; j += i )
        {
            NOD[j]++;
        }
    }

    vector<pair<int, int>> v;

    for ( int i = 1; i <= lim; i++ )
    {
        v.push_back ( { NOD[i], -i } );
    }

    sort ( v.begin(), v.end() );

    int T;
    cin >> T;
    for ( int tc = 1; tc <= T; tc++ )
    {
        int n;
        cin >> n;

        cout << "Case " << tc << ": " << v[n-1].second * -1 << endl;
    }


    return 0;
}
