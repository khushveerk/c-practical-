practical 12 remove whitespace
```
#include <iostream>
#include <fstream>
using namespace std;

void removeWhitespace(string inputFile, string outputFile) {
    ifstream in(inputFile);
    ofstream out(outputFile);
    if (!in || !out) {
        cout << "Error opening files!" << endl;
        return;
    }
    char ch;
    while (in.get(ch)) {
        if (!isspace(ch))
            out.put(ch);
    }
    cout << "File copied successfully without whitespaces.\n";
    in.close();
    out.close();
}

int main() {
    string inputFile = "input.txt";
    string outputFile = "output.txt";
    removeWhitespace(inputFile, outputFile);
    return 0;
}
```

prac 11 details of 5 students

```
#include <iostream>
using namespace std;

class Student {
public:
    int rollNo;
    string name;
    string className;
    int year;
    float totalMarks;

    void input() {
        cout << "Enter Roll No, Name, Class, Year, and Total Marks: ";
        cin >> rollNo >> name >> className >> year >> totalMarks;
    }

    void display() {
        cout << "Roll No: " << rollNo
             << ", Name: " << name
             << ", Class: " << className
             << ", Year: " << year
             << ", Total Marks: " << totalMarks << endl;
    }
};

int main() {
    Student students[5]; // array of 5 Student objects

    // Taking input for 5 students
    for (int i = 0; i < 5; i++) {
        cout << "\nEnter details for Student " << (i + 1) << ":\n";
        students[i].input();
    }

    cout << "\nStudent Details:\n";
    for (int i = 0; i < 5; i++) {
        students[i].display();
    }

    return 0;
}
```

prac 10 triangle class
// program 10

```
#include <iostream>
#include <cmath>
using namespace std;

class Triangle {
private:
    double a, b, c;

public:
    Triangle(double x, double y, double z) {
        if (x <= 0 || y <= 0 || z <= 0) {
            cout << "Error: All sides must be greater than 0." << endl;
            exit(1);
        }
        if (x + y <= z || x + z <= y || y + z <= x) {
            cout << "Error: Sum of any two sides must be greater than the third side." << endl;
            exit(1);
        }
        a = x;
        b = y;
        c = z;
    }

    double area() {
        double s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }

    double area(double base, double height) {
        return 0.5 * base * height;
    }
};

int main() {
    Triangle t1(3, 4, 5);
    cout << "Area using Heron's formula: " << t1.area() << endl;
    cout << "Area of right-angled triangle (base=3, height=4): " << t1.area(3, 4) << endl;
    return 0;
}
```

prac 9 class pearson

```
#include <iostream>
using namespace std;

class Person {
protected:
    string name;
public:
    Person(string n) : name(n) {}
    virtual void display() {
        cout << "Name: " << name << endl;
    }
};

class Student : public Person {
    string course;
    int marks, year;
public:
    Student(string n, string c, int m, int y) : Person(n), course(c), marks(m), year(y) {}
    void display() override {
        cout << "Name: " << name << "\nCourse: " << course << "\nMarks: " << marks << "\nYear: " << year << endl;
    }
};

class Employee : public Person {
    string department;
    float salary;
public:
    Employee(string n, string d, float s) : Person(n), department(d), salary(s) {}
    void display() override {
        cout << "Name: " << name << "\nDepartment: " << department << "\nSalary: " << salary << endl;
    }
};

int main() {
    Person* p;
    Student s("Aman", "BCA", 85, 2025);
    Employee e("Riya", "HR", 50000);

    p = &s; p->display();
    cout << endl;
    p = &e; p->display();

    return 0;
}
```

practical 8 matrix class

```
#include <iostream>
using namespace std;

class Matrix {
    int a[10][10], r, c;
public:
    Matrix(int x = 0, int y = 0) : r(x), c(y) {}

    void input() {
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                cin >> a[i][j];
    }

    void display() {
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    }

    Matrix add(Matrix m) {
        if (r != m.r || c != m.c)
            throw "Incompatible for addition!";
        Matrix res(r, c);
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                res.a[i][j] = a[i][j] + m.a[i][j];
        return res;
    }

    Matrix multiply(Matrix m) {
        if (c != m.r)
            throw "Incompatible for multiplication!";
        Matrix res(r, m.c);
        for (int i = 0; i < r; i++)
            for (int j = 0; j < m.c; j++)
                for (int k = 0; k < c; k++)
                    res.a[i][j] += a[i][k] * m.a[k][j];
        return res;
    }

    Matrix transpose() {
        Matrix res(c, r);
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                res.a[j][i] = a[i][j];
        return res;
    }
};

int main() {
    int r1, c1, r2, c2, ch;
    cout << "Enter size of Matrix 1: "; cin >> r1 >> c1;
    cout << "Enter size of Matrix 2: "; cin >> r2 >> c2;
    Matrix m1(r1, c1), m2(r2, c2);
    cout << "Matrix 1:\n"; m1.input();
    cout << "Matrix 2:\n"; m2.input();

    do {
        cout << "\n1.Add 2.Multiply 3.Transpose 4.Exit: ";
        cin >> ch;
        try {
            if (ch == 1) m1.add(m2).display();
            else if (ch == 2) m1.multiply(m2).display();
            else if (ch == 3) m1.transpose().display();
        } catch (const char* msg) {
            cout << msg << endl;
        }
    } while (ch != 4);

    return 0;
}
```

practical 7 GCD calculation
// Program 7: GCD using Recursive and Iterative method

```
#include <iostream>
using namespace std;

// Recursive GCD
int gcdRecursive(int a, int b) {
    return (b != 0) ? gcdRecursive(b, a % b) : a;
}

// Iterative GCD
int gcdIterative(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "GCD (Recursive): " << gcdRecursive(a, b) << endl;
    cout << "GCD (Iterative): " << gcdIterative(a, b) << endl;

    return 0;
}
```

prac 6 binary search
// Program 6: Binary Search using Recursive and Iterative method

```
#include <iostream>
#include <vector>
using namespace std;

// Recursive binary search
int binarySearchRecursive(vector<int> arr, int left, int right, int key) {
    if (left > right)
        return -1;

    int mid = left + (right - left) / 2;

    if (arr[mid] == key)
        return mid;
    else if (arr[mid] > key)
        return binarySearchRecursive(arr, left, mid - 1, key);
    else
        return binarySearchRecursive(arr, mid + 1, right, key);
}

// Iterative binary search
int binarySearchIterative(vector<int> arr, int key) {
    int left = 0, right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] > key)
            right = mid - 1;
        else
            left = mid + 1;
    }

    return -1;
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 11};
    int key = 5;

    // Recursive search
    int indexRec = binarySearchRecursive(arr, 0, arr.size() - 1, key);
    cout << "Recursive Binary Search: " 
         << (indexRec != -1 ? "Found at index " + to_string(indexRec) : "Not found") << endl;

    // Iterative search
    int indexIter = binarySearchIterative(arr, key);
    cout << "Iterative Binary Search: " 
         << (indexIter != -1 ? "Found at index " + to_string(indexIter) : "Not found") << endl;

    return 0;
}
```

prac 5 merge two order array
```
#include <iostream>
#include <vector>
using namespace std;

// Function to merge two sorted arrays
vector<int> mergeArrays(vector<int> arr1, vector<int> arr2) {
    vector<int> merged;
    int i = 0, j = 0;

    // Merge elements in sorted order
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] < arr2[j])
            merged.push_back(arr1[i++]);
        else
            merged.push_back(arr2[j++]);
    }

    // Add remaining elements from arr1 (if any)
    while (i < arr1.size())
        merged.push_back(arr1[i++]);

    // Add remaining elements from arr2 (if any)
    while (j < arr2.size())
        merged.push_back(arr2[j++]);

    return merged;
}

int main() {
    vector<int> arr1 = {1, 3, 5, 7};
    vector<int> arr2 = {2, 4, 6, 8};

    vector<int> merged = mergeArrays(arr1, arr2);

    cout << "Merged sorted array: ";
    for (int num : merged)
        cout << num << " ";

    cout << endl;
    return 0;
}
```

prac 4 string manipulation
```
#include <iostream>
#include <cstring>
using namespace std;

// Display ASCII values of a string
void displayASCII(string str) {
    cout << "ASCII values:\n";
    for (char c : str) {
        cout << c << " -> " << int(c) << endl;
    }
}

// Concatenate two C-style strings
void concatenateStrings(char str1[], char str2[]) {
    int i = strlen(str1), j = 0;
    while (str2[j] != '\0') {
        str1[i++] = str2[j++];
    }
    str1[i] = '\0';
}

// Compare two strings character by character
bool compareStrings(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i])
            return false;
        i++;
    }
    return str1[i] == str2[i];  // true if both end at same time
}

// Calculate length of a string manually
int stringLength(char* str) {
    int len = 0;
    while (*str != '\0') {
        len++;
        str++;
    }
    return len;
}

// Convert string to uppercase
void toUppercase(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        i++;
    }
}

// Reverse the string
void reverseString(char str[]) {
    int len = stringLength(str);
    for (int i = 0; i < len / 2; i++) {
        swap(str[i], str[len - i - 1]);
    }
}

int main() {
    char str1[200], str2[100];

    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    // Display ASCII values of first string
    displayASCII(str1);

    // Concatenate str2 to str1
    concatenateStrings(str1, str2);
    cout << "Concatenated String: " << str1 << endl;

    // Compare strings
    cout << "Strings are " << (compareStrings(str1, str2) ? "equal" : "not equal") << endl;

    // Length of concatenated string
    cout << "Length of concatenated string: " << stringLength(str1) << endl;

    // Convert to uppercase
    toUppercase(str1);
    cout << "Uppercase String: " << str1 << endl;

    // Reverse string
    reverseString(str1);
    cout << "Reversed String: " << str1 << endl;

    return 0;
}
```

prac 3 occurence of each alphabet
// program 4
```
#include <iostream>
#include <string>
#include <map>      
#include <cctype>   
using namespace std;

void countOccurrences(string str) {
    map<char, int> freq;  
    
    for (char c : str) {
        if (isalpha(c)) {
            freq[tolower(c)]++;
        }
    }

    cout << "Character Frequency Table:\n";
    for (auto &pair : freq) {
        cout << pair.first << " -> " << pair.second << endl;
    }
}

int main() {
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    countOccurrences(input);

    return 0;
}
```

prac 2 remove duplicate from array
```
#include <iostream>
#include <vector>
#include <set>
using namespace std;

void removeDuplicates(vector<int>& arr) {
    set<int> uniqueElements(arr.begin(), arr.end());
    arr.assign(uniqueElements.begin(), uniqueElements.end());
}

int main() {
    vector<int> arr = {1, 2, 2, 3, 4, 4, 5, 6, 6};
    
    cout << "Original array: ";
    for (int num : arr) cout << num << " ";
    cout << endl;
    
    removeDuplicates(arr);
    
    cout << "Array after removing duplicates: ";
    for (int num : arr) cout << num << " ";
    cout << endl;
    
    return 0;
}
```

prac 1 sum of terms
```
#include <iostream>
#include <cmath> // for pow()
#include <cstdlib> // for atoi()
using namespace std;

int main(int argc, char* argv[]) {
    int n;

    if (argc > 1) {
        n = atoi(argv[1]);
    } else {
        cout << "Enter the number of terms: ";
        cin >> n;
    }

    double sum = 0.0;

    for (int i = 1; i <= n; i++) {
        double term = 1.0 / pow(i, i);
        if (i % 2 == 0)
            sum -= term;
        else
            sum += term;
    }

    cout << "Sum of the series: " << sum << endl;
    return 0;
}
```
