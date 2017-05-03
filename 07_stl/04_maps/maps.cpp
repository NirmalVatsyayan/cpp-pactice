#include<iostream>
#include<map>

using namespace std;

int main(){
   map<int,int> m{ {1,2} , {2,3} , {3,4} }; // declare and initialize map

   for(auto v: m){
       cout << v.first << " -- " <<v.second << endl;
   }
   cout << endl << endl;

   map<string,int> map1;
   /*  creates a map with keys of type character and
      values of type integer */

   map1["abc"]=100;    // inserts key = "abc" with value = 100
   map1["b"]=200;      // inserts key = "b" with value = 200
   map1["c"]=300;      // inserts key = "c" with value = 300
   map1["def"]=400;    // inserts key = "def" with value = 400

   for(auto v: map1){
       cout << v.first << " -- " <<v.second << endl;
   }

   cout << map1.at("abc") << endl;
   cout << map1["abc"] << endl;
   cout << map1.empty() << endl;
   cout << map1.size() << endl;
   cout << map1.max_size() << endl;
}
