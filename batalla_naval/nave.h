#ifndef _NAVE_H_
#define _NAVE_H_

#include <string>

#include "ship.h"

using namespace std;

class Nave : public Ship {
	private:
		string name;
	public :
		Nave();
		~Nave();
		void setName(string _name);
		string getName();
};

#endif
