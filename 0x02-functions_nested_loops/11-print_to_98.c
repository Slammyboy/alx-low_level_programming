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

