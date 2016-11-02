#include "header.h"

int Random() {
	return genPush + std::rand() % (genPop - genPush + 1);
}

int TopIsEmpty() {
	return genTop + std::rand() % (genIsEmpty - genTop + 1);
}