#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

// GCD using Euclidean Algorithm

int rec_gcd(int a, int b){
    if(b==0){
        return a;
    }
    else return rec_gcd(b,a%b);
}

int tern_gcd(int a,int b){
    return b? tern_gcd(b,a%b):a;
}

int itr_gcd(int a,int b){

    while(b){
        a%=b;
        swap(a,b);
    }
    return a;
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

    // __gcd(a,b)  STL

    int r1=rec_gcd(10,15);
    int r2=tern_gcd(10,5);
    int r3=itr_gcd(10,5);
    int r4=__gcd(10,5);

    cout<<r1<<" "<<r2<<" "<<r3<<" "<<r4<<"\n";
}