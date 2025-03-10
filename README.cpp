##c-practical-

## 1
#include <iostream> 
#include <vector> 
#include <set> 
using namespace std; 

void removeDuplicates (vector<int>& arr) { 
     set<int>uniqueElements(arr.begin(), arr.end()):  
     arr.assign(uniqueElements.begin(), uniqueElements.end()); 
}
int main() { 
     vector<int arr (1, 2, 2, 3, 4, 4, 5, 6, 6); 

     cout << "Original array: "; 
     for (int num :arr) cout<<num << " ";

     removeDuplicates(arr); 
     cout<< "\nArray after removing duplicates: "; 
     for (int num arr) cout<< num<<"*; 
      return 0; 
}


## 2
#include <iostream>
#include <algorithm> 
using namespace std;

int removeDuplicates(int arr[], int n) {
    if (n == 0 || n == 1) return n; 

    sort(arr, arr + n); 

    int j = 0; 

   
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            arr[j++] = arr[i];
        }
    }
    arr[j++] = arr[n - 1]; 
    return j; 
}

int main() {
    int arr[] = {4, 2, 2, 1, 5, 4, 6, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    n = removeDuplicates(arr, n); 

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}

     
