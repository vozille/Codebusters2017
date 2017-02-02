#include "testlib.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);
    int tc = 1000;
    cout << tc << endl;
    while(tc--){
        int a = rnd.next(0, 1000000000);
        int b = rnd.next(0, 1000000000);
        if(rnd.next(1, 100) < 40){
            cout << a << " " << b << endl;
        }
        else{
            bool flag = true;
            while(flag){
                a = rnd.next(0, 1000000000);
                b = rnd.next(0, 1000000000);
                if((a + b) % 100000 == 0){
                    flag = false;
                }
            }
            cout << a << " " << b << endl;
        }
   }
   return 0;
}