#include<iostream>
#include<queue>

using namespace std;

int main(){
    deque<int> dq {1,5,8,9,3};

    cout << dq.size() << endl;

    int a[] = { 1,5,8,9,3 };
    deque<int> dq1(a, a+5); // initialization using array
    cout << dq1.size() << endl;

    dq.push_back(100);
    dq.push_back(101);

    dq.push_front(102);
    dq.push_front(103);

    for(auto v:dq){
        cout << v << " ";
    }
    cout<<endl;

    dq.pop_back();
    dq.pop_front();

    for(auto v:dq){
        cout << v << " ";
    }
    cout<<endl;

    cout << dq.empty() << endl;
    cout << dq.size() << endl;
    cout << dq.max_size() << endl;
}
