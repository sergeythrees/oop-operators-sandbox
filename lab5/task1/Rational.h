#pragma once
class CRational final
{
public:
	CRational(int numerator = 0);

	int GetNumerator() const;
	int GetDenominator() const;
private:
	int m_numerator;
};

