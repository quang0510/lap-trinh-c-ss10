#include<stdio.h>
int main(){
	int number[]={1,2,3,4,5,6,7,8,9};
	int size =sizeof(number)/sizeof(int);
	int search = 6;
	int flag = -1;
	for(int i=0;i<size;i++){
		if(number[i]==search){
		    flag = i;
			break;
		} 
	}
	if(flag!=-1){
		printf("phan tu nam tai vi tri %d", flag);
	} else{
		printf("phan tu khong nam trong mang");
	}
	return 0;
}
