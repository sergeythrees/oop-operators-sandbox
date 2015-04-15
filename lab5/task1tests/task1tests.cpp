// task1tests.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../task1/Rational.h"

struct RationalFixture
{
	CRational defaultRational;
};


/*
  Рациональное число:
	равно нулю по умолчанию (0/1)
	может быть созданно из целого в формате (n / 1)
	может быть задано с указанием числителя и знаменателя
	хранится в нормализованном виде
	*/

BOOST_FIXTURE_TEST_SUITE(Rational, RationalFixture)

BOOST_AUTO_TEST_CASE(IsEqualToZeroByDeafault)
{
	BOOST_CHECK_EQUAL(defaultRational.GetNumerator(), 0);
	BOOST_CHECK_EQUAL(defaultRational.GetDenominator(), 1);
}

BOOST_AUTO_TEST_CASE(CanBeConstructedFromInteger)
{
	{
		CRational positive(10);
		BOOST_CHECK_EQUAL(positive.GetNumerator(), 10);
		BOOST_CHECK_EQUAL(positive.GetDenominator(), 1);
	}

	{
		CRational negative(-10);
		BOOST_CHECK_EQUAL(negative.GetNumerator(), -10);
		BOOST_CHECK_EQUAL(negative.GetDenominator(), 1);
	}

	{
		CRational zero(0);
		BOOST_CHECK_EQUAL(zero.GetNumerator(), 0);
		BOOST_CHECK_EQUAL(zero.GetDenominator(), 1);
	}
}

BOOST_AUTO_TEST_CASE(CanBeDefinedByNumeratorAndDenominator)
{
	{
		CRational rational(5, 2);
		BOOST_CHECK_EQUAL(rational.GetNumerator(), 5);
		BOOST_CHECK_EQUAL(rational.GetDenominator(), 2);
	}
	{
		CRational rational(-5, 2);
		BOOST_CHECK_EQUAL(rational.GetNumerator(), -5);
		BOOST_CHECK_EQUAL(rational.GetDenominator(), 2);
	}
	{
		CRational rational(5, -2);
		BOOST_CHECK_EQUAL(rational.GetNumerator(), -5);
		BOOST_CHECK_EQUAL(rational.GetDenominator(), 2);
	}
	{
		CRational rational(-5, -2);
		BOOST_CHECK_EQUAL(rational.GetNumerator(), 5);
		BOOST_CHECK_EQUAL(rational.GetDenominator(), 2);
	}
}

BOOST_AUTO_TEST_SUITE_END()

BOOST_AUTO_TEST_CASE(TestGCD)
{
	BOOST_CHECK_EQUAL(GCD(2, 3), 1u);
	BOOST_CHECK_EQUAL(GCD(3, 2), 1u);
	BOOST_CHECK_EQUAL(GCD(12, 8), 4u);
	BOOST_CHECK_EQUAL(GCD(8, 12), 4u);
	BOOST_CHECK_EQUAL(GCD(0, 2), 2u);
	BOOST_CHECK_EQUAL(GCD(2, 0), 2u);
	BOOST_CHECK_EQUAL(GCD(0, 0), 1u);
}
