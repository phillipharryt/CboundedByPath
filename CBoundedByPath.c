#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct coordinate{
    int x;
    int y;
};

int main(int argc, char **argv) {
    /*need an array of pointers to struct coordinates
    Which the read_csv_coords_to_array file will read into
    then we operate over it.
    */
   /*need to read points that you are checking if they're within the path
   It's also a csv file, we store it in a different array */
   /*remember to free at the end of it, both arrays*/
}

void read_csv_coords_to_array (FILE *datafile, int *array[], int arrayLength){
    int c = 0, curr_x = 0, curr_y = 0, array_counter = 0;
    bool x_set = false, y_set = false;
    while((c = fgetc(datafile)) !='\n') {
       if (c == ',') {
           x_set = false;
           y_set = false;
           struct coordinate* added_coord =
           (struct coordinate*) malloc(sizeof(struct coordinate));
           array[array_counter] = added_coord;
       }
       if(x_set){
           if(c === '-'){}
           else{
               curr_y = c;
           }
       }
       else{
           curr_x = c;
           x_set = true;
       }
   }
}
