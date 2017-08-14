#include<stdio.h>
#include<stdlib.h>
int get_max(int arr[] , int n){
	int i,max=arr[0];
	for(i=1;i<n;i++){
		if(max<arr[i])
			max=arr[i];
		}
	return max;
}
void count_sort(int arr[], int n , int exp)
{
	int c[11]={0};
	int b[n],i;
	for(i=0;i<n;i++){
		c[(arr[i]/exp)%10]++;
		}
	for(i=1;i<n;i++)
		c[i]+=c[i-1];	
	for(i=0;i<n;i++)
	{
		b[c[(arr[i]/exp)%10]-1]=arr[i];
		c[(arr[i]/exp)%10]--;
	}
	for(i=0;i<n;i++)
		arr[i]=b[i];	
}
void radix_sort(int arr[], int n)
{
	int exp,m=get_max(arr,n);
	
	for(exp=1;m/exp>0;exp*=10)
		count_sort(arr,n,exp);
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
	radix_sort(arr,n);
	print(arr,n);
	
	return 0;
}	
