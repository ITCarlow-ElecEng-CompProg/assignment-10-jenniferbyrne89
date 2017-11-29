/** Jennifer Byrne
    08/11/2017
    Lab 10
    555 Timer Astable Multivibrator Calculations */

/** Preprocessor directives */
#include <iostream>
#include <iomanip>
#include <math.h>

void timer555 (double r1, double r2, double c1, double *freqPtr, double *dutyPtr);

/** Enables cout, cin and endl */
using namespace std;

/** main function */
int main()
{
    /** declaring variables and assigning pointers to addresses */
    double r1 = 0, r2 = 0, c1 = 0, freq, duty;
    double *freqPtr = &freq, *dutyPtr = &duty;

    /** display heading */
    cout << "555 Timer Astable Multivibrator Calculations\n" ;

    /** while loop to ensure a pos value for r1 */
    while (r1<=0)
    {
        cout << "\nEnter positive value for R1 :\t" ;
        cin >> r1;
    }

    /** while loop to ensure a pos value for r2 */
    while (r2<=0)
    {
        cout << "\nEnter positive value for R2 :\t" ;
        cin >> r2;
    }

    /** while loop to ensure a pos value for c1 */
    while (c1<=0)
    {
        cout << "\nEnter positive value for C1 :\t" ;
        cin >> c1;
    }

    /** calling 555timer sub function */
    timer555 (r1, r2, c1, freqPtr, dutyPtr);

    /** displayinf values for frequency and dudty cycle on console */
    cout << "\n\nOutput Frequency (Hz) :\t" << freq << "\n\nDuty Cycle :\t" << duty << "\n\n" ;

    /** Terminating main function */
    return 0;
}

/** sub function 555 timer */
void timer555 (double r1, double r2, double c1, double *freqPtr, double *dutyPtr)
{
    /** equations to calculate frequency and duty cycle */
    *freqPtr = 1.44 / ((r1 + (2 * r2)) * c1);

    *dutyPtr = (r1 + r2) / (r1 + (2 * r2));

    /** not returning a value because freq and duty values are stored in addresses through using pointers */
    return;
}
