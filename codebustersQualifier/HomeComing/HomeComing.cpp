#include "testlib.h"
#include <bits/stdc++.h>

using namespace std;


int main(int argc, char* argv[])
{
		registerGen(argc, argv, 1);
		freopen("input3.txt", "w", stdout);
		int tc = 100;
		cout << tc << endl;
		// a,b = home coordinates
		// x,y = current coordinates
		while(tc--){
			int a = rnd.next(-80, 80); int b = rnd.next(-80, 80);
			int x = rnd.next(-80, 80); int y = rnd.next(-80, 80);
			while(x == a && y == b){
				x = rnd.next(-80, 80);
				y = rnd.next(-80, 80);
			}
			
			set< pair<int,int> >points;
			points.insert(make_pair(a,b));
			points.insert(make_pair(x,y));
			cout << a << " " << b << endl;
			cout << x << " " << y << endl;

			int n = rnd.next(4000, 5000);
			cout << n << endl;
			while(n--){
				int cat_x = rnd.next(-80, 80), cat_y = rnd.next(-80, 80);
				while(points.find(make_pair(cat_x,cat_y)) != points.end()){
					cat_x = rnd.next(-80, 80);
					cat_y = rnd.next(-80, 80);
				}
				points.insert(make_pair(cat_x,cat_y));
				cout << cat_x << " " << cat_y << endl;
			}
	 }
	 return 0;
}
