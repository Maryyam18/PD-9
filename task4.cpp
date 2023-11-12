#include<iostream>
using namespace std;
void evenOddTransform(int arr[], int size, int n);
int main(){
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;
    int arr[size];
    int input;
    for(int i=0; i < size; i++){
        cout << "Enter Element " << i+1 << ": ";
        cin >> input;
        arr[i]=input;

    }
    int n;
    cout << "Enter number of times even-odd transformation need to be done: ";
    cin >> n;
    evenOddTransform(arr, size, n);
    cout << "[";
    for(int i=0; i<size; i++){
        cout << arr[i];
        if(i < size - 1){
            cout << ", ";
                    }
    }
    cout << "]";
    return 0;
}

void evenOddTransform(int arr[], int size, int n){
    for(int j=0; j<n; j++){
    for(int i=0; i < size; i++){
        if(arr[i]%2 == 0){
               arr[i] = arr[i] - 2;
           
        }
        else{
            arr[i]=arr[i]+2;
        }
    }
    }

}