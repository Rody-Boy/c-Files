#include <iostream>
#include <cmath>
using namespace std;
class cash {
	public:
	int cashTotal=0;
	int receiveCash(int onePeso, int fivePeso, int tenPeso, int twentyPeso) {
	cout<<"how many peso would you like to insert? \n" ;
	cin>>onePeso;
	cout<<"how many Five pesos would you like to insert?\n" ;
	cin>>fivePeso;
	cout<<"how many Ten pesos would you like to insert?\n" ;
	cin>>tenPeso;
	cout<<"how many Twenty pesos would you like to insert?\n" ;
	cin>>twentyPeso;
	cashTotal=(onePeso*1)+(fivePeso*5) +(tenPeso*10)+(twentyPeso*20);
	cout<<"\nTotal money you entered was: " <<cashTotal<<" pesos" <<endl;
	} 
};
class drinks:public cash{
	public:
	int cokePrice=20;
	int pepsiPrice=15;
	int bottledWaterPrice=25;	
	int displayPrice() {
		cout<<"Coke-"<<cokePrice<<endl;
		cout<<"Pepsi-"<<pepsiPrice<<endl;
		cout<<"Bottled Water-"<<bottledWaterPrice<<endl;
	}
};
class calc:public drinks{
	public:
	int calcu(int i, int j) {
		return i-j;
	}
};
int main() {
	int input;	
	cash c;
	drinks d;
	calc cl;
	c.receiveCash(0,0,0,0);
	while (c.cashTotal>0) {
			d.displayPrice();
			cout<<"Choose a drink\n\nType 1 for coke\nType 2 for pepsi\nType 3 for bottled water\nType 4 to exit the vending machine\n";
	cin>>input;
			if (input==1) {
				cout<<"Remaining balance is: " <<round(c.cashTotal=(cl.calcu(c.cashTotal,d.cokePrice))) <<endl;	
			}
			else if (input==2) {
				cout<<"Remaining balance is: " <<round(c.cashTotal=(cl.calcu(c.cashTotal,d.pepsiPrice)))<<endl;
			}
			else if (input==3) {
				cout<<"Remaining balance is: " <<round(c.cashTotal=(cl.calcu(c.cashTotal,d.bottledWaterPrice)))<<endl;
			}	
			else if(input==4) {
				break;
			}
			else {
				cout<<"Make sure you typed correctly 1 for coke, 2 for pepsi, 3 for bottled water and 4 to exit the vending machine\n";
				return 0;
			}
		}
}