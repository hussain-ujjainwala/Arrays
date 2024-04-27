#include<iostream>

using namespace std;

int main()
{

    int array[] = {1, 2, 3, 4, 5};

    int n= sizeof(array)/4;
    int i =0 ;
    int j= n-1 ;
    while(i<j){
        swap(array[i],array[j]);
        i++;
        j--;
    }
     for(int i=0; i<n; i++){
        cout<<array[i]<<endl  ;
     }


}