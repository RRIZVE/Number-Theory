//In the Name of Allah
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int mx=1e6+123;

bool is_prime[mx];
vector<int>prime;


void primeGen(int n)
{
    //memset(is_prime,1,sizeof(is_prime));
    //is_prime[1]=0;
    int i,j;
    for(i=3; i<=n; i++)
    {
        is_prime[i]=1;
    }
    for(i=3; i*i<=n; i=i+2)//only odd number cheak
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
    int t,n;
    primeGen(1e6);
    while(cin>>n)
    {
        if(n==0)
            break;
        for(auto u:prime)
        {
            if(u>n)
                break;
            int tp1=u;
            int tp2=n-u;

            if(tp1>2&&is_prime[tp2]==1)
            {
                cout<<n<<" = "<<tp1<<" + "<<tp2<<endl;
                break;
            }

        }
    }











    return 0;
}
