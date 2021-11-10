#creating a replica of the printf.
The printf project is a collaboration between Pether Tejada and Rogelio Conde.
the function "_printf" is a replica of the function printf from the library <stdio.h>
the "_printf" function contains only some functions, (which are specified in our man_3_print manual) from the original printf.

the _printf()_ function performs conversion of formatted output and data printing. 
Let's see the prototype.
```c
int _printf(const char *format, ...)
````
	+ _print() is variadic function, it can receives n arguments that replace.
	+ format contains the string that is printed.

here some specifiers of the _printf function and return value which is the number of characters printed.

| Specifier | Output |
| ------------- | ------------- |
| c  | Character  |
| d or i | Signed decimal integer |
| s  | String of characters  |
| b  | Signed binary  |


## Examples

1. Printing the string of chars "Hello, friends":
	+ Use: `_printf("Hello fri%s.", "ends");`
	+ Output: `Hello friends.`





------------

## File Functions

### _printf.c
Own Printf Function Tha Performs Formatted Output Conversion And Print Data.

------------

### main.h
Header File Were All Prototypes Are Saved.
