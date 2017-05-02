#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v;

    v.push_back(100); // inserts element at end of vector
    v.push_back(200);
    v.push_back(300);

    cout<<"general purpose functions "<<endl;
    cout<<"size "<<v.size()<<endl; // returns size of vector
    cout<<"lookup at index "<<v.at(0)<<endl; // returns value at given index
    cout<<"check empty "<<v.empty()<<endl; // 1 - true , 0 - false
    cout<<"check capacity "<<v.capacity()<<endl; // returns capacity of vector
    cout<<"element at front "<<v.front()<<endl;  // returns element at front
    cout<<"element at back "<<v.back()<<endl; // returns element at back

    vector<int>::iterator i = v.begin();

    v.insert(i, 2, 1000); // inserts element at the index pointed by iterator

    for(vector<int>::iterator i = v.begin(); i != v.end(); i++) {
  	cout << *i <<" ";   // for printing the vector
  }

    cout <<endl;
    v.pop_back(); // pops element from end
    v.pop_back();

    for(vector<int>::iterator i = v.begin(); i != v.end(); i++) {
  	    cout << *i <<" ";   // for printing the vector
    }
    cout <<endl;
    vector<int>::iterator it = v.begin();
    v.erase(it);   //removes first element from the vector
    v.erase(v.begin(), v.end() - 2 );  // removes all element except last two

    for(vector<int>::iterator i = v.begin(); i != v.end(); i++) {
  	    cout << *i <<" ";   // for printing the vector
    }
}
