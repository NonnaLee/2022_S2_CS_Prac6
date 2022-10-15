#include "S.h"

int S::stackCounter = 0;

int S::PushGlobalStack() {
	S::stackCounter++;
	return S::globalStackAddress + S::stackCounter;
}
int S::PopGlobalStack() {
	auto m = S::globalStackAddress + S::stackCounter;
	S::stackCounter--;
	return m;
}
