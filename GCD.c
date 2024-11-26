#include<stdio.h>
int main(){
	int m,n,rem,hcf,a,b;
	printf("Enter the first value:");
	scanf("%d",&m);
	printf("Enter the second value");
	scanf("%d",&n);
	if(m<0||n<0){
	printf("Error");
}
	else{
		a=m;
		b=n;
	while(b!=0){
		rem=a%b;
		a=b;
		b=rem;
		
   }
   hcf=a;
 printf("The HCF is %d",hcf);
}
	return 0;
}