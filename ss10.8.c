#include<stdio.h>
int main(){
	
	int n;
	printf("moi ban nhap vao so dong ");
	scanf("%d", &n);
	int m;
	printf("moi ban nhap vao so cot ");
	scanf("%d", &m);
	int number[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("number[%d][%d]=",i,j);
			scanf("%d", &number[i][j]);
			
		}
	}
	for(int j=0;j<n;j++){
		for(int i=0;i<m;i++){
			for(int k=i+1;k<m;k++){
				if(number[i][j]>number[i][k]){
					int temp;
					temp=number[i][j];
					number[i][j]=number[i][k];
					number[i][k]=temp;
				}
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d \t", number[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
