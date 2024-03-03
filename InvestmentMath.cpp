#include <iostream>
#include <iomanip>
#include <string>
#include "InvestmentMath.h"

using namespace std;

void InvestmentMath::withoutDeposit(InvestmentInformation& t_investment) {
    double totalBalance = t_investment.getInvestmentAmount(); // Get the investment amount and set it to var totalBalance
    int numYears = t_investment.getNumYears(); // Get the number of years and set it to var numYears

    //Display code
    cout << " Balance and Interest Without Additional Monthly Deposits " << endl; 
    cout << setfill('=') << setw(58) << "=" << endl;
    cout << "  Year " << "      Year end balance    " << " Year End Earned Interest" << endl;
    cout << setfill('=') << setw(58) << "=" << endl;

    for (int i = 1; i <= numYears; i++) { // Loop through year
        double yearInterest = 0.0; // Set interest earned per year to 0
        for (int j = 0; j < 12; j++) { // Loop through months in year
            yearInterest += totalBalance * (t_investment.getAnnualInterest() / 100) / 12; // Calculate the interest earned for the month and add the total to the year
        }
        
        totalBalance += yearInterest; // Add the interest to the total balance

        // Display information
        cout << setfill(' ') << left << setw(18) << i;
        cout << "$" << fixed << setprecision(2) << totalBalance;
        cout << right << setw(18) << "$" << fixed << setprecision(2) << yearInterest << endl;
    }
    cout << endl;
}

void InvestmentMath::withDeposit(InvestmentInformation& t_investment) {
    double totalBalance = t_investment.getInvestmentAmount(); // Get the investment amount and set it to var totalBalance
    double monthlyDeposit = t_investment.getMonthlyDeposit(); // Get monthly deposit and set it var monthlyDeposit
    int numYears = t_investment.getNumYears(); // Get the number of years and set it to var numYears
    
    

    //Display Code
    cout << " Balance and Interest With Additional Monthly Deposits " << endl; //Display code
    cout << setfill('=') << setw(58) << "=" << endl;
    cout << "  Year " << "      Year end balance    " << " Year End Earned Interest" << endl;
    cout << setfill('=') << setw(58) << "=" << endl;

    
    for (int i = 1; i <= numYears; i++) { // Loop through year
        double yearInterest = 0.0;
        for (int j = 0; j < 12; j++) {
            totalBalance += monthlyDeposit;
            double monthlyInterest = (totalBalance) * ((t_investment.getAnnualInterest() / 100) / 12); // Calculate the interest earned for the month and add the total to the year
            totalBalance += monthlyInterest; // Add the interest to the total balance
            yearInterest += monthlyInterest;
        }

        // Display information
        cout << setfill(' ') << left << setw(18) << i;
        cout << "$" << fixed << setprecision(2) << setw(20) << totalBalance;
        cout << "$" << fixed << setprecision(2) << setw(20) << yearInterest << endl;
        
    }
    cout << endl;
    cout << monthlyDeposit;
}
