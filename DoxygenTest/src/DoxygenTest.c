#include <stdio.h>
#include <stdlib.h>

/*! A test class */

/*! \mainpage My Personal Index Page
*
* \section intro_sec Introduction
*
* This is the introduction.
*
* \section install_sec Installation
*
* \subsection step1 Step 1: Opening the box
*
* etc...
*/


/*
 * /date 930507
 *
 *
 */
void testswap(int*, int*);

int main(void) {
	puts("!!!VARIABLE SWAP WITH POINTER!!!");
	//Sätter vanliga variabler som ska swapas
	int x = 111;
	int y = 222;

	// Skriver ut variablerna innan swap
	printf("Variabel x: %d\n", x);
	printf("Variabel y: %d\n", y);

	printf("Minnesadress f�r x: %d\n", &x);
	printf("Minnesadress f�r y: %d\n", &y);

	// Kör swappen med pekare
	testswap(&x, &y);
	// Skriver ut variablerna efter swap med pekare
	printf("Variabel efter swap x: %d\n", x);
	printf("Variabel efter swap y: %d", y);
}


/**
 * This is a function
 *
 */
void testswap(int *px, int*py)
{
    int temp;
    temp = *px;
    *px = *py;
    *py = temp;
}