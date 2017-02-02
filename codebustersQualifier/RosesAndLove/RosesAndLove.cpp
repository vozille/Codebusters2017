#include "testlib.h"
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);
    freopen("input1.txt", "w", stdout);
    int tc = rnd.next(10,50);
    cout << tc << endl;
    while(tc--){
      int n = rnd.next(1, 100);
      cout << n << endl;
       for(int i = 0; i < n; i++){
         int probabilityVar = rnd.next(1,1000);
         cout << probabilityVar << " ";
      }
      cout << endl;
   }
   return 0;
}
