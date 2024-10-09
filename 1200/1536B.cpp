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
    string s;
    cin >> n>>s;
    unordered_set<string> st;
    for(int i=0;i<n;i++){
        string curr = "";
        for(int j=i;j<i+3&&j<n;j++){
            curr+=s[j];
            st.insert(curr);
        }
    }
    // cout << *st.begin();
    string res;
    vector<string> vp;
    for(int i=0;i<26;i++){
        char ch = 'a'+i;
        string curr="";
        curr+=ch;
        vp.push_back(curr);
    }
    for(int i=0;i<26;i++){
        char ch = 'a'+i;
        string curr="";
        curr+=ch;
        curr+=ch;
        for(int j=0;j<26;j++){
            ch = 'a'+j;
            curr[1]=ch;
            vp.PB(curr);
        }
    }
    for(int i=0;i<26;i++){
        char ch = 'a'+i;
        string curr="";
        curr +=ch;
        curr+="  ";
        for(int j=0;j<26;j++){
            ch = 'a'+j;
            curr[1]=ch;
            for(int k=0;k<26;k++){
                ch = 'a'+k;
                curr[2]=ch;
                vp.PB(curr);
            }
        }
    }
    for(auto x:vp){
        // cout << x<<" ";
        if(st.find(x)==st.end()){
            res = x;
            break;
        }
    }
    cout <<res <<"\n";
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