#include <iostream>
#include <cmath>
using namespace std;
void findPerfectEuclid(long stop);
long divisorSum(long n);

int main(){
    cout<<"enter:";
    long stop;
    cin>>stop;
    findPerfectEuclid(stop);
}
void findPerfectEuclid(long stop){
    for(long k=1;k<stop;k++){
    long m=pow(2,k)-1;
    if(divisorSum(m)==1){
        long perfectNumber=pow(2,k-1)*m;
        cout<<"The perfect number is"<<perfectNumber<<endl;
    }
    if(m%10000==0) cout<<"."<<flush;//process bar
    }
    cout<<"Done search up to:"<<stop<<endl;
}
long divisorSum(long n){
    long total=1;//注意，不要改，
    for(long divisor=2;divisor<sqrt(n);divisor++)//divisor必须从2开始，如果是一，那么找不到完全数
        if(n%divisor==0){
            total=divisor+total+n/divisor;
        }
    return total;
}