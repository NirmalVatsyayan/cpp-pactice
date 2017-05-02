#include<iostream>
#include<list>

using namespace std;

bool compare_function( string& s1 , string& s2 )
{
    return ( s1.length() > s2.length() );
}

int main(){
     list<int> list_1 {1}; // create and initialize a list
     list<int> list_2;  // create a list
     list<string> list_3 {"h" , "hhh" , "hh"};  // create a list

     int size = list_1.size();
     cout << "size is "<<size<<endl;

     //executes a loop over a range
     for(auto v : list_1){
        cout << v<<endl;
     }

     list_2.push_back(6);
     list_2.push_back(7);
     /* now the list becomes 6,7 */

     list_2.push_front(8);
     list_2.push_front(9);
     /* now the list becomes 9,8,6,7 */

     list_2.pop_back();
     /* now the list becomes 9,8,6 */

     list_2.pop_front();
     /* now the list becomes 8,6 */

     for (auto v : list_2){
        cout<<v<<endl;
     }

     cout<< "check if list is empty " <<list_2.empty()<<endl;
     cout<< "size of list " <<list_2.size()<<endl;
     cout<< "get element from front of list " << list_2.front()<<endl;
     cout<< "get element from back of list " << list_2.back()<<endl;

     cout<<"reversing list 2 : ";
     list_2.reverse();

     for (auto v : list_2){
        cout<<v<< " " ;
     }

     cout<<endl;

     cout<<"merging list 2 and list 1 ";
     list_2.merge(list_1);
     for (auto v : list_1){
        cout<<v<<" ";
     }
     cout<<endl;

     list_2.push_back(55);
     list_2.push_back(11);
     list_2.push_back(100);

     cout<<"list 2 is ";
     for(auto v : list_2){
        cout << v << " ";
     }
     cout << endl;

     list_2.sort();
     cout<<"sorted list 2 is ";
     for(auto v : list_2){
        cout << v << " ";
     }
     cout << endl;

     cout<<"list 3 is ";
     for(auto v : list_3){
        cout << v << " ";
     }
     cout << endl;

     cout<<"sorting a list of string "<<endl;
     list_3.sort(compare_function);
     cout<<"sorted list 3 is ";
     for(auto v : list_3){
        cout << v << " ";
     }
     cout << endl;
}
