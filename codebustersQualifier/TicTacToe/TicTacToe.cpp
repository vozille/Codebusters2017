#include "testlib.h"
#include <bits/stdc++.h>

using namespace std;

int myrandomfunc (int i) { 
  return rnd.next(0, 8) % i;
}

int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);
    freopen("input2.txt", "w", stdout);
    int tc = 1000;
    cout << tc << endl;
    while(tc--){
      vector<char> pieces;
      char piece_opponent, piece_anwesh;
      int piece = rnd.next(1, 100);
      if(piece < 50)
      {
        piece_anwesh = 'X';
        piece_opponent = 'O';
      }
      else
      {
        piece_anwesh = 'O';
        piece_opponent = 'X';
      }
      cout << piece_anwesh << endl;
      int n = rnd.next(1, 6);
      if(n == 1){
        pieces.push_back(piece_opponent);
        pieces.push_back(piece_opponent);
        pieces.push_back(piece_anwesh);
        pieces.push_back('-');
        pieces.push_back('-');
        pieces.push_back('-');
        pieces.push_back('-');
        pieces.push_back('-');
        pieces.push_back('-');
      }
      if (n == 2 || n == 3 || n == 4){
        pieces.push_back(piece_opponent);
        pieces.push_back(piece_opponent);
        pieces.push_back(piece_opponent);
        pieces.push_back(piece_anwesh);
        pieces.push_back(piece_anwesh);
        pieces.push_back('-');
        pieces.push_back('-');
        pieces.push_back('-');
        pieces.push_back('-');
      }
      if(n == 5 || n == 6){
        pieces.push_back(piece_opponent);
        pieces.push_back(piece_opponent);
        pieces.push_back(piece_opponent);
        pieces.push_back(piece_opponent);
        pieces.push_back(piece_anwesh);
        pieces.push_back(piece_anwesh);
        pieces.push_back(piece_anwesh);
        pieces.push_back('-');
        pieces.push_back('-');
      }
      random_shuffle( pieces.begin(), pieces.end(), myrandomfunc );

      for(int i = 1; i <= 9; i++){
        cout << pieces[i - 1];
        if(i%3 == 0)
            cout << endl;
      }
   }
   return 0;
}
