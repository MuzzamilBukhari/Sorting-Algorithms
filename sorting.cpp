#include<iostream>
using namespace std;

// Selection Sort
void selectionSort (int arr[], int size) {
    for (int i = 0; i < size-1;i++){
        int mi = i;
        for (int j = i+1; j < size; j++) {
            if (arr[j] < arr[mi]){
                mi = j;
            }
        }
        int tmp = arr[i];
        arr[i] = arr[mi];
        arr[mi] = tmp;
    }
}

// Bubble Sortg
void bubbleSort (int arr[], int size){
    for (int j = 0; j < size; j++){
        for (int i = 0; i < size-j-1;i++){
            if (arr[i] > arr[i+1]){
                int tmp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = tmp;
            }
        }
    }
}

// Insertion Sort
void insertionSort (int arr[], int size){  
    for (int i = 1; i < size; i++) {
        int hold = arr[i];
        while (i>0 && hold<arr[i-1]){
            arr[i] = arr[i-1];
            i--;
        }
        arr[i] = hold;
    }
}

// Main Function
int main (){
    int size;
    cout << "Enter the size of an array : ";
    cin >> size;
    int arr[size];
    cout << "Enter the array elements "<<endl;
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }
    int n;
    cout << "Which sorting algo you want to use : Enter 1 for Selection, 2 for Bubble & 3 for Insertion : ";
    cin >> n;
    if (n == 1) selectionSort (arr, size);
    else if (n == 2) bubbleSort(arr, size);
    else if (n == 3) insertionSort(arr, size);
    else cout << "Invalid Number";

    // Print array
    for (int i = 0;i<size; i++){
        cout << arr[i] << " ";
    }
}