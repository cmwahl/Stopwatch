#include "Stopwatch.h"


int main(int argc, char* argv[]) {
	Stopwatch myClock;

	myClock.tick();
	int N = 999999;
	int* noob = new int[N];
	for (int n = 0; n < N; ++n) {
		noob[n] = n;
	}

	for (int n = 0; n < N; ++n) {
		noob[n] *= 3;
	}

	delete[] noob;
	myClock.tock();

	std::cout << "Runtime [us]: " << myClock.getRunTime() << std::endl;

	return 0;
}