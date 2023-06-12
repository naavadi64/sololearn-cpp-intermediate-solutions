#include <iostream>
using namespace std;

int main() {
   string name;
   cin >> name;
   try {
      if (name.length() > 20 || name.length() < 4) {
         throw 21;
      }
      cout << "Valid" << endl;
   }
   catch(int x) {
      cout<<"Invalid"<<endl;
   }
   
   return 0;
}