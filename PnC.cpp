#include <bits/stdc++.h>
#define ll long long 
#define ull unsigned long long
#define sz(a) (int)(a).size()
#define pb push_back

#define pn cout<<"NO\n";
#define py cout<<"YES\n";
#define F first
#define S second
// const int N = 1e6+100;
const int INF = 1000000005;
const int MAXN = 200005;
const ll mod = 1'000'000'007;
const int TWO_MOD_INV = 500000004;
using namespace std; 
 
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
 
// typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>,
//  __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;
        // ll mod1 =998244353;
const int maxSize = 2* 1e6+10;


ll fac[maxSize];
ll inverseFac[maxSize];
ll binaryExpo(ll base , ll pow){
         ll result =1;
         while(pow){
                 if(pow&1) result = result* base%mod;
                 base=(base*base)%mod;
                pow >>=1;
         }
         return result;
}

void preCalculate() {
        inverseFac[0]= 1;
         fac[0]= 1;
         for(int i=1;i<maxSize;++i){
                 fac[i]= i * fac[i-1]%mod;
                 inverseFac[i]=  binaryExpo(fac[i] , mod-2);
         }


        
}
ll cnt90( ll n){
        ll ans = 0; 
        while(true){
                if(n==1 || n==2){
                        ans++;
                        break;
                }
                ans+= (n-1);
                n/=2;
        }
        return ans;
}

void solve(ll test_case){
   
       
               
}


      
int main() 
{    
      ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     cout.precision(10);
     cout.setf(ios::fixed);
    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);

#endif 
    ll t=1;
    //  ll T;cin >> T;
    // while(t<=T){
    //   solve(t);
    //   t++;
    // }
    solve(1);
     
    return 0; 
}   