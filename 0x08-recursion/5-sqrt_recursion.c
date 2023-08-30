/**
 * find_sqrt - find square root of number
 * @n: number
 * @start: start of line
 * @end: end of line
 * Return: 0
 */
int find_sqrt(int n, int start, int end)
{
	int mid, square;

	if (start > end)
	{
		return (-1);
	}

	mid = (start + end) / 2;
	square = mid * mid;

	if (square == n)
	{
		return (mid);
	}
	else if (square < n)
	{
		return (find_sqrt(n, mid + 1, end));
	}
	else
	{
		return (find_sqrt(n, start, mid - 1));
	}
}
/**
 * _sqrt_recursion - prototype to find square root
 * @n: number
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (find_sqrt(n, 1, n));
}
