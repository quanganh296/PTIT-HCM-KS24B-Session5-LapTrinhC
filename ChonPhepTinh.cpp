#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int a,b,result;
	printf("Moi ban nhap vao 2 so. \n");
	printf("So thu nhat: ");
	scanf(" %d",&a);
	printf("So thu hai: ");
	scanf(" %d",&b);
	int n=1,choose;
	while (n==1){
	printf("CALCULATOR \n");

       printf("1. Tong 2 so \n");
       printf("2. Hieu 2 so \n");
       printf("3. Tich 2 so \n");
       printf("4. Thuong 2 so \n");
       printf("5. Thoat \n");
       printf("Moi ban lua chon: ");
	scanf("%d",&choose);
	switch(choose)
	{
		case 1:
		result=a+b;
		printf("tong 2 so %d va %d la: %d \n",a,b,result);
		break;
		case 2:
		result=a-b;
		printf("hieu 2 so %d va %d la: %d \n",a,b,result);
		break;
		case 3:
		result=a*b;
		printf("tich 2 so %d va %d la: %d \n",a,b,result);
		break;
		case 4:
		result=a/b;
		printf("thuong 2 so %d va %d la: %d \n",a,b,result);
		break;
		case 5:
		return 0; 
		break;
	}
	}
	
return 0;
}
