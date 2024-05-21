#include <math.h>
#include <stdio.h>

int main(void) {
  printf("Hand Calculated:\n"
         "INT UNSIGNED:\n"
         "    MIN: 0\n"
         "    MAX: %1.f\n"
         "INT SIGNED:\n"
         "    MIN: %1.f\n"
         "    MAX:  %1.f\n"
         "SHORT Unsigned:\n"
         "    MIN: 0\n"
         "    MAX: %1.f\n"
         "SHORT SIGNED:\n"
         "    MIN: %1.f\n"
         "    MAX:  %1.f\n"
         "LONG UNSIGNED:\n"
         "    MIN: 0\n"
         "    MAX: %1.f\n"
         "LONG SIGNED:\n"
         "    MIN: %1.f\n"
         "    MAX:  %1.f\n"
         "CHAR UNSIGNED:\n"
         "    MIN: 0\n"
         "    MAX: %1.f\n"
         "CHAR SIGNED:\n"
         "    MIN: %1.f\n"
         "    MAX:  %1.f\n",
         ((pow(2, 31) * 2) - 1), // int unsigned max
         (pow(2, 15) * -1),      // int signed minimum
         (pow(2, 15) - 1),       // int signed maximum
         ((pow(2, 15) * 2) - 1), // short unsigned max
         (pow(2, 15) * -1),      // short signed min
         (pow(2, 15) - 1),       // short signed max
         ((pow(2, 63) * 2) - 1), // long unsigned max
         (pow(2, 63) * -1),      // long signed min
         (pow(2, 63) - 1),        // long signed max
         ((pow(2, 7)) * 2 - 1),
         (pow(2, 7) * -1),
         (pow(2, 7) - 1)
  );

  return 0;
}
