#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void swap(int* ptr, int* ptr2);
void Bubble_sort(int array[], int size);
void Selection_sort(int array[], int size);
void Insertion_sort(int array[], int size);
void Merge_sort(int array[], int size);


int main() {
  int size = 20;
  int nums[size];
  srand (time(NULL));
  
  for(int i = 0;i < size; i++) {
    nums[i] = rand() % 100 + 1;
  }
  
  for(int i = 0;i < size; i++) {
    cout << nums[i] << ", ";
  }
  cout << endl;
  
//  Bubble_sort(nums, size);
  Selection_sort(nums, size);
  //Insertion_sort(nums, size);
  //Merge_sort(nums, size);
  
  for(int i = 0;i < size; i++) {
    cout << nums[i] << ", ";
  }
  cout << endl;
  
  return 0;
}

void swap(int* ptr, int* ptr2) {
        int temp = *ptr;
        *ptr = *ptr2;
        *ptr2 = temp;
}

void Bubble_sort(int array[], int size) {
  int* ptr;
  int* ptr2;
  
  for(int i = size; i > 0; i--) {
    for(int j = 0; j < i; j++) {
      ptr = &array[j];
      ptr2 = &array[j+1];
      if (*ptr > *ptr2) {
          swap(ptr, ptr2);
      }
    }
  }
  
  
}
void Selection_sort(int array[], int size) {  
  int* min;
  for (int i = 0; i < size - 1; i++) {
    min = &array[i];
    for (int j = i + 1; j < size; j++) {
      if (*min > array[j]) {
        min = &array[j];
      }
    }
    swap(&array[i], min);
  }
  
}
void Insertion_sort(int array[], int size) {
  
  
}
void Merge_sort(int array[], int size) {
  
  
}

