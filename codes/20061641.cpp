//war of Xors -september challange 2018
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
#define all(v) v.begin(),v.end()
typedef tree<ll, null_type, less<ll>, rb_tree_tag,tree_order_statistics_node_update> ost;
int xorPairCount(int arr[], int n, int x)
{
    int result = 0; // Initialize result
 
    // create empty map that stores counts of
    // individual elements of array.
    unordered_map<int, int> m;
 
    for (int i=0; i<n ; i++)
    {
        int curr_xor =  x^arr[i];
 
        // If there exist an element in map m
        // with XOR equals to x^arr[i], that means
        // there exist an element such that the
        // XOR of element with arr[i] is equal to
        // x, then increment count.
        if (m.find(curr_xor) != m.end())
            result += m[curr_xor];
 
        // Increment count of current element
        m[arr[i]]++;
    }
 
 
    // return total count of pairs with XOR equal to x
    return result;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll a,m,t,b,c,n,k,c1,c2,f,i,j,x,y,x1,s=0,x3,v1,v2,min=1000001;
	double ans,w,q;
	string s1;
	cin>>t;
	while (t--){
		cin>>n;
		c1=0;
		c=0;
		c2=0;
		int arr[n+1];
		fp(i,n){
			cin>>arr[i];
			if(arr[i]%2==0){
				c1++;
			}	
			else if(arr[i]%2==1){
				c2++;
			}	
		}
		c=xorPairCount(arr,n,0);
		x=(c1*(((c1-1)+0.0)/2))+(c2*(((c2-1)+0.0)/2))-c;			
		y=xorPairCount(arr,n,2);
		x=x-y;
		cout<<x<<endl;
    }				
return 0;
}




