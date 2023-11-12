#include<iostream>
#include<string>
using namespace std;
bool lengthEven(string word);

int main(){
    string word;
    cout << "Enter a String: ";
    cin >> word;
    cout << lengthEven(word);
    return 0;
}

bool lengthEven(string word){
        bool result;
        int output = word.length();
       if(output % 2  == 0){
           result = true;
       }
       else{
           result =  false;
       }
       return result;
       }