#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int input[] = {1,2,2,3,4,4,5,6,7,8,10,45};
    vector<int> v(input, input+12);

    vector<int>::iterator it1 , it2, it3, it4;

    /*
    upper_bound() returns an iterator to the elements in the given
    range which does not compare greater than the given value.
    */
    it1 = upper_bound(v.begin(), v.end(), 6);
    /* points to eight element in v */
    cout << *it1 << endl;


    it2 = upper_bound(v.begin(), v.end(), 4);
    /* points to seventh element in v */
    cout << *it2 << endl;


    /*
    lower_bound() returns an iterator to the elements in
    the given range which does no compare less than the given value.
    */
    it3 = lower_bound(v.begin(), v.end(), 4);
    /* points to fifth element in v */
    cout << *it3 << endl;

    it4 = lower_bound (v.begin(), v.end(), 10);
    /* points to second last element in v */
    cout << *it4 << endl;
}
