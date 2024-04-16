#include <iostream>
using namespace std;
int main(){
    cout<<"Enter:";
    int enterNumber;
    cin>>enterNumber;
    int largestNumber=enterNumber;
    while(enterNumber!=0){
        if(enterNumber>largestNumber)
            largestNumber=enterNumber;
        cout<<"Please enter a number:";
        cin>>enterNumber;
    }
    cout<<"The largest number was "<<largestNumber;
    return 0;
}