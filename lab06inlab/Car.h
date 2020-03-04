/* -------------------------------------------
Name: Junyong Liu
Student number: 120108196
Email: jliu396@myseneca.ca
Section: NDD
Date: 03/03/2020
----------------------------------------------
Assignment: Workshop 06 - inlab
----------------------------------------------*/

#ifndef SDDS_CAR_H
#define SDDS_CAR_H

#include <string>
#include <istream>
#include "Vehicle.h"

using namespace std;

namespace sdds {

	enum class Condition : char { New , Used, Broken, Empty};

	class Car : public Vehicle {

		string m_maker;
		Condition m_condition;
		double m_topSpeed;

	public:

		Car();
		Car(istream&);
		string condition() const;
		double topSpeed() const;
		void display(std::ostream& out) const;

	};


}


#endif