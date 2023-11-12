#include<iostream>
#include<string>
using namespace std;
int common(string input1, string input2);
main(){
    string input1, input2;
    cout << "Enter the first string: ";
    cin >> input1;
    cout << "Enter the second string: ";
    cin >> input2;
    cout << "Number of common characters: "<< common(input1, input2);
}
int common(string input1, string input2){
    int commonCount = 0;
    int charCount[26] = {0};

    for(int i=0; i < input1.length(); i++){
        char character = input1[i];
        charCount[character - 'a']++;
           }

           
    for(int i=0; i < input2.length(); i++){
        char character = input2[i];
       if (charCount[character - 'a'] > 0)
       {
        commonCount++;
        charCount[character - 'a']--;
       }
       }
       return commonCount;
}
