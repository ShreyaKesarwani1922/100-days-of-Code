#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int ans = a + b;
	
	ans = (ans * 10) + 1;
	
	cout << ans << endl;
	return 0;
}
