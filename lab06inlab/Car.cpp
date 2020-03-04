/* -------------------------------------------
Name: Junyong Liu
Student number: 120108196
Email: jliu396@myseneca.ca
Section: NDD
Date: 03/03/2020
----------------------------------------------
Assignment: Workshop 06 - inlab
----------------------------------------------*/

#include <algorithm>
#include <iomanip>
#include "Car.h"

namespace sdds {

	Car::Car() :m_maker{}, m_condition{ Condition::Empty }, m_topSpeed{ 0.0 }{}

	Car::Car(istream& file) {

		Car::Car();

		size_t pos;
		size_t end_pos;
		string temp;
		bool go = false;

		getline(file, temp, ',');
		//remove space
		pos = temp.find_first_not_of(' ');
		end_pos = temp.find_last_not_of(' ');
		temp = temp.substr(pos, end_pos - pos + 1);

		if (temp.at(0) == 'c' || temp.at(0) == 'C') {
			go = true;
		}

		if (go) {

			getline(file, temp, ',');
			pos = temp.find_first_not_of(' ');
			end_pos = temp.find_last_not_of(' ');
			m_maker = temp.substr(pos, end_pos - pos + 1);

			getline(file, temp, ',');
			pos = temp.find_first_not_of(' ');
			end_pos = temp.find_last_not_of(' ');
			temp = temp.substr(pos, end_pos - pos + 1);

			if (temp.at(0) == 'n') m_condition = Condition::New;
			else if (temp.at(0) == 'u') m_condition = Condition::Used;
			else if (temp.at(0) == 'b') m_condition = Condition::Broken;
			else m_condition = Condition::Empty;

			getline(file, temp);
			m_topSpeed = stod(temp);
		}
	}

	string Car::condition() const {
		
		string temp;

		if (m_condition == Condition::New) {
			temp = "new";
		}
		else if (m_condition == Condition::Used) {
			temp = "used";
		}
		else if (m_condition == Condition::Broken) {
			temp = "broken";
		}
		else temp = "empty";

		return temp;
	}

	double Car::topSpeed() const {
		return m_topSpeed;
	}

	void Car::display(std::ostream& out) const {

		out << "| ";
		out << std::right << std::setw(10) << m_maker;
		out << " | ";
		out << std::left << std::setw(6) << condition();
		out << " | ";
		out << std::setw(6) << std::setprecision(2) << std::fixed << m_topSpeed;
		out << " |";

	}


}

