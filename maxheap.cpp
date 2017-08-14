#include<bits/stdc++.h>
#include<climits>
#define maxx 100000

using namespace std;
void swap(int  *a, int *b){
	int t=*a;
	*a=*b;
	*b=t;
}
class MaxHeap{
	int heap_size;
	int max_size;
	int *harr;
	public:
		MaxHeap(int capacity);
		
		int parent(int i) {return floor((i-1)/2);}
		
		int left(int i) {return 2*i+1;}
		
		int right(int i) {return 2*i+2;}
		
		void insertkey(int k);
		
		void deletekey(int i);
			
		void extractmax();
		
		int getmax() {return harr[0];}
		
		void decreasekey(int i,int val);
		
		void increasekey(int i,int val);
		
		void heapify(int i);
		
	};
MaxHeap:: MaxHeap(int c){
  heap_size=0;
  max_size=c;
  harr =new int[max_size];
}
void MaxHeap:: increasekey(int i, int val){
	harr[i]=val;
	while(i!=0 && harr[parent(i)]<harr[i]){
		swap(&harr[parent(i)],&harr[i]);
		i=parent(i);
	}
}
void MaxHeap:: insertkey(int k){
	if(heap_size==max_size) {
	 cout<<"overflow!...\n";
	 return ;
	 }
	 heap_size++;
	 int i=heap_size-1;
	// cout<<"i=="<<i<<endl;
	 harr[i]=k;
	 while(i!=0 && harr[parent(i)]<harr[i]){
	 	swap(&harr[parent(i)], &harr[i]);
	 	i=parent(i);
	 	}		
}
void MaxHeap:: extractmax(){
	if(heap_size<=0){
		cout<<"error!...\n";
		return ;
	 }
	 if(heap_size==1){
	   heap_size--;
	   return;
	 }
	 harr[0]=harr[heap_size-1];
	 heap_size--;
	 heapify(0);
}
void MaxHeap:: decreasekey(int i, int val){
	harr[i]=val;
	heapify(i);
}
void MaxHeap:: deletekey(int i){
	increasekey(i,maxx);
	while(i!=0 && harr[parent(i)]<harr[i]){
		swap(&harr[parent(i)], &harr[i]);
		i=parent(i);
	}
	extractmax();
}	
void MaxHeap:: heapify(int i){
	int l=left(i);
	int r=right(i);
	int largest=i;
	
	if(l<heap_size && harr[l]>harr[i])
		largest=l;
	if(r<heap_size && harr[r]>harr[largest])
			largest=r;
	if(largest!=i){
		swap(&harr[largest],&harr[i]);
		heapify(largest);
		}
	}			
int main(){
	MaxHeap heap(10);
	heap.insertkey(10);
	heap.insertkey(1);
	heap.insertkey(2);
	heap.insertkey(4);
	
	cout<<"heap max val"<<heap.getmax()<<endl;
	return 0;
}
		
