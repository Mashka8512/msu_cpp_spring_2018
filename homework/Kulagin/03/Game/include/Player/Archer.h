#pragma once

#include "Player.h"

class Archer : protected Player {

public:
	// BEGIN---------------------------------------------- CONSTRUCTOR ------------------------------------------------
	Archer(string_t name = ""): Player("archer", name, 1, 1, "pierce") {}
	// END------------------------------------------------ CONSTRUCTOR ------------------------------------------------

	// BEGIN---------------------------------------------- SETTERS ----------------------------------------------------
	// END------------------------------------------------ SETTERS ----------------------------------------------------

	// BEGIN---------------------------------------------- GETTERS ----------------------------------------------------
	// END------------------------------------------------ GETTERS ----------------------------------------------------

	// BEGIN---------------------------------------------- METHODS ----------------------------------------------------
	// END------------------------------------------------ METHODS ----------------------------------------------------

	// BEGIN---------------------------------------------- DESTRUCTOR -------------------------------------------------
	~Archer() {}
	// END------------------------------------------------ DESTRUCTOR -------------------------------------------------

private:
};