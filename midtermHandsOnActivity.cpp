#include <iostream>

using namespace std;

	//~~convert peso to dollar~~~//

int main() {
	float sum;
	float peso;
	float dollar=51.02;
	
	cout<<"please enter amount of peso"<<endl;
	cin>>peso;
	
	sum=peso/dollar;
	cout<<"your peso is equal to "<<sum<<endl;
	
	//~~~~number to word~~~~~//
	int num;
	cout<<"please enter a number 1 up to 5"<<endl;
	cin>>num;
	
	if (num==1) {
		cout<<"You have entered number ONE! "<<endl;
	}
		else if (num==2) {
			cout<<"You have entered number TWO!"<<endl;
		}
		else if (num==3) {
			cout<<"You have entered number THREE!"<<endl;
		}
		else if (num==4) {
			cout<<"You have entered number FOUR!"<<endl;
		}
		else if (num==5) {
			cout<<"You have entered number FIVE!"<<endl;
		}
		else {
			cout<<"make sure it is within 1 to 5"<<endl;	
			
		//~~~term grade~~~~//
int pt;
int exam;
cout<<"enter your grade in performance tasks: "<<endl;
cin>>pt;
cout<<"enter your grade in exams: "<<endl;
cin>>exam;
int grade=(pt*.6)+(exam*.4);
	
cout<<"Term Grade is "<<grade<<endl;
	
	
if(grade>=95 && grade <=100) {
		cout<<"Interpretation: Excellent"<<endl;
	}
	else if(grade >=90 && grade <94) {
		cout<<"Interpretation: Very Good"<<endl;
	}
	else if(grade >= 85 && grade < 89) {
		cout<<"Interpretation: Good"<<endl;
	}
	else if(grade >= 80 && grade < 84)  {
		cout<<"Interpretation: Fair"<<endl;
	}
	else {
		cout<<"Interpretation: Strive Hard"<<endl;
		return 0;
		}
		}
}