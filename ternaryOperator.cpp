#include <iostream>

using namespace std;

int main() {
	int a=6; 
	int b=7;
	
	string result=(a<b)? "b is the highest value" :"a is the highest value";
	
	cout<<result<<" which is "<<b<<endl;
	return 0;
}