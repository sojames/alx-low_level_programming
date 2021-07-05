#include "holberton.h"
/**
 *Prototype: char *_strchr(char *s, char c);
 * @s: string to from
 * @c: character to search
 *_strchr(char *s, char c) function  locates a character in a string.
 * Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found
 */

 char *_strchr(char *s, char c)
 {
/* declaring loop in this case while loop*/
while(*s != '\0')
{
    if(*s == c) /* checking if character c is in string s*/
        {
            return(s);
        }
        ++s;
}/* end of while loop*/
if(*s == c)
        {
            return(s);
        }
}

