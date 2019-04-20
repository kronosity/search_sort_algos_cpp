#include <iostream>
using namespace std; 
// Linear searching(simplest) & Binary searching(fastest) 

bool Linear_Searching(int list[], int size, int key) {
    bool found = false;
    int i;
    
    for(i = 0; i < size; i ++) {
        if(key == list[i]) 
            found = true;
        break;
    }
return found;
}

//O(log n)
bool Binary_Searching(int *list, int size, int key) {
  bool found = false;
  int low = 0, high = size -1;
  
    while (high >= low) {
      int mid = (low + high) / 2;
        if(key < list[mid])
            high = mid - 1;
        else if (key > list[mid])
            low = mid + 1;
        else {
            found = true;
            break;
        }
  }
return found;
} 
