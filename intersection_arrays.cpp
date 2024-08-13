#include <bits/stdc++.h>
using namespace std;

// Function to find the intersection of two arrays
vector<int> intersection(int arr1[], int arr2[], int n) {
    unordered_set<int> set1(arr1, arr1 + n); // Initialize set1 with elements from arr1
    unordered_set<int> resultSet; // To store the intersection

    for (int i = 0; i < n; i++) {
        if (set1.find(arr2[i]) != set1.end()) { // If arr2[i] is in set1
            resultSet.insert(arr2[i]);
        }
    }

    // Fix syntax error in the return statement
    return vector<int>(resultSet.begin(), resultSet.end());
}

int main() {
    int n;
    
    cin >> n;

    // Use dynamic allocation for arrays based on the input size
    int* arr1 = new int[n];
    int* arr2 = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }

    vector<int> result = intersection(arr1, arr2, n);

    cout << "Intersection of the two arrays: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    // Free allocated memory
    delete[] arr1;
    delete[] arr2;

    return 0;
}
