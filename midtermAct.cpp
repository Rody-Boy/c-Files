#include <iostream>
using namespace std;

class person {
	private:
	string name;
	string address;
	string telephone;	
	public:
	double percent;
	void setName(string n) {
		name=n;
	}		
	string getName() {
		return name;
	}
	void setAddress(string add) {
		address=add;
	}	
	string getAddress() {
		return address;
	}
	void setTel(string tel) {
		telephone=tel;
	}
	
	string getTel() {
		return telephone;
	}
};
class staff :public person{
	private:
	string office;
	string staffId;
	double salary;
	public:
	void setOffice(string off){
		office=off;
	}
	string getOffice() {
		return office;
	}
	void setIdnum(string idNum) {
		staffId=idNum;
	}
	
	string getIdnum() {
		return staffId;
	}
	
	void setSalary(double sal) {
		salary=sal;
	}
	
	double getSalary() {
		return salary;
	}
	
	void setPayrise(double percent) {
		percent=0.5;
	}
	
	double addPayrise() {
		return salary*percent;
	}
};

int main() {
	person p;
	
	p.setName("Derek Molloy");
	cout<<"name: "<<p.getName()<<endl;
	
	p.setAddress("DCU, Glasnevin, D9");
	cout<<"address: "<<p.getAddress()<<endl;
	
	p.setTel("7005355");
	cout<<"telephone: "<<p.getTel()<<endl;
	
	cout<<"\nCreating Staff Member: \n\n";
	
	staff st;
	cout<<"name: "<<p.getName()<<endl;
	
	cout<<"address: "<<p.getAddress()<<endl;
	
	cout<<"telephone: "<<p.getTel()<<endl;
	
	st.setOffice("S356");
	cout<<"office: "<<st.getOffice()<<endl;
	
	st.setIdnum("94971056");
	cout<<"ID Number: "<<st.getIdnum()<<endl;
	
	st.setSalary(12000);
	cout<<"Salary: "<<st.getSalary()<<" Euro" <<endl;
  
    cout<<"\nPayrise of 5%:\n\n";
    
    cout<<"name: "<<p.getName()<<endl;
	
	cout<<"address: "<<p.getAddress()<<endl;
	
	cout<<"telephone: "<<p.getTel()<<endl;
	
	cout<<"office: "<<st.getOffice()<<endl;
	
	cout<<"ID Number: "<<st.getIdnum()<<endl;
	
	cout<<"Salary: "<<st.addPayrise()<<" Euro" <<endl;
}
