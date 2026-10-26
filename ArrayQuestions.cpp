#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

void intializewithminus1(int arr[], int length){
    for(int i=0;i<length;i++){
        arr[i] = -1;
    }
}

void printArray(int arr[], int length){
    for(int i=0;i<length;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void reversearray(int arr[], int length){
    for(int i=length-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void flip0to1(int arr[],int length){
    for (int i=0;i<length;i++){
        // if(arr[i]==0){
        //     arr[i]=1;
        // }
        // else if(arr[i]==1){
        //     arr[i]=0;
        // }

        
        //arr[i] = !arr[i];//Usung logical NOT operator to flip 0 to 1 and 1 to 0.
        arr[i] = arr[i] ^ 1;//using bitwise XOR operator to flip 0 to 1 and 1 to 0.
        
    
    }
}
int main() {
    // HW:
    // Populate array with multiples of 10.
    
    
    //1.// Initialize array with -1. //loop and check using memeset function in c++;
    int arr[5];
    int length = sizeof(arr)/sizeof(arr[0]);
    cout<<"Length of array is: "<<length<< endl;
    //intializewithminus1(arr, length);
    //printArray(arr, length);
    //required #include <cstring>
    // memset(arr, -1, sizeof(arr));//Use memset() mainly for 0 and -1. For other values, use a loop:
    // for(int x: arr){//shortcut way to print array-Range-based for
    //     cout<<x<<" ";
    // }
    //printArray(arr, length);

    //2. Reverse an array.
    //int arr2[5]={1, 2, 3, 4, 5};
    //reversearray(arr2, length);

    // Flip 0 to 1 and 1 to 0.
    //3. Flip 0 to 1 and 1 to 0.
    int arr3[5]={0, 1, 0, 1, 0};
    flip0to1(arr3, length);
    for(int x: arr3){//shortcut way to print array-Range-based for
        cout<<x<<" ";
    }
    return 0;

}
