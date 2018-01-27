/**
 * @Author: Saroj Dhwaz Shrestha <saroj>
 * @Date:   2018-01-26T22:51:39+05:45
 * @Filename: matrixAddition2.c
 * @Last modified by:   saroj
 * @Last modified time: 2018-01-27T16:41:16+05:45
 * @Objective: matrix addition with dynamic declartion of matrix size
 */
#include<stdio.h>
#include<stdlib.h>

int checkInput() {
  char input;
  int flag = 0;
  while (1) {
    scanf("%c", &input);
    if (input >= 65 && input <= 90) {
      printf("Capital Letter!! Invalid Input! Try again!\n");
    } else if (input >= 97 && input <= 122) {
      printf("Small Letter!! Invalid Input! Try again!\n");
    }else if(input >= 48 &&  input <= 57){
      flag = 1;
      break;
    }else if(input >= 0 && input <= 47 || input >= 48 && input <= 64 || input >=91 && input <= 96 || input >= 123 && input <= 127){
      printf("Special Symbols!! Invalid Input! Try again!\n");
    }
  }

  return (int)input;
}

 void main(){
   int m = 0, n = 0, numberOfMatrix = 0, sum;

   //reading size and numbers of matrixs
   printf("Enter size of an array\n");
   m = checkInput();
   n = checkInput();
   printf("Enter numbers of matrix\n");
   numberOfMatrix = checkInput();

   //Displaying Settings
   system("clear");
   printf("Ok!\nSize of matrx: %d x %d \nNumber of Matrix: %d\n",m, n, numberOfMatrix );

   //Declearing matrixs
   int array[numberOfMatrix][m][n];

   //getting input for the matrix
   for(int i = 0; i < numberOfMatrix; i++){
     printf("Enter data for %d matrix\n",i + 1);
     for (int j = 0; j < m; j++) {
       for(int k = 0; k < n; k++){
         printf("[%d][%d]:\t",j,k);
         array[i][j][k] = checkInput();
       }
     }
     system("clear");
   }

   //adding the matrix and printing the value
   printf("Sum of the Matrix\n");
   for(int i = 0; i < m; i++){
     for (int j = 0; j < n; j++) {
       for(int k = 0; k < numberOfMatrix; k++){
         sum += array[i][j][k];
       }
       printf("%d\t",sum );
       sum = 0;
     }
     printf("\n");
   }
 }
