#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
  printf("Size of int: %ld bytes\n", sizeof(int));
  printf("Size of double: %ld bytes\n", sizeof(double));
  printf("Size of float: %ld bytes\n", sizeof(float));
  printf("Size of char: %ld bytes\n", sizeof(char));
  printf("Size of short: %ld bytes\n", sizeof(short));
  printf("Size of long: %ld bytes\n", sizeof(long));
  
  printf("\nUsing limits.h\n");
  printf("Range of int:\nLow: %d\nHigh: %d\n", INT_MIN, INT_MAX);
  printf("Range of double:\nLow: %f\nHigh: %f\n", DBL_MIN, DBL_MAX);
  printf("Range of float:\nLow: %f\nHigh: %f\n", FLT_MIN, FLT_MAX);
  printf("Range of char:\nLow: %d\nHigh: %d\n", CHAR_MIN, CHAR_MAX);
  printf("Range of short:\nLow: %d\nHigh: %d\n", SHRT_MIN, SHRT_MAX);
  printf("Range of long:\nLow: %ld\nHigh: %ld\n", LONG_MIN, LONG_MAX);
}
