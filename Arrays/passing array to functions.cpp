#include<iostream>
using namespace std;

void printarray(int * arr){
    cout<<"size of array in function "<<sizeof(arr)<<endl;
    cout<<"size of int in function "<<sizeof(int)<<endl;
    int n= sizeof(arr)/sizeof(int);
    cout<<"no of elements in function "<<n<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

}
int main(){
    int arr[]={1,2,3,4,5,6};
    int n= sizeof(arr)/sizeof(int);
    cout<<"no of elements in main "<<n<<endl;
    cout<<"size of array in main "<<sizeof(arr)<<endl;
    cout<<"size of int in main "<<sizeof(int)<<endl;

    //print the elements of array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    //calling the function
    printarray(arr);


    return 0;
}


// in main we actually have an array
//in function we only have address of the array and these addresses are store
//in the form of pointer and these variables have a size of 8 bytes
