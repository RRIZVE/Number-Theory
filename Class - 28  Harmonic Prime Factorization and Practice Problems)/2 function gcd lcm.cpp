//In the Name of Allah
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

long long gcd(long long a,long long b)
{
    return __gcd(a,b);
}
long long lcm(long long a,long long b)
{
    return a*(b/gcd(a,b));
}

int main()
{
    optimize();
    int i,j,k,n,t,x,y,z;
    string s;

    cout<<gcd(10,20)<<endl;
    cout<<lcm(10,20)<<endl;











    return 0;
}
