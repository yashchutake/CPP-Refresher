#include <iostream>
#include <cmath>
using namespace std;

int getdecimalno(int n){
    int decimalno=0;
    int i=0;
    while (n>0)
    {
        int bit=n%10;
        decimalno=bit*pow(2,i++)+decimalno;
        n=n/10;
    }
    return decimalno;
    
}

int getdecimalnousingBitwiseOp(int n)
{
    int decimalno = 0;
    int i = 0;

    while(n > 0)
    {
        int bit = n % 10;

        decimalno += bit * (1 << i);

        i++;
        n /= 10;
    }

    return decimalno;
}

int main() {
    // Write C++ code here
    int binaryno;  
    cout << "Enter a binary number:  ";
    cin>>binaryno;
    int decimalno=getdecimalnousingBitwiseOp(binaryno);
    cout << "The Decimal Number for given no is "<<decimalno<<endl;
    
    return 1;
}
