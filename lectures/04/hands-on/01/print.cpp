#include <fstream>
#include <iostream>
#include <string>
using namespace std;

void print(ostream &stream, const string message)
{
  stream << message << endl;
}

int main(void)
{
  ofstream my_file("output.txt");
  print(my_file, "This message is streamed into my file");
  print(cout, "This message is streamed to stdout");
  print(cerr, "This message is streamed to stderr");
  return 0;
}
