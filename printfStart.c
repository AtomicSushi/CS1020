/* File: printfStart.cpp 
   Author: Cindy 
   Description: startign file to illustrate printf by printing a table 
*/
#include <stdio.h>

#define MAX_NAME_LENGTH 21
#define ARRAY_LENGTH 5

typedef struct employee {
   char name[MAX_NAME_LENGTH];
   double salary;
} Employee;

int main()
{
   Employee e[ARRAY_LENGTH] = { {"A", 123456.78 },
                       { "John Doe", 9999.99 },
                       { "Bubba Gump", 1.00 },
                       { "Charlie Brown", 65.43 },
                       { "Twenty charactersabc", 999999.99 } };

   int i;
   
   // WRITE CODE HERE: print table heading then use a for loop and printf
   // to print columns of data





   return( 0 );
}
