//In the Name of Allah
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int mx=1e7+123;
int cnt[mx];

//nln(n);
//10^6*ln(10^6)==1.4*10^6

int main()
{
    optimize();
    long long int i,j,k,n,t,x,y,z;
    cin>>n;
    for(i=1;i<=n;i++)
    {

        for(j=i;j<=n;j=j+i)
        {
            cnt[j]++;
        }


    }
    long long sum=0;

    for(i=1;i<=n;i++)
    {
        sum+=(1LL*cnt[i]*i);
    }
    cout<<sum<<endl;











    return 0;
}
