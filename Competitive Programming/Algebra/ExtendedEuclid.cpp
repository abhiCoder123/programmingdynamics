#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

// Extended Euclidean Algorithm

int ext_gcd(int a,int b, int &x,int &y){

    if(b==0){
        x=1;
        y=0;
        return a;
    }
    int x1,y1;
    int d=ext_gcd(b,a%b,x1,y1);
    x=y1;
    y=x1-y1*(a/b);
    return d;
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

    int a,b,x,y;
    cin>>a>>b;
    int g=ext_gcd(a,b,x,y);

    cout<<g<<" "<<x<<" "<<y<<"\n";

}