#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
  char str1[] = "This is the first String";
  char str2[] = "This is the second String";
  printf("strcmp is used to compare Strings, basically compareTo from Java\n");
  printf("The function returns value as follows:\n");
  printf("If the return value < 0 then it indicates str1 is less than str2.\n");
  printf("If the return value > 0 then it indicates str1 is greater than str2.\n");
  printf("If the return value = 0 then it indicates str1 is equal to str2.\n");
  printf("The way you call it is:\t int strcmp(const char *str1, const char *str2)\n");
  printf("For example:\n");
  printf("When \"%s\" is compared to \"%s\", the output of strcmp is %d\n", str1, str2, strcmp(str1, str2));
  printf("When \"%s\" is compared to \"%s\", the output of strcmp is %d\n", str2, str1, strcmp(str2, str1));
  printf("When \"%s\" is compared to \"%s\", the output of strcmp is %d\n", str1, str1, strcmp(str1, str1));
  printf("\nstrncmp is similar to strcomp, but it only compares the first n characters of the Strings.\n");
  printf("The way you call it is:\t int strncmp(const char *str1, const char *str2, size_t n)\n");
  printf("size_t is just an unsigned type often used to represent the size of an object.\n");
  printf("For example:\n");
  printf("When \"%s\" is compared to \"%s\" with an n of 5, the output of strncmp is %d\n", str1, str2, strncmp(str1, str2, 5));
  printf("When \"%s\" is compared to \"%s\" with an n of 15, the output of strncmp is %d\n", str1, str2, strncmp(str1, str2, 15))
