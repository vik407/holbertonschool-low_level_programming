#include <stdio.h>
void myStartupFun(void) __attribute__ ((constructor));

/**
 * myStartupFun - Write a function that prints You're beat! and yet,
 * you must allow,\nI bore my house upon my back!\n
 * Return: a string before main
 */
void myStartupFun(void)
{
char *s;

s = "You\'re beat! and yet, you must allow,\nI bore my house upon my back!\n";
printf("%s", s);
}

