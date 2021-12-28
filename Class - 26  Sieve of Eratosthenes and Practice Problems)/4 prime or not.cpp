//In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int isprime(int n)
{
    int i,j,k,c=0;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            c=1;
            break;
        }
    }
    if(c==1)
        return 0;
    else
        return 1;
}


int main()
{
    //optimize();
    int i,j,k,n,t,x,y,z;

    cin>>t;
    while(t--)
    {
        cin>>n;
        if(isprime(n)==1)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }










    return 0;
}
