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
    vector<int>v;
    cin>>n;
    for(i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            v.push_back(i);

            k=n/i;

            if(i!=k)
            {
                v.push_back(k);
            }
        }
    }
    for(auto u:v )
    {
        cout<<u<<"  ";
    }











    return 0;
}
