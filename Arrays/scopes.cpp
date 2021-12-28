#include<iostream>
using namespace std;

void updatearr(int arr[], int n){
    cout<<endl<<"inside the function"<<endl;
    //printing the array

    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    
    cout<<"going back to the main function"<<endl;
}



int main(){
    int arr[3]={1,2,3};
    
    updatearr(arr,3);
    
    //printing the array;
    cout<<endl<<"printing in the main function "<<endl;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
        
        
    }
    cout<<endl;
    
    return 0;
    
}

    
 
