/**
 * style2.c
 * Tommy MacWilliam <tmacwilliam@cs50.net>
 *
 * Demonstrates bad style! Please don't do this!
 *
 */

#include <stdio.h>
#include <cs50.h>

//here begins our journey into the world of computer science.
//as you shall soon see, this magnificent program will proceed
//to ask the user for a number, henceforth simply referred to 
//as "p," for a seemingly arbitrary reason. after several
///incantations of what is sure to be black magic, some output
//will be generated, hopefully much to your liking!
//that is my program, bon appetit!
int main(int argc, char* argv[])
{
int p = GetInt();
    if (p == 5) {
            printf("5 iterations :)\n");
    } else
        {
        printf("not 5 iterations :(\n");
  }
    
    for (int i = 0; i < p; i++)
    {  printf("hi\n");
        }
}
