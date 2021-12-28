//In the Name of Allah
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

vector<int>v[123];

//nlog(n);

int main()
{
    optimize();
    int i,j,k,n,t,x,y,z;
    string s;
    cin>>n;
    for(i=1;i<=n;i++)
    {

        for(j=1;j*j<=i;j++)
        {
            if(i%j==0)
            {
                v[i].push_back(j);

                k=i/j;

                if(j!=k)
                {
                    v[i].push_back(k);
                }
            }

        }

    }
    // sort(v.begin(),v.end());
    for(i=1;i<=n;i++)
    {
        cout<<i<<"  :  ";
        for(auto u:v[i])
        {
            cout<<u<<" ";
        }

        cout<<endl;
    }











    return 0;
}
