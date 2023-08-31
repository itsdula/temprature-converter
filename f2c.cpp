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

  int f = stoi(input, nullptr);
  float c = (f - 32.0) * 5 / 9;

  cout << c << " c\n";

  return 0;
}
