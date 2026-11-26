#include <iostream>
using namespace std;

int getLength(char arr[]){
    int index=0;
    while(arr[index]!='\0'){
        index++;
    }
    return index;
}
void concat(char a[],char b[]){
    int lengthA=getLength(a);
    int lengthB=0;
    while(b[lengthB]!='\0'){
        a[lengthA]=b[lengthB];
        lengthA++;
        lengthB++;
    } 
    a[lengthA]='\0';//Adding null character at the end of the concatenated string
}

void copyarray(char a[],char b[]){
    int lengthA=0;
    int lengthB=0;
    while(b[lengthB]!='\0'){
        a[lengthA]=b[lengthB];
        lengthA++;
        lengthB++;
    } 
    a[lengthA]='\0';//Adding null character at the end of the copied string
}

bool comparearray(char a[],char b[]){
    int indexA=0;
    int indexB=0;
    int lengthA=getLength(a);
    
    while(indexA<=lengthA){
        if(a[indexA]!=b[indexB]){
            return false;
        }
        else{
            indexA++;
            indexB++;
        }
    }
    return true;
}

int main() {
    //Solve quetion-
    char arr1[100]="Yash";
    char arr2[100]="YashC";
    int length = getLength(arr1);
    cout << "Length of array is: " << length << endl;

    //concat(arr1,arr2);//adding arr2 to arr1
    //cout<<"After concatenation arr1 is: "<<arr1<<endl;

    // cout<<"After copying arr2 to arr1: ";
    // copyarray(arr1,arr2);
    // cout<<arr1<<endl;
    
    cout<<"Comparing arr1 and arr2: "<<comparearray(arr1,arr2)<<endl;





    // Write C++ code here
    //cout << "\nYash\nTry clicking the Run button.";

    //DECLARATION:
    //char arr1[4];


    //INTIALIZATION:
    // char arr[5]="yash";
    // cout<<arr[0]<<endl;
    // cout<<arr[4]<<endl;//Null charcter let's check ASCII Value-0
    // int ASCIIVALUE= arr[4];
    // cout<<"ASCII VALUE IS "<<ASCIIVALUE<<endl;

    // cout<<arr[5]<<endl;
    // int ASCIIVALUE5= arr[4];
    // cout<<"ASCII VALUE IS "<<ASCIIVALUE5<<endl;//Here proof aftr null char next are also null chars OR Random values that ascii value 0


    //Maully assigning the value to index
    // char arr2[7];
    // arr2[0]='Y';
    // arr2[1]='c';
    // arr2[2]='\0';//MUALLY INSERT NULL CHARACTER

    // for (int i = 0; i < 7; i++)
    // {
    //     cout<<arr2[i]<<", ";
    // }
    
    return 1;
}