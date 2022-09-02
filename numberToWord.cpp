#include <iostream>
#include <vector>
using namespace std;

int digit;
int num;
string negative="Negative";

vector<string> ones {"","one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
vector<string> teens {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen","sixteen", "seventeen", "eighteen", "nineteen"};
vector<string> tens {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

string nameFornum (long num) {
    if (num <10){
        return ones[num];
        } else if (num < 20) {
            return teens [num - 10];
        } else if (num < 100) {
            return tens[num / 10] + ((num % 10 != 0) ? " " + nameFornum(num % 10) : "");
        } else if (num < 1000) {
            return nameFornum(num / 100) + " hundred" + ((num % 100 != 0) ? " " + nameFornum(num % 100) : "");
        } else if (num < 1000000) {
            return nameFornum(num / 1000) + " thousand" + ((num % 1000 != 0) ? " " + nameFornum(num % 1000) : "");
        } else if (num < 1000000000) {
            return nameFornum(num / 1000000) + " million" + ((num % 1000000 != 0) ? " " + nameFornum(num % 1000000) : "");
        } else if (num <1000000000000) {
            return nameFornum(num /1000000000) + " billion" + ((num % 1000000000 != 0) ? " " + nameFornum(num % 1000000000) : "");
        }
        	return "Make sure it does not exceed to 12 digits";            
    }

int main() {
        long input;
        cout << "Please enter a number from -2 billion to 2 billion: ";    
        cin >> input;
        if (input>0) {
        	cout << "\n"<<nameFornum(input) << endl;
        }   
        else if(input=-input) {
        	cout << "\n" <<"negative "<< nameFornum(input)<<endl;
        }
        else {
        	cout<<"\n" <<"zero";
        }                  
        
return 0;
    }