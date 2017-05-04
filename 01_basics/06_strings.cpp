#include<iostream>
#include<cstring>

using namespace std;

int main(){
    char key[] = "orange";
    char answer[] = "Yes my favorite fruit is ";
    char buffer[50];
    char cpy_buffer[100];

    do{
        cout << "What is my favorite fruit ? ";
        cin >> buffer;
    }while(strcmp(key, buffer)!=0);
    cout << "Answer is correct :)" << endl;

    strcat(answer, key);
    cout << answer << endl;

    strcpy(cpy_buffer, answer);
    cout << cpy_buffer << endl;
    cout << strlen(cpy_buffer) << endl;
}
