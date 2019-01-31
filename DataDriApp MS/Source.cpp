#include <iostream>
#include<fstream>
#include <string>
#include <vector>
void menustart();
void option1();
void option2();
void option3();
void option4();
void option5();
void option6();
void option7();
void option8();
void option9();
void option0();

using namespace std;


int main() {
	cout << "Welcome to the Twitter Interrogation Program (TIP)!" << endl;
	cout << "The TIP allows you to interrogate tweets from the top 20 users from our 'sampleTweets' database." << endl;
	menustart();
}

void menustart() {
	cout << "Below are queries that you are able to use as well as the option number it is equal to:" << endl;
	cout << "Count the total number of tweets in the data set: key press '1'." << endl;
	cout << "Count the number of tweets that mention the word money : key press '2'." << endl;
	cout << "Count the number of tweets that mention politics : key press '3'." << endl;
	cout << "Print to the screen any tweets mentioning the word 'Paris' : key press '4'." << endl;
	cout << "Print to the screen any tweets mentioning the word 'DreamWorks' : key press '5'." << endl;
	cout << "Print to the screen any tweets mentioning the word 'Uber' : key press '6'." << endl;
	cout << "Plus a minimum of 4 queries of your own." << endl;
	cout << "Please press the corresponding number key to decide what you would like to do." << endl;

	int select;
	cin >> select;

	while ((select != 1) && (select != 2) && (select != 3) && (select != 4) && (select != 5) && (select != 6) && (select != 7) && (select != 8) && (select != 9) && (select != 0)) {
		//if the users input is not equal to the assigned options, the user is asked to try again.
		//this section of code will continue to run until the user finally inputs a valid option.
		cin.clear(); // clears the users input
		cin.ignore(); //ignores the input the user puts in
		cout << "Invalid input. Try again." << endl; //user is prompted to try again
		cin >> select; //the user then gets to input an option again
	}
	if (select == 1) {
		option1();
	}
	if (select == 2) {
	option2();
	}
	if (select == 3) {
	option3();
	}
	if (select == 4) {
	option4();
	}
	if (select == 5) {
	option5();
	}
	if (select == 6) {
	option6();
	}
	if (select == 7) {
	option7();
	}
	if (select == 8) {
	option8();
	}
	if (select == 9) {
	option9();
	}
	if (select == 0) {
	option0();
	}
}

void option1() {
	cout << "Option 1 selected." << endl;
	cout << "Now counting the total number of tweets in the data set." << endl;
	int total = 0; // total counter is set to 0
	string tweets; // string for holding tweets in data set
	ifstream infile;
	infile.open("sampleTweets.csv");
	while (getline(infile, tweets)) {
		++total; // adds onto total for every tweet counted
	}
	cout << "Number of tweets = " << total << endl; //number of tweets is outputted
	system("pause");
}
	
void option2() {
	cout << "Option 2 selected." << endl;
	cout << "Now counting the number of tweets that mention the topic money." << endl;
	int total = 0;
	string word;
	ifstream infile;
	infile.open("sampleTweets.csv");
	if (infile.good()) {
		while (!infile.eof()) {
			getline(infile, word);
			if (word.find("Money") != string::npos) {
				++total;
			}
		}
		cout << "Total of tweets mentioning Money: " << total << endl;
		system("pause");

	}
}
void option3() {
	cout << "Option 3 selected." << endl;
	cout << "Now counting the number of tweets that mention politics." << endl;
	int total = 0;
	string word;
	ifstream infile;
	infile.open("sampleTweets.csv");
	if (infile.good()) {
		while (!infile.eof()) {
			getline(infile, word);
			if (word.find("Politics") != string::npos) {
				++total;
			}
		}
		cout << "Total of tweets mentioning Politics: " << total << endl;
		system("pause");

	}

}
void option4() {
	cout << "Option 4 selected." << endl; // user is told that option 4 is selected
	cout << "Now printing tweets mentioning Paris." << endl; //user is notified that tweets with paris are being printed
	string word; //empty string variable used for finding specific words
	ifstream infile; // if stream in file informs the code to load in files
	infile.open("sampleTweets.csv"); //tells the code to open the csv file sampleTweets

	if (infile.good()) { //if statement runs when user 
		while (!infile.eof()) { //while loops runs until the in file has reached the end.
			getline(infile, word);
			if (word.find("Paris") != string::npos) { //if statement runs that checks whether Paris is found.
				cout << "Found Paris in tweet: " << word << endl; //paris tweet is outputted
				cout << "_______________________________________________________________________________________________________________________________________" << endl; //used as a divider to break line of code
			}
		}
	}

	system("Pause");
}
void option5() {
	cout << "Option 5 selected." << endl;
	cout << "Now printing tweets mentioning the word Dreamworks." << endl;
	string word;
	ifstream infile;
	infile.open("sampleTweets.csv");

	if (infile.good()) {
		while (!infile.eof()) {
			getline(infile, word);
			if (word.find("Dreamworks") != string::npos) {
				cout << "Found Dreamworks in tweet: " << word << endl;
				cout << "_______________________________________________________________________________________________________________________________________" << endl;
			}
		}
	}

	system("Pause");
}
void option6() {
	cout << "Option 6 selected." << endl;
	cout << "Now printing tweets mentioning the word Uber." << endl;
	string word;
	ifstream infile;
	infile.open("sampleTweets.csv");

	if (infile.good()) {
		while (!infile.eof()) {
			getline(infile, word);
			if (word.find("Uber") != string::npos) {
				cout << "Found Uber in tweet: " << word << endl;
				cout << "_______________________________________________________________________________________________________________________________________" << endl;
			}
		}
	}

	system("Pause");
}
void option7() {
	cout << "Option 7 selected" << endl;
}
void option8() {
	cout << "Option 8 selected" << endl;
}
void option9() {
	cout << "Option 9 selected" << endl;
}
void option0() {
	cout << "Option 0 selected" << endl;
}



