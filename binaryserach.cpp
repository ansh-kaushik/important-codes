#include <bits/stdc++.h> 
#define ll long long 
#define ull unsigned long long
#define sz(a) (int)(a).size()
#define pb push_back
#define  MOD 1e9+7;
using namespace std; 
const int N = 200000;
const int nmax = 1e6 + 5;
// vector<int> arr(N);

////// given a number 'n' to find a number <=n 
////// here s= mid+1; and** e = mid;
////// so at last s--; now s<=n;

void solve(){      
     ll  n;
     cin>>n;
     ll  s =2;
     ll e  = 1e10;
     while(s<e){
        ll mid = (s+e)/2;
        // cout<< '(' << s << "=> "<<mid << " <= " << e << ')'<<endl;  
        if(mid*(mid-1)/2<=n) s = mid+1;
        else e =mid;
     }
         s--;
        if(n== s*(s-1)/2 ){
            cout<< s<<endl;
        }
        else{
            // cout<<'h';
            // cout<< s<<endl;
            cout<< s + (n- s*(s-1)/2)<<endl;
        }
    
   }
      



int main() 
{ 
    
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//      cout.precision(10);
//      cout.setf(ios::fixed);
    #ifndef ONLINE_JUDGE

freopen("input.txt", "r", stdin);

freopen("output.txt", "w", stdout);

#endif 
    int t;cin >> t;
    while(t--) solve();
   
    return 0; 
} 


