#include <iostream>
#include <cmath>
using namespace std;


void totalsumofarry(int arr[], int length){
    int sum = 0;
    for(int i=0;i<length;i++){
        sum += arr[i];
    }
    
   cout<<"Total sum of array is: "<<sum<< endl;
}


int main() {
    //BASICS:
     //Declare
    int me[2]={0}; //make all values 0
    int me1[2]={-1}; //make 1 st value -1, rest 0
    int me1[2];//print direcly then garbage value will be printed
    string name[5];
    
    //Intialization ways
    int yash[7]={1,2,3,4,5,6,7};
    int yc[]={1,2,3}

    // Write C++ code here
    // int n;  
    // printf("Enter a number till you want print primes: ");
    // scanf("%d", &n);
    // for(int i=1;i<=n;i++){
    //     IsPrime(i);
    // }
    int arr[5] = {1,2,3,4,5};
    int length = sizeof(arr)/sizeof(arr[0]);
    cout<<"Length of array is: "<<length<< endl;
    totalsumofarry(arr, length);
    return 1;

    // HW:
    // Populate array with multiples of 10.
    // Initialize array with -1. //loop and check using memeset function in c++;
    // Reverse an array.
    // Flip 0 to 1 and 1 to 0.
}
