#include <iostream>
#include <limits.h>
using namespace std;


void minmax(int arr[], int size){
	int max=INT_MIN;
	int min=INT_MAX;
	/*If the size of array is 1*/
	if(size==1)
	{
		cout<<"Minimum is: "<<arr[0]<<endl<<"Maximum is: "<<arr[0];
	}


	/*If the size of array is more than 1*/
	else
	{
		for(int i=0; i<size; i++){
			if(arr[i]>max)
				max=arr[i];
		}
	
		for(int i=0;i<size; i++)
		{
			if(arr[i]<min)
				min=arr[i];
		}
		cout<<"Minimum is: "<<min<<endl<<"Maximum is: "<<max;
	}
}


int main()
{
	int size;
	cin>>size;
	int arr[size];
	for(int i=0; i<size; i++){
		cin>>arr[i];
	}
	minmax(arr, size);

}