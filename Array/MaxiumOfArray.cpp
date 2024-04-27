


#include<iostream>

using namespace std;

int main(){

    const int n = 5; // Assuming n is the size of the array
    int array[n] = {1, 2, 3, 4, 5};

    int mx = array[0];

    for(int i = 1; i < n; i++){

        if(mx < array[i]){
            mx = array[i];
        }

    }

    cout << "The maximum element is: " << mx << endl;

    return 0;
}