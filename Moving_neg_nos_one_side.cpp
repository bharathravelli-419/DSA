#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	int positive =n-1;
	int negative=0;
	int temp;
	while(negative<positive)
	{
	    if(arr[negative]>=0)
	    {
	        temp= arr[negative];
	        arr[negative] = arr[positive];
	        arr[positive] = temp;
	        positive--;
	    }
	    else{
	        negative++;
	    }
	}
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";

	return 0;
}
