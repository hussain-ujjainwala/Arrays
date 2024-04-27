// #include<iostream>

// using namespace std;

// int main(){


//     int n;
//     cout<<"Enter the size oof an array"<<endl;
//     cin>>n;
//     int array[n];
//     cout<<"Enter the Element one by one "<<endl;
//     for(int i = 0 ; i < n; i++){
//         cin>>array[i];
//     }
//     cout<<"The Elements of an array are as follows"<<endl;
//     for(int i =0 ; i < n ; i++){
//         cout<<array[i]<<endl;
//     }

//     return 0 ;
// }


#include<bits/stdc++.h>

using namespace std;

int main()
{
    string Name[]= {  "Alifiya" , "Tasneem" , "khojema" , "Hussain"};

    int arraySize =  sizeof(Name) / sizeof(Name[0]);

       for(int i =0 ; i < arraySize; i++){
        cout<<Name[i]<<endl;
       }


       return 0 ;
    }
