#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char a[]="abcdefghi"; //{'a','b','c','d','e','\0'};

    cout<< a <<endl;
    char b[100];
    cin>>b;

    cout<<strlen(a)<<endl; //number of visible ch.
    cout<<sizeof(a)<<endl; // +1 bcoz of null character


    return 0;
}
