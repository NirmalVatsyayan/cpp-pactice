#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue<int> q;
    q.push(100);
    q.push(200);
    q.push(300);
    q.push(400);

    int size = q.size();
    cout << size << endl;
    cout << q.empty() << endl;
    cout << q.front() << endl;
    cout << q.back() << endl;

    for (int i=0; i < size ; i++){
        cout << q.front() << "  -  " << q.size() << endl;
        q.pop();
    }

}
