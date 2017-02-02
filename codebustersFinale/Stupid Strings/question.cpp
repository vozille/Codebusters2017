#include "testlib.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);
    int tc = 1000;
    cout << tc << endl;
    while(tc--){
        string a = rnd.next("[a-z]{1, 10000}");
        string b = rnd.next("[a-z]{1, 5}");
        cout << a << endl;
        cout << b << endl;
   }
   return 0;
}