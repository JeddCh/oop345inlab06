/* -------------------------------------------
Name: Junyong Liu
Student number: 120108196
Email: jliu396@myseneca.ca
Section: NDD
Date: 03/03/2020
----------------------------------------------
Assignment: Workshop 06 - inlab
----------------------------------------------*/

#ifndef SDDS_AUTOSHOP_H
#define SDDS_AUTOSHOP_H
#include <vector>
#include "Car.h"


namespace sdds {

	class Autoshop {

		std::vector<Vehicle*> m_vehicles;
	
	public:

		Autoshop& operator +=(Vehicle* theVehicle);
		void display(std::ostream& out) const;
		~Autoshop();

	};

}


#endif