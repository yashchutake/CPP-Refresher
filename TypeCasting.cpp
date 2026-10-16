#include <iostream>
#include <cmath>
using namespace std;

void ImplicitTypeCasting(){
    int num1=10;
    float num2=10.5;
    float result=num1+num2;
    cout << "Implicit Type Casting Example: "<<result<<endl;

    //Example of implicit type casting in C++
    //1.Char to int
    char ch1='A';
    char result1=ch1+1;
    cout<<"Char to Int: "<<result1<<endl;

    //2.Int to char
    int num3=97;
    char result2=num3;
    cout<<"Int to Char: "<<result2<<endl;
}

void ExplictTypeCasting(){
    int num1=10;
    float num2=10.5;
    float result=num1+(int)num2;
    cout << "Explict Type Casting Example: "<<result<<endl;

    //Example of explicit type casting in C++
    //1.double to int
    double pi=3.14159;
    int result1=(int)pi;
    cout<<"Double to Int: "<<result1<<endl;

    //2.float to char
    float num4=98.2;
    char result2=char(num4);
    cout<<"Float to Char: "<<result2<<endl;

    //3.int to float
    int num3=10;
    int num5=3;
   
    //float result3=num3/num5;
    float result3=((float)num3)/num5;//Explicit type casting to get float result here we explicitly cast num3 to float before division
    cout<<"Int to Float: "<<result3<<endl;


    //
}


int main() {
    // Write C++ code here
    int n;  
    //ImplicitTypeCasting();
    ExplictTypeCasting();

    
    return 1;
}
