#include "portaviones.h"

using namespace std;

PortaAviones::PortaAviones(){name="Fortrex";}
PortaAviones::~PortaAviones(){}
void PortaAviones::setName(string _name){name=_name;}
string PortaAviones::getName(){return name;}
