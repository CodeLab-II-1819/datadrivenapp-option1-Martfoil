#include <iostream>
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
		//if the users input is not equal to 1 or 2, the user is asked to try again.
		//this section of code will continue to run until the user finally inputs 1 or 2.
		cout << "Invalid input. Try again." << endl;
		cin >> select;
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
	cout << "option 1 selected" << endl;
}
void option2() {
	cout << "option 2 selected" << endl;
}
void option3() {
	cout << "option 3 selected" << endl;
}
void option4() {
	cout << "option 4 selected" << endl;
}
void option5() {
	cout << "option 5 selected" << endl;
}
void option6() {
	cout << "option 6 selected" << endl;
}
void option7() {
	cout << "option 7 selected" << endl;
}
void option8() {
	cout << "option 8 selected" << endl;
}
void option9() {
	cout << "option 9 selected" << endl;
}
void option0() {
	cout << "option 0 selected" << endl;
}


