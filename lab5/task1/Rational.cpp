#include "stdafx.h"
#include "Rational.h"


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
	if (a == 0 && b == 0)
	{
		return 1;
	}

	while (b != 0)
	{
		unsigned oldB = b;
		b = a % b;
		a = oldB;
	}
	return a;
}
