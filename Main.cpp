#define NOMINMAX
#include <iostream>    /* this is a standard libary that includes things such as cin cout wcin wcout etc here is a link to learn more about iostream. http://www.cplusplus.com/reference/iostream */
#include "windows.h" // http://www.cplusplus.com/reference/iostream/
#include <limits>
// we are not using namespace std; bc it poisons our namespace. 

int main() //this is where the program starts. this is the most important function... well kinda.
{
	int menuChoice;  //users choice.
	int wed = 1;    // weed choice.
	int buywed = 1;    // buy weed choice.
	int sellwed = 1;    // sell weed choice.
	int Bank = 3; //bank choice
	double userBankAmt = 20; //user money count
	int buyndsellwed; // buy meth choice
	int buyndsellmth; // sell meth choice
	int mth = 2;   // meth choice.
	int amountOfDrugs; // second user choice.
	double weedsum; // weed sum.
	double methsum; // meth sum.
	int methcount = 1;
	int weedcount = 1;
	int checkStash = 4;

	// resize window.

	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r); //stores console current location
	MoveWindow(console, r.left, r.top, 500, 600, TRUE); // resizes console


	 SetConsoleTitle(L"DrugMania"); //sets console title to what ever i want :p.    
	 start: // this is so we can use the "goto" command to jump back to the main menu.
	 std::cout << "Please Select An Action \n"; //shows pick your drug.
	 std::cout << "1) Weed Market \n"; // prints statement.
	 std::cout << "2) Meth Market \n"; // prints statement.
	 std::cout << "3) Check Bank \n"; // prints statement.
	 std::cout << "4) Check Stash \n"; // prints statement.
	 std::cout << "--> "; std::cin >> menuChoice; //asking user to pick an option 1 (weed) or 2 (meth). 

	 // drug storing 
	 if (menuChoice == checkStash) 
	 {
		 system("CLS"); // this clears the screen so that the "main menu" isnt also shown just cleans stuff up :p.
		 std::cout << "Welcome To The Stash House \n";
		 std::cout << "Your Weed Gram Count Is : " << weedcount << "\n";
		 std::cout << "Your Meth Gram Count Is : " << methcount;
		 if (weedcount < 0) 
		 {
			 system("CLS"); // this clears the screen so that the "main menu" isnt also shown just cleans stuff up :p.
			 std::cout << "GAME OVER YOU WENT BELOW 0 DRUG AMOUNT";
			 Sleep(3000);
			 exit(3);
			 return 3;
			 system("CLS"); // this clears the screen so that the "main menu" isnt also shown just cleans stuff up :p.
		 }
		 if (methcount < 0)
		 {
			 system("CLS"); // this clears the screen so that the "main menu" isnt also shown just cleans stuff up :p.
			 std::cout << "GAME OVER YOU WENT BELOW 0 DRUG AMOUNT";
			 Sleep(3000);
			 exit(3);
			 return 3;
			 system("CLS"); // this clears the screen so that the "main menu" isnt also shown just cleans stuff up :p.
		 }
		 Sleep(3000);
		 system("CLS"); // this clears the screen so that the "main menu" isnt also shown just cleans stuff up :p.
		 goto start;
	 
	 }

// WEED BELOW


	 if (menuChoice == wed) // an if statement to see if you picked weed or not.
	 {
		 system("CLS"); // this clears the screen so that the "main menu" isnt also shown just cleans stuff up :p.
		 std::cout << "Welcome To The Weed Hub! \n"; // prints statement.
		 std::cout << "Selling Price ~ $10.00 \n"; // prints statement.
		 std::cout << "Buying Price ~ $8.00 \n"; // prints statement.
		 std::cout << "1) Buy Weed \n"; // prints statement.
		 std::cout << "2) Sell Weed \n"; // prints statement.
		 std::cout << "--> "; std::cin >> buyndsellwed; // prints statement && ask for user input for weed shop choice.
		 if(buyndsellwed == 2) {
		 system("CLS"); // this clears the screen so that the "main menu" isnt also shown just cleans stuff up :p.
		 std::cout << "How Many Grams Would You Like To Sell?"; // prints statement.
		 std::cout << "--> " ; std::cin >> amountOfDrugs; // prints statement && ask for user input for weed amount
		 if (weedcount < amountOfDrugs) 
		 {
			 std::cout << "You Do Not Have That Much Dope Buddy Check Stash";
				 Sleep(3000);
				 system("CLS"); // this clears the screen so that the "main menu" isnt also shown just cleans stuff up :p.
				 goto start;
		 }
		 else {
			 weedsum = amountOfDrugs * 10; // so here we take the amount of grams the user wants and then multiply it by 10.
			 std::cout << "Okay We Owe You" << " $" << weedsum << ".00 \n"; // prints out the owed amount of money.
			 Sleep(3000);
			 userBankAmt += weedsum;
			 weedcount -= amountOfDrugs;
			 system("CLS"); // this clears the screen so that the "main menu" isnt also shown just cleans stuff up :p.
			 goto start;
		 } // we call the goto "start command to jump back to line "18". 
		 } 
		 if (buyndsellwed == 1) {
			 system("CLS"); // this clears the screen so that the "main menu" isnt also shown just cleans stuff up :p.
			 std::cout << "How Many Grams Would You Like To Buy?"; // prints statement.
			 std::cout << "--> "; std::cin >> amountOfDrugs; // prints statement && ask for user input for weed amount
			 weedsum = amountOfDrugs * 8; // so here we take the amount of grams the user wants and then multiply it by 10.
			 if (userBankAmt < weedsum) 
			 {
				 system("CLS"); // this clears the screen so that the "main menu" isnt also shown just cleans stuff up :p.
				 std::cout << "You Don't Have Enough Money, Go Check Your Bank.";
				 Sleep(4000);
				 system("CLS"); // this clears the screen so that the "main menu" isnt also shown just cleans stuff up :p.
				 goto start;
			 }
			 else {
				 weedsum = amountOfDrugs * 8; // so here we take the amount of grams the user wants and then multiply it by 10.
				 std::cout << "Okay You Owe Us" << " $" << weedsum << ".00 \n"; // prints out the owed amount of money.
				 Sleep(3000);
				 userBankAmt -= weedsum;
				 weedcount += amountOfDrugs;
				 system("CLS"); // this clears the screen so that the "main menu" isnt also shown just cleans stuff up :p.
				 goto start;
			 } // we call the goto "start command to jump back to line "18".
		 }
	 } 


	 // METH BELOW

	 if (menuChoice == mth) // an if statement to see if you picked weed or not.
	 {
		 system("CLS"); // this clears the screen so that the "main menu" isnt also shown just cleans stuff up :p.
		 std::cout << "Welcome To The Black Market \n"; // prints statement.
		 std::cout << "Selling Price ~ $45.00 \n"; // prints statement.
		 std::cout << "Selling Price ~ $39.00 \n"; // prints statement.
		 std::cout << "1) Buy Meth \n"; // prints statement.
		 std::cout << "2) Sell Meth \n"; // prints statement.
		 std::cout << "--> "; std::cin >> buyndsellmth; // prints statement && ask for user input for weed shop choice.
		 if (buyndsellmth == 2) {
			 system("CLS"); // this clears the screen so that the "main menu" isnt also shown just cleans stuff up :p.
			 std::cout << "How Many Grams Would You Like To Sell?"; // prints statement.
			 std::cout << "--> "; std::cin >> amountOfDrugs; // prints statement && ask for user input for weed amount
			 if (methcount < amountOfDrugs)
			 {
				 std::cout << "You Do Not Have That Much Dope Buddy Check Stash";
				 Sleep(3000);
				 system("CLS"); // this clears the screen so that the "main menu" isnt also shown just cleans stuff up :p.
				 goto start;
			 }
			 else {
				 methsum = amountOfDrugs * 45; // so here we take the amount of grams the user wants and then multiply it by 10.
				 std::cout << "Okay We Owe You" << " $" << methsum << ".00 \n"; // prints out the owed amount of money.
				 Sleep(3000);// waits 6 secs
				 userBankAmt += methsum;
				 methcount -= amountOfDrugs;
				 system("CLS"); // this clears the screen so that the "main menu" isnt also shown just cleans stuff up :p.
				 goto start;
			 }// we call the goto "start command to jump back to line "18".
		 }
		 if (buyndsellmth == 1) {
			 system("CLS"); // this clears the screen so that the "main menu" isnt also shown just cleans stuff up :p.
			 std::cout << "How Many Grams Would You Like To Buy?"; // prints statement.
			 std::cout << "--> "; std::cin >> amountOfDrugs; // prints statement && ask for user input for weed amount
			 methsum = amountOfDrugs * 39; // so here we take the amount of grams the user wants and then multiply it by 10.
			 if (userBankAmt < methsum) 
			 {
			 system("CLS"); // this clears the screen so that the "main menu" isnt also shown just cleans stuff up :p.
			 std::cout << "You Don't Have That Much Cash Go Check The Bank";
			 Sleep(3000);
			 goto start;
			 }
			 else {
				 std::cout << "Okay You Owe Us" << " $" << methsum << ".00 \n"; // prints out the owed amount of money.
				 Sleep(3000); //waits 6 seconds
				 userBankAmt -= methsum;
				 methcount += amountOfDrugs;
				 system("CLS"); // this clears the screen so that the "main menu" isnt also shown just cleans stuff up :p.
				 goto start;
			     } // we call the goto "start command to jump back to line "18".
		 }
	 }

	 // BANK BELOW

	 if (menuChoice == Bank)
	 {
		 system("CLS"); // this clears the screen so that the "main menu" isnt also shown just cleans stuff up :p.
		 std::cout << "You Have A Total Of : " << "$" << userBankAmt << ".00"; //displays users money.
		 Sleep(3000); //waits 6 secs. 
		 system("CLS"); // this clears the screen so that the "main menu" isnt also shown just cleans stuff up :p.
		 goto start; //jumps back to start of menu.
	 }
}