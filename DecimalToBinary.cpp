#include <iostream>
#include <cmath>
using namespace std;

int getbinarynoUsingDecimalmethod(int n){
    int binaryno=0;
    int i=0;
    while (n>0)
    {
        int bit=n%2;
        binaryno=bit*pow(10,i++)+binaryno;
        n=n/2;
    }
    return binaryno;
    
}

int getbinarynoUsingBitwiseMethod(int n){
    int binaryno=0;
    int i=0;
    while (n>0)
    {
        int bit=n&1;
        binaryno=bit*pow(10,i++)+binaryno;
        n=n>>1;
    }
    return binaryno;
    
}

int main() {
    // Write C++ code here
    int n;  
    cout << "Enter a decimal number:  ";
    cin>>n;
    int binaryno=getbinarynoUsingBitwiseMethod(n);
    cout << "The Binary Number for given no is "<<binaryno<<endl;
    
    return 1;
}
