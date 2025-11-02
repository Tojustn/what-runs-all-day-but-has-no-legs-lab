#pragma once
#include <ctime>

class Timer {
public:
    Timer();

    void start();
    void stop();
    int elapsed() const;

    void get_the_system_time();
    void wait_for_a_few_seconds();
    int compare_the_times() const;

private:
    time_t start_time;
    time_t stop_time;
    time_t system_time_before;
    mutable time_t system_time_after;
    bool is_running;
    int elapsed_seconds;
};

