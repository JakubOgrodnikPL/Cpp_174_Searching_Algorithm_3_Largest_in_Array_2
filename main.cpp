#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  // Initialize the array with some values
  int arr[] = {10, 20, 10, 30, 40, 40};
  int n = sizeof(arr) / sizeof(arr[0]);

  // Create a vector to store the distinct elements
  vector<int> distinct;

  // Add the first element to the vector
  distinct.push_back(arr[0]);

  // Iterate through the rest of the array and add distinct elements to the vector
  for (int i = 1; i < n; i++) {
    if (find(distinct.begin(), distinct.end(), arr[i]) == distinct.end()) {
      distinct.push_back(arr[i]);
    }
  }

  // Sort the distinct elements in descending order
  sort(distinct.rbegin(), distinct.rend());

  // Print the three largest elements
  cout << "The three largest elements are: " << distinct[0] << ", " << distinct[1] << ", " << distinct[2] << endl;

  return 0;
}
