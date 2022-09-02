#include <iostream>
using namespace std;

class bird{
  public:
    void birdSound() {
    cout<<"*bird does sounds*"<<endl;
  }
};

// Derived class
class chicken : public bird {
  public:
    void birdSound() {
    	cout<<"cluck cluck cluck"<<endl;
   }
};

// Derived class
class duck : public bird {
  public:
    void birdSound() {
    	cout<<"quack quack quack"<<endl;
  }
};

int main() {
  bird b;
  b.birdSound();
  
  chicken c;
	c.birdSound();
	
	duck d;
	d.birdSound();
  return 0;
}