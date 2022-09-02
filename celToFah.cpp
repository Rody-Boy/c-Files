#include <iostream>
 using namespace std;
 
 float celToFah(float celsius)
{
    return ((celsius*1.8)+32.0);
}

int main() {
    int standLowLim=0, standHighLim=50000;
    float fahrenheit, celsius, lowerLimit, higherLimit, steps;
    
    cout << "please give in a lower limit\n";
    cin >> lowerLimit;
    
    cout << "please give in a higher limit\n";
    cin>>higherLimit;
  
    cout << "please give in the number of steps\n";
    cin>>steps;
    
    if(lowerLimit>standLowLim && higherLimit<standHighLim ) {
    	printf("\nCelsius\t\tFahrenheit");
    	printf("\n-------\t\t----------\n");
    	int add=lowerLimit+steps;
    	cout<<lowerLimit<<"\t\t"<<celToFah(lowerLimit) <<endl;
    	cout<<add<<"\t\t"<<celToFah(add)<<endl;
    	cout<<(add+steps)<<"\t\t" <<celToFah(add+steps);  
    }
    else {
    	cout<<"make sure the lowest limit is a positive number and the highest limit should not exceed 50000";
    	    }
    return 0;
}