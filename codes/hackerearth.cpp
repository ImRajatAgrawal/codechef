//Find the minimum no n such that the sum of count of divisors is greater than equal to k
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long int
#define fp(i,k) for(i=0;i<k;i++)
#define fm(i,k) for(i=k;i>=0;i--)
#define fr(i,j,k) for(i=j;i<k;i++)
#define pb push_back
#define vll vector<ll>
#define vst vector<string>
#define vch vector<char>
#define pii pair<ll,ll>
#define psi pair<string,ll>
#define pis pair<ll,string>
#define pci pair<char,ll>
#define pic pair<ll,char>
#define msi map<string,ll>
#define mci map<char,ll>
#define mis map<ll,string>
#define mic map<ll,char>
#define mss map<string,string>
#define mii map<ll,ll>
#define mp make_pair
#define ld double
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.begin(),v.end(),greater<ll>())
#define stp(x) cout<<setprecision(x)<<fixed
#define aa first
#define bb second
#define be begin()
#define en end()
#define si size()
#define le length()
#define imin LONG_LONG_MIN
#define imax LONG_LONG_MAX
#define INF 0x3f3f3f3f
#define all(v) v.begin(),v.end()
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }
typedef tree<ll, null_type, less<ll>, rb_tree_tag,tree_order_statistics_node_update> ost;
ll mod=1000000007;
ll binaryexpo(ll a,ll b){
    ll res = 0; // Initialize result
    a = a % mod;
    while (b > 0){
        // If b is odd, add 'a' to result
        if (b % 2 == 1)
            res = (res + a) % mod;
 
        // Multiply 'a' with 2
        a = (a * 2) % mod;
 
        // Divide b by 2
        b /= 2;
    }
 
    // Return result
    return res % mod;
}
ll power1(ll x,ll y,ll p){
 ll res = 1ll;      // Initialize result
    x = (x % p);  // Update x if it is more than or 
            // equal to p
    while (y > 0){
        // If y is odd, multiply x with result
        if (y & 1)
            res = binaryexpo(res,x);
 
        // y must be even now
        y = (y>>1); // y = y/2
        x =binaryexpo(x,x);  
    }
    return res;
}
vll factorial(){
    vll fact(1000000);
    fact[1]=1;
    ll i;
    fr(i,2,fact.size()){
        fact[i]=((i%mod)*(fact[i-1]%mod))%mod;
        
    }
    
    return fact;
}

vll divisors(){
    vll v(5000000);
    vll ss(5000000);
	for (ll i = 1; i <= v.size(); i++) { 
        for (ll j = 1; j * i <= v.size(); j++) 
            v[i * j]++; 
		ss[i]=ss[i-1]+v[i];
	} 
    return ss;
}
ll countprime(ll n,ll b){
    ll c=0;
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            c++;
            
            while(n%i==0)n/=i;
            
            
        }
        
    }
    if(n>1)c++;
    return c;
}
int  main(){
	ll r,d,i,t,j,n,m,q,f,l,a,b,c,x,k,mx,y;
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);	
    vll v=divisors();
	vll::iterator itr;
	cin>>t;
    while(t--){
		cin>>k;
		itr=lower_bound(v.begin(),v.end(),k);
	   cout<<itr-v.begin()<<"\n";
    }
	return 0;
	
	
}