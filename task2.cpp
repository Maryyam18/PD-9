#include<iostream>
using namespace std;
string containsSeven(int numbers[], int size);
int main(){
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;
    int numbers[size];
    int input;
    for(int i=0; i < size; i++)
    {
        cout << "Enter Element " << i+1<<": ";
        cin >> input;
        numbers[i] = input;
    }
    string output;
    output = containsSeven(numbers, size);
    cout << output;
}



string containsSeven(int numbers[], int size)
{
    for(int i=0; i<size; i++){
        if(numbers[i]%10 == 7){
            return "Boom!";
        }
        
    }
    return "there is no 7 in the array";
}