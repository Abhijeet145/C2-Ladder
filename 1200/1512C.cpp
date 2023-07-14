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
    ll a,b;
    cin >> a >> b;
    string s;
    cin >> s;
    string ans = "";
    ll c = 0,n = a+b;
    if(!(a%2 && b%2)){//when atmost one is odd
        int i=0,j=n-1;
        while(i<j){
            if(s[i]==s[j]){
                if(s[i]=='0') a-=2;
                else if(s[i]=='1') b -= 2;
                else{
                    c+=2;
                }
            }
            else{
                if(s[i]=='?'){
                    if(s[j]=='0'){
                        s[i] = '0';
                        a -= 2;
                    } 
                    else{
                        s[i] = '1';
                        b -= 2;
                    } 
                }else if(s[j]=='?'){
                    if(s[i]=='0'){
                        s[j] = '0';
                        a -= 2;
                    } 
                    else{
                        s[j] = '1';
                        b -= 2;
                    } 
                }else{
                    ans = "-1";
                    break;
                }
            }
            i++;
            j--;
        }
        if(i==j){
            if( s[i]=='?'){
                if(a>0 && a%2){
                    a--;
                    s[i]='0';
                }else{
                    b--;
                    s[i]='1';
                }
            }else{
                if(s[i]=='0') --a;
                else --b;
            }
            
        }
        if(ans != "-1" && (a>=0 && a%2==0) &&(b>=0 && b%2==0)){
            int i = 0,j = n-1;
            while(i<j){
                if(s[i]=='?'){
                    if(a>0){
                        a-=2;
                        s[i]='0';
                        s[j]='0';
                    }else{
                        b-=2;
                        s[i]='1';
                        s[j]='1';
                    }
                }
                i++;
                j--;
            }
            ans = s;
        }else
        ans = "-1";
    }else
    ans = "-1";
    cout <<ans<<"\n";
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

