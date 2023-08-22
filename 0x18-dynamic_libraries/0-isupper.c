/**
 * _isupper - check if c is uppercase
 * @c: input to check
 * Return: 1 if its uppercase, 0 if not
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
