#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool cmp_string(string i , string j)
{
  return ( i.size() == j.size() );
}


int main(){
    /*This method returns a pair of iterator, where first
    iterator of the pair points to the element in first container
    and second iterator points to the element in the second container
    where mismatch has occurred.
    */

    int inputs1[] = {1,2,3,4,5,6,7,8};
    int inputs2[] = {-1,2,1,2,3,4,6,7,8,9};

   vector<int> v1(inputs1 ,inputs1+9);
   vector<int> v2(inputs2 ,inputs2+9);

   pair<vector<int>::iterator, vector<int>::iterator>  position;
   /* defining a pair of iterator to the vector of integer */

   position = mismatch(v1.begin(), v1.end(), v2.begin()+2) ;

   /* now position.first is an iterator pointing
   to the 5th element in the vector v1 and position.second
   points to the 7th element in the vector v2 */

   /* use of compare function */
   string s1[] = {"abc", "def", "temp", "testing"};
   string s2[] = {"xyz", "emp", "res", "testing"};

   pair<string::iterator, string::iterator> position2;

   //position2 = mismatch( s1, s1+4, s2, cmp_string);
   /* now position2.first is an iterator pointing
    to the 3rd element in s1 and position2.second points
    to the 3rd element in the s2 */

}
