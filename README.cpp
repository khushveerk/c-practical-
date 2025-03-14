##c-practical-

## 1
#include <iostream> 
#include <vector> 
#include <set> 
using namespace std; 

double seriesSum(int n) { 
   double sum=0; 
   for (int i =1; i <= n; i++) {  
      double term 1.0/ pow(1, 1); 
      if ( i% 2==0) {
         sum = term; // Alternate terms are negetive 
      } else { 
         sum += term;
      }
   } 
   return sum; 
} 
int main() {  
   int n; 
   cout << "Enter the number of terms: "; 
   cin>>n; 
   cout "Sum of series: <<< seriesSum(n) endl;  
   return 0; 
}

##2
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


## 3 
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

     
##4

 #include <iostream> 
#include <string> 
#include <map> 
  using namespace std; 

void countOccurrences (string str) { 
   map char, int freq; 

   for (char : str) { 
       if (isalpha(c)) { // Consider only alphabets  
          freq[tolower(c)]++; 
      }  
   } 
   cout<< "Character Frequency Table:\n"; 
 
   for (auto pair freq) { 
       cout<<< pair.first<< " -> " << pair.second << endl; 
   }
}
int main() { 
   string input; 
   cout<< "Enter a string:"; 
   getline(cin, input);  

   countoccurrences(input); 
   return 0; 








