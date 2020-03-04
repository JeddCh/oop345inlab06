/* -------------------------------------------
Name: Junyong Liu
Student number: 120108196
Email: jliu396@myseneca.ca
Section: NDD
Date: 03/03/2020
----------------------------------------------
Assignment: Workshop 06 - inlab
----------------------------------------------*/

#include "Autoshop.h"

namespace sdds {

	Autoshop& Autoshop::operator +=(Vehicle* theVehicle) {

		m_vehicles.push_back(theVehicle);
		return *this;

	}

	void Autoshop::display(std::ostream& out) const {

		out << "--------------------------------" << std::endl;
		out << "| Cars in the autoshop!        |" << std::endl;
		out << "--------------------------------" << std::endl;

		for (auto& car : m_vehicles) {
			car->display(out);
			out << std::endl;
		}
		out << "--------------------------------" << std::endl;

	}

}