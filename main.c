/* File: exampleStart.c 
   Author: Cindy 
   Description: starting file to use for creating main.c, example.c 
      and example.h 
*/
#include <stdio.h>

#define MAX_NAME_LENGTH 21
#define ARRAY_LENGTH 5

typedef struct employee {
   char name[MAX_NAME_LENGTH];
   double salary;
} Employee;

int readData( Employee[] );
void printData( Employee[], int );

int main()
{
   Employee e[ARRAY_LENGTH];
   int i;
   int count;

   count = readData( e );   
   printData( e, count );
   
   return( 0 );
}

/* readData: reads data into array of Employee structures from stdin
 * Parameters
 *    a the array
 * Returns: number of elements read in
 */
int readData( Employee e[] ) {
   int count = 0;
   while( count < ARRAY_LENGTH && 
      scanf( "%s%lf", e[count].name, &e[count].salary ) != EOF ) {
      count++;
   }
   return count;
}

/* printData prints array of Employee structures to stdout in a formatted
 *    table
 * Parameters
 *    e array of Employee structures
 *    n number of valid elements in array
 * Returns nothing
 */
void printData( Employee e[], int n ) {
   int i;
 
   // print table heading
   printf("Name                      Salary\n");
   printf("---------------------------------\n");
   for( i = 0; i < n; i++ ) {
      printf("%-20s  $%10.2lf\n", e[i].name, e[i].salary );
   }
}
