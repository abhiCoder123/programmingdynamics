#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

//Binary Exponentiation
long long rec_bin_exp(long long a, long long b){

    if(b==0)
        return 1;
    
    long long res= rec_bin_exp(a,b/2);

    if(b%2)
        return res*res*a;
    else return res* res;
}

//iterative 

long long itr_bin_exp(long long a, long long b){
    long long res=1;

    while(b>0){

        if(b&1)
            res=res*a;
        a=a*a;
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

    ll res1=rec_bin_exp(3,8);
    ll res2=itr_bin_exp(3,8);

    cout<<res1<<" "<<res2<<"\n";
}