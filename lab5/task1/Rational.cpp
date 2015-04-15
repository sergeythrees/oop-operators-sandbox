#include "stdafx.h"
#include "Rational.h"


CRational::CRational(int numerator)
	: m_numerator(numerator)
{
}

int CRational::GetNumerator() const
{
	return m_numerator;;
}

int CRational::GetDenominator() const
{
	return 1;
}

