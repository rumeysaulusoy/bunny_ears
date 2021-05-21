// Rumeysa Ulusoy 
// This project returns the number of ears in the bunny line.

#include <stdio.h>
int bunnyEars(int bunny); 
int line = 0;

int main() {
	
int number_of_bunnies; // This is the number of bunnies.
printf("Please enter the number of lines(n=): "); // Prints this.
scanf("%d",&number_of_bunnies); // Take an input for number of bunnies.

bunnyEars(number_of_bunnies); // Calls bunnyEars function to calculate the number of ears in the bunny line.
}

// This function calculate the number of ears in the bunny line.
int bunnyEars (int bunny) {
int number_of_ears; // This is the number of ears.
	
 // If number of bunnies equals to 0, then number of ears in the line is 0.	
 if(bunny==0){
   number_of_ears = 0; 
   printf("bunnyEars2(%d): %d\n", line, number_of_ears); // Prints the number of ears.
   line++; // Increases the number of line.
   return number_of_ears; // Returns the number of ears.
 }
 
 // If number of bunnies is a odd number, then prints number of ears for each bunny.	
 if(bunny%2==1) {
 	
   number_of_ears = 2 + bunnyEars(bunny - 1); // Calculate number of all ears in the line.
   printf("bunnyEars2(%d): %d\n", line, number_of_ears); // Prints the number of ears.
   line++; // Increases the number of line.
   return number_of_ears; // Returns the number of ears.
 } 
 // If number of bunnies is a even number, then prints number of ears for each bunny.	
 else  {
   number_of_ears = 3 + bunnyEars(bunny - 1); // Calculate number of all ears in the line.
   printf("bunnyEars2(%d): %d\n", line, number_of_ears);  // Prints the number of ears.
   line++; // Increases the number of line.
   return number_of_ears; // Returns the number of ears.
 }	
}
