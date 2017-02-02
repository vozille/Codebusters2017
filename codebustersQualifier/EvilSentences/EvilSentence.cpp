#include "testlib.h"
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);
    freopen("sampleInput.txt", "w", stdout);
    
    int tc = rnd.next(1,5);
    cout << tc << endl;
    while(tc--){
      int n = rnd.next(10);
      cout << n << endl;
       for(int i = 0; i < n; i++){
         int probabilityVar = rnd.next(0,10);
         if(probabilityVar < 50){
            string word = rnd.next("[a-z]{1,5}");
            string word2 = word;
            reverse(word2.begin(), word2.end());
            word += word2;
            cout << word << ' ';
         }
         else{
            string word = rnd.next("[a-z]{1,5}");
            cout << word << ' ';
         }
      }
      cout << endl;
   }
   return 0;
}
