/* Alex Benavides
16365 COP2334 202301
jGRASP
Programming Project 4: takes input from the user and will print the oridinals of every value up until that point. */

#include <cstdlib>  // Provides EXIT_SUCCESS
#include <iostream>  // Provides cout, cerr, endl
#include<string> //for string manipulation
#include<sstream> //for string manipulation and comparison
using namespace std;


int main() {

   int stop = 0;
   cout << "Please enter a stopping point: ";
   cin >> stop;
   
   for(int i = 1; i <= stop; i++) { //will continue until it reaches the value that was input by the user
   
      if ((i % 100) == 11 || (i % 100) == 12 || (i % 100) == 13) { //Checks for the exceptions of ordinals that have 11, 12, or 13 as the last 2 digits
         cout << i << "th Hello" << endl;
      }
      else if ((i % 10) == 1) { //this number ends in 1
         cout << i << "st Hello" << endl;
      }
      else if ((i % 10) == 2) { //this number ends in 2
         cout << i << "nd Hello" << endl;
      }
      else if( (i % 10) == 3) { //this number ends in 3
         cout << i << "rd Hello" << endl; 
      }
      else if( ((i % 10) == 4) || ((i % 10) == 5) || ((i % 10) == 6) || ((i % 10) == 7) || ((i % 10) == 8) || ((i % 10) == 9)) { //this number ends with a number between 4 or 9 (inclusive)
         cout << i << "th Hello" << endl; 
      }
      else { //If anything does not get correctly checked for what ever reason it will default to "th Hello"
         cout << i << "th Hello" << endl;
      }
   }
   return 0;
   
   } 