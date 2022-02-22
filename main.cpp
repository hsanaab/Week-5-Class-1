#include <iostream>
#include <string>
#include <limits>
using namespace std;


int main() {
  int choice = 0;
  string temp;
  
  do {
    system("clear");
    cout << "\n\nWhich example program do wish to run?"<<endl;
    cout<<"\n1. Unit Testing\n";
    cout<< "2. this Pointer #1\n";
    cout<<"3. this Pointer #2\n";
    cout<<"4. Overloading binary + operator\n";
    cout<<"5. Overloading binary + operator #2\n\n";
    cout<<"6. Overloading cast operator\n";
    cout<<"7. Overloading unary ++ operator\n";
    cout<<"8. Overloading < operator\n";
    cout<<"9. Static Class Attributes\n";
    cout<<"10. Static Class Methods\n";
    cout<<"99. Quit\n\n";
    cout<<"Choice? ";
    getline(cin,temp);
    choice = stoi(temp);
    
    switch(choice){
      case(1):
        cout<<"\nUnit Testing\n\n";
        system("cd testing && make -s test && ./test && cd ~");
        break;
      case(2):
        cout<<"\nthis Pointer #1\n\n";
        system("cd this && make -s this && ./this && cd ~");
        break;
      case(3):
        cout<<"\nthis Pointer #2\n\n";
        system("cd this && make -s this2 && ./this2 && cd ~");
        break;
      case(4):
        cout<<"\nOverloading binary + operator\n\n";
        system("cd operover && make -s over1 && ./over1 && cd ~");
        break;
      case(5):
        cout<<"\nOverloading binary + operator #2\n\n";
        system("cd operover && make -s oper2 && ./oper2 && cd ~");
        break;
      case(6):
        cout<<"\nOverloading cast operator\n\n";
        system("cd operover && make -s oper3 && ./oper3 && cd ~");
        break;
      case(7):
        cout<<"\nOverloading unary ++ operator\n\n";
        system("cd operover && make -s oper4 && ./oper4 && cd ~");
        break;
      case(8):
        cout<<"\nOverloading < operator\n\n";
        system("cd operover && make -s oper5 && ./oper5 && cd ~");
        break;
      case(9):
        cout<<"\nStatic Class Attributes\n\n";
        system("cd static && make -s static1 && ./static1 && cd ~");
        break;
      case(10):
        cout<<"\nStatic Class Methods\n\n";
        system("cd static && make -s static2 && ./static2 && cd ~");
        break;
      case(99):
        exit(0);
    }

      cout<<"\n\nHit enter to continue\n";
    cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
    
      
  } while (true);
  

  return 0;
}