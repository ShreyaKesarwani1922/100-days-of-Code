#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	   int d,r,l;
	   cin >> d >> l >> r;
	   
	   if(d<l){
	       cout << "Too Early" << endl;
	   }
	   else if((l<=d) && (d<=r)){
	       cout << "Take second dose now" << endl;
	   }
	   else if(d>r){
	       cout << "Too Late" << endl;
	   }
	}
	return 0;
}
