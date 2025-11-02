#include <iostream>
#include <cmath>
#include "src/timer.hpp"
using namespace std;

int main() {
  Timer timer;
  timer.get_the_system_time();
  timer.start();
  timer.wait_for_a_few_seconds();
  timer.stop();

  int timer_elapsed = timer.elapsed();
  int system_elapsed = timer.compare_the_times();

  cout << "Timer elapsed time: " << timer_elapsed << " seconds" << endl;
  cout << "System elapsed time: " << system_elapsed << " seconds" << endl;

  if (timer_elapsed == system_elapsed) {
    cout << "Success! Times match." << endl;
  } else {
    cout << "Times differ by " << abs(timer_elapsed - system_elapsed) << " second(s)." << endl;
  }

  return 0;
}