#include<stdio.h>
int missing_number(int arr[],int n){
	int i,mid,low=0,high=n-1;
	if(arr[n-1]==n)
		printf("No element is missing\n");
	if(arr[0]!=1)
	return 1;
	
		while((high-low)>1)
		{
			mid=(low+high)/2;
			if(arr[low]-low!=arr[mid]-mid)
			high=mid;
			else if(arr[high]-high!=arr[mid]-mid)
			low=mid;
		}
		return arr[low]+1;
}

void main(){
	int n,i,missing_no;
	printf("Enter the size of array\n ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements in the array ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	missing_no=missing_number(arr,n);
	printf("%d is the missing number ",missing_no);
}
