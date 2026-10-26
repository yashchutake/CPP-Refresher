#include <iostream>
#include <cmath>
using namespace std;


void IsPrime(int n){

   if(n<=1){
       cout<<n<<" is not a prime number."<<endl;
       return;
   }
   for(int i=2;i*i<=n;i++){
       if(n%i==0){
           cout<<n<<" is not a prime number."<<endl;
           return;
       }
   }
   cout<<n<<" is a prime number."<<endl;
}


int main() {
    // Write C++ code here
    int n;  
    printf("Enter a number till you want print primes: ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        IsPrime(i);
    }
    return 1;
}
