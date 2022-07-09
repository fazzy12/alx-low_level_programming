# _printf 🧾

Conversion of formatted output The C program was completed as part of the
Alx/Holberton School's low-level programming and algorithm track. 
The software is an imitation of the C standard library function * printf.*

## Dependencies 👩🏽‍🤝‍👩🏻

The _printf function was coded on an Ubuntu 14.04 LTS machine with gcc
version 4.8.4.

## Usage ⚒️

Compile all.c files in the repository and include the header main.h with any
main function to utilize the _printf function, providing the required dependencies are installed.

Example `main.c:`

```
#include "main.h"

int main(void)
{
    _printf("Hello, World!");

    return (0);
}
```


Compilation:

`$ gcc *.c -o tester`


Output:

```
$ ./tester
Hello, World!
$
```


# Description 📚

The _printf function outputs to standard output. The function writes under
the supervision of a format string, which determines how future arguments
(accessible through stdarg's variable-length argument facilities) are transformed for output.

Prototype: `int _printf(const char *format, ...);`


### Return Value:

_printf returns the number of characters written upon successful return
(excluding the terminating null byte used to end output to strings). 
If there is an output error, the function returns -1.


### Format of the Argument String

The format string argument is a constant character string made up of zero or
more directives: ordinary characters (not `%`) that are transferred 
intact to the output stream, and conversion requirements, each of which leads
in the retrieval of zero or more subsequent arguments. The character `%` begins 
the conversion specification and concludes with a conversion specifier.
There may be zero or more flags, an optional minimum field width, an optional accuracy, 
and an optional length modifier between the `%` character and the conversion specifier.
The parameters must match the conversion specifier and be utilized in the order specified.


### Flag Characters

The character `%` may be followed by zero or more of the following flags:

* For `o` conversions, the first character of the output string is 
  prefixed with `0` if it was not zero already.

* For x converions, `0x` is prepended for non-zero numbers.
* For X conversions, `0X` is prepeneded for non-zero numbers.

Example `main.c:`

```
int main(void)
{
    _printf("%#x\n", 7);
}
```
Output:

`0x7`


#### (space)

* A blank is left before a positive number or empty string produced by
  a signed conversion.

Example `main.c:`

```
int main(void)
{
    _printf("% d\n", 7);
}
```

Output:

`7`

#### +

* A sign (`+` or `-`) is always placed before a number produced by signed 
  conversion.
* Overrides a space flag.

Example `main.c:`

```
int main(void)
{
    _printf("%+d\n", 7);
}
```
Output:

`+7`


#### 0
  
  * For `d`, `i`, `o`, `u`, `x`, and X conversions, the converted value is padded 
    on the left with zeroes rather than blanks.
    
  * If the `0` flag is provided to a numeric conversion with a specified precision, 
    it is ignored.
    
Example `main.c`:

```
int main(void)
{
    _printf("%05d\n", 7);
}
```
Output:

`00007`

#### -

  *  The converted value is left-justified (padded on the right with 
     blanks instead of on the left with blanks or zeroes).
  *  Overrides a `0` flag.
  
Example `main.c`:

```
  int main(void)
{
    _printf("%-5d7\n", 7);
}
```

Output:

` 7  7`

## Field Width

   Following flags, a decimal digit string can be used to specify the 
   minimum field width. The first digit must not be zero. If the
   converted value has less characters than the supplied width, 
   the output is padded with spaces on the left and right 
   (depending on whether the `-` flag was provided).

Example `main.c`:

```
int main(void)
{
    _printf("%7d\n", 7);
}
```

Ouptut:

` 7 `

Alternatively, the `*` character can be used to provide width as an
input. As an example, consider the following: `_printf("percent *dn", 6, 1);` 
the input `6` is regarded the width for the decimal `1` conversion.

#### Precision

A precision can be supplied after any flags or provided wide by a `.`
followed by a decimal digit string. The precision sets the least 
number of digits to show in `d`, `I` `o`, `u`, `x`, and `X` conversions.
The precision determines the maximum number of characters to be printed 
for `s` and `S` conversions.

Example `main.c`:

```
int main(void)
{
    _printf("%.7d\n", 7);
}
```
Output:

`0000007`

Precision can also be specified as an argument by using the `*`
character after the `.` In the following example: `_printf(" percent.*dn", 6, 1);`
the input `6` is regarded the precision for the conversion of the decimal `1`.


#### Length Modifiers

After flags, width, and precision and before a conversion specifier, one of the
following length modifiers may be provided

#### h

Specifies that an integer conversion corresponds to a `short int` or `unsigned short 
int` argument.

Example `main.c`:

```
int main(void)
{
    _printf("%hd\n", SHRT_MAX);
}
```
Output:

`32767`

#### I

Specifies that an integer conversion corresponds to a `long int` or 
`unsigned long int` argument.

Example `main.c`:

```
int main(void)
{
    _printf("%ld\n", LONG_MAX);
}
```
Output:

`9223372036854775807`

#### Conversion Specifiers

The conversion specifier (represented by the character `%`) defines 
the type of conversion to be used. The following conversion specifiers
are supported by the `_printf` function:

#### d, i

The `int` argument is converted to signed decimal notation.

Example `main.c`:

```
int main(void)
{
    _printf("%d\n", 7);
}
```
Output:

`7`

#### b

The `unsigned int` argument is converted to signed decimal notation.

Example `main.c`:

```
int main(void)
{
    _printf("%b\n", 7);
}
```
Output:

`111`

#### o,u,x,X

The unsigned int parameter is transformed to unsigned hexadecimal 
(`x` and `X`), unsigned octal (`o`), or unsigned decimal (`u`). For 
`x` conversions, the letters `abcdef` are used, while for `X` 
conversions, the letters `ABCDEF` are used.

Example `main.c`:

```
int main(void)
{
    _printf("%o\n", 77);
}
```
Output:

`115`

#### c

The `int` argument is converted to an `unsigned char`

Example `main.c`:

```
int main(void)
{
    _printf("%c\n", 48);
}
```
Output:

`0`

#### s

The `const char *` argument is supposed to be a character array
pointer (aka. pointer to a string). Characters from the array are
written beginning with the first member of the array and ending with 
the terminating null byte (`\0`).

Example `main.c`:

```
int main(void)
{
    _printf("%s\n", "Hello, World!");
}
```
Output:

`Hello, World!`

#### S

Identical to the `s` conversion specifier, except any non-printable 
characters in the array (ie. characters with an ASCII value < 32 or >= 127)
are written as `\x` followed by the ASCII code value in hexadecimal (upper case,
two characters).

Example `main.c`:

```
int main(void)
{
    _printf("%S\n", "Hello, World! Π");
}
```
Output:

`Hello, World! \x0FFFFFFFFFFFFFFCE\x0FFFFFFFFFFFFFFA0`

r Identical to the `s` conversion specifier, except that characters 
from the array are written backwards, beginning with the terminating 
null byte (`\0`) and finishing at the first element of the array.

Example `main.c`:

```
int main(void)
{
    _printf("r\n", "Hello, World");
}
```
Output:

`dlroW ,olleH`

#### R

Identical to the `s` conversion specifier, except that each array 
character is converted to its equivalent ROT13 character before 
being written.

Example `main.c`:

```
int main(void)
{
    _printf("%R\n", "Hello, World");
}
```
Output:

`Uryyb, Jbeyq`

#### P

The argument's address is noted down. The address is hexadecimal, 
with a leading `0x`.

Example `main.c`:

```
int main(void)
{
    char *str = "Hello, World";

    _printf("%p\n", (void *)str);
}
```
Output:

`0x561a6d7bab5d`

#### %

A % is written. No argument is converted.The complete conversion 
specification is %%.

Example `main.c`:

```
int main(void)
{
    _printf("%%\n");
}
```
Output:

`%`

## More Examples 👌

To print the address of Holberton School in the format "972 Mission
St., San Francisco, CA 94103" where street, city and state are 
pointers to strings:

Example `main.c`:

```
#include "main.h"

int main(void)
{
	char *street = "Mission St.", *city = "San Francisco", *state = "CA";

	_printf("%d %s, %s, %s %d\n", 972, street, city, state, 94103);
}
```
Output:

`972 Mission St., San Francisco, CA 94103`

To print the result of basic mathematical operations prepended by 
signs and all numbers printed with a minimum precision of two digits:

Example `main.c`:

```
#include "main.h"

int main(void)
{
	_printf("%.2d + %.2d = %+.2d\n", 1, 2, 1 + 2);
	_printf("%d - %d = %+d\n", 10, 20, 10 - 20);
}
```
Output:

```
01 + 02 = +03
10 - 20 = -10
```
To print the values of `LONG_MAX` and `LONG_MIN` aligned and left-justified with a 
width of 30:

Example `main.c`:

```
#include "main.h"
#include <limits.h>

int main(void)
{
	_printf("% -30ld -> LONG_MAX\n", LONG_MAX);
	_printf("%-30ld -> LONG_MIN\n", LONG_MIN);
}
```
Output:

```
 9223372036854775807           -> LONG_MAX
-9223372036854775808           -> LONG_MIN
```
# Authors 👷‍♂️👷‍♂️

  * ifeany kalu
  * Felix Essienne
  
# Acknowledgements

This program was created as part of the Alx/Holberton School curriculum.
Holberton School is a campus-based full-stack software engineering 
curriculum that uses project-based peer learning to educate students 
for careers in the IT industry.





















































