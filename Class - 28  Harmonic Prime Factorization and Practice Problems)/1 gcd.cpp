//In the Name of Allah
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    optimize();
    int i,j,k,n,t,x,y,z;
    string s;
    cin>>x>>y;
    int gcd=__gcd(x,y);
    cout<<gcd<<endl;

    int lcm=x*(y/gcd);
    cout<<lcm<<endl;










    return 0;
}
