#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	   int a,b,x;
	   cin >> a >> b >> x;
	   
	   int ans = (b-a)/x;
	   cout << ans << endl;
	}
	return 0;
}
