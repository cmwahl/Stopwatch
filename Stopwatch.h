// Stopwatch.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>
#include <chrono>

class Stopwatch {
public:
	Stopwatch();
	void tick();
	void tock();
	double getRunTime();

private:
	std::chrono::steady_clock::time_point start;
	std::chrono::steady_clock::time_point end;
};


