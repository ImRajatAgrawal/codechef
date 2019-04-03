//k-concatenation - january challenge 2018
#include<stdio.h>
#include<limits.h>
long long int maxsum(long long int a[],long long int n);
int main(){
long long int s,t,n,k,count,i,j,d,x,s1,s2,s3,max;
scanf("%lld",&t);
while(t--){
	j=0;
	count=0;
	s=0;
	scanf("%lld%lld",&n,&k);
	long long int a[3*n];
	for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
		if(a[i]>=0)
			s+=a[i];
		else 
		count++;	
	}
	if(count==0 && s==maxsum(a,n)){
		printf("%lld\n",(s*k));
	}
	else{
	s1=maxsum(a,n);
	if(s1==0){
		max=a[0];
		for(i=0;i<n;i++){
			if(a[i]>max)
				max=a[i];
		}
		printf("%lld\n",max);		
	}
	else{
	if(k==1)
		printf("%lld\n",s1);
	else{
	j=0;	
	for(i=0;i<(2*n);i++){
				a[i]=a[j];
				if(j==n-1)
					j=0;
				else
					j++;	
	}
	s2=maxsum(a,(2*n));
	j=0;
	for(i=0;i<(3*n);i++){
				a[i]=a[j];
				if(j==n-1)
					j=0;
				else
					j++;	
	}
	s3=maxsum(a,(3*n));
    if(k==2)
		printf("%lld\n",s2);	
	else if(k==3)
		printf("%lld\n",s3);
	else if(s2==s3)
		printf("%lld\n",s3);				
	else if((s3-s2)==(s2-s1)){
			d=s3-s2;
		x=s3+((k-3)*d);
		printf("%lld\n",x);
	}
	else if(s1>s2)
		printf("%lld\n",s1);
	else{
		x=s2+((s3-s2)*(k-2));
		printf("%lld\n",x);		
	}
	}		
	}	
}	
}
return 0;
}
long long int maxsum(long long int a[],long long int n){
	long long int i,x=0,y=INT_MIN;
	for(i=0;i<n;i++){
		x=x+a[i];
		if(y<x)
			y=x;
		if(x<0)
			x=0;	
	}
	return y;
}

