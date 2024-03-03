#pragma once
#ifndef AIRGEAD_INVESTMENT_H
#define AIRGEAD_INVESTMENT_H


class InvestmentInformation {
public:
	// Investment info setters
	void setInvestmentAmount(double t_investmentAmount);
	void setMonthlyDeposit(double t_monthlyDeposit);
	void setAnnualInterest(double t_annualInterest);
	void setNumYears(int t_numberOfYears);

	// Accessors
	double getInvestmentAmount();
	double getMonthlyDeposit();
	double getAnnualInterest();
	int getNumYears();

private:
	double m_investmentAmount = 0.0;
	double m_monthlyDeposit = 0.0;
	double m_annualInterest = 0.0;
	int m_numYears = 0;
	
};
#endif AIRGEAD_INVESTMENT_H