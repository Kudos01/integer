#include <stdio.h>

int main() {
  int a[20];
  int i = 0;
  int input;
  int found = 0;
  for(i=0; i<20; i++){
    a[i] = i*i;
  }
  
  printf("Tell me your deepest secret or a random integer:");
  scanf("%d", &input):
  
  for(i=0; i<20 && !found; i++){
    if (input == a[i]){
      found = 1;
    }
  }
  
  if (found){
    printf("Shit we found your numero");
  }
  
  return 0;
}
