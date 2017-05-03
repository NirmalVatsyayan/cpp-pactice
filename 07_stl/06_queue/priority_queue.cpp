#include<iostream>
#include<queue>

using namespace std;

int main(){
    priority_queue<int> pq;

    pq.push(100);
    pq.push(400);
    pq.push(300);
    pq.push(200);

    int size = pq.size();

    cout << pq.top() << endl;
    cout << pq.empty() << endl;
    cout << pq.size() << endl;

    for(int i=0; i<size; i++){
        cout<<pq.top() << "  -  " << pq.size()<< endl;
        pq.pop();
    }

}
