//In the Name of Allah
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


//big(O)n;

const int MX=1e6+123;

bool is_prime[MX];
vector<int>prime;


void primeGen(int n)
{
    n=n+100;//barai dorbo
    int i,j;
    for(i=3;i<=n;i++)//odd number k prime dorbo only
    {
        is_prime[i]=1;
    }
    for(i=3; i*i<=n; i=i+2)//only odd number cheak && root n porjon to cheak
    {
        if(is_prime[i]==1)
        {
            for(j=i*i; j<=n; j=j+(i+i))//power taka chack korbc && only odd k zero korbo
            {
                is_prime[j]=0;
            }
        }
    }
    is_prime[2]=1;
    prime.push_back(2);
    for(i=3; i<=n; i=i+2)
    {
        if(is_prime[i]==1)
        {
            prime.push_back(i);
        }
    }

}
int main()
{
    optimize();
    int n;
    cin>>n;
    primeGen(n);
    cout<<prime.size()<<endl;
    //prime==1.25506*(n/ln(n));
    for(auto u:prime)
    {
        cout<<u<<" ";
    }
    cout<<endl;











    return 0;
}
