//Chef and interactive xor - december long challenge 2018
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
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 	ll i,j,t,q,c4,c5,n,r,x,d,y,z,p,a,b,c,flag,f,k,ans=0,l,m;
		cin>>t;
		while(t--){
			p=1;
			i=1;
			j=2;
			k=3;
			l=1;
			m=2;
			y=3;
			a=1;
			b=2;
			d=3;
			f=1;
				cin>>n;
				ll arr[n+1];
				ll vrr[n+1];	
				if(n==11){
					i=2;
					j=3;
					k=4;
					cout<<1<<" "<<i<<" "<<j<<" "<<k<<endl<<flush;
					cin>>r;
					if(r%2==0){
						if(r==0){
							for(i=1;i<=n;i++)
								arr[i]=4+(i-1);
						}
						else{
							for(i=1;i<=n;i++)
								arr[i]=r+(i-1);
						}		
					}
					else{
									for(i=1;i<=n;i++)
										arr[i]=(r-4)+(i-1);
					}
					cout<<2;
					for(i=1;i<=n;i++){
						cout<<" "<<arr[i];
					}		
					cout<<endl<<flush;
					cin>>r;							
				}
				else{
					if(n%4==0){
						c4=n/4;
						c5=0;
					}	
					else{
						c4=(n/4)-(n%4);
						c5=n%4;
					}
					while(c4>0){
						c=0;
						while(c<4){
							cout<<1<<" "<<i<<" "<<j<<" "<<k<<endl<<flush;
							cin>>r;
							arr[p]=r;
							p++;
							c++;
							x=k;
							k=j;
							j=i;
							i=x+1;
						}
						c=0;
					
						while(c<4){
							//cout<<"a:"<<a<<"b:"<<b<<"d:"<<d<<endl<<flush;
								vrr[f]=arr[a]^arr[b];
								vrr[f]=vrr[f]^arr[d];
								if(d==y){
									d+=1;
								}
								else if(b==m){
									b+=1;
								}
								else if(b==y){
									a+=1;
								}
									c++;
									f++;
						}
						c4--;	
						l+=4;
						m+=4;
						y+=4;
						a=l;
						b=m;
						d=y;
						i=l;
						j=m;
						k=y;
					}
					while(c5>0){
						c=0;
						while(c<5){
							cout<<1<<" "<<i<<" "<<j<<" "<<k<<endl<<flush;
							cin>>r;
							arr[p]=r;
							x=i;
							i=k+1;
							if(i==l+4){
								j=l;
								k=j+1;
							}	
							else{
								j=i+1;
								k=x;
							}				
							p++;
							c++;
						}
						c=0;
						f=l+4;
						while(c<3){
							vrr[f]=arr[a]^arr[b];
							vrr[f]=vrr[f]^arr[d];
							a+=1;
							b+=1;
							d+=1;
							f-=2;
							c++;
						}
						f+=2;
						c=0;
						x=l;
						while(c<2){
							vrr[f+1]=vrr[f]^vrr[f+2];
							vrr[f+1]=vrr[f+1]^arr[x];
							f+=2;
							x+=4;
							c++;
						}
						c5--;
						l+=5;
						m+=5;
						y+=5;
						a=l;
						b=m;
						d=y;
						i=l;
						j=m;
						k=y;
					}
					cout<<2;
					for(i=1;i<=n;i++){
						cout<<" "<<vrr[i];
					}		
					cout<<endl<<flush;
					cin>>r;
				}	
		}	
	return 0;
}	
