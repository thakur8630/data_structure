#include<stdio.h>
int linear_search();
int main(){
	linear_search();
	
	return 0;
	
}
int linear_search(){
	int range,arr[10],i,j;
	printf("enter the range of array :\t");
	scanf("%d",&range);
	printf("enter your elements in the array....");
	for(i=0;i<range;i++){
		scanf("%d",&arr[i]);
	}
	int search;
	printf("enter the element to be search in the array....");
	scanf("%d",&search);
	for(i=0;i<range;i++){
	
	if(arr[i]==search){
		printf("elements has found...%d",search);
		break;
	}
	if(i==range){
		printf("elements has not found");
	}

}
}

