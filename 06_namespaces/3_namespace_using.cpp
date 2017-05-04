#include <iostream>

using namespace std;

namespace First{
   void sayHello(){
      cout << "Hello First Namespace" << endl;
   }
}
namespace Second{
   void sayHello1(){
      cout << "Hello Second Namespace" << endl;
   }
}

using namespace First;
using namespace Second;

int main () {
   sayHello();
   sayHello1();
   return 0;
}
