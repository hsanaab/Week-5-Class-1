#include <iostream>
using namespace std;
class Demo {
private:
  int num;
  char ch;
public:
  void setMyValues(int myNum, char myCh){
    num = myNum;
    ch= myCh;
  }
  void displayMyValues(){
    cout<<num<<endl;
    cout<<ch;
  }
};
int main(){
  Demo obj;
  obj.setMyValues(100, 'A');
  obj.displayMyValues();
  return 0;
}