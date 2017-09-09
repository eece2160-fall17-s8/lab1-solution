#include <iostream>
#include <climits>

void PrintArray(int v[], int size) {
  for (int i = 0; i < size; i++) {
    std::cout << v[i] << std::endl;
  }
}

void InputArray(int v[], int size) {
  for (int i = 0; i < size; i++) {
    std::cin >> v[i];
  }
}

void SortArray(int v[], int size) {
  for (int i = 0; i < size; i++) {
  
    // Find min and min_pos
    int min = INT_MAX;
    int min_pos = 0;
    for (int j = i; j < size; j++) {
      if (v[j] < min) {
        min = v[j];
        min_pos = j;
      }
    }

    // Swap the i-th with the min
    int temp = v[i];
    v[i] = v[min_pos];
    v[min_pos] = temp;
  }
}

int main() {
  int v[10];
  InputArray(v, 10);
  SortArray(v, 10);
  PrintArray(v, 10);
  return 0;
}
