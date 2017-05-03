#include<iostream>
#include<vector>

using namespace std;

/*
   iterator operators
       - begin
       - end
       - advance
       - distance
       - next
       - prev
*/

int main(){
   vector<int> v {1,2,3,4,5,6,7,8,9,10};

   vector<int>::iterator it;

   // begin and end
   // begin - gives iterator at start of container
   // end - gives iterator at end of container
   for(it = v.begin(); it != v.end(); it++){
       cout << *it << " ";
   }
   cout << endl;

   // advance operator - advances the current iterator
   it = v.begin(); // it now points to start of vector v
   advance(it, 5); // it now points to 6 which is 6th element of vector v
   cout << *it << endl;
   advance(it, -1); // it now points to 5 which is 5th element of vector v
   cout << *it << endl;

   // distance operator - gives distance between 2 iterators
   vector<int>::iterator i, j;
   i = v.begin();
   j = v.end();
   cout << distance(i,j) << endl;

   // next - It will return the nth iterator to i
   vector<int>::iterator x = next(i, 2);
   cout << *x << endl;

   // prev - It will return the previous nth iterator to i
   vector<int>::iterator y = prev(x, 2);
   cout << *y << endl;
}
