#include <stdio.h>

int main(void) {
  char cAlert = 7;            // \a
  char cBackspace = 8;        // \b
  char cTab = 9;              // \t
  char cLineFeed = 10;        // \n
  char cCarriageReturn = 13;  // \r
  char cNullCharacter = 0;    // \0
  char cDoubleQuote = 34;     // \"
  char cSingleQuote = 39;     // \'
  char cBackslash = 92;       // \\

  printf("cAlert = [%c] \n", cAlert);
  printf("cBackspace = [%c] \n", cBackspace);
  printf("cTab = [%c] \n", cTab);
  printf("cLineFeed = [%c] \n", cLineFeed);
  printf("cCarriageReturn = [%c] \n", cCarriageReturn);
  printf("cNullCharacter = [%c] \n", cNullCharacter);
  printf("cDoubleQuote = [%c] \n", cDoubleQuote);
  printf("cSingleQuote = [%c] \n", cSingleQuote);
  printf("cBackslash = [%c] \n", cBackslash);

  printf("Pree any key to continue... \n");
  getchar();

  return 0;
}
