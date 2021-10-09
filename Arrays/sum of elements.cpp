#include <iostream>
using namespace std;

int main() {
	// your code goes here

    int marks[100];
    int n;
    int sum=0;
    cin>>n;
    cout<<"Total Number of elements are "<<n;
    cout<<endl;
    

    for(int i=0;i<n;i++){
        cin>>marks[i];
    }
     cout<<"number 1-  "<<marks[0]<<endl;
     cout<<"number 2-  "<<marks[1]<<endl;
     cout<<"number 3-  "<<marks[2]<<endl;
     cout<<"number 4-  "<<marks[3]<<endl;

    for(int i=0;i<n;i++){
        sum= sum+marks[i];
        
    }
    cout<<"sum of elements ";
    cout<<sum;
    cout<<endl;


	return 0;
}

