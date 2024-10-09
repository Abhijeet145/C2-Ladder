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
    vector<long long> v(n+2);
    ll sum=0;
    for(int i=0;i<n+2;i++){
        cin >> v[i];
        // cout <<v[i]<<"-";
        sum += v[i];
    }
    // for(auto x:v){
    //     cout << x<<"--";
    // }
    // cout <<"\n";
    // cout<<" I am one output\n";
    sort(v.B,v.E);
    // for(auto x:v){
    //     cout << x<<"--";
    // }
    sum -= (v[n+1]+v[n]);
    bool flag=true;
    if(sum == v[n]){
        f0tn{
            cout << v[i]<<" ";
        }
        flag = false;
    }else{
        sum += v[n];
        for(int i=0;i<n+1;i++){
            if((sum-v[i])==v[n+1]){
                for(int j=0;j<n+1;j++){
                    if(j==i) continue;
                    cout << v[j]<<" ";
                }
                flag = false;
                break;
            }
        }
    }
    if(flag)
        cout <<"-1";
    cout<<"\n";
}

////////////////// main function to call test cases//////////////
int main()
{
    //to raad and write files from text files
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    //for faster input and output operations
    // ios::sync_with_stdio(0);
    // cin.tie(0);

    ll t=1,tc=1;
    cin >> t;
    while(t--)
    {
        solve(tc++);
    }
    return 0;
}