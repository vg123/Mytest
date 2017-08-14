#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void sort(float arr[], int n)
{
	vector<float> mat[n];
	for(int i=0;i<n;i++)
	{
		int t=n*arr[i];
		mat[t].push_back(arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		sort(mat[i].begin(), mat[i].end());
	}
	int indx=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<mat[i].size();j++)
		{
			arr[indx++]=mat[i][j];
		}
	}
}
void print(float arr[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	float arr[]={.1,.222,.1212,0.9,.001,.1212,.003,.000034,.6};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	sort(arr,n);
	print(arr,n);
return 0;
}

