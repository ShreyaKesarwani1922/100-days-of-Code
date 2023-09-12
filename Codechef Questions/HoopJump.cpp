#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	   int n;
	   cin >> n;
	   
	   int start = 1, end = n;
	   
	   while(start < end){
	       start++;
	       end--;
	   }
	   if(n%2==0){
	       cout << end << endl;
	   }
	   else{
	       cout << start << endl;
	   }
	   
	}
	return 0;
}
