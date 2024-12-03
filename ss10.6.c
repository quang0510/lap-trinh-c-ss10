#include<stdio.h>
int main(){
	
	int number[9]={1,45,7,5,8,9,3,6,5};
	int lenght=sizeof(number)/sizeof(int);
	int n;
	int flag=-1;
	printf("moi ban nhap vao 1 so nguyen bat ki ");
	scanf("%d", &n);
	for(int i=0;i<lenght;i++){
		if(number[i]==n){
			printf("phan tu %d nam o vi tri thu %d trong mang\n ", n,i);
			flag=1;
			
			
		}
	}
	if(flag==-1){
		printf("phan tu %d khong co trong mang ", n);
	}
	
	return 0;
}
