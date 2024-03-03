#pragma once
#ifndef AIRGEAD_MATH_H
#define AIRGEAD_MATH_H

#include "InvestmentInfo.h"

class InvestmentMath { // Class to calculate the users inputs
	public:
		void withoutDeposit(InvestmentInformation& t_investment);
		void withDeposit(InvestmentInformation& t_investment);

};
#endif