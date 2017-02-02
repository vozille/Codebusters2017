#include "testlib.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);
    int tc = 1000;
    cout << tc << endl;
    while(tc--){
        int a = rnd.next(1, 2000000000);
        int b = rnd.next(1, 2000000000);
        cout << a << " " << b << endl;
   }
   return 0;
}