
//Modular GCD -August Challenge
#include<bits/stdc++.h>
using namespace std; 
#define MOD 1000000007
unsigned long long int mulmod(unsigned long long int a,unsigned long long int b,unsigned long long int mod)
{
    unsigned long long int res = 0; // Initialize result
    a = a % mod;
    while (b > 0)
    {
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
unsigned long long int power1(unsigned long long int x,unsigned long long int y,unsigned long long  int p){
 unsigned long long int res = 1ll;      // Initialize result
    x = (x % p);  // Update x if it is more than or 
            // equal to p
    while (y > 0){
        // If y is odd, multiply x with result
        if (y & 1)
            res = mulmod(res,x,p);
 
        // y must be even now
        y = (y>>1); // y = y/2
        x =mulmod(x,x,p);  
    }
    return res;
}
 /*unsigned long long int gcd(unsigned long long int a,unsigned long long int b){
    if (!b)
       return a;
    return gcd(b,a%b);	
}*/
unsigned long long int gcd(unsigned long long int a,unsigned long long int b){
    // Everything divides 0 
    if(a==0)
    	return b;
    if(b==0)
    	return a;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);	
       unsigned long long int t,c,n,a,b,x,y;
      cin>>t;
      while(t--){
      			cin>>a>>b>>n;
      			if(a==b)
      				cout<<(unsigned long long int)(2*power1(a,n,MOD))<<endl;
      			else{	
      				y=abs(a-b);
 					c=gcd(y,(power1(a,n,y)+power1(b,n,y))%y)%MOD;
 					cout<<c<<endl;
 				}	     			
      }			
       return 0;
}
