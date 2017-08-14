#include<stdio.h>
#define ul unsigned long
int max(int *arr,int n){
	int i,max=arr[0];
	for(i=1;i<n;i++){
		if(max<arr[i]) max=arr[i];
		}
	return max;
}
void count_sort(int a[],int n){
	int len=max(a,n)+1;
	int c[len],i;
	int b[n+1];
	for(i=0;i<len;i++)
		c[i]=0;
	for(i=0;i<n;i++)
		c[a[i]]++;
	for(i=1;i<n;i++)
		c[i]+=c[i-1];
	for(i=0;i<n;i++){
		b[c[a[i]]-1]=a[i];
		c[a[i]]--;
		}
	for(i=0;i<n;i++)
		a[i]=b[i];	
	}				
int main(){
	int i,j,a[9];
	int n;
	scanf("%d",&n);
	for(i=0;i<n;i++) 
		scanf("%d",&a[i]);
		
	count_sort(a,n);
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
	
	return 0;
}							
