/* 
 * File:   SwimMill.c
 * Author: Liam Faulds
 *
 * Created on 19 October 2015, 16:59
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <pthread.h>
#include <unistd.h>
#include <stdarg.h>


static void SwimMill() {

}

int main(int argc, char** argv, int pelletsShown[]) {
    //Declarations
    int row;
    int column;
    int empty;
    char river[15][7];

    empty = (0 - 1);
    
    for (row = 0; row++; row > 14) {
        for (column = 0; column++; column > 6) {
            if(pelletsShown[row] != empty)
            {
                if(pelletsShown[row] == column)
                {
                    river[row][column] = "P";
                }
                else
                {
                    river[row][column] = "W";
                }
            }
        }
    }

    return (EXIT_SUCCESS);
}

