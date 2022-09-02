#include <iostream>
using namespace std;

class animal {
	public:
	string breed;
	string type;
	void eat() {
		cout<<"namnamnam"<<endl;
	}
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
	void bark() {
		cout<<"Aw Aw Aw"<<endl;
	}
	
	
};

class cat : public animal{
	public:
	void meow() {
		cout<<"meoww meow"<<endl;
	}
	
};

int main() {
	dog d;
	d.eat();
	d.bark();
	d.set("canine", "belgian malinois ");
	d.getType();
	d.getBreed();
	
	cout<<endl;
	
	cat c;
	c.eat();
	c.meow();
	c.set("feline", "persian ");
	c.getType();
	c.getBreed();
}