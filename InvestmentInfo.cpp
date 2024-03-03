#include <iostream>
#include "InvestmentInfo.h"

using namespace std;

void InvestmentInformation::setInvestmentAmount(double t_investmentAmount) { // Sets the initial investment
	this->m_investmentAmount = t_investmentAmount;
}
void InvestmentInformation::setMonthlyDeposit(double t_monthlyDeposit) { // Sets the monthly deposit
	this->m_monthlyDeposit = t_monthlyDeposit;
}
void InvestmentInformation::setAnnualInterest(double t_annualInterest) { // Sets the Annual Interest
	this->m_annualInterest = t_annualInterest;
	}
void InvestmentInformation::setNumYears(int t_numYears) { // Sets the number of years
	this->m_numYears = t_numYears;
}





// Accessors 
double InvestmentInformation::getInvestmentAmount() { // Get the initial investment amount
	return m_investmentAmount;
}
double InvestmentInformation::getMonthlyDeposit() { // Get the monthly deposit amount
	return m_monthlyDeposit;
}
double InvestmentInformation::getAnnualInterest() { // Get the annual interest
	return m_annualInterest;
}
int InvestmentInformation::getNumYears() { // Get the number of years
	return m_numYears;
}


