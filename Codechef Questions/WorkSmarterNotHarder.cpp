#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	   double l, v1, v2;
	   cin >> l >> v1 >> v2;
	   
	   double wait = ceil(l/v1) - ceil(l/v2);
	   if(wait>1){
	       cout << wait - 1 << endl;
	   }
	   else if(wait == 1){
	       cout << "0" << endl;
	   }
	   else if(wait < 1){
	       cout << "-1" << endl;
	   }
	}
	return 0;
}
