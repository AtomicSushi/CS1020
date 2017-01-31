/* File: bookSort.c
 * Author: Cindy
 * Description: uses array of pointers to an 
 *    array of structures to sort
 */
#include <stdio.h>
#include <string.h>

#define MAX_CHARS 81
#define MAX_BOOKS 10 

typedef struct  {
   char title[MAX_CHARS];
   char author[MAX_CHARS];
   char publisher[MAX_CHARS];
   int edition;
} book_t;

// ADD CODE HERE: prototypes for the following functions:
// readBooks that has 1 parameter: the array of book_t books
//   it reads book data from a file called books.in and
//   returns the number of books it read in
// initSortingArray has 3 parameters: the array of book_t books,
//    the titlePtrs array and the number of valid elements in 
//    the array of book_t books. This function initializes
//    the titlePtrs array so that each element points to 
//    an element of teh books array. Returns nothing
// printBooks has two parameters: the titlePtrs array and
//    the number of valid pointers in it. Prints out a table
//    of book info
// sortBooks has two parameters: the titlePtrs array and the
//    number of valid elements in it. It sorts pointers by
//    book title. Returns nothing.
// swap has two parameters: pointers to elements of titlePtrs
//    array. It swaps their actual values. Returns nothing

int main() {
   book_t books[MAX_BOOKS];  
   book_t* titlePtrs[MAX_BOOKS];
   int numBooks;
   
   // ADD ONE LINE TO CALL readBooks
   
   // ADD ONE LINE TO CALL initSortingArray 
   
   // ADD ONE LINE TO CALL sortBooks 
   
   // ADD ONE LINE TO CALL printBooks (so, they should print
   // sorted by title since you need to pass the titlePtrs
   // array)
   
   
   return 0;
}

/* readBooks: fills book_t array with at most MAX_BOOKS
 *    book info from file books.in
 * Parameters: a array of book structure
 * Returns: number of books
 */
int readBooks( ADD CODE HERE ) {
   FILE* in;
   int i = 0;
   char junk;
   in = fopen( "books.in", "r" );
   if ( in != NULL ) {
      while ( i < MAX_BOOKS &&
      fgets( a[i].title, MAX_CHARS, in ) != NULL ) {
         fgets( a[i].author, MAX_CHARS, in );
         fgets( a[i].publisher, MAX_CHARS, in );
         fscanf(in, "%d", &a[i].edition );
         fscanf(in, "%c", &junk );
         i++;
      }
   }
   return i;
}

/* initSortingArray: sets all pointers in array to point to 
 *    books array
 * Parameters: 
 *    a books array
 *    t pointers to elements in books array
 *    n number of books in array a
 * Postcondition: t contains n valid pointers to n elements in a
 * Returns: nothing
 */
void initSortingArray( ADD CODE HERE ) {
   // ADD CODE HERE 

} 

/* printBooks: prints book info to stdout
 * Parameters:
 *    aPtr: array of pointers to book_t structures
 *    n: number of valid element in n
 * Returns: nothing
 */
void printBooks( ADD CODE HERE ) {
   // ADD CODE HERE
   
}

/* sortBooks: uses a selection sort to sort book info 
 * Parameters:
 *    aPtr: array of pointers to book_t structures
 *    n: number of valid elements in aPtr
 * Returns: nothing
 */
void sortBooks( ADD CODE HERE ) {
// ADD CODE HERE. MAKE SURE YOU CALL swap TO SWAP 

}

/* swap: swaps pointers to book_t array elements
 * Parameters:
 *    b1, b2: references to pointers to book_t elements
 * Postcondition: actual parameter pointer values swapped
 * Returns: nothing
 */
void swap( ADD CODE HERE ) {
   // ADD CODE HERE
}
