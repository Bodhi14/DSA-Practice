//{ Driver Code Starts
// C++ program for implementation of Heap Sort
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// The functions should be written in a way that array become sorted 
// in increasing order when heapSort() is called.

class Solution
{
    public:
    //Heapify function to maintain heap property.
   void heapify(int arr[], int n, int i)
    {
        int largest = i; // Initialize the largest as the root
        int left = 2 * i + 1; // Index of the left child
        int right = 2 * i + 2; // Index of the right child

        // If the left child is larger than the root
        if (left < n && arr[left] > arr[largest])
            largest = left;

        // If the right child is larger than the current largest
        if (right < n && arr[right] > arr[largest])
            largest = right;

        // If the largest is not the root
        if (largest != i)
        {
            // Swap the largest with the root
            swap(arr[i], arr[largest]);

            // Recursively heapify the affected subtree
            heapify(arr, n, largest);
        }
    }

    public:
    //Function to build a Heap from array.
    void buildHeap(int arr[], int n)
    {
        // Start from the last non-leaf node and heapify all nodes in reverse order
        for (int i = n / 2 - 1; i >= 0; i--)
        {
            heapify(arr, n, i);
        }
    }

    
    public:
    //Function to sort an array using Heap Sort.
    void heapSort(int arr[], int n)
    {
        // Build a max heap from the array
        buildHeap(arr, n);

        // Extract elements from the heap one by one and swap with the last unsorted element.
        for (int i = n - 1; i >= 0; i--)
        {
            swap(arr[0], arr[i]); // Move current root to the end
            heapify(arr, i, 0);   // Heapify the reduced heap
        }
    }
};


//{ Driver Code Starts.

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver program to test above functions
int main()
{
    int arr[1000000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
    Solution ob;
    ob.heapSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}

// } Driver Code Ends