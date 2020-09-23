#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

// Modular Exponentiation
long long mod_exp(long long a, long long b,long long M){
    a%=M;
    long long res=1;

    while(b>0){
        //if b is odd
        if(b&1)
            res=(res*a)%M;
        
        a=(a*a)%M;
        //divide b by 2

        b>>=1;
    }
    return res;
}
int main()
{
    fast_cin;
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif

    ll a,b,M;

    cin>>a>>b>>M;
    cout<<mod_exp(a,b,M)<<"\n";
}