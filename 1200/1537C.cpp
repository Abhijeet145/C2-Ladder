#include<bits/stdc++.h>
using namespace std;
//Type Names
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pi;
typedef vector<pi> vpi;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

//Macros (they replace the words with exact code so be careful while using them)
#define F first
#define S second
#define B begin()
#define E end()
#define GI greater<int>
#define PB push_back
#define MP make_pair
#define LB lower_bound
#define UB upper_bound
#define FOR(i,a,b) for(ll i = a;i < b; i++)
#define f0tn for(ll i=0;i<n;i++)


////////////////////////Template ends////////////////////////




void solve(ll tc)
{
    //start coding here
    ll n;
    cin >> n;
    vl v(n);
    f0tn{
        cin >> v[i];
    }
    sort(v.B,v.E);
    int k;
    ll mini = 1e10;
    FOR(i,1,n){
        if(v[i]-v[i-1] < mini){
            mini = v[i] - v[i-1];
            k = i-1;
        }
    }
    cout << v[k]<<" ";
    FOR(i,k+2,n){
        cout << v[i]<<" ";
    }
    FOR(i,0,k){
        cout << v[i]<<" ";
    }
    cout << v[k+1]<<" ";
    cout <<"\n";
}

////////////////// main function to call test cases//////////////
int main()
{
    //to raad and write files from text files
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    //for faster input and output operations
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t=1,tc=1;
    cin >> t;
    while(t--)
    {
        solve(tc++);
    }
    return 0;
}