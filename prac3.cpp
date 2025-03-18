#include <iostream> 
#include <string> 
#include <map> 
  using namespace std; 

void countoccurrences (string str) { 
   map <char, int> freq; 

   for (char : str) { 
       if (isalpha(c)) { // Consider only alphabets  
          freq[tolower(c)]++;  // Convert to lowercase before counting
      }  
   } 
   cout<< "Character Frequency Table:\n"; 
 
   for (auto& pair freq) { 
       cout << pair.first<< " -> " << pair.second << endl; 
   }
}
int main() { 
   string input; 
   cout<< "Enter a string:"; 
   getline(cin, input);  

   countoccurrences(input); 
   return 0; 
}
