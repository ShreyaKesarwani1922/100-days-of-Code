#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	   int x;
	   cin >> x;
	   
	   float comm = x * 0.2;
	   float ans = 100/comm;
	   cout << ceil(ans) << endl;
	}
	return 0;
}
