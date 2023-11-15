
//Task 1
#include <iostream>
using namespace std;
int main () {
	
int num;
cout<<"Enter the range of numbers you want to add: "; cin>>num;
int sum=0;
for (int i=2; i<=num;++i) {              //Outer loop that runs the amount of number of terms.
	bool isPrime=true;                   //A boolean function that gives 1 or 0 value.
	for (int j=2; j<=i/2; ++j) {         //Inner loop that calculates the next prime number.
	if (i % j==0) {                      //Checks if the number is prime
	isPrime=false;                       //If the condition is fulfilled it means that the number is not prime
	break;                               //Breaks the loop if condition is fulfilled
	}
	}
	if (isPrime) {                       //Checks for true or false
		sum= sum+i;                      //Adds the next number (prime) to the first number
	}
}
cout<<"Sum of the first "<<num<<" prime numbers is: "<<sum;
return 0;
}





//Task 2
#include <iostream>
using namespace std;
int main () {
	
int rows;
cout<<"Enter the number of rows: "; cin>>rows;

for (int i=1; i<=rows; ++i) {     //Runs the loop for the amount of number of rows
	for (int j=1; j<=i; ++j){       //Adds +1 to the next number
		cout<<j<<" ";               //Prints out the next number
		
	}
	cout<<endl;                     //Prints the next row
}
return 0;
}

//Task 3
#include <iostream>
using namespace std;
int main () {
	
int rows;
cout<<"Enter the number of rows: "; cin>>rows;

for (int i=1; i<=rows; ++i) {         
	for (int j=1; j<=i*2; j++){             //Adds spaces of 2 to each row
		cout<<i*2<<" ";                     //Adds +2 to the preceding term
		
	}
	cout<<endl;                             //Prints the same number for the amount of times said in outer loop
}
return 0;
}
