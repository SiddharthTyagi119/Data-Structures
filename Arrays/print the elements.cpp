#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int arr[10];
    int n;
    
    cin>>n;
    cout<<"Total numbers  "<<n<<endl;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<"numbers are "<<arr[i]<<" "<<endl;
    }



	return 0;
}
