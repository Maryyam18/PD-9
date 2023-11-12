#include<iostream>
using namespace std;
string findBrokenKeys(string correctPhrase, string actualTyped);
main(){
    string correctPhrase, actualTyped;
    cout << "Enter the correct phrase: ";
    getline(cin, correctPhrase);

    cout << "Enter what you actually typed: ";
    getline(cin, actualTyped);
    
    cout << "Broken keys: " << findBrokenKeys(correctPhrase, actualTyped);
}

string findBrokenKeys(string correctPhrase, string actualTyped){
    string word = "";
    string keys = "";
    for(int i=0; i < correctPhrase.length(); i++){
    if(correctPhrase[i] != actualTyped[i] && keys.find(correctPhrase[i]) == string::npos){
        word = word+correctPhrase[i];
        keys = keys+correctPhrase[i];
    }
    }
    return word;
}