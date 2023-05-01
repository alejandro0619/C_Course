# Variables

Allocated space in memory (stack) to store values. To access the stored value we use the variable's name. The process of making a variable is done in 2 steps: **declaration** and **initialization**.

### Declaration
In order to declare a variable we need to provide the name of the variable preceed by the type of the data it holds. Declaration requests space in memory to store a value of the given type.

### Initialization
It's the actual process of providing a value into the space we first allocated.

Declaration is tied up with initialization in the fact both processes are meant to be done one after other, but isn't needed to do both at the same time. We can first declare a variable and later in the code, store values within but it's not possible to store a value in no variable.

Note that if we don't declare + initialize a variable at the same time, the value the variable will hold cannot be guessed at compile time

### Data Types

- int = Integer stores an integer number in the range -2,147,483,648 to -2,147,483,647. And stores 4 bytes.

- short int = If the half of an integer stores 2 bytes and numbers in the range of -32,768 to 32,767.

- unsigned short int = Same 2 bytes as a short int but discards the negative limit in the range, goes from 0 to 65,535.

- long long int = Stores 8 bytes and numbers in the range of -9 quintillion to +9 quintillion.

- unsigned long long int = Stores 8 byte still but goes from 0 to +18 quintillion.

- float = Floating point number -> Are 4 bytes (32 bits of precision) and around 7 digits long.

- double = Long float or just double precision floating point -> Are 8 bytes (64 bits of precision) and around 15 digits long.

- char = Single characters and stores 1 byte (Goes from -128 to +127) and we can use it to represent a character (using ascii table) or a number.

- unsigned char = Stores up to 1 byte, similar to char but stores numbers from 0 to 255.

- c-strings(char[]) = Char array

- bool = Booleans and stores 1 byte (true or false)

### Footer note:

Almost every numeric data types is already marked with singed and in the case of an integer it is marked with long already. So that's why in order to specify an positive range of number we gotta mark that variable with unsigned explicity, and that's why to make a integer even longer we gotta write long twice.