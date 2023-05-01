#include <stdio.h>

int main() {

  int x; // First we declare -> Declaration
  x = 1; // We later add the value -> Initialization

  int y = 0; // Or we can declare and initialize at once.

  int age = 18;
  float pi = 3.14;
  char letterA = 'A';
  char name[] = "Spaghetti";  

  // We'll check format specifiers later on
  printf("%s\nis %d years old", name, age);
  return 0;
}