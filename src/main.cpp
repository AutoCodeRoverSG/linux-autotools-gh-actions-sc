#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
  if (int num = argc - 1; num == 0) {
    cout << "No arguments provided\n";
  } else if (num == 1) {
    cout << "1 argument provided\n";
  } else if (num == 2) {
    cout << "2 arguments provided\n";
  } else {
    cout << num << " arguments provided\n";
  }
  if (argv != nullptr) {
    cout << "argv not null\n";
  }
  if (argv == nullptr) {
    return 1;
  }

  return 0;
}

