#include<stdio.h>
void swap(int *a, int *b){
int t=*a;
*a=*b;
*b=t;
}/*bad algo
sort(int a[],int n){
	int i,j,t;
	for(i=1;i<n;i++){
		for(j=0;j<i;j++){
			if(a[j]>a[i]) swap(&a[j],&a[i]);	
			}
		}	
}*/
insertion(int a[], int n){
	int i,key,j;
	for(i=1;i<n;i++){
		key=arr[i];
		j=i-1;
		
		while(j>=0 && arr[j]>key){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
}
//binary insertion sort...
int binary_search( int a, int val ,int low ,int high){
	if(low>=high) return val>a[low]?low+1:low;
	int mid=low+(high-low)/2;
	
	if(val==a[mid]) return mid+1;
	
	if(val>a[mid])  return binary search(a,val,mid+1,high);
	return binary search(a,val,low,mid-1);
}
selection_sort(int a,int n){
	int i,j,selected,loc;
	for(i=1;i<n;i++){
		selected=a[i];
		j=i-1;
		
		loc=binary_search(a,selected,0,j);
		
		while(j>=loc){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=selected;
	}
}	
}
	
int main(){
	int i,a[]={12,11,13,5,6};
	sort(a,5);
	for(i=0;i<5;i++) printf("%d ",a[i]);
	printf("\n");
	
	return 0;
}
