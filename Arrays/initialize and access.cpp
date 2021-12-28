#include<iostream>
using namespace std;

int main(){
    
    //declare
    int a[22];
    
    //accessing an array
    cout <<  "Value at 21 index - "<<  a[21] <<endl;
    
    //initializing an array
    int b[3]= {2,4,5};
    
    //accessing an array
    cout <<  "Value at 2 index - "<<  b[2] <<endl;
    
    
    cout<< endl << "Everything is fine"<< endl <<endl;
    
    
    int c[15]= {2,7};
    int n=15;
    
    cout<<"Printing the array "<<endl;
    
    //print the array
    for(int i=0;i<n;i++)
    {
        cout<<c[i]<<" ";
    }
    
    //initializing all location with 0 
    int d[10]={0};
    
    n=10;
    
    cout<<"Printing the array "<<endl;
    
    //print the array
    for(int i=0;i<n;i++)
    {
        cout<<d[i]<<" ";
    }
    
    
    return 0;
}
