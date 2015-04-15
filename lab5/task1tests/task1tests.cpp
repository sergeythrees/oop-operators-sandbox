// task1tests.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../task1/Rational.h"

struct RationalFixture
{
	CRational defaultRational;
};


/*
  –ациональное число:
	равно нулю по умолчанию (0/1)
*/

BOOST_FIXTURE_TEST_SUITE(Rational, RationalFixture)

BOOST_AUTO_TEST_CASE(IsEqualToZeroByDeafault)
{
	BOOST_CHECK_EQUAL(defaultRational.GetNumerator(), 0);
	BOOST_CHECK_EQUAL(defaultRational.GetDenominator(), 1);
}

BOOST_AUTO_TEST_SUITE_END()
