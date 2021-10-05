// Section 12
// Challenge

/* Write a C++ function named apply_all that expects two arrays of integers and their sizes and
  dynamically allocates a new array of integers whose size is the product of the 2 array sizes
  
  The function should loop through the second array and multiplies each element across each element of array 1 and store the
  product in the newly created array.
  
  The function should return a pointer to the newly allocated array.
  
  You can also write a print function that expects a pointer to an array of integers and its size and display the
  elements in the array.
    
  For example,
  
  Below is the output from the following code which would be in main:
  
    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};
    
    cout << "Array 1: " ;
    print(array1,5);
    
    cout << "Array 2: " ;
    print(array2,3);
    
    int *results = apply_all(array1, 5, array2, 3);
    cout << "Result: " ;
    print(results,15);
   
   Output
   ---------------------
   Array 1: [ 1 2 3 4 5 ]
   Array 2: [ 10 20 30 ]
   Result: [ 10 20 30 40 50 20 40 60 80 100 30 60 90 120 150 ]
*/
  
#include <iostream>

using namespace std;

/**
 * @brief  The function should loop through the second array and multiplies each element across each element of array 1 and store the
  product in the newly created array.
  
  The function should return a pointer to the newly allocated array.
 * @param arr1
 * @param arr1_size
 * @param arr2
 * @param arr2_size
 * @return 
 */
int * apply_all(int arr1[], size_t arr1_size, int arr2[], size_t arr2_size){
    int *result_array{};
    
    result_array = new int[arr1_size*arr2_size];
    
    int position{0};
    for (size_t i{0}; i < arr1_size; ++i){
        for(size_t j{0}; j < arr2_size; ++j){
            // cout << "arr1[i]: " << arr1[i] << " arr2[j]: " << arr2[j]<< endl;
            result_array[position]=arr1[i]*arr2[j];
//            cout << "result_array[position]: " << result_array[position] << endl;
            position+=1;
        }
    }
    return result_array;
}

void print(const int arr[], size_t arr_size){ // void print(const int *const arr, size_t size  ???????
        cout << "[";
        for (size_t i{0}; i < arr_size; ++i){
            cout << arr[i] << " ";  // could also use *(arr + i)    ?????
        }
        cout << "]" << endl;
}

int main() {
    const size_t array1_size {5};
    const size_t array2_size {3};
    
    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};
    
    cout << "Array 1: " << endl;
    print(array1,array1_size);
    
    cout << "Array 2: " << endl;
    print(array2,array2_size);
    
    int *results = apply_all(array1, array1_size, array2, array2_size);
    constexpr size_t results_size {array1_size * array2_size};

    cout << "Result: " ;
    print(results, results_size);
    
    // free up storage
    delete [] results;
    
    cout << endl;

    return 0;
}

