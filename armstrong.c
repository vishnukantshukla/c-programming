#include<stdio.h>
#include<math.h>

void main(){
	int i=1,n,m,o,d,count=0,sum=0,l_v;
	printf("Armstrong Number between 1 and 10000 are:");	
	
	for(i;i<=10000;i++){	
	n=o=m=i;	
	
		
	
	while(n>0){
		n/=10;
		count+=1;	
	}
	while(m>0){
		l_v=m%10;
		sum=sum+pow(l_v,count);
		m/=10;		
	}
	if (sum==o){
		printf("%d \n",sum);
	}
	else{
		break;
	}
	}
		
}
