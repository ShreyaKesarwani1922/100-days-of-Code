#include <iostream>
#include<string>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	   //enter the number of rounds = n
	   int n;
	   cin >> n;
	   
	   //enter string a of length n => moves played by chef
	   string a;
	   string b;
	   
	   //enter string b of length n => moves played by chefina
	   cin >> a;
	   cin >> b;
	   
	   //create variable for storing the scores of chef and chefina
	   int chef_score = 0;
	   int chefina_score = 0;
	   
	   //iterate through the strings
	   for(int i=0;i<n;i++){
	           
	           if(a[i]=='R'){
	               if(b[i]=='R'){
	                   continue;
	               }
	               else if(b[i]=='P'){
	                   chefina_score++;
	               }
	               else if(b[i]=='S'){
	                   chef_score++;
	               }
	           }
	           
	           else if(a[i]=='P'){
	               if(b[i]=='R'){
	                   chef_score++;
	               }
	               else if(b[i]=='P'){
	                   continue;
	               }
	               else if(b[i]=='S'){
	                   chefina_score++;
	               }
	           }
	           
	           else if(a[i]=='S'){
	               if(b[i]=='R'){
	                   chefina_score++;
	               }
	               else if(b[i]=='P'){
	                   chef_score++;
	               }
	               else if(b[i]=='S'){
	                   continue;
	               }
	           }
	   }

	   int count=0;
	   if(chefina_score < chef_score){
	      cout << count << endl;
	   }
	   else{
	      while(chefina_score >= chef_score){ //chef_score = 0,chefina_score=2
	          chefina_score--; // 1 1, 2 0
	          chef_score++; 
	          count++;
	      }
	      cout << count << endl;
	   }
	   
	   
	}
	return 0;
}
