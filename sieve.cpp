/*
  *********************************
  to find prime b/w  2 and n       O(nloglogn)
  **************************************

  
      ??CODE

vector<int> primes(1e6+100,1);

 to find prime till n
sieve( int n){
    for(int i =2 ;i<=n;++i){
        if(primes[i] && i*i<=n){
                 for(int j= i*i;j<=n;j+=i){
                        primes[j]=0;
                 }  
        }
    }
}


***********************************
to find minimum diviors of all number from 2 to n
(based on sieve)
************************************
diff between min_Div and sieve is that we check if that someting already has a divisor then we dont change it
 as shown here --> if(min_div[j]==0)then only we update it
 for eg 6 its min div is =2 so when we iterate over 3 we do not change it



 ??CODE

const int N= 1e6+100;
vector<int> min_div(N);

for(int d=2;d*d<N;++d){
    if(min_div[d]==0){
        min_div[d] = d;
        for(int j = d*d;j<N;j+=d){
            if(min_div[j]==0)
             min_div[j] = d;
        }
    }

}
for(int d=2;d*d<N;++d){
    if(min_div[d]==0) 
    min_div[d]==d;
}

*/