#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int arr[9];
    int size= sizeof(arr)/sizeof(int);
    int n;
    int currentmax=arr[0];
    int currentmin=arr[0];
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i]>currentmax)
        {
            currentmax=arr[i];
        }
        if(arr[i]<currentmin)
        {
            currentmin=arr[i];
        }

    }
    cout<<"Max value "<<currentmax<<endl;
    cout<<"Min value "<<currentmin<<endl;
	return 0;
}
