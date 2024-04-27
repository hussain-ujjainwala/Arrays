#include <iostream>

using namespace std;

int main(){

    int size;
    cout<<"Enter The Size of an array"<<endl;
    cin>>size;
    int array[size];
    int product = 1;

    for(int i=0; i<size; i++){
     
      cout<<"Enter The Element Of an array "<<endl;
      cin>>array[i];
      cout<<array[i]<<endl;

      product *= array[i];
    }

    cout<<"The product is";
    cout<<product;
}