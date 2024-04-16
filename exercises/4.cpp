#include <iostream>
#include <cmath>
using namespace std;
bool isOdd(int i);
int main(){
    int n;
    cout<<"enter:";
    cin>>n;
    int k=0,sum=0;
    for(int i=1;k<n;i++){//注意，这里k<n,不能等于，若等于，在k=n时，循环将会继续
        if(isOdd(i)){
            k++;
            sum+=i;
        }
    }
    cout<<sum;
    return 0;
}
bool isOdd(int i){
    return i%2!=0;//判断质数条件不能被2整除
}