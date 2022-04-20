/*###################################
            PSEUDO CODE
 ####################################
Get current time relative to space for all vectors of distribution from point A (time1 + Nlocations)
Get time delay difference between point A and (time 2 + Nlocations) by subtracting the mean average cubed from time1 and time2 - gives time taken from all distribution points to all collection points as mean average cubed
quantify actual data relative to arrival times after ditribution should give a 3d representation of our exact location in the universe. calculate distance over time for velocity of unique signal.

Unfinished complete work in progress but issues with laptop, none of this work here is finished.

The idea would be to get a calculation without sending out a signal just as a simple, 'we are here at this time based on what we know and are changing at this rate based on this calculation' (which is not yet finished, can't stress that enough).

Thought's, the signal might return from and to a different location based on our xyz and the current time. Signal may even never return and if it did, might not be the same signal since it will have encountered interference on it's traversal
###################################*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>
#include <time.h>

float A;
float T;
float C;
float PT;
float FT;
float V;
float PI;
float DIM = 1;
float SIG(C);

//An afterthought
//float DIV;
//float PAR;
//float NTH;
float VEL;
float IN;
float RAD = 1;

//Time goes in recurrently
#define IN T;

//Sigmoid standard is (1 / (1 + E(--z))) where E is the epsilon value or 'frequency'.
#define SIG ((1) / (-1(--C)));

#define PI 3.1415926535;

//Oliptical Dimension
#define A (pow((PI * RAD), DIM));

//Partial derivative
#define V (time1 - time2);

//Partial derivative time matrix
#define VEL [T, V];

//Past Time
#define PT ((C % FT) / T); 

//Constant
#define C (exp(pow(A), ((exp(--IN)) / (exp(IN++))))); //Rate of change or constant from i9.c

//Future Time
#define FT (((T) / C) - PT); 

/* Recursive function gives us the time and constant as a 
 * vector because pT and fT are factored in. T is present, 
 * C is constant rate of change (defined) thus, the present. */

#define T (exp(((PT + FT) / VEL) / (pow(exp(VEL))), (exp(IN, DIM))))); 

float main (float argc, char **argv) {
    return 1;
}
