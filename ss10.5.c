#include<stdio.h>
int main(){
	
	int number[5]={321,435,1245,523,58};
	int lenght=sizeof(number)/sizeof(int);
	for(int i=0;i<5;i++){
		for(int j=0;j<5-1;j++){
			if(number[j]>number[j+1]){
				int temp;
				temp=number[j];
				number[j]=number[j+1];
				number[j+1]=temp;
			}
		}
	}
	for(int i=0;i<5;i++){
		printf("%d\t", number[i]);
	}
	int n;
	printf("\n moi ban nhap so nguyen bat ki ");
	scanf("%d", &n);
	int start=0;
	int end=lenght-1;
	int mid;
	while(start<=end){
		mid=(start+end)/2;
		if(number[mid]>n){
			end=mid-1;
		}else if(number[mid]<n){
			start=mid+1;
		}else{
			printf("phan tu %d co vi tri la %d ", n, mid);
			break;
		}
	}
	
	return 0;
}
