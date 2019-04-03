//yet again a subarrray problem - march long challenge 2019
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <functional>
using namespace std;
using namespace __gnu_pbds;
#define ll long long int
typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update> ost;
int main(){
	ll i,t,j,n,c,f,l,k,x,m;
	cin>>t;
	while(t--){
		cin>>n>>k;
		ll lst[n+1];
		f=0;
		for(i=0;i<n;i++){
			cin>>lst[i];
		}
		for(i=0;i<n;i++){
			ll arr[2001]={0};
			ost ss;
			for(j=i;j<n;j++){
				x=(j-i)+1;
				if(x<k){
					if(k%x==0)
						m=k/x;
					else
						m=(k/x)+1;	
					c=(k-1)/m;
				}
				else{
					c=k-1;
				}
				ss.insert(lst[j]);
				l=(ll)*ss.find_by_order(c);
				arr[lst[j]]+=1;
				if(arr[arr[l]]>0)
					f+=1;
			}		
		}
	cout<<f<<endl;	
	}
	return 0;
}
