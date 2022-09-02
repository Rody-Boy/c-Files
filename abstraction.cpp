#include <iostream>
using namespace std;

class animal {
	public:
	string breed;
	string type;
	virtual void eat()=0;
	virtual void run()=0;
	void set(string tp, string br) {
		type=tp;
		breed=br;
	}
	void getType() {
		cout<<type<<endl;		
	}
	void getBreed() {
		cout<<breed<<endl;
	}
};

class dog :public animal{
	public:
	void run() {
		cout<<"*animal runs*"<<endl;
	}
	void eat() {
		cout<<"namnamnam"<<endl;
	}
	void bark() {
		cout<<"Aw Aw Aw"<<endl;
	}		
};

class cat : public animal{
	public:
	void run() {
		cout<<"*animal runs*"<<endl;
	}
	void eat() {
		cout<<"namnamnam"<<endl;
	}
	void meow() {
		cout<<"meoww meow"<<endl;
	}
	
};

int main() {
	dog d;
	d.run();
	d.eat();
	d.bark();
	d.set("canine", "belgian malinois ");
	d.getType();
	d.getBreed();
	
	cout<<endl;
	
	cat c;
	c.run();
	c.eat();
	c.meow();
	c.set("feline", "persian ");
	c.getType();
	c.getBreed();
}