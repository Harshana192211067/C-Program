#include <stdio.h>

int main() {
  
  int size = 5, alpha = 65;
  for (int i = 0; i < size; i++) {
   
    for (int j = 0; j < i; j++) {
      printf(" ");
    }
    
    for (int k = 0; k < 2*(size-i)-1; k++) {
      printf("%c", alpha + k);
    }
    printf("\n");
  }
  return 0;
}
