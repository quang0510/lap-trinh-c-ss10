#include<stdio.h>
int main(){
	
	int number[5]={4,3,7,6,8};
	for(int i=0;i<5;i++){
		int min=i;
		for(int j=i+1;j<5;j++){
			if(number[j]<number[min]){
				min=j;
			}
		}
		if(min!=i){
		int temp;
		temp=number[min];
		number[min]=number[i];
		number[i]=temp;
	}
	}
	for(int i=0;i<5;i++){
		printf("%d\t", number[i]);
	}
	
	return 0;
}
