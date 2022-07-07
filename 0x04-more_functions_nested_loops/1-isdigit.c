#include "main.h"
/**
 * _isdigit - function to know if
 * the character is uppercase or not
 *
 * @c: variable to evaluate
 *
 * Return: Get 1 if it's uppercase,
 * 0 otherwise
 */
int _isdigit (int c)
{
  if (c >= 48 && c <= 57)
  {
      return(1);
  }
  else
  {
      return(0);
  }
}
