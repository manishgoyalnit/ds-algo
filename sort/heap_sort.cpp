#include <iostream>
using namespace std;
void heapify(int arr[],int n,int i)
{int l=2*i+1;
int r=2*i+2;
int large=i;
if(l<n && arr[l]>arr[large])
large=l;
if(r<n && arr[r]>arr[large])
large=r;
if(large!=i)
{int x=arr[i];
arr[i]=arr[large];
arr[large]=x;
heapify(arr,n,large);
}
}
void heapsort(int arr[],int n)
{
for(int i=n/2-1;i>=0;i--)
heapify(arr,n,i);
for(int i=n-1;i>=0;i--)
{swap(arr[i],arr[0]);
heapify(arr,i,0);
}
}
void printArray(int arr[], int n) 
{ 
    for (int i=0; i<n; ++i) 
        cout << arr[i] << " "; 
    cout << "\n"; 
} 

int main() {
 int arr[]={3,2,5,1,5,6,3};
 int n=sizeof(arr)/sizeof(int);
 heapsort(arr,n);
 printArray(arr,n);
 }
