#include "Programmer.hpp"
#include "TeamLeader.hpp"

Programmer::~Programmer() {
	if (getTeamLeader()) {
		getTeamLeader()->removeEngineer(this);
	}
}