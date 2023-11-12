#include<iostream>
using namespace std;

string longest7SegemntWord(string arr[], int size);
bool eligible(string);

main(){
    int size;
    cout << "Enter the number of words: ";
    cin >> size;
    string arr[size];
    string input;
    cout << "Enter the words, one by one: " << endl;
    for(int i = 0; i < size; i++){
        cin >> input;
        arr[i] = input;
    }
    string  output;
     output = longest7SegemntWord(arr, size);
    cout << "Longest 7-segment word: " << output;
    }

string longest7SegemntWord(string arr[], int size){
    string word = "";
    for(int i=0; i <size; i++){
        if(eligible(arr[i]) && arr[i].length() >= size && arr[i].length() > word.length()){
        word = arr[i];

    }
    }
    return word;
}

bool eligible(string alphabet){
    for(int i=0; i < alphabet.length(); i++){
        if(alphabet[i] == 'k' || alphabet[i]== 'm'|| alphabet[i] == 'v' || alphabet[i] == 'w' || alphabet[i] == 'x')
            return false;
        
       
    }
    return true;
}

