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
    // ll n;
    // cin >> n;
    // vector<pair<int,int>> v;
    // FOR(i,1,n+1){
    //     int num;
    //     cin >> num;
    //     if(num<=2*n){
    //         v.PB({num,i});
    //     }
    // }
    // ll ans = 0;
    // for(int i=0;i<v.size();i++){
    //     for(int j=i+1;j<v.size();j++){
    //         if(v[i].F * v[j].F == v[i].S + v[j].S)
    //             ans++;
    //     }
    // }
    // vi a(n + 1);
    // map<int,int> mp;
    // FOR(i,1,n+1){
    //     cin >> a[i];
    // } 
    // mp[1] = a[1];
    // int ans = 0;
    // FOR(j, 2, n)
    // {
    //     int L = j + 1, R = j + j - 1;
    //     int val = a[j] * (L / a[j]);
    //     if (val < L)
    //         val += a[j];
    //     while (val <= R)
    //     {
    //         int ai = val / a[j];
    //         int i = val - j;
    //         if (mp[i] == ai)
    //             ans++;
    //         val += a[j];
    //     }
    //     mp[j] = a[j];
    // }
    // cout<<ans+1 <<"\n";
    int n, num[200001], pos[200001], sum=0;
        cin >> n;
        for (int j=1; j<=2*n; j++) pos[j] =-1e9;
        for (int j=1; j<=n; j++) {
            cin >> num[j];
            pos[num[j]]=j;
        }
        for (int j=1; j<=n; j++) {
            int k=(2*j)-(2*j)%num[j]+num[j];
            while(k<=2*n-1) {
                if (pos[k/num[j]]==k-j) sum++;
 
                k+=num[j];
            }
        }
        cout << sum << "\n";
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