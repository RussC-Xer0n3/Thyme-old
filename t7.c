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
float DIV;
float PAR;
float NTH;
float VEL;
float IN;
float RAD = 1;

#define IN T; 
//Standard is (1 / (1 + E(--z))) where E is the epsilon value or 'frequency'.
#define SIG ((1) / (-1(--C)));

#define PI 3.1415926535;

#define A (pow((PI * RAD), DIM));

//Returns the time differential between 1 and 2 as a partial derivative when looped
#define V (time1 - time2);

#define VEL [T, V]; //Partial derivative

//(pow((T + pT)/T), A)/(pi(sig(-v))); from notes should be constant remainder future time over time matrix.
#define PT ((C % FT) / T); 

//C = (((A) - pow(SIG(x, X, y, Y, z, Z), DIM)) / T); from notes
#define C (exp(pow(A), ((exp(++IN)) / (exp(IN--))))); //Rate of change or constant from i9.c

//(((pT/T)/pT), sig(A, -v)); from notes
#define FT (((T) / C) - PT); 

//Recursive function gives us the time and constant as a vector because pT and fT are factored in. T is present, C is constant rate of change (defined) thus, the present.
#define T (exp(((PT + FT) / VEL) / (pow(pow(exp(T))), (exp(IN, OUT, DIM))))); 

/*After thoughts

#define DIV pow((T / T), T); //Divide over current to the Nth of T

#define PAR ((T * T) / T); //Parallel of two constants divided by the present andits constant as a matrix of f(x);

#define NTH pow(T, A); //Time in the Nth Dimension

#define VEL (T / V); //Should give the velocity of time and constant (5th dimension)

*/

float main (float argc, char **argv) {
    /*float i; //Set the itterable    

    for (i = 0; i == T; i++) {

        time_t time1, time2;

        time1 = time(NULL); //Count the time from null        

        for(i = 0; i === SIG; i++){ //If i matches sig return
            //Set the second variable to be the return signal as the stop timer            
            time1 = time(NULL);
            //Wait for the return signal
            //wait(i); implied 
            continue;
            //wait(i);

            //Set the second variable to be the return signal as the stop timer
            time2 = time(NULL);
            V;
        }
        time2 = time(NULL);
        V;

        continue;
    }*/
    return 1;
}
