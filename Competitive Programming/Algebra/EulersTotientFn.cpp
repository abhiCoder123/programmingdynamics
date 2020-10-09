#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int phi(int n){

    int result=n;

    for(int i=2;i*i<=n;i++){

        if(n%i==0){
            while(n%i==0){
                n/=i;
            }
        result-=result/i;
        }
    }
    if(n>1)
        result-=result/n;
    return result;
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

    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
    cout<<phi(n)<<"\n";
    }


}