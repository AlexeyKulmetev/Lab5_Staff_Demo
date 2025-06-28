#include "Engineer.hpp"
#include "TeamLeader.hpp"

Engineer::~Engineer() {
	if (teamLeaderPointer) {
		teamLeaderPointer->removeEngineer(this);
	}
}