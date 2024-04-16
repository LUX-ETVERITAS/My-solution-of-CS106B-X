#include <iostream>
using namespace std;
int main(){
    cout<<"Enter:";
    int num,first,second;
    cin>>num;
    first=second=num;
    while(num!=0){
        if(first<num){
            second=first;
            first=num;
        }
        else if(second<num){
            second=num;
        }
        cout<<"Enter:";
        cin>>num;
    }
    cout<<first<<" "<<second;
    return 0;
    }