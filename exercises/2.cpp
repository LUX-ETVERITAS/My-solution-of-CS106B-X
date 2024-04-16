#include <iostream>
using namespace std;
const double INCH=0.0254;
const double FOOT=12;
int tran(double meter);
int main(){
    double meter;
    cout <<"enter:";
    cin >> meter;
    tran(meter);
    return 0;
}
int tran(double meter){
    double inch,foot,median;
    median=meter/INCH;
    foot=int(median/FOOT);
    inch=median-foot*FOOT;//如何进行位数控制？
    cout << foot<<"foot"<<inch<<"inch"<<endl;
    return 0;
}