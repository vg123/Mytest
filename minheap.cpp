#include<stdio.h>
#include<iostream>
#include<climits>
#define Min_Val -1000000
using namespace std;

void swap( int *a, int *b){
	int t=*a;
	*a=*b;
	*b=t;
	}
class MinHeap{
	int *harr;
	int Max_Size;
	int Heap_Size;
	
public:
	MinHeap(int capacity);
	
	void MinHeapify(int );
	
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
void MinHeap:: InsertKey(int k)
{
	if(Heap_Size==Max_Size)
	{
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
void MinHeap:: DeleteKey(int i){
	DecreaseKey(i,Min_Val);
	while(i!=0 && harr[parent(i)]>harr[i]){
		swap(&harr[parent(i)],&harr[i]);
		i=parent(i);
	}
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
int main(){
	MinHeap heap(10);
	int x;
	heap.InsertKey(10);
	heap.InsertKey(4);
	heap.InsertKey(6);
	heap.InsertKey(7);
	
	heap.DeleteKey(4);
	//heap.DecreaseKey(6,0);
	cout<<"minval ="<<heap.GetMin()<<endl;
	
	return 0;
}
