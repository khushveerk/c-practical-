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

OR 

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

     
##3

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


##4

#include <iostream> 
#include <cstring> 
using namespace std; 

void displayASCII (string str) { 
   cout << "ASCII values: \n";
   for (char c: str) {  
      cout << c << " ->" << int(c) << endl;
    } 
}  

void concatenateStrings (char str1[], char str2[]) {  
   int i= strlen(str1), j = 0; 
   while (str2[j] != '\0') { 
      str1[i] = str2[j];  
      i++; j++;  
   }  
   str1[i] = '\0'; 
} 

bool compareStrings (char str1[], char str2[]) { 
   int i = 0; 
   while (str1[i] != '\0' && str2[i] != '\0') { 
       if (str1[i] != str2[i]) 
           return false; 
       t++;  
   }   
   return str1[i] = str2[i]; 
}

int stringLength(char* str) { 
   int len = 0; 
   while (*str != '\0') {  
       len++; 
       str++; 
   } 
return len; 
}

void toUppercase (char str[]) { 
   int i = 0; 
   while (str[i] != '\0') { 
       if (str[i] >= 'a' && str[i] <= 'z') { 
           str[i] = 32; 
       } 
       i++; 
   } 
} 

// Reverse string 

void reverseString(char str[]) { 
   int len = stringLength (str); 
   for (int i = 0; i < len / 2; i++) {
      swap(str[i], str[len-i-1]); 
   } 
} 

int main() { 
    char str1[100], str2[100]; 
    
    cout << "Enter first string: "; 
    cin >> str1; 
    cout << "Enter second string: "; 
    cin >> str2; 

    displayASCII(str1); 

// Concatenation 

    concatenateStrings (str1, str2); 
    cout << "Concatenated String: " << str1 << endl; 

       // Comparison 
    cout << "Strings are << (compareStrings (str1, str2) ? "equal": "not equal") << endl; 

       // String length 
    cout << "Length of first string: " << stringLength(str1) << endl; 

       // Convert to uppercase 
    toUppercase(str1); 
    cout << "Uppercase String: "<< str1 << endl;

} 

// Reverse string 
void reverseString(char str[]) { 
   int len = stringLength(str); 
   for (int i = 0; i < len / 2; i++) { 
      swap(str[i], str[len i 1]); 
   } 
} 
int main() { 
   char str1[100], str2[100]; 

   cout << "Enter first string: "; 
   cin >> str1; 
   cout << "Enter second string: 
   cin >> str2; 

   displayASCII(str1); 

   // Concatenation 
   concatenateStrings (str1, str2); 
   cout << "Concatenated String: <<<< str1 << endl; 

      // Comparison 
   cout << "Strings are <<< (compareStrings (str1, str2) ? "equal": "not equal") <<< endl; 

      // String length 
   cout << "Length of first string: <<<<< stringLength(str1) << endl; 

      // Convert to uppercase toUppercase(str1); 
   cout << "Uppercase String: <<<<< str1 << endl; 

      // Reverse string 
   reverseString(str1); 
   cout << "Reversed String: <<<< str1 << endl; 
   return 0; 
}










