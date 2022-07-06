#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
	int start = 0;
	int end = size - 1;
	int mid = start + (end-start)/2;
	while(start<=end){
		if(key == arr[mid])
		{
			return mid;
		}
		if(key >= arr[mid])
		{
			start = mid+1;
		}
		else
		{
			end = mid-1;
		}
		mid = start + (end - start)/2;
	}
	return -1;
}


int main()
{
	int size;
	cin>>size;
	int key;
	int arr[size];
	for(int i=0; i<size; i++){
		cin>>arr[i];
	}
	cin>>key;
	cout<<"Index of "<<key<<" is: "<<binarySearch(arr, size, key);

}