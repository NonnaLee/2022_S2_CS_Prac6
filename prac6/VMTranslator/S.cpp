#include "S.h"

int S::stackCounter = 0;

int S::PushGlobalStack() {
	auto m = S::globalStackAddress + S::stackCounter;
	S::stackCounter++;
	return m;
}
int S::PopGlobalStack() {
	auto m = S::globalStackAddress + S::stackCounter;
	S::stackCounter--;
	return m;
}
