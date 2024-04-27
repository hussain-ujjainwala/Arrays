//To find the minimum element in an array
#include<iostream>

using namespace std;

int main(){

    const int n = 5;

    int array[n]={1,2,3,4,5};

    int mx= array[0];

    for(int i=0; i< n ; i++){
        if(mx<array[i]){
            mx=array[i];
        }
    }

    int sl=0;
    for(int i=0; i<n; i++){
        if(sl<array[i] && array[i]!=mx){
            sl=array[i];
        }
    }
    cout<<"The Secondlargest element in array is"<<sl<<endl;

}