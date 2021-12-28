#include<iostream>
using namespace std;

void printarray(int arr[], int size){
  cout<<"Printing the array "<<endl;
    
    //print the array
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" "<<endl;
   }
  cout<<"printing done "<<endl;
}
int main(){

  int c[15]= {2,7};
  int n=15;
  printarray(c,15);
return 0;
}
