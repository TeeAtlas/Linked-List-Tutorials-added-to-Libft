#include <stdio.h>
#include <stdlib.h>

// simply speaking typedef means you can assign your own 
// name to a date type
// ex:

/*
// typedef unsigned long long UNIT64; // global variable

int	main(int argc, char *argv[])
{
	UNIT64	l = 14;
	printf("%llu\n", l); //%lls mean long long unsigned
	return 0;
}
*/


typedef unsigned long long UNIT64;

struct Point
{
	double x, y;
};

typedef struct Point Point;  //alias struct Point with the word Point
/* same as:
typedef struct Point
{

} Point;
*/

int	main(int argc, char *argv[])
{
	Point p;
	p.x = 0.24;
	p.y = 0.78;
	printf("%lf %lf\n", p.x, p.y);
	UNIT64	l = 14;
	printf("%llu\n", l); //%lf means long double precision floating-point type
	return 0;
}

/* keep in mind there is a library called stdint.h where all the integral type 
aliases for all the typedef declarations */