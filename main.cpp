#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
  string buffer;
  cout << "Input expression:" << endl;
  cin >> buffer;
  stringstream buffer_stream(buffer);
  double number_1;
  double number_2;
  char operation;
  double result = 0;
  buffer_stream >> number_1 >> operation >> number_2;

  if (operation == '+') {
    result = number_1 + number_2;
  } else if (operation == '-') {
    result = number_1 - number_2;
  } else if (operation == '*') {
    result = number_1 * number_2;
  } else if (operation == '/') {
    result = number_1 / number_2;
  } else
    cout << "Error!";

  cout << result;
}
