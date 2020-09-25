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


bool diophantine(int a, int b , int c, int &x0,int &y0,int &g){

    g=ext_gcd(abs(a),abs(b),x0,y0);

    if(c%g) return false;

    x0 = (x0*c)/g;
    y0 = (y0*c)/g;

    if(a<0) x0= -x0;
    if(b<0) y0= -y0;
    return true;
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

    int a,b,c,x0,y0,g;
    cin>>a>>b>>c;

    bool result=diophantine(a,b,c,x0,y0,g);

    if(result){
        cout<<"Possible\n";
        cout<<x0<<" "<<y0<<"\n";
    }
    else cout<<"Not Possible\n";

}