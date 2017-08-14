#include<iostream>
using namespace std;
void swap(int *a,int *b){
	int t=*a;
	*a=*b;
	*b=t;
}
void bubble1(int *arr,int n){
 	bool swapped=true;
 	int nn,cnt=0;
 	while(swapped==true){
 		swapped=false;
 		for(int i=1;i<n;i++){
 			cnt++;
 			if(arr[i-1]>arr[i]){
 				swap(&arr[i-1],&arr[i]);
 				swapped=true;
 				 nn=i;
 				}
 			}	
 		n=n-1;
 		}
 	cout<<"cnt="<<cnt<<endl;			
}
void bubble(int *arr,int n){
	int cn=0;
	for(int  i=0;i<n;i++){
		for(int j=1;j<n;j++){
			cn++;
			if(arr[j-1]>arr[j])
			    swap(arr[j-1],arr[j]);
			  }
		}
	cout<<"cn"<<cn<<endl;		    
}
int main(){
	int arr[]={9,4,1,6,2,88,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	bubble1(arr,n);
	//bubble(arr,n);
	cout<<"buuble-sort\n ";
 	for(int i=0;i<n;i++)
 		cout<<arr[i]<<" ";
 	cout<<endl;
 	
return 0;
}	
