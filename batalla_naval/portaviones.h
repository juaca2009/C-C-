#ifndef _PORTA_AVIONES_H_
#define _PORTA_AVIONES_H_

#include <string>

#include "ship.h"

using namespace std;

class PortaAviones : public Ship{
	private:
		string name;
	public:
		PortaAviones();
		~PortaAviones();
		void setName(string _name);
		string getName();
};

#endif
