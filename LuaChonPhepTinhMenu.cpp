#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int a,b,c,result;

	int n=1,choose;
	while (n==1){
	printf("CALCULATOR \n");
       
       printf("1. Nhap 3 so \n");
       printf("2. Tong 3 so \n");
       printf("3. trung binh cong 3 so \n");
       printf("4. so nho nhat \n");
       printf("5. so lon nhat \n");
       printf("6. Thoat \n");
       printf("Moi ban lua chon: ");
	scanf("%d",&choose);
	switch(choose)
	{
		case 1:
			printf("Moi ban nhap vao 3 so. \n");
	printf("So thu nhat: ");
	scanf(" %d",&a);
	printf("So thu hai: ");
	scanf(" %d",&b);
	printf("So thu ba: ");
	scanf(" %d",&c);
		break;
		case 2:
		result=a+b+c;
		printf("Tong 3 so %d,%d va %d la: %d \n",a,b,c,result);
		break;
		case 3:
		result=(a+b+c)/3;
		printf("Trung binh cong 3 so %d,%d va %d la: %d \n",a,b,c,result);
		break;
		case 4:
			if(a<b&&a<c){
		result=a;}
		else if(b<a&&b<c){
		result=b;}
		else{
			result=c;
		}
		printf("So lon nhat trong 3 so %d,%d va %d la: %d \n",a,b,c,result);
		break;
		case 5:
			if(a>b&&a>c){
		result=a;}
		else if(b>a&&b>c){
		result=b;}
		else{
			result=c;
		}
		printf("So nho nhat trong 3 so %d,%d va %d la: %d \n",a,b,c,result);
		break;
		case 6:
		return 0; 
		break;
	}
	}
	
return 0;
}
