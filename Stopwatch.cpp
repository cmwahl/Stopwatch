// Stopwatch.cpp : Defines the entry point for the application.
//

#include "Stopwatch.h"

Stopwatch::Stopwatch() {
	
}

void Stopwatch::tick() {
	start = std::chrono::high_resolution_clock::now();
}

void Stopwatch::tock() {
	end = std::chrono::high_resolution_clock::now();
}

double Stopwatch::getRunTime() {
	return std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
}