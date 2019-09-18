/*********************************************** *
* @Objective:Create a program which can search for an inputted number through an array of 20 integers.
* @Author/s: Guillermo Sabate, Felipe Perez and Isaac Fandos
* @Creation date: 18/09/2019
* @Last modification date: 18709/2019
* ************************************************/

//Libraries
#include <stdio.h>

//Constants
#MAXINTEGERS 20

//User datatypes

//Functions


//Main code 
int main() {
  //Variable declaration
  int a[20];
  int i = 0;
  int input;
  int found = 0;

  //For loop to fill an array.
  for(i=0; i<20; i++){
    a[i] = i*i;
  }

 //Ask the user for the input and save it in a variable
  printf("Tell me your deepest secret or a random integer:");
  scanf("%d", &input):
  
  //Check if the input coincides with the array
  for(i=0; i<20 && !found; i++){
    if (input == a[i]){
      found = 1;
    }
  }
  //Notify the user that the inputed number belonged to the array
  if (found){
    printf("We found your number");
  }
  
  return 0;
}
//End of code;
