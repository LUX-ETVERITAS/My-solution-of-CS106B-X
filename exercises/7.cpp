#include <iostream>
using namespace std;

/*
 * Constant: SENTINEL
 * ------------------
 * Defines the value used to terminate the input list.  This value must
 * be chosen so that it is not one that could naturally appear in the
 * input data.  In the AddIntegerList application, the value 0 is an
 * appropriate sentinel because the user can simply skip any 0 values
 * in the input.
 */

const int SENTINEL = -1;//注意考虑存在为0的可能性，所以把默认值设为-1

/* Main program */

int main() {
   cout << "This program adds a list of numbers." << endl;
   cout << "Use " << SENTINEL << " to signal the end." <<  endl;
   int total = 0,i=0;
   while (true) {
      int value;
      cout << " ? ";
      cin >> value;
      if (value == SENTINEL) break;
      total += value;
      i++;
   }
   total/=i;
   cout<< "The total is " << total<<endl;
}