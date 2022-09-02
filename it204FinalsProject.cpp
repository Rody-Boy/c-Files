#include <iostream>
using namespace std;

class Nodes {
	 public:
	 int a=4;
	 int b=23;
	 int c=10;
	 int d=7;
	 int e=2;
	 int f=15;
	 
	 void calc() {
	 		if (b<c) {
	 			cout<<"b have smaller value than c="<<a+b<<endl;
	 			if (d<e) {
	 				cout<<"d have smaller value than e="<<a+b+d<<endl;
	 				cout<<"So the shortest path from a to f is a+b+d+f="<<a+b+d+f<<endl;
	 					}
	 					else if (d>e) {
	 						cout<<"e have smaller value than d="<<a+b+e<<endl;
	 						cout<<"So the shortest path from a to f is a+b+d+f="<<a+b+e+f<<endl;
	 					}
	 			}
	 			else if(b>c) {
	 				cout<<"c have smaller value than b="<<a+c<<endl;
	 				if (d<e) {
	 				cout<<"d have smaller value than e="<<a+b+d<<endl;
	 				cout<<"So the shortest path from a to f is a+c+d+f="<<a+c+d+f<<endl;
	 					}
	 					else if (d>e) {
	 						cout<<"e have smaller value than d="<<a+c+e<<endl;
	 						cout<<"So the shortest path from a to f is a+c+e+f="<<a+c+e+f<<endl;
	 						}	
	 			}
	 }
};
				
				
int main() {
	Nodes nds;
	nds.calc();
}