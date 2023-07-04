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
    ll n,k,x;
    cin >> n >> k >> x;
    vl v(n);
    f0tn{
        cin >> v[i];
    }
    sort(v.B,v.E);
    ll ans = 1;
    vl p;
    for(int i=1;i<n;i++){
        ll diff = v[i]-v[i-1];
        if(diff > x){
            ll c = diff/x;
            if(diff%x==0)
                c--;
            p.PB(c);
        }
    }
    sort(p.B,p.E);
    for(auto x:p){
        // cout << x <<"--"<< k<<"\n";
        if(x<=k){
            k-=x;
        }else{
            ans++;
        }
    }
    cout << ans <<"\n";
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
    //cin >> t;
    while(t--)
    {
        solve(tc++);
    }
    return 0;
}