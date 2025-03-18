#include <iostream> 
#include <vector> 
using namespace std; 

// Recursive binary search  
int binarySearchRecursive (vector<int> arr, int left, int right, int key) { 
   if (left > right) return -1; 
   int mid = left + (right - left) / 2; 

   if(arr[mid] == key) return mid;
   
   if (arr[mid] > key) return binarySearchRecursive(arr, left, mid-1, key); 
   return binarySearchRecursive(arr, mid +1 ,right,key); 
} 

// Iterative binary search 
int binarySearchIterative(vector<int> arr, int key) { 
  int left =0, right = arr.size() - 1; 
  while (left <= right) { 
     int mid =left + (right - left)/2; 
     if (arr[mid] == key) return mid; 
     if (arr[mid] > key) right = mid-1;
     else left = mid + 1; 
  }
return -1; 
} 

int main() { 
  vector<int> arr= {1, 3, 5, 7, 9, 13 }; 
  int key = 5; 

// Recursive search 

  int indexRec= binarySearchRecursive(arr, 0, arr.size() - 1, key); 
  cout<<" Recursive Binary Search:";
   if (indexRec !=-1) ? cout << "Found at index" << indexRec << endl;
   else cout << "Not found" << endl; 

// Iterative search    
  int indexIter = binarySearchIterative(arr, key);  
  cout << "Iterative Binary Search: ";  
  if (indexIter != -1) cout << "Found at index " << indexIter << endl;
  else cout << "Not found" << endl;

  return 0;
}
