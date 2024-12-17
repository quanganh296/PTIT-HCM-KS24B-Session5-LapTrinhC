#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int a,b,GCD; 
	printf("Hay nhap vào 2 so. \n");
	printf("Hay nhap so thu nhat: ");
	scanf("%d",&a);
	printf("Hay nhap so thu hai: ");
	scanf("%d",&b);
	for(int i=1;i<=a*b;i++)
{
	if(a%i==0&&b%i==0)
	   GCD=i;
}
	printf("Uoc chung lon nhat cua 2 so %d va %d la: %d",a,b,GCD);
	 
	
	
return 0;
}
