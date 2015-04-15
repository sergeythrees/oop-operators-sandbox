#pragma once
class CRational final
{
public:
	CRational(int numerator = 0, int denominator = 1);

	int GetNumerator() const;
	int GetDenominator() const;
private:
	int m_numerator;
	int m_denominator;
};

unsigned GCD(unsigned a, unsigned b);
