#include <iostream>
using namespace std;

class Demo
{
	private:	
		static int X;
    int y;

	public:
    void setY(int myNum){
      y = myNum;
    }
		 void fun()
		{
			cout <<"Value of X: " << X << endl;
      cout <<"Value of y: " << y << endl;
		}
};

//defining
int Demo :: X =10;


int main()
{
	Demo myobj;

	myobj.fun();
  myobj.setY(42);

	
	return 0;
}

