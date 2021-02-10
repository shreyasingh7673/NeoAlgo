/* Dutch National Flag (DNF) - It is a programming problem proposed by Edsger Dijkstra. The flag of the Netherlands consists of three colors: white, red, and blue. 
The task is to randomly arrange balls of white, red, and blue in such a way that balls of the same color are placed 
For DNF (Dutch National Flag), we sort an array of 0, 1, and 2's in linear time that does not consume any extra space.
 We have to keep in mind that this algorithm can be implemented only on an array that has three unique elements. */

/*Approach:
Count the number of 0s, 1s and 2s in the given array. Then store all the 0s in the beginning followed by all the 1s then all the 2s. */

/* Algorithm:
1. Keep three counter c0 to count 0s, c1 to count 1s and c2 to count 2s
2. Traverse through the array and increase the count of c0 is the element is 0,increase the count of c1 is the element is 1 and increase the count of c2 is the element is 2
3. Now again traverse the array and replace first c0 elements with 0, next c1 elements with 1 and next c2 elements with 2. */

//Implementation:

// C++ implementation of the approach 
#include <bits/stdc++.h> 
using namespace std; 
  
// Utility function to print the contents of an array 
void printArr(int arr[], int n) 
{ 
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
} 
  
// Function to sort the array of 0s, 1s and 2s 
void sortArr(int arr[], int n) 
{ 
    int i, cnt0 = 0, cnt1 = 0, cnt2 = 0; 
  
    // Count the number of 0s, 1s and 2s in the array 
    for (i = 0; i < n; i++) { 
        switch (arr[i]) { 
        case 0: 
            cnt0++; 
            break; 
        case 1: 
            cnt1++; 
            break; 
        case 2: 
            cnt2++; 
            break; 
        } 
    } 
  
    // Update the array 
    i = 0; 
  
    // Store all the 0s in the beginning 
    while (cnt0 > 0) { 
        arr[i++] = 0; 
        cnt0--; 
    } 
  
    // Then all the 1s 
    while (cnt1 > 0) { 
        arr[i++] = 1; 
        cnt1--; 
    } 
  
    // Finally all the 2s 
    while (cnt2 > 0) { 
        arr[i++] = 2; 
        cnt2--; 
    } 
  
    // Print the sorted array 
    printArr(arr, n); 
} 
  
// Driver code 
int main() 
{ 
    int arr[] = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 }; 
    int n = sizeof(arr) / sizeof(int); 
  
    sortArr(arr, n); 
  
    return 0; 
}



/* Output:
0 0 0 0 0 1 1 1 1 1 2 2 */

/* Complexity Analysis:
Time Complexity: O(n).
Only two traversals of the array is needed.
Space Complexity: O(1).
As no extra space is required. */
