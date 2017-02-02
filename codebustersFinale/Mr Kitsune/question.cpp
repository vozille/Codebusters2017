#include "testlib.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);
    int tc = 100;
    cout << tc << endl;
    while(tc--){
        cout << rnd.next("[a-z]{100, 1000}") << endl;
        int n = rnd.next(1, 100);
        cout << n << endl;
        while(n--){
            cout << rnd.next("[a-z]{1, 1000}") << endl;
        }
    }
   return 0;
}
