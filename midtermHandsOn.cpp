#include <iostream>
using namespace std;

class CarToolBooth {
public:
    unsigned int totAmCars = 0;
    double totAmNey = 0;

    void payingCar(){
    totAmCars++;
    totAmNey =totAmCars*10;
    }
    void noPayCar(){
    totAmCars++;
    totAmNey +=0;

    }
    void display(){
    cout << "Number of cars passed the toll gate: " << totAmCars << endl;
    cout << "Total Cash: " << totAmNey << endl<<endl<<endl;
    }
};

int main(){
    CarToolBooth ctb;
    int input;

for( int i = 0; i <=10 ; i++ ) {
    cout << "Enter number 1 to display paying cars\n\nEnter number 2 to display non paying cars\n\nEnter number 3 to display the total cars and total cash\n " << endl;
    cin >> input;

    if(input == 1){
    ctb.payingCar();
    ctb.display();
    }
    else if (input == 2){
    ctb.noPayCar();
    ctb.display();

    }
    else if (input == 3){
    ctb.display();
    break;
    }
    else{
        cout<<"program finished";
        break;
        }
}
} 