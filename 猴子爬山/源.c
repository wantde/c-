#include<iostream.h>
#include<cstring>
static long s = 1, n[20] = { 2,3,5,6 }, m[1000] = { 0 };
void f(int max)
{
	int i;
	for (i = 0; i < 4; i++)
	{
		m[max] += m[max - n[i]];
		if (max - n[i] == 0)
			s++;
		else
		{
			if (max - n[i] > 0)
				f(max - n[i]);
			else
				continue;
		}
	}
}
void main()
{

	int max = 50;
	f(max);
	cout << s << endl;
}
