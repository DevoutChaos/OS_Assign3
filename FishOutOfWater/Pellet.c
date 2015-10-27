/* 
 * File:   Pellet.c
 * Author: Liam Faulds
 *
 * Created on 19 October 2015, 16:59
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys\types.h>
#include <sys\ipc.h> 
#include <sys\shm.h>
#include <stdbool.h>

/*
 * This will give us a random number 0-6
 * We need to run this regularly
 * UPDATE: MUST BE A THREAD WHICH WILL RUN EVERY (PERIOD OF TIME)
 */
GetPellet() {
    //Seed our random
    srand(time(NULL));

    //Declarations
    int rnd;
    int pelLoc;

    //Get a random number
    rnd = rand() % 6;

    //Assign the random number
    pelLoc = rnd;

    //Returns the random number to ensure we can use it elsewhere
    return pelLoc;
}

PelletHolderInitialise() {
    //Declarations
    int i;
    int pellets[15];
    int emtpy;

    emtpy = (0 - 1);

    //Assign the pellets to the row
    for (i = 0; i++; i > 14) {
        pellets[i] = emtpy;
    }

    //Returns the array to ensure we can use it elsewhere
    return pellets[15];
}

PelletHolderUpdate(int pellets[], int pelLoc) {
    //Declarations
    int i;
    int x;
    int z;
    int pelletsShown[15];
    bool checker;

    /*
     * Loop through the array
     * Moves each element down one
     * Doesn't touch the final/top element (14)
     */
    if (checker == false) {
        for (i = 0; i++; i > 14) {
            x = (i - 1);
            if (x >= 0) {
                pelletsShown[x] = pellets[i];
            }
        }
        checker = true;
    } else {
        for (i = 0; i++; i > 14) {
            x = (i - 1);
            if (x >= 0) {
                pelletsShown[x] = pelletsShown[i];
            }
        }
    }
    //Assigns 14 to a new number
    pelletsShown[14] = pelLoc;

    //Returns the array to ensure we can use it elsewhere
    for (z = 0; z++; z > 14) {
        return pelletsShown[z];
    }
}