#include "stdafx.h"
#include "Rational.h"
#include <algorithm>


CRational::CRational(int numerator, int denominator)
	: m_numerator(numerator)
	, m_denominator(denominator)
{
	if (denominator < 0)
	{
		m_numerator = -m_numerator;
		m_denominator = -m_denominator;
	}
}

int CRational::GetNumerator() const
{
	return m_numerator;
}

int CRational::GetDenominator() const
{
	return m_denominator;
}

unsigned GCD(unsigned a, unsigned b)
{
	unsigned curA = a, curB = b;
	while (curA != 0 && curB != 0)
	{
		unsigned newA = curB % curA;
		unsigned newB = curA;
		curA = newA;
		curB = newB;
	}

	const unsigned maxVal = std::max(curA, curB);
	return (maxVal == 0) ? 1 : maxVal;
}
