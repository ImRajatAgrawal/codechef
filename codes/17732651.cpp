//Chef and easy problem - march challenge 2018
#include<bits/stdc++.h>
#include<math.h>
using namespace std; 
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);   
	long int n,q,i,l,k,r,sum,s;
	cin>>n>>q;
	 long int a[n+1],val=2147483647,j,x,b[n+2][31]={0};
	for(i=0;i<n;i++){
		cin>>a[i];
		k=0;
		for (j =1;j<=31; j++){
        	if (a[i] & (1 << (j-1))){
        		b[i+1][30-k]+=b[i][30 -k]+1;
        		k++;
        	}
        	else{
        		b[i+1][30-k]+=b[i][30 -k];
        		k++;
        	}
 
        }
        	
	}
		
		for(x=0;x<q;x++){
		sum=0;
		cin>>l>>r;
		for(i=0;i<31;i++){
			s=b[r][i]-b[l-1][i];
			if(((r-l)+1)%2==0){
					if(s>=((r-l+1)/2))
						sum+=pow(2,30-i);	
				}
				else{
						if(s>=((r-l+1)/2)+1)
							sum+=pow(2,30-i);
				}
		}						
	cout<<val-sum<<"\n";	
	}
return 0;
}
     
