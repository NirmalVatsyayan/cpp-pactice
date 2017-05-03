#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

/*
  -  sort
  -  is_sorted
  -  partial_sort
*/

bool compare_function(int i, int j){
    return i > j;
}

bool compare_string(string i, string j){
    return i.size() < j.size();
}

int main(){

   // sorting
   vector<int> v;
   v.push_back(100);
   v.push_back(101);
   v.push_back(77);
   v.push_back(66);
   v.push_back(88);

   vector<int>::iterator i = v.begin();
   vector<int>::iterator j = v.end();

   sort(i, j);  // default sorting ascending order
   for(auto x: v){
       cout << x << " ";
   }
   cout<<endl;

   vector<int> v1 {66,55,33,100,101};
   sort(v1.begin(), v1.end(), compare_function); // sorting in descending order
   for(auto x: v1){
       cout << x << " ";
   }
   cout << endl;

   vector<string> v2 {"n", "nn", "nnnn", "nnn"};
   sort(v2.begin(), v2.end(), compare_string); // sorting string in ascending order by size
   for(auto x: v2){
       cout << x << " ";
   }
   cout << endl;

   // is_sorted - check if data is sorted
   cout << is_sorted(v.begin(), v.end()) << endl;
   cout << is_sorted(v1.begin(), v1.end(), compare_function) << endl;
   cout << is_sorted(v2.begin(), v2.end(), compare_string) << endl;


   // partial_sort - sorts the first half , if required we could
   // also provide our own comparing function
   vector<int> vp {5,7,1,2,4,3,6,8,9};
   partial_sort(vp.begin(), vp.begin()+5, vp.end());
   for(auto x: vp){
      cout << x << " ";
   }

}
