#include<iostream>
using namespace std;

int main(){

    int size;

    cin>> size;
   int array[size];
   int  sum = 0;

   
    for(int i =0;  i< size; i++){
    
     
        cin>>array[i];
        cout<<array[i]<<endl;
        sum+= array[i];


    }

   cout<<sum;
    

//  To print the sum of n natural numbers 
//     int num;
//     cout<<"Input the number to calculate the sum for"<<endl;

//     cin>>num;
//     int sum =0;

//     for(int i=1; i<=num; i++){

//         cout<<i<<endl;
//         sum+=i;

//     }

//     cout<<"The sum of given number is"<<endl;
//     cout<<sum;



}