#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

void hello_openmp()
{
	#pragma omp parallel
	printf("Hello, OpenMP ");
}

int main()
{
	hello_openmp();

	return 0;
}