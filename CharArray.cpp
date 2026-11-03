#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    //cout << "\nYash\nTry clicking the Run button.";

    //DECLARATION:
    char arr1[4];


    //INTIALIZATION:
    // char arr[5]="yash";
    // cout<<arr[0]<<endl;
    // cout<<arr[4]<<endl;//Null charcter let's check ASCII Value-0
    // int ASCIIVALUE= arr[4];
    // cout<<"ASCII VALUE IS "<<ASCIIVALUE<<endl;

    // cout<<arr[5]<<endl;
    // int ASCIIVALUE5= arr[4];
    // cout<<"ASCII VALUE IS "<<ASCIIVALUE5<<endl;//Here proof aftr null char next are also null chars only that ascii value 0


    //Maully assigning the vaklue to index
    char arr2[7];
    arr2[0]='Y';
    arr2[1]='c';
    arr2[2]='\0';//MUALLY INSERT NULL CHARACTER

    for (int i = 0; i < 7; i++)
    {
        cout<<arr2[i]<<", ";
    }
    
    return 1;
}