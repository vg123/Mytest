#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
int maxia(int arr[], int n)
{	int max=arr[0];
	for(int i=1;i<n;i++)
	{
		if(max<arr[i])
			max=arr[i];
	}
return max;	
}
int minia(int arr[], int n)
{
	int min=arr[0];
	for(int i=1;i<n;i++)
	{
		if(min>arr[i])
			min=arr[i];
	}
return min;	
}
void sort(int arr[], int n)
{
	int max=maxia(arr,n);
	int min=minia(arr,n);
	int range=max-min+1;
	vector < int >b[range]; 
	//memset(b,0,sizeof(b));
	for(int i=0;i<n;i++)
	{
		b[arr[i]-min].push_back(arr[i]);	
	}
	int k=0; 
	
	for(int i=0;i<range;i++)
	{	
	vector< int >::iterator it;
	for(it=b[i].begin();it!=b[i].end();++it)
	    arr[k++]=*it;
	}
}
void print(int arr[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int arr[]={8,3,1,1,9,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	sort(arr,n);
	print(arr,n);

return 0;
}
