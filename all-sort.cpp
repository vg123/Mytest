#include<iostream>
#define Min_Val -1000000
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
 				// nn=i;
 				}
 			}	
 		n=n-1;
 		}
 	cout<<"cnt="<<cnt<<endl;			
}
void bubble(int *arr,int n){
	int cn=0;
	for(int  i=0;i<n;i++)
	{
		for(int j=1;j<n;j++){
			cn++;
			if(arr[j-1]>arr[j])
			    swap(arr[j-1],arr[j]);
			  }
		}
	cout<<"no of times loop runs="<<cn<<endl;		    
}
void selection1(int *arr,int n){
	for(int i=0;i<n-1;i++){
		int imin=i;
		for(int j=i+1;j<n;j++){
			if(arr[imin]>arr[j])
				imin=j;
			}
		if(imin!=i) swap(&arr[imin], &arr[i]);
		}
}
class MinHeap{
	int *harr;
	int Max_Size;
	int Heap_Size;
	
public:
	MinHeap(int capacity);
	
	void MinHeapify(int);
	
	int parent(int i){return (i-1)/2;}
	
	int left(int i)	{return 2*i+1;}
	
	int right(int i) {return 2*i+2;}
	
	void ExtractMin();
	
	void DecreaseKey(int i,int val);
	
	int GetMin() ;//{ return harr[0];}
	
	void DeleteKey(int i);
	
	void InsertKey(int k);
	};

MinHeap:: MinHeap(int capacity){
	Max_Size=capacity;
	Heap_Size=0;
	harr = new int[capacity];
	}
void MinHeap:: InsertKey(int k){
	if(Heap_Size==Max_Size){
		cout<<"OverFlow!\n";
		return ;
		}
	Heap_Size++;			
	int i=Heap_Size-1;
	harr[i]=k;
	while(i!=0 && harr[parent(i)]>harr[i]){
		swap(&harr[parent(i)], &harr[i]);
		i=parent(i);
		}
}
void MinHeap:: DecreaseKey(int i, int val){
	harr[i]=val;
	while(i!=0 &&  harr[parent(i)]>harr[i]){
			swap(&harr[parent(i)], & harr[i]);
			i=parent(i);
			}		
 }	
void MinHeap:: ExtractMin(){
	if(Heap_Size<=0){
		cout<<"No Elements!...\n";
		return ;
		}
	if(Heap_Size==1){
		Heap_Size--;
		return ;
		}
	//int ans=harr[0];
	harr[0]=harr[Heap_Size-1];
	Heap_Size--;
	MinHeapify(0);
}	
int MinHeap:: GetMin(){
	if(Heap_Size==0) {
		cout<<"no!...";
		return 0;
		}
	return harr[0];
}		
void MinHeap:: DeleteKey(int i)
{
	DecreaseKey(i,Min_Val);
	ExtractMin();
}	 
void MinHeap:: MinHeapify(int i){
	int l=left(i);
	int r=right(i);
	int smallest=i;
	if(l<Heap_Size && harr[l]<harr[i])
		smallest=l;
	if(r<Heap_Size && harr[r]<harr[smallest])
		smallest=r;
	if(smallest!=i){
		swap(&harr[smallest], &harr[i]);
		MinHeapify(smallest);
		}
}			
void heapsort(int *arr,int n){
	MinHeap heap(n);
	for(int i=0;i<n;i++){
		heap.InsertKey(arr[i]);
		}
	for(int i=0;i<n;i++){
		cout<<heap.GetMin()<<" ";
		heap.ExtractMin();
		}
	cout<<endl;	
	}						
int main(){
	int arr[]={9,4,1,6,2,88,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	//bubble1(arr,n);
	//bubble(arr,n);
	//selection1(arr,n);
	heapsort(arr,n);
/*	cout<<"-sort\n ";
 	for(int i=0;i<n;i++)
 		cout<<arr[i]<<" ";
 	cout<<endl;*/
 	
return 0;
}	
