#include<iostream>
using namespace std;
bool same(string arr[], int size);
main(){
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;
    string arr[size];
    string input;
    for(int i=0; i<size; i++){
        cout << "Enter Element " << i+1 << ": ";
        cin >> input;
        arr[i]=input;
    }
    bool output;
    output = same(arr, size);
    cout << output;
    }

 bool same(string arr[], int size)
 {
    for(int i = 0; i < size; i++)
    {
        if(arr[0]!= arr[i])
        return false;
    }
    return true;

 }   

    
    


