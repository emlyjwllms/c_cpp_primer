#include <algorithm> // include STL algorithm
#include <iostream>
#include <string>
#include <vector> // include STL vector

void print(const std::string &x) { std::cout << x << " "; }
void show(std::vector<std::string> &v)
{
  for_each(v.begin(), v.end(), print);
  std::cout << std::endl;
}

int main(void)
{
  std::vector<std::string> v(5,"A");
  show(v);

  v[3] = "B";
  show(v);

  std::vector<std::string>::iterator found = find(v.begin(), v.end(), "B");

  if (found != v.end()) {
    v.insert(found, "C");
  } else {
    std::cout << "Did not find string B" << std::endl;
  }
  show(v);

  return 0;
}
