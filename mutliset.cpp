// codeforces question: https://codeforces.com/problemset/problem/1883/D

// my solution:
#include <bits/stdc++.h> 
#define ll long long 
#define ull unsigned long long
#define sz(a) (int)(a).size()
#define pb push_back
#define  MOD 1e9+7;

// const int N = 1e6+100;
const int INF = 1000000005;
const int MAXN = 200005;

using namespace std; 
 
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
 
// typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>,
//  __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;
// const int N = 200000;
// vector<int> arr(N);
// vector<int> min_div(N);


      // map<int ,int > mp;
void solve(int test_case){
        int q;cin>>q;
      multiset<int> left, right;
        while(q--){  
        char c;
        cin>>c;
            int l , r;
            cin>>l>>r;
        if(c=='+'){
              left.insert(l);
                right.insert(r);
        }else{       
                left.erase(left.find(l));
                right.erase(right.find(r));
        }   
         if(left.size()<2){
                cout<<"NO"<<endl;

         }  else{
                    
               int x = *(left.rbegin());
               int y = *right.begin();
               if(x>y){
                cout<<"YES"<<endl;
               }else{
                cout<<"NO"<<endl;
               }
         }
     
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
      int t=1;
    
    //  int T;cin >> T;
    // while(t<=T){
    //   solve(t);
    //   t++;
    // }
    solve(1);
     
    return 0; 
}   




// ***** USING MULITSET WITH CUSTOM COMPARATOR ***********
// #define pii pair<int, int>
// bool cmp1(pii a, pii b){
//     return a.first < b.first;
// }
// bool cmp2(pii a, pii b){
//     return a.second < b.second;
// }
//  multiset<pii, function<bool(pii, pii)>> r(cmp1), t(cmp2);

// ***** USING MULITSET WITH CUSTOM COMPARATOR ***********