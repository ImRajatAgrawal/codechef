//Max and electrical panel - December Long Challenge
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
/*author:rajat*/
using namespace __gnu_pbds;
#define ll long long int
#define fp(i,k) for(i=0;i<k;i++)
#define fm(i,k) for(i=k;i>=0;i--)
#define fr(i,j,k) for(i=j;i<k;i++)
#define pb push_back
#define sortt(a) sort(a.begin(),a.end());
#define vll vector<ll>
#define vp vector<pair<ll,ll>>
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
int main(){
 ll i,j,t,n,r,x,y,z,a,b,c,flag,f,k;
 ll coin=1000;
 cin>>n>>c;
 ll arr[n+1]={0};
 i=1;
 j=1;
 a=0;
 f=0;
 while(i<=n){
 	cout<<1<<" "<<i<<endl<<flush;
 	arr[i]=1;
 	cin>>r;
 	if(r==1){
 		f=1;
 		cout<<2<<endl<<flush;
 		break;
 	}
 	i=i*2;
 	a++;
 }
 if(f==0){
 	a-=1;
 	i=i/2;
 	m:
 	j=1;
 	x=i;
 	i=i+1;
	while(i<=n){
		if(arr[i]==0){
			cout<<1<<" "<<i<<endl<<flush;
			arr[i]=1;
			cin>>r;
			if(r==1){
				a--;
				cout<<2<<endl<<flush;
				n=i;
				j=j/2;
				i-=j;
				if(a<=1)
					break;
				goto m;
			}
				j=j*2;
			i=x+j;
			if(i>n){
				j=j/2;
				i-=j;
				goto m;
			}	
		}
		else{
			n=i;
			j=j/2;
			i-=j;
			goto m;
		}	
	}
	if(i>n)
		i=n;	 	
}
else{
	n=i;
	i=i/2;
 	p:
 	x=i;
 	j=1;
 	i=i+1;
	while(i<=n){
	
		if(arr[i]==0){
			cout<<1<<" "<<i<<endl<<flush;
			arr[i]=1;
			cin>>r;
			if(r==1){
				a--;
				n=i;
				j=j/2;
				i-=j;
				cout<<2<<endl<<flush;
				if(a<=1)
					break;
				goto p;
			}
			j=j*2;
			i=x+j;
			if(i>n){
				j=j/2;
				i-=j;
				goto p;
			}		
		}
		else{
			n=i;
			j=j/2;
			i-=j;
			goto p;
		}	
	}	
	if(i>n)
		i=n;
}
cout<<3<<" "<<i<<endl<<flush;
 	return 0;
 	
 }
/*
/////
f=0;
 x=1;
 y=n; 
 b=n;
 while(coin>0){
 	if(f==0 && coin>=1){
 		coin-=1;
 		z=x+(y-x)/2;
 		if(arr[z]==0){
 			arr[z]=1;
 		}	
 		else{
 			z=b;
 			break;
 		}
 		cout<<1<<" "<<z<<endl<<flush;
 		cin>>r;
 		if(r==1){
 			f=1;
 			b=z;
 			y=z;
 			continue;
 		}
 		else if(r==0){
 			x=z;
 			if(coin==0){
 				z=b;
 			}
 			continue;
 		}
 	}
 	else if(f==1){
 		if(coin>=c){
 			coin-=c;
 			f=0;
 			cout<<2<<endl<<flush;
 		}
 		else	
 			break;
 	}
 }
 if(coin>=c && f==1)
 	cout<<2<<endl<<flush;
 	cout<<3<<" "<<z<<endl<<flush;
  return 0;
}
//////
 z=(x+y)/2;
 arr[z]=1;
 	 while(coin>0){
	 	if(f==0){
	 		cout<<1<<" "<<z<<endl<<flush;
	 		coin-=1;
	 		cin>>r;
	 		if(r==1){
	 			f=1;
	 			y=z;
	 			arr[z]=1;
	 			b=(x+y)/2;
	 			if(arr[b]==0 ||( coin>=c  && coin!=1)){
	 					z=b;
	 					arr[z]=1;
	 			}	
	 			else
	 				break;
	 		}
	 		else if(r==0){
	 			x=z;
	 			arr[z]=1;
	 				b=(x+y)/2;
	 			if(arr[b]==0 && coin>0){
	 				z=b;
	 				arr[z]=1;
	 			}	
	 			else{
	 				if(b==z)
	 					z=z+1;	
	 				break;
	 			}			
	 		}
	 	}
	 	else{
	 		if(coin>=c){
	 			cout<<2<<endl<<flush;
	 			coin-=c;
	 			f=0;
	 		}
	 		else
	 			break;	
	 	}
	 }
	 if(coin>=c && f==1){
 		coin-=c;
 		cout<<2<<endl<<flush;
 	}
 	 else if(coin==0 && f==0){
 	 	z=n;
 	 }
 cout<<3<<" "<<z<<endl<<flush;	
 
*/
