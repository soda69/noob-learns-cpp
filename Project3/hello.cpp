/*
-------------------------------
-          CHAPTER 1          -
-------------------------------
*/





// Exercise 1.8
// /* */ do not nest, example
//	std::cout << /* "*/" */;
//	std::cout << /* "*/" /* "/*" */;

// 1.4.1 A while statement repeatedly executes code as long as given condition is true
// Exercises Section 1.4.1
// Exercise 1.9 - make a while summing numbers 50-100
/*#include <iostream>
int main() {
	int sum = 0, val = 50;
	while (val >= 50 && val <= 100) {
		sum += val;
		val++;
	}
	std::cout << sum;
}*/


//Exercise 1.10 - decrement operator to write while printing numbers 10 to 0
/*#include <iostream>
int main() {
	int val = 10;
	while (val >= 0) {
		std::cout << val << " ";
		val--;
	}
	return 0;
}*/

//Exercise 1.11 - prompt 2 ints, print each in the range specified by those 2 ints
/*#include <iostream>
int main() {
	int a, b; // prompt
	std::cout << "Enter two integers: ";
	std::cin >> a >> b;
	if (a > b) {
		while (b <= a) {
			std::cout << b << " ";
			b++;
		}
	}
	else
		while (a <= b) {
			std::cout << a << " ";
			a++;
		}
}*/

// 1.4.2 A for statement creates val and initializes it to 1, tests whether it is less/equal to 10/ increments val1, repeats step2 as long as it true
// Exercise 1.13 - Rewrite first 2 from 1.4.1 using for loops
/*#include <iostream>
int main() {
	int sum = 0;
	for (int val = 1; val <= 10; val++) {
		sum += val;
	}
	std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
	return 0;
}*/

// Exercise 1.16 - Make errors on page 16

// 1.4.3
// Exercise 1.16 - print sum of set of integers read from cin
/*#include <iostream>
int main() {
	int sum = 0, value = 0;
	while (std::cin >> value) {
		sum += value;
	}
	std::cout << "Sum: " << sum;
	return 0;
}*/

// 1.4.4
// Exercise 1.17 - What happens if all inputs are equal? What if there are no duplicated values?
// Exercise 1.18 Run program from this section with only euqal values and again with no number repeated
/*#include <iostream>
int main() {
	// currVal is the number we're counting; we'll read new values into val
	int currVal = 0, val = 0;
	// read first number and ensure that we have data to process
	if (std::cin >> currVal) {
		int cnt = 1; // store the count for the current value we're procesing
		while (std::cin >> val) { // read the remaining numbers
			if (val == currVal)   // if the values are the ssame
				++cnt;			  // add 1 to cnt
			else { // otherwise, print the count for the previous value
				std::cout << currVal << " occurs " << cnt << " times " << std::endl;
				currVal = val; // remember the new value
				cnt = 1; // reset the counter
			}
		} // while loop ends here
		// remember to print the count for the last value in the file
		std::cout << currVal << " occurs " << cnt << " times" << std::endl;
	} // outermost if statement ends here
	return 0;
}*/

// Exercise 1.19 - Revise 1.4.1 exercises that printed range of numbers so that it handles input in which first is smaller than second
/*#include <iostream>
int main() {
	int a, b;
	std::cout << "Give two ints: ";
	std::cin >> a >> b;
	if (a > b) {
		std::cout << "Range = " << a - b << std::endl;
		for (a; a >= b; a--) {
			std::cout << a << " ";
		}
	}
	else if (b > a) {
		std::cout << "Range = " << a - b << std::endl;
		for (b; b >= a; b--) {
			std::cout << b << " ";
		}
	}
}*/

// Exercises 1.5.1
// Exercise 1.20
/*#include <iostream>
#include "Sales_item.h"

int main() {
	int answer; Sales_item item1;
	std::cout << "Do you want to list sales items? (0 no, 1 yes) ";
	std::cin >> answer;
	if (answer == 1) {
		std::cout << "If done, enter a non-int response" << std::endl << "Enter your sales item (ISBN, copies sold, price): ";
		while (std::cin >> item1) {
			std::cout << item1 << std::endl;
			std::cout << "Enter your sales item (ISBN, copies sold, price): ";
		}
	}
}*/

//Exercise 1.21 - sum
/*
#include <iostream>
#include "Sales_item.h"
int main() {
	Sales_item item1, item2;
	std::cin >> item1 >> item2; //read a pair of transactions
	std::cout << item1 + item2 << std::endl; // print their sum
	return 0;
}*/

//Exercise 1.22 - read same ISBN, sum of all transactions read
// LOOKED TO KEY 
/*
#include <iostream>
#include "Sales_item.h"
int main() {
	Sales_item item1, item2;
	std::cin >> item1 >> item2;
	if (item1.isbn() == item2.isbn()) {
		std::cout << item1 + item2 << std::endl;
		return 0;
	}
	else {
		std::cerr << "Data must refer to same ISBN" << std::endl;
		return -1;
	}
}*/

// Exercises 1.5.2
// Exercise 1.23 - reads several transactions and counts how many transactions occur for each ISBN
/*
#include <iostream>
#include "Sales_item.h"
int main() {
	Sales_item item1, item2;
	std::cin >> item1 >> item2;
	if (item1.isbn() == item2.isbn()) {
		item1 += item2;
		std::cout << item1;
	}
	else {
		std::cout << item1 << std::endl << item2;
	}
}*/

// Exercises 1.6
// Exercise 1.25 - bookstore program
/*#include <iostream>
#include "Sales_item.h"

int main() {
	Sales_item total; // variable to hold data for next transaction
	// read the first transaction and ensure there's data to process
	if (std::cin >> total) {
		Sales_item trans; // variable to hold the running sum
		while (std::cin >> trans) {
			// if we're processing the same book
			if (total.isbn() == trans.isbn())
				total += trans; // update the running total
			else
				// print results for previuos book
				std::cout << total << std::endl;
			total = trans; // total now refers to next book
		}
		std::cout << total << std::endl; // print the last transaction
	}
	else {
		// no input! warn the user
		std::cerr << "No data?!" << std::endl;
		return -1; // indicate failure
	}
	return 0;
}*/


/*
-------------------------------
-          CHAPTER 2          -
-------------------------------
*/





// Exercises 2.1.1
// Exercise 2.1: What are the differences between int, long, long long, and short? Unsigned and signed? Float and double?
// int - 16 bits
// long - long int, 32 bits, in practice same size as int
// long long - looong int, 64 bits
// short - short int, 16 bits, usually too short
// signed - negative/positive, 0, half max/mins
// unsigned - positive only, 0, doublle max
// float - single precision floating point, 6 significant digit, usually not enough precision
// double - double precision floating point, 10 significant digits

// Exercise 2.2: To calculate mortgage payment, what types would you use for rate, principal, and payment? Explain
// Answer: I don't pay mortgage so I don't know

// Exercises 2.1.2
// Exercise 2.3: What output will the following code produce?
// unsigned u = 10, u2 = 42;
// std::cout << u2 - u << std::endl; 32
// std::cout << u - u2 << std::endl; 4294967264
// 
// int i = 10, i2 = 42;
// std::cout << i2 - i << std::endl; 32
// std::cout << i - i2 << std::endl; -32
// 
// std::cout << i - u << std::endl; 0
// std::cout << u - i << std::endl; 0

// Exercise 2.4: Write a program to check whether your predictions were correct. If not, study this section until you understand
/*#include <iostream>

int main() {
	unsigned u = 10, u2 = 42;
	std::cout << u2 - u << std::endl;
	std::cout << u - u2 << std::endl;

	int i = 10, i2 = 42;
	std::cout << i2 - i << std::endl;
	std::cout << i - i2 << std::endl;

	std::cout << i - u << std::endl;
	std::cout << u - i << std::endl;
}*/
// ALL CORRECT!

// Exercises 2.1.3
// Exercise 2.5 - Determine type of each of following literals. Explain differences among literals
// (a) 'a',L'a',"a",L"a"
// (b) 10,10u,10L,10uL,012,0xC
// (c) 3.14,3.14f,3.14L
// (d) 10,10u,10.,10e-2
// (a) character literal, wide character literal, **character string literal, **wide string character literal
// (b) integral literal, unsigned int, long int 10, long unsigned int 10, octal literal, hexadecimal literal
// (c) **floating-point literal (double), **floating-point literal (float), **floating-point literal (long double)
// (d) int literal, int unsigned literal, **floating-point (double) literal, **floating-point (double) literal

// Exercise 2.6 - Differences?
// int month = 9, day = 7;
// int month = 09, day = 07;
// First is decimal literal, second is octal literal

// Exercise 2.7 - What values do these literals represent? What type does each have?
// (a) "Who goes with F\145rgus?\012" // character string literal containing 2 escape sequences
// (b) 3.14e1L (c) 1024f (d) 3.14L //  floating-pint literal, long double	floating-point literal, float	floating-point literal, long double

// Exercise 2.8 - use escape sequences to print 2M followed by newline. then modify it to print 2, tab, M, newline
/*#include <iostream>
int main() {
	//std::cout << "\62\115\n";
	std::cout << "\62\t\115\n";
}*/


// Exercises 2.2.1
// Exercise 2.9 - Explain following definitions. For illegal, explain the wrong and how to correct
// (a) std::cin >> int input_value;            (b) int i = { 3.14 };
// (c) double salary = wage = 9999.99;         (d) int i = 3.14;
// a. int input_value takes user input from istream b. error. to take truncated double, use () or no parantehsis.
// c. IDK if it's legal.... Ok it is legal. a double salary is assigned wage value which is also 9999.99. wage needs to be declared first tho d. int i truncates

// Exercise 2.10 - What are intial values, if any, of each following variable?
// std::string global_str;
// int global_int;
// int main()
// { int local_int; 
// std::string local_str;
// }
// a. empty b. 0 c. undefined d. undefined** WRONG. it is another empty string object. probably bc string is not built-in type.

// Exercises 2.2.2
// Exercise 2.11: Explain whether each is a declaration or definition
// (a) extern int ix = 1024; // definition and error (extern is supposed to be for declaration)
// (b) int iy; // definition
// (c) extern int iz; // declaration

// Exercises 2.2.3
// Exercise 2.12: Which, if any, are invalid
// (a) int double = 3.14; // valid** ACTUALLY INVALID (C++ keyword)
// (b) int _; // valid inside a function
// (c) int catch-22; // valid** ACTUALLY INVALID (C++ keyword, catch)
// (d) int 1_or_2 = 1; // valid** ACTUALLY INVALID (must begin wtih letter or underscore)
// (e) double Double = 3.14; // valid

// Exercises 2.2.4
// Exercise 2.13: What is the value of j?
/*
int i = 42;
int main()
{
int i = 100;
int j = i;
} // j = 100

// Exercise 2.14: Is this program legal? If so, what are the values printed?
int i = 100, sum = 0;
for (int i = 0; i != 10; i++)
sum+= i;
std::cout << i << " " << sum << std::endl;
// Illegal** ACTUALLY LEGAL, prints 100 45
*/

// Exercises 2.3.1
// Exercise 2.15: Which of the following deifnitions, if any, are invalid and why?
/*
a. int ival  = 1.01;
b. int &rvall = 1.01;
c.int &rval2 = ival;
d. int &rval3;
B. Invalid, cannot assign base type to reference
C. Invalid, object must match declared type** VALID, declared type is an int.
D. Invalid, must be initialized

// Exercise 2.16: Which, if any, of the following assignments are invalid? If valid, explain what they do
int i = 0, &r1 = i; double d = 0, & r2 = d;
(a) r2 = 3.14159; // valid, assigns double to double r2
(b) r2 = r1; // valid, assigns r1(i) to r2
(c) i = r2; // valid, truncates r2(now 0) into int i
(d) r1 = d; // valid, assigns d to r1

#include <iostream>
int main() {
	int i = 1, & b = i;
	b = 69;
	std::cout << i << " " << b;
}
NOTE how assigning base type to reference affects both i and b.

// Exercise 2.17: What does the following code print?
int i, &ri = i;
i = 5; ri = 10;
std::cout << i << " " << ri << std::endl;
// should print 10 10

*/

#include <iostream>
int main() {
	int i, & ri = i;
	i = 5; ri = 10;
	std::cout << i << " " << ri << std::endl;
	// should print 10 10
}