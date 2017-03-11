#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<string> vec;

    vec.push_back("OK");
    vec.push_back("Nirmal");
    vec.push_back("Vatsyayan");
    vec.push_back("OK");

    for (int i=0; i< vec.size(); i++){
        cout << vec[i] << endl;
    }

    cout << "\nUsing iterator now !!\n" << endl;
    vector<string>::const_iterator ptr;
    for (ptr = vec.begin(); ptr != vec.end(); ++ptr){
        cout << *ptr << endl;
    }

    cout << "\nUsing iterator now !!\n" << endl;
    vector<string>::reverse_iterator rev;
    for(rev = vec.rbegin(); rev != vec.rend(); ++rev){
        cout << *rev << endl;
    }
}
