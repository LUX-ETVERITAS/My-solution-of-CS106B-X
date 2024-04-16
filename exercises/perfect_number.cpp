#include <iostream>
#include <cmath>
using namespace std;

long divisorSum(long n);
bool isPerfect(long n);
void findPerfect(long stop);

int main(){
    cout<<"enter:";
    long stop;
    cin >> stop;
    findPerfect(stop);
    return 0;
}

long divisorSum(long n)
{
    long total=1;//注意，不要改，
    for(long divisor=2;divisor<sqrt(n);divisor++)//divisor必须从2开始，如果是一，那么找不到完全数
        if(n%divisor==0){
            total=divisor+total+n/divisor;
        }
    return total;
}

bool isPerfect(long n){
    return (n!=0)&&(n==divisorSum(n));
}

void findPerfect(long stop){
    for(long num=1;num<stop;num++){
        if(isPerfect(num)){
            cout<<"Found perfect number:"<<num<<endl;
        }
        if(num%10000==0) cout<<"."<<flush;//process bar
    }
    cout<<"Done search up to:"<<stop<<endl;

}