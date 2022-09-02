#include <iostream>
using namespace std;

class product {
	public:
	string productName[5]={};
	string productPrice[5]={};
	void errorMessage() {
		cout<<"Enter 5 products and their prices\n";
		cout<<"Please remember your spelling\n";
	}
		
	void addProduct() {
		for(int i = 0; i < 5; i++) {
			cout<<"enter product name\n";
			cin>>productName[i];
			cout<<"enter product price\n";
			cin>>productPrice[i];
		}
	}
	string showProduct() {
			for(int i = 0; i < 5; i++) {
			cout <<"product name:" << productName[i] << "\n"; 
			cout<<"price: " <<productPrice[i]<<" pesos" <<"\n";
			}
		}
};
class actions:public product {
		public:
		void errorMessage() {
			cout<<"Please enter the right spelling of the product to be deleted!\n ";
	}
		int i=0;
		int count=0;
		string del;		
		string deleteProduct() {
			cout<<"what is the name of the product to be deleted? ";
			cin>>del;
			for(i=0; i<5; i++)
        {
                if(productName[i]==del)
                {
                        for(int j=i; j<(5-1); j++)
                        {
                        productName[j]=productName[j+1];
                        }
                        count++;
                        break;
                }
        }
	}					
};
int main() {
	int input;
	product p;
	actions a;
	while(1) {
		cout<<"Enter 1 to add new product\nEnter 2 to delete a product\nEnter 3 to show all products\nEnter 4 to exit\n";
	cin>>input;
	if(input==1) {
		p.errorMessage();
		p.addProduct();
	}
	else if(input==2) {
			a.errorMessage();
			a.deleteProduct();
	}
	else if(input==3) {
		p.showProduct();
	}
	else if(input==4) {
		break;
	}
	}
}