#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int arr[100];
    int size= sizeof(arr)/sizeof(int);
    float n;
    float avg=0;
    float sum=0;
    cin>>n;
    cout<<endl;
    cout<<"Total numbers are  "<<n<<endl;;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
        sum+=arr[i];

    }
    avg=sum/n;
    cout<<"sum "<< sum<<endl;
    cout<<"avg "<< avg<<endl;
	return 0;
}
