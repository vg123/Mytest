// improvement over bubble sort just use gap
#include<iostream>
using namespace std;

void swap(int *a, int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}
int getNextGap(int gap)
{
	gap=(gap*10)/13;
	if(gap<1 ) return 1;
	return gap;
}
void sort(int arr[] , int n)
{	int gap=n;
	bool swapped =true;
	
	while(gap!=1 || swapped== true)
	{
		gap=getNextGap(gap);
		swapped=false;
		
		for(int i=0;i<n-gap;i++)
		{
			if(arr[i]>arr[i+gap])
			{
				swap(&arr[i],&arr[i+gap]);
				swapped=true;
			}
		}
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
	int arr[]={8,3,1,0,92,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	sort(arr,n);
	print(arr,n);

return 0;
}
