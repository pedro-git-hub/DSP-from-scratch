#ifndef CONVOL.H
#define CONVOL.H

/*
 * Function that takes a discrete-time signal and shifts it by some t0.
 *
 * Parameters:
 * x: Pointer to the signal array
 * t0: Integer responsible for the shift
 *      if (t0 > 0) {
 *          delays the signal,
 *          doesn't break causality
 *      } else if (t0 < 0) {
 *          rushs the signal,
 *          breaks causality
 *      }
 *
 * Doesnt return any values.
 * */
void time_shift();


/*
 * Function that takes a discrete-time signal and inverts it about the origin.
 *
 * Parameter:
 * x: Pointer to the signal array
 *
 * Doesnt return any values.
 * */
void time_inversor();



/*
 * Function that does the convoltuion sum of a discrete-time signal.
 *
 * Parameters:
 * x: Pointer to a signal array
 * h: Pointer to a signal array
 *
 * Returns a pointer to the resulting y signal array.
 * */
void convolution_sum();

#endif
