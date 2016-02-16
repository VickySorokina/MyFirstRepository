#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

//CONTAINS ALL OF THE EX01 PARTS NOT ONLY 02

//function prototypes//
void ex02();
void ex03();
void ex04();
void ex05();
int intFuncEx04(int); //function that takes an integer and returns uts double sized integer
int add(int, int); //takes two integers, and returns the sum of those integers
void addOneToPar(int &); //function that adds one to its parameter and takes the integer as a pass by reference
void outputArray(const int, int[]); //a function that takes an array and the size of the array, and outputs the values in that array
void containValue(int[], const int); //takes an array and the size of that array,prompts for a value, then outputs whether  array contains that value.

int main() {
	ex02();
	ex03();
	ex04();
	ex05();
	return 0;
}


//EXERCISE FUNCTIONS
void ex02() {
	// a) Declare  a variable hasPassedTest , and initialize  it to true
	bool hasPassedTest = true;

	//b) Declares two variables x and y which are initialized to random numbers...
	srand(time(0));
	int x = rand();
	int y = rand();
	// ...outputs whether x is greater than or equal to y
	if (x >= y)
		cout << "x = " << x << " is greater than or equal to y = " << y << endl;
	else
		cout << "x = " << x << " isn't greater than or equal to y = " << y << endl;
	//c) Declares a variable numberOfShares...
	int numberOfShares;
	//...prompts the user for a value...
	cout << "Give me a value: ";
	cin >> numberOfShares;
	//... outputs whether the value is less than 100
	if (numberOfShares < 100)
		cout << "the value " << numberOfShares << " is less than 100" << endl;
	else
		cout << "the value " << numberOfShares << " isn't less than 100" << endl;
	//d) Prompts the user for a box width and a book width...
	int boxWidth = 0, bookWidth = 0;
	cout << "Give me a box width and book width: ";
	cin >> boxWidth >> bookWidth;
	//...outputs if the box width is evenly divisible by the book width
	if (boxWidth%bookWidth == 0)
		cout << "box width is evenly divisible by the book width" << endl;
	else
		cout << "box width isn't evenly divisible by the book width" << endl;
	//e) Prompts the user for the shelf life of a box of chocolate and the outside temperature...
	int shelfLife = 0, outsideTemp = 0;
	cout << "gimme shelf life of a box of chocolate and the outside temperature: ";
	cin >> shelfLife >> outsideTemp;
	//... then decreases the shelf life by 4 if the outside temperature is greater than 90
	if (outsideTemp > 90)
		shelfLife = shelfLife - 4;
}

void ex03() {
	//a) Prompt the user for the area of a square...
	int area;
	cout << "gimme area of a square: ";
	cin >> area;
	//Output the length of the diagonal for that square.
	cout << "The length of the diagonal for that square is " << sqrt(area * 2) << endl;

	//b) Prompt the user for a yes or no response(y or n) using a char variable...
	char reply;
	cout << "gimme a y or n: ";
	cin >> reply;
	//Output “yes” if the user gave you a ‘y’, and “no” if the user gave you ‘n’.
	if (reply == 'y')
		cout << "yes" << endl;
	else if (reply == 'n')
		cout << "no" << endl;
	//ignore other replies including capital letters bc not required by the exercise

	//c) Initialize a char variable tab to the tab character.
	char tab = '/t';

	//d) Declare a string variable mailingAddress...and e) Initialize a string variable to the empty string.
	string mailingAddress = "";
	//...prompt the user for their mailing address.
	cout << "what's your mailing address? ";
	cin >> mailingAddress;
}

void ex04() {
	//a) code to ask the user for a number between 1 and 10. 
	int nr = 0;
	cout << "gimme nr between 1 and 10: ";
	do {
		if (!(cin >> nr)) { //the failproof if
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cout << "Wrong input" << endl;
		}
	} while (!(nr <= 10 && nr >= 1)); //Loop until the user gives a valid input.

	int sumOfCubes = 0; //before calculations it's 0
						//calculate sum of the cubes from 1 to the number given
	for (int x = 1; x <= nr; x++)
		sumOfCubes = sumOfCubes + x*x*x;
	//output the sum of the cubes from 1 to the number given
	cout << "sum of the cubes from 1 to " << nr << " is " << sumOfCubes << endl;

	//c) Use a do-while loop to output a number of asterisks, again using the input from (a)
	sumOfCubes = 0; //going to recicle old no longer needed variable
	do {
		cout << "*";
		sumOfCubes++;
	} while (sumOfCubes < nr);
	cout << endl; //for the next part not to be on top of this one

				  //d) Use a for loop to output the even numbers from 0 to 40.
	for (int i = 0; i <= 40; i = i + 2)
		cout << i << " ";
	cout << endl; //for the next part not to be on top of this one

				  //Call intFuncEx04 using the value prompted in (a).
	intFuncEx04(nr);

	//Call function add using two random numbers
	srand(time(0));
	int x = rand();
	int y = rand();
	add(x, y);

	/*part g) test
	cout << nr << " ";
	addOneToPar(nr);
	cout << nr << endl;*/

}

void ex05() {
	//a) Write a loop that asks the user for five integers, and stores those integer values in an array.
	int fiveNr[5] = {};
	cout << "Give me 5 integers:" << endl;
	for (int i = 0; i < 5; i++)
		cin >> fiveNr[i];

	//b) Write some code that calculates the sum and the product of the values in the integers, and outputs those results.
	int sum = 0, product = 1;
	for (int i = 0; i < 5; i++) {
		sum = sum + fiveNr[i];
		product = product*fiveNr[i];
	}
	cout << "Sum of these nrs is " << sum << " and product is " << product << "." << endl;

	//Call the array from your ex05 function, passing the array of 5 integers from (a)
	outputArray(5, fiveNr);

	containValue(fiveNr, 5);

}


//FUNCTIONS THAT WILL BE CALLED IN EXERCISE FUNCTIONS
//e) Implement a separate function that takes an integer, and doubles that integer. 
int intFuncEx04(int i) {
	return i * 2;
}

//f) Write a function called add that takes two integers, and returns the sum of those integers.
int add(int a, int b) {
	return a + b;
}

//g) Write a function that adds one to its parameter. The function should take the integer as pass by reference.
void addOneToPar(int &i) {
	i++;
}

//c) Write a function that takes an array and the size of the array, and outputs the values in that array.
void outputArray(const int sze, int ar[]) {
	cout << "values in this array are: ";
	for (int i = 0; i < sze; i++)
		cout << ar[i] << " ";
	cout << endl;
}
//d) Write a function that takes an array and the size of that array, then prompts the user for a value, then outputs whether or not the array contains that value.
void containValue(int ar[], const int sze) {
	int check; //integer for checking
	bool arrayContains = false;
	cout << "Give me the value you want to check for existence: ";
	cin >> check;

	for (int i = 0; i < sze; i++) {
		if (check == ar[i])
			arrayContains = true; //if no match then arrayContains will stay false
	}

	if (arrayContains)
		cout << "Array contains this value" << endl;
	else
		cout << "Array doesn't contain this value" << endl;
}