//Glenn Truett
//This program will meet the requirements for the Assignment: Random Numbers, Arrays, and Sound in C++ Part 1

// These next sever lines of code call up libraries that will be needed for the rest of the code
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <Windows.h>
#include <stdio.h>

using namespace std;


int sound();//this predefines the function named sound that is written after the function main

int main() //the function named main
{
	char again; //creats the variable again which is used to hold the value of the user's input when answering the question if they want to continue

	//do tells the program to do everything following it up untill a while statement
	do {
		srand(static_cast<unsigned int>(time(NULL))); //seed random number generator
		int randomNumber = rand(); //generate random number
		int pnum = (randomNumber % 10) + 1; //gets a number between 1 and 10 and assigns it to the variable pnum for professor number
		int roomNum = (randomNumber % 20) + 1; // gets a number between 1 and 20 and assigns it to the variable room for the room number
		int choice;//creats a numeric variable to represent the number chosen by the user
		string fName;//creats a string variable to represent the user's name


		cout << "Your professor number is: " << pnum << endl;
		cout << "Your room number is: " << roomNum << endl;
		Sleep(2000);
		cout << "What is your first name? \n"; // prints out the question What is your name?
		cin >> fName; // receives the input from the user and assigns it to the variable names fName.
		Sleep(2000);// makes the program wait 2 seconds before continuing with the next command
		cout << "\nWelcome to UAT " << fName << "!!!" << endl; // Prints message to Welcome to UAT, user's name, !!!
		cout << "\n" << fName << " you will be meeting with one of 10 UAT Professors. \n" << endl; // prints user's name and tells them that they will be meeting with one of the 10 UAT Professors
		system("pause\n");// gives the command to press any key to continue and pauses the program until the user pushes a key
		cout << "The names of the professors are: \n" << endl; // Prints out the phrase The names of the professors are: and then goes to the next line

		// the next line creats an array  named Professor with 10 elements in it that are names of 10 of the professors here at UAT
		string Professor[10] = { "Craig Belanger", "Dr. David Brokaw","Dr. Brendly Clark Singleton","Rawad Habib","Matthew Marquit","Jake Perrine","Heather Peters","Dr. Daniel Pike","Matthew Prater","Dr. Mark Smith" };
		// The next line creats an array named room with 20 elements in it that are the names of 20 rooms at UAT. Some are made up.  
		string room[20] = { "Math Room", "Science Room", "English Room", "Art Room", "Cyber Security Room", "Maker Lab Room", "Engineering Lab Room", "Robotics Lab Room", "Electronics Lab Room", "Programming Room", "Caffeteria Room", "IT Department Room", "Digital Video Room", "Physics Lab Room", "Space Mission Control Room", "Perimeter 83 Room", "History Room", "Biology Lab Room", "Chemistry Lab Room", "Basket Weaving Room" };
		//this creats a for loop that will assign the value of 0 to the variable i and this loop will continue as long as the value of i is less than 10 at the end of each loop it adds 1 to i
		for (int i = 0; i < 10; i++) {
			cout << i + 1 << " " << Professor[i] << ", \n"; //displays each value of i+1 so that the numbers start a 1 instead of 0. and displays the professors name with the corresponding name
		}
		cout << "\n\n";

		for (int j = 0; j < 20; j++) {
			cout << j + 1 << " " << room[j] << ", \n"; //displays each value of j+1 so that the numbers start at 1 instead of 0. and displays the room name.
		}

		system("pause\n");// gives the command to press any key to continue and pauses the program until the user pushes a key
		//Displays what is given in quotations and calls for an input
		cout << "\nIf you will notice there are numbers in front of each professor's name. Please enter a number\n from 1 through 10 to guess who you will be meeting.\n";
		cin >> choice;//recievs the input from the user when answering the question above

		//Creats a conditional statement that compares the choice -1 and the randomly generated number 
		if (choice-- == pnum) {
			cout << "You guessed correctly\n" << "\nThe professor you will be meeting is " << Professor[pnum] << endl; // creats a response to the users input if it matches with the random number
			sound(); // calls the function names sound into action


		}
		// this creats a responce to the user's input if it does not match the random number genereated
		else {
			cout << "\nSorry you guessed incorrectly\n"; // Politely tells the user that they guessed wrong
			cout << "\nWould you like to try again?\n Please enter y or n \n"; // asks for input that determins if the user wants to continue
			cin >> again; // assigns the variable again the value of the user's input

			//Creats a condition in which if the variable "again" has the value of 'n' then it displays the message bellow
			if (again == 'n') {
				cout << "\nHave a Nice Day! " << fName << endl;

			}
		}




	} while (again == 'y');//This while statement closes the do while loop

	return 0; //end the main function
}

//creats the function called "sound"
int sound() {
	Sleep(1000); // waits one second before continuing 
	cout << "\nYour professor is late and you hear a sound.\n" << endl; // prints the message that tells that the professor is late and that you are about to hear a sound
	Sleep(1000);
	Beep(500, 1000);//creats the ton that the user hears
	Sleep(2000);
	cout << "This sound means that class is done for the day and you can go home.\n" << endl; // This message explains what the sound means
	Sleep(1000);
	cout << "HAVE A NICE DAY!" << endl; // politely says goodby by saying "HAVE A NICE DAY"  
	Sleep(2000);

	exit(0); // ends this function
}

