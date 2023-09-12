nested loops
0x02. C - Functions, nested loops

Main.h


#ifndef MAIN_H

#define MAIN_H


int _putchar(char c);

void print_alphabet(void);

void print_alphabet_x10(void);

int _islower(int c);

int _isalpha(int c);

int print_sign(int n);

int _abs(int);

int print_last_digit(int);

void jack_bauer(void);

void times_table(void);

int add(int, int);

void print_to_98(int n);

void print_times_table(int n);


#endif



_putchar


#include <unistd.h>


/**

 * _putchar - writes the character c to stdout

 * @c: The character to print

 *

 * Return: On success 1.

 * On error, -1 is returned, and errno is set appropriately.

 */

int _putchar(char c)

{

        return (write(1, &c, 1));

}


Question 0



#include "main.h"


/**

 * main - function

 * Return: 0

 */


int main(void)

{

        _putchar('_');

        _putchar('p');

        _putchar('u');

        _putchar('t');

        _putchar('c');

        _putchar('h');

        _putchar('a');

        _putchar('r');

        _putchar('\n');

        return (0);


}




Question 1


#include "main.h"


/**

 * main - function

 * Return: 0

 */


int main(void)

{

        _putchar('_');

        _putchar('p');

        _putchar('u');

        _putchar('t');

        _putchar('c');

        _putchar('h');

        _putchar('a');

        _putchar('r');

        _putchar('\n');

        return (0);


}




1-main.c


#include "main.h"


/**

 * main - check the code

 * Return: Always 0.

 */

int main(void)

{

        print_alphabet();

        return (0);

}


Question 2.


#include "main.h"


/**

 * print_alphabet_x10 - print the alphabest 10 times

 * Return: void here

 */


void print_alphabet_x10(void)

{

        char c;

        int i = 0;


                while (i <= 9)

                {

                for (c = 'a'; c <= 'z'; c++)

                {

                        _putchar(c);

                }

                        _putchar('\n');

                        i++;

                }

}


2-main.c

#include "main.h"


/**

 * main - check the code.

 *

 * Return: Always 0.

 */

int main(void)

{

        print_alphabet_x10();

        return (0);

}


Question 3

#include "main.h"

/**

 * _islower - entry point

 * Description: function that checks for lowercase character

 * @c:character to check if it islowercase

 * Return: 0-if lowercase, 1-if not

 */


int _islower(int c)

{

        if (c >= 'a' && c <= 'z')

        {

        return (1);

        }

        else

        {

        return (0);

        }

}



3-main.c

#include "main.h"


/**

 * main - check the code.

 *

 * Return: Always 0.

 */

int main(void)

{

        int r;


        r = _islower('H');

        _putchar(r + '0');

        r = _islower('o');

        _putchar(r + '0');

        r = _islower(108);

        _putchar(r + '0');

        _putchar('\n');

        return (0);

}


Question 4

#include "main.h"

/**

 * _isalpha - Checks charcter

 * @c: The charceter

 * Return: 1 for all

 */


int _isalpha(int c)


{

        if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))

        {

                return (1);

        }

        return (0);

}

4-main.c

#include "main.h"

/**

 * main - check the code.

 * Return: Always 0.

 */

int main(void)

{

        int r;


        r = _isalpha('H');

        _putchar(r + '0');

        r = _isalpha('o');

        _putchar(r + '0');

        r = _isalpha(108);

        _putchar(r + '0');

        r = _isalpha(';');

        _putchar(r + '0');

        _putchar('\n');

        return (0);

}



Question 5


#include "main.h"


/**

 * print_sign - Printys sum

 * @n: The nmber

 * Return: 1 for all

 */

int print_sign(int n)

{

        if (n > 0)

        {

                _putchar(43);

                return (1);

        }

        else if (n < 0)

        {

                _putchar(45);

                return (-1);

        }

        else

        {

                _putchar(48);

                return (0);

        }

}



5-main.c

#include "main.h"


/**

  * main - check the code.

  *

  * Return: Always 0.

  */

int main(void)

{

        int r;

        r = print_sign(98);

        _putchar(',');

        _putchar(' ');

        _putchar(r + '0');

        _putchar('\n');

        r = print_sign(0);

        _putchar(',');

        _putchar(' ');

        _putchar(r + '0');

        _putchar('\n');

        r = print_sign(0xff);

        _putchar(',');

        _putchar(' ');

        _putchar(r + '0');

        _putchar('\n');

        r = print_sign(-1);

        _putchar(',');

        _putchar(' ');

        _putchar(r + '0');

        _putchar('\n');

        return (0);

}



Question 6

#include "main.h"


/**

 * _abs - Computers the absolute

 * @c: The number computed

 * Return: Absolute value

 */

int _abs(int c)

{

        if (c < 0)

        {

                int abs_val;


                abs_val = c * -1;

                return (abs_val);

        }

        return (c);

}


6-main.c

#include "main.h"

#include <stdio.h>

/**

 * main - check the code

 *

 * Return: Always 0.

 */

int main(void)

{

        int r;

        r = _abs(-1);

        printf("%d\n", r);

        r = _abs(0);

        printf("%d\n", r);

        r = _abs(1);

        printf("%d\n", r);

        r = _abs(-98);

        printf("%d\n", r);

        return (0);

}



Question 7

#include "main.h"


/**

 * print_last_digit - entry point

 *

 * Description: function that prints the last digit of a number.

 *

 * @a:number to compute last digit

 *

 * Return: last digit

 */


int print_last_digit(int a)

{

        int last_digit;


        last_digit = a % 10;

        if (last_digit < 0)

        {

                last_digit = last_digit * -1;

        }

        _putchar(last_digit + '0');

        return (last_digit);

}


7-main.c

#include "main.h"

/**

 * main - check the code

 *

 * Return: Always 0.

 */

int main(void)

{

        int r;


        print_last_digit(98);

        print_last_digit(0);

        r = print_last_digit(-1024);

        _putchar('0' + r);

        _putchar('\n');

        return (0);

}



Question 8

#include "main.h"


/**

 * jack_bauer - entry point

 *

 * Description: function that prints every minute of

 *  the day of Jack Bauer, starting from 00:00 to 23:59.

 *

 *  Return: 0 if successfu

 *

 */


void jack_bauer(void)

{

        int a, b, c, d;


        for (a = 0; a <= 2; a++)

        {

        for (b = 0; b <= 9; b++)

        {

        if ((a <= 1 && b <= 9) || (a <= 2 && b <= 3))

        {

        for (c = 0; c <= 5; c++)

        {

        for (d = 0; d <= 9; d++)

        {

        _putchar(a + '0');

        _putchar(b + '0');

        _putchar(58);

        _putchar(c + '0');

        _putchar(d + '0');

        _putchar('\n');

        }

        }

        }

        }

        }

}



8-main.c

#include "main.h"


/**

 * main - check the code

 *

 * Return: Always 0.

 */

int main(void)

{

        jack_bauer();

        return (0);

}

Question 9

#include "main.h"

/**

 * times_table - prints the 9 times table

 * Description: prints the 9 times table

 * Return: void

 */

void times_table(void)

{

        int row, column, product, tens, ones;


        for (row = 0; row <= 9; row++)

        {

        for (column = 0; column <= 9; column++)

        {

        product = row * column;

        tens = product / 10;

        ones = product % 10;

        if (column == 0)

        {

        _putchar('0');

        }

        else if (product < 10)

        {

        _putchar(',');

        _putchar(' ');

        _putchar(' ');

        _putchar(ones + '0');

        }

        else

        {


                _putchar(',');

                _putchar(' ');

                _putchar(tens + '0');

                _putchar(ones + '0');

        }

        }

        _putchar('\n');

        }

}


9-main.c

#include "main.h"

/**

 * main - check the code

 *

 * Return: Always 0.

 */

int main(void)

{

        times_table();

        return (0);

}



Question 10

#include "main.h"


/**

 * add - entry point

 *

 *Description: function that adds two integers and

 * returns the result.

 *

 * @n1: integer on

 * @n2: integer two

 *

 * Return:sum.

 *

 */


int add(int n1, int n2)

{

        int sum;


        sum = n1 + n2;

        return (sum);

}



10-main.c

#include "main.h"

#include <stdio.h>

/**

 * main - check the code

 *

 * Return: Always 0.

 */

int main(void)

{

        int n;


        n = add(89, 9);

        printf("%d\n", n);

        return (0);

}


Question 11

#include "main.h"


#include <stdio.h>


/**

 * print_to_98 - print a program to 98

 * @n: The number to start printing

 * Return: Always 0.

 */


void print_to_98(int n)

{

        if (n <= 98)

        {

        for (; n <= 98; n++)

        {

        if (n == 98)

        {

        printf("%d", n);

        printf("\n");

        break;

        }

        else

        {

        printf("%d, ", n);

        }

        }

        }

        else

        {

        for (; n >= 98; n--)

        {

        if (n == 98)

        {

        printf("%d", n);

        printf("\n");

        break;

        }

        else

        {

                printf("%d, ", n);

        }

        }

        }

}


