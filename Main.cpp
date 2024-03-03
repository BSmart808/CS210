#include <iostream>
#include <string>
#include <iomanip>
#include "InvestmentInfo.h"
#include "InvestmentMath.h"

using namespace std;

void bankGUI() {

	InvestmentInformation userInfo; // Creates an investment info object
	InvestmentMath investmentCalcs; // Creates an object to do the investment math
	// Variables for user input
	double investmentAmount;
	double monthlyDeposit;
	double annualInterest;
	int numYears;
	string keyPress; // Used later to exit while loop

	// While loop to get user investment info for object created
	while (true) { 
		cout << setfill('=') << setw(35) << '=' << endl;
		cout << "=======" << "      Data Input     " << "=======" << endl;
		
		cout << "Initial Investment Amount: $";
		cin >> investmentAmount;
		
		cout << "Monthly Deposit: $";
		cin >> monthlyDeposit;

		cout << "Annual Interest: %";
		cin >> annualInterest;

		cout << "Number of Years: ";
		cin >> numYears;
		cout << endl;

		userInfo.setInvestmentAmount(investmentAmount);
		userInfo.setMonthlyDeposit(monthlyDeposit);
		userInfo.setAnnualInterest(annualInterest);
		userInfo.setNumYears(numYears);

		cout << setfill('=') << setw(35) << '=' << endl;
		cout << "=======" << "      Data Input     " << "=======" << endl;
		cout << "Initial Investment Amount: $" << userInfo.getInvestmentAmount() << endl;
		cout << "Monthly Deposit: $" << userInfo.getMonthlyDeposit() << endl;
		cout << "Annual Interest : % " << userInfo.getAnnualInterest() << endl;
		cout << "Number of Years: " << userInfo.getNumYears() << endl;

		cout << "Enter 'q' to continue... ";
		cin >> keyPress;
		cout << endl;
		
		if (keyPress == "q" || keyPress == "Q") {
			break;
		}
	
	}
	cout << endl;
	
	// Calculates interest with or without deposits using the InvestmentMath class
	investmentCalcs.withoutDeposit(userInfo);
	cout << endl;
	investmentCalcs.withDeposit(userInfo);


	
	

}

int main() {
	bankGUI();
}