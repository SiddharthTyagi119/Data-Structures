#include<iostream>
#include <cstring>
using namespace std;

int main(){
    char a[1000]= "apple";
    char b[1000];

    //calc Length
    cout<< strlen(a)<<endl;

    //strcpy
    strcpy(b,a);
    cout<< b <<endl;

    //compare
    cout<< strcmp(a,b) <<endl;

    //concatenate
    char web[]="wwww";
    char domain[]= "codingminutes.com";

    cout << strcat(web,domain) << endl;

    return 0;
}
