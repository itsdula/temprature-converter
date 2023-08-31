#include <iostream>
#include <string>
using namespace std;

bool isDigit(string input)
{
  for (int i = 0; i < input.length(); i++)
  {
    int t = input.at(i) - 48;
    if (t < 0 || t > 9)
      return false;
  }
  return true;
}

int main(int argc, char *argv[])
{

  if (argc == 1)
    return argc;
  string input(argv[1]);
  if (!isDigit(input))
    return -1;

  int c = stoi(input, nullptr);
  float f = 32 + (c * 9.0 / 5);

  cout << f << " f\n";

  return 0;
}