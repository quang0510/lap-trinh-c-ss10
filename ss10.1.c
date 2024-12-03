#include<stdio.h>
int main(){
	
	int number[5]={2,5,1,7,8};
	int n;
	printf("moi ban nhap phan tu bat ki ");
	scanf("%d", &n);
	for(int i=0;i<5;i++){
		if(n==number[i]){
			printf("phan tu %d co trong mang o vi tri %d ", n,i);
			
		}else{
			printf("phan tu %d khong co trong mang ", n);
			break;
		}
	}
	return 0;
}
