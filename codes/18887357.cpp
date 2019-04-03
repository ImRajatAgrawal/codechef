//Majin vegeta -quick code 2018
#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if (n <= 1)  
    	return false;
    if (n <= 3)  
    	return true;
    if (n%2 == 0 || n%3 == 0) 
    	return false;

    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;

    return true;
}
long long int factorize(long long int  n){
   long long int count = 0,count1=0; 
    while (!(n % 2)) {
        n >>= 1;
        count++;
    }
    if (count)
        count1++;
    for (long long int  i = 3; i <= sqrt(n); i += 2) {
        count = 0;
        while (n % i == 0) {
            count++;
            n = n / i;
        }
        if (count)
            count1++;
    }
    if (n > 2)
        count1++;
      return count1;  
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long int t,i,j,n,m,c,k;
	cin>>t;
	while(t--){
		c=0;
		cin>>n>>m;
		for(i=n;i<m;i++){
				if(isPrime(i))
					c+=1;
				else{
						k=factorize(i);
						c+=k;		
				}	
			}
		cout<<c<<endl;		
	}
   return 0;
}
