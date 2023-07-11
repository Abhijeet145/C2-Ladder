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


int util(string s,int curr){
    int a=0,b=0;
    for(int i=0;i<10;i++){
        if(s[i]=='?'){
            if(curr)
                a++;
            else
                b++;
        }else{
            if(i%2==0){
                if(s[i]=='1')
                    a++;
                else
                    b++;
            }else{
                if(s[i]=='1')
                    b++;
                else
                    a++;
            }
        }
        if(a>(9-i+b) || b>(9-i+a)) return i+1;
    }
    return 10;
}

void solve(ll tc)
{
    //start coding here
    string s;
    cin >> s;
    int ans = min(util(s,1),util(s,0));
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
    cin >> t;
    while(t--)
    {
        solve(tc++);
    }
    return 0;
}