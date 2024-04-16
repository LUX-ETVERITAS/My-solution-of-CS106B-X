#include <iostream>
using namespace std;
double tranc(double c);
int main(){
    double c;
    cout << "enter the Celsius:";
    cin >> c;
    cout << tranc(c);
    return 0;
}
double tranc(double c){
    double f;
    f=9.0/5*c+32;
    return f;
}