#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int a,b,LCM; 
	printf("Hay nhap vào 2 so. \n");
	printf("Hay nhap so thu nhat: ");
	scanf("%d",&a);
	printf("Hay nhap so thu hai: ");
	scanf("%d",&b);
	for(int i=1;i<=a*b;i++)
{
	if(i%a==0&&i%b==0){
	
	   LCM=i;
	   break;
}}
	printf("Boi chung nho nhat cua 2 so %d va %d la: %d",a,b,LCM);

	
	
return 0;
}
