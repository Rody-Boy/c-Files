#include <iostream>
using namespace std;

class GradeCalculator {
	private:
	float chosenOption=0;
	float finalPercentage=0;
	public:
	
	void set(float i, float j) {
		chosenOption=i;
		finalPercentage=j;	
	}
	float get () {
		return chosenOption;
		return finalPercentage;
	}
	float computePercentage(int prelim, int midterm, int prefinal, int final) {
		cout<<"Prelim Grade:" <<endl;
		cin>> prelim;
		cout<<"Midterm grade: "<<endl;
		cin>> midterm;
		cout<<"Prefinal grade: "<<endl;
		cin>>prefinal;
		cout<<"Final grade: "<<endl;
		cin>>final;
		finalPercentage=(prelim*.2+midterm*.25+prefinal*.25+final*.3); 
		cout<<"Final Percentage is:"<< finalPercentage<<endl;	
	}	
	float computePercentage(float rawscore, float totalscore) {
		cout<<"Raw Score: ";
		cin>>rawscore;
		cout<<"Total Score: ";
		cin>>totalscore;
		finalPercentage=(rawscore/totalscore*60+40);
		cout<<"Final Percentage is: "<<finalPercentage<<endl;
	}
};
int main() {
	int input;
	GradeCalculator gc;
	while(1) {
		cout<<"Option 1: Compute for final grade\nOption 2: Compute for the transmuted grade\nOption 3: exit\n";
		cin>>input;
		if (input==1) {
			gc.computePercentage(0,0,0,0);
		}
		else if (input==2) {
			gc.computePercentage(0,0);
		}
		else if (input==3) {
			break;
		}
		else {
			cout<<"That is out of the options\n";
		}
	}	
} 
 
