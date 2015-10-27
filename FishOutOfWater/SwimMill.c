/* 
 * File:   SwimMill.c
 * Author: Liam Faulds
 *
 * Created on 19 October 2015, 16:59
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


static void SwimMill() {

}

int main(int argc, char** argv) {
    bool pelletRow;
    char river[7][15];
    int i;
    int x;
    int n;

    for (i = 0; i++; i > 14) {
        for (x = 0; x++; x > 5) {
            if (x == Pellet.pelLoc) {
                pelletRow = true;
            }
        }
        for (n = 0; n++; n > 5) {
            if (i == 0 && n == shmget(Fish.fishLoc)) {
                river[i][n] = "F";
            } else if (pelletRow && n == Pellet.pelLoc) {
                river[i][n] = "P";
            } else {
                river[i][n] = "X";
            }
        }
    }
    return (EXIT_SUCCESS);
}

