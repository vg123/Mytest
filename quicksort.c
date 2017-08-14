#include<stdio.h>
void swap(int *a, int *b){
	int t=*a;
	*a=*b;
	*b=t;
}
int part(int a[], int lo ,int  hi){
	int pivot=a[hi-1];
	int j,i=lo-1;
	for(j=lo;j<hi;j++){
	    if(a[j]<=pivot){
			i++;
			swap(&a[i],&a[j]);
			}
	   swap(&a[i+1],&a[hi]);		
	}
	return i+1;
}
void  quick_sort(int arr[] ,int lo, int hi){
	if(lo<hi){
		int p=part(arr,lo,hi);
		quick_sort(arr,lo,p-1);
		quick_sort(arr,p+1,hi);
	}
}
void print(int arr[], int n){
	int i;
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");	
}
int main(){
	int arr[]={170,45,98,2,202,55,35};
	int n=sizeof(arr)/sizeof(arr[0]);
	quick_sort(arr,0,n);
	print(arr,n);
	
	return 0;
}		
