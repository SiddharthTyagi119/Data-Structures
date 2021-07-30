#include<iostream>
#include<vector>
using namespace std;

int main(){
    //demo vector
    vector<int> arr={1,2,10,12,15};
    
    //pop back
    arr.pop_back();

    //push back
    arr.push_back(7);

    //print all the elements
    for(int i=0;i<arr.size();i++){
        cout<< arr[i]<<" , "<<endl;
    } 

    //size of vector 
    cout<<"number of elements "<<arr.size()<<endl;

    //capacity of vector
    cout<<"size of vector "<<arr.capacity()<<endl;

    return 0;
}

//fill constructor
//vector <int> arr(10,7);
// it will print 10 seven values
