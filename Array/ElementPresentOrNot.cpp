

// To find the element is present in array or not 

#include<iostream>

using namespace std;

int main(){

  int size;
  cout<<"Enter the Size of an Array"<<endl;
  cin>>size;
  int array[size];


  
  for(int i=0; i< size;i++){
    cin>>array[i]; 
  }

  int x;
  cout<<"Enter the element"<<endl;
  cin>>x;

  bool found = false;
  for(int i=0; i<size; i++){
      if ( array[i]== x){
        found = true;
        break;

      
        
  }
  
  
  }
  


     if(found==true) cout<<x<<"is present"<<endl;
  else cout<<x<<"is not present"<<endl;
 

}
 
