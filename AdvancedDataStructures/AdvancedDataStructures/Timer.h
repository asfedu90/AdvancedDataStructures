#pragma once
#include <chrono>
using namespace std::chrono;

class Timer
{
public:
	Timer();
	~Timer();
	void StartTimer();
	double EndTimer();

private:
	high_resolution_clock::time_point  startTime;
	high_resolution_clock::time_point  endTime;

};
void Timer::StartTimer()
{
	startTime = high_resolution_clock::now();
}

double Timer::EndTimer()
{
	endTime = high_resolution_clock::now();
	duration<double> time_span = duration_cast<duration<double>>(endTime - startTime);
	return time_span.count();
}
Timer::Timer()
{
}

Timer::~Timer()
{
}
