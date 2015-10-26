/* 
 * File:   SwimMill.c
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
void Pellet()
{
    srand(time(NULL));
    int rnd;
    char pelletLoc[7];
    rnd = rand() %6;
    int pelLoc;
    pelLoc = rnd;
}