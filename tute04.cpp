/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>
using namespace std;
long Factorial(int no);
long nCr(int n, int r);

int main() {
  int n, r;
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  return 0;
}
long nCr(int n,int r){
	
	
	long factorial_n;
	long factorial_r;
	long factorial_nr;
	long ncr;
	
	int counter;
	
	//initialization phase
	factorial_n=1;
	factorial_r=1;
	factorial_nr=1;
	ncr=0;
	
	//finding factoral of n
	for(counter=1;counter<=n;counter++){
		
		factorial_n=factorial_n*counter;
		
	}//end for loop
	
	
	
	//finding factorial of r
	for(counter=1;counter<=r;counter++){
		
		factorial_r=factorial_r*counter;
		
	}//end for loop
	
	
	//finding factorial of (n-r)
	for(counter=1;counter<=(n-r);counter++){
		
		factorial_nr=factorial_nr*counter;
		
	}//end for loop
	
	
	
	
	//finding value of ncr
	ncr=factorial_n/(factorial_r*factorial_nr);
	
	return ncr;
	
	
}//end function nCr

