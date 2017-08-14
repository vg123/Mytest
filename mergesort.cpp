#include<iostream>

using namespace std;
void sort(int arr[] ,int left, int mid , int right)
{	
	int n1=mid-left+1;
	int n2=right-mid;
	int i,j,k,L[n1],R[n2];
	for(i=0;i<n1;i++)
		L[i]=arr[left+i];
	for(i=0;i<n2;i++)	
		R[i]=arr[mid+i+1];

	i=j=0;
	k=left;
	while(i<n1 && j<n2)
	{
		if(L[i]<=R[j])
		{	
			arr[k]=L[i];
			i++;
		}
		else
		{
			arr[k]=R[j];
			j++;
		}
		k++;
	}
	while(i<n1)
	{
		arr[k++]=L[i++];
	}
	while(j<n2)
	{
		arr[k++]=R[j++];
	}
	
}
void part(int *arr, int left, int right)
{
	if(left<right)
	{	int mid=left+(right-left)/2;
		part(arr,left,mid);
		part(arr,mid+1,right);
		sort(arr,left,mid,right);
	}
}
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
	 cout<<arr[i]<<" ";
    cout<<endl;
}
int main()
{
	int arr[]={5,4,3,1,2,9};
	int n=sizeof(arr)/sizeof(arr[0]);
	part(arr,0,n-1);
	print(arr,n);
	
return 0;
}

