/**
 * @Author: Saroj Dhwaz Shrestha <saroj>
 * @Date:   2018-01-14T22:10:13+05:45
 * @Filename: 15.c
 * @Last modified by:   saroj
 * @Last modified time: 2018-01-18T23:47:47+05:45
 */

#include <stdio.h>

void main(){
  char input[100];
  int i = 0, count = 0;

  printf("Enter String below 100 Characters\n");
  input = (char)getchar();
  // scanf("%s\n", &input);

  while (1) {
    if (input[i] != '\0') {
      if (input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u') {
        count++;
      }
      i++;
    }else{
      break;
    }
  }

  printf("No of Vowels: %d\n", count );
}
