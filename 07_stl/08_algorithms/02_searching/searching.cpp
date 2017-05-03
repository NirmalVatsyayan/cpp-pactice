#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool compare_function(string i, string j){
    return (i.size() == j.size());
}

bool compare_data (int i,int j) { return (i <= j); }

int main(){
    vector<int> v {1,2,3,4,5,6,7,8,9};
    cout << binary_search(v.begin(), v.end(), 8) << endl;
    cout << binary_search(v.begin(), v.end(), 100) << endl;

    vector<string> vs {"n", "nn", "nnn", "nnnn"};
    cout << binary_search(vs.begin(), vs.end(), "nv", compare_function) << endl;

    int input[] = {1,1,1,2,2,2,3,3,6,7,7,7,7,7,8,9};
    vector<int> v1(input, input+16);

    pair< vector<int>::iterator, vector<int>::iterator > sub_range;
    /* defining the pair of two iterators to an integer vector */


    sub_range = equal_range (v1.begin(), v1.end(), 2);
    /* now sub_range.first points to 4th element in the vector v and
     sub_range.second points to 7th element ,
     note that sub_range.second points to the element
     which is next to the element in the subrange  */
     cout << *sub_range.first << "  " << *sub_range.second << endl;

     sub_range = equal_range (v1.begin(), v1.end(), 7, compare_data);
     cout << *sub_range.first << "  " << *sub_range.second << endl;
}
