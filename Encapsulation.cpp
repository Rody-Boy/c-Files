#include <iostream>
using namespace std;

class addNum {
  private:   
    int num1;
    int num2;
    public:
    int setNum(int addend1, int addend2) {
    	num1=addend1;
    	num2=addend2;
    }
    
    int getNum() {
      return num1+ num2;
    }
};

int main() {
  addNum nums;
  
  nums.setNum(1,2);

  cout << "sum = " << nums.getNum();

  return 0;
}