#include<iostream>
using namespace std;
int coloringTime(string arr[], int size);

main(){
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;
    string arr[size];
    string  input;
    for(int i=0; i<size; i++){
        cout << "Enter Element " << i+1 << ": ";
        cin >> input;
        arr[i]=input;
    }
    int result;
    result = coloringTime(arr, size);
    cout << "Time to color: " << result << " seconds";


}

int coloringTime(string arr[], int size){
if (size <= 0) {
        return 0;
    }

    int totalTime = 2;

    for (int i = 1; i < size; ++i) {
       
        if (arr[i] != arr[i - 1]) {
            totalTime += 1; 
        }

        totalTime += 2; 
    }

    return totalTime;
}

