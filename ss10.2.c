#include<stdio.h>
int main(){
	
	int number[5]={2,1,8,5,9};
	for(int i=0;i<5;i++){
		for(int j=0;j<5-1-i;j++){
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
	
	return 0;
}
