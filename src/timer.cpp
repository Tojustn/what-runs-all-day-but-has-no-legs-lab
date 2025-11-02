#include "timer.hpp"
#include <ctime>

Timer::Timer() 
    : is_running(false), elapsed_seconds(0) {
}

void Timer::start() {
    start_time = time(NULL);
    is_running = true;
}

void Timer::stop() {
    if (is_running) {
        stop_time = time(NULL);
        elapsed_seconds = static_cast<int>(difftime(stop_time, start_time));
        is_running = false;
    }
}

int Timer::elapsed() const {
    return elapsed_seconds;
}

void Timer::get_the_system_time() {
    system_time_before = time(NULL);
}

void Timer::wait_for_a_few_seconds() {
    time_t start_wait = time(NULL);
    time_t current;
    do {
        current = time(NULL);
    } while (difftime(current, start_wait) < 3.0);
    system_time_after = time(NULL);
}

int Timer::compare_the_times() const {
    return static_cast<int>(difftime(system_time_after, system_time_before));
}
