#include <iostream>
#include <cmath>

int main() {
  double x;
  double y;
  double size;
  size = 10;
  char letter;
  std::cin >> letter;
  for (x = 0;x < size; x++) {
    for (y = 0;y <= 4 * size; y++) {
      double dist1 = sqrt(pow(x - size, 2) + pow(y - size, 2));
      double dist2 = sqrt(pow(x - size, 2) + pow(y - 3 * size, 2));
      if (dist1 < size + 0.5 || dist2 < size + 0.5 )
      std::cout << letter;
      else
      std::cout << " ";
    }
    std::cout << std::endl;
  }
  for ( x = 1; x < 2 * size; x++) {
    for(y = 0; y < x; y++)
    std::cout << " ";
    for (y = 0; y < 4 * size + 1 - 2 * x; y++)
    std::cout << letter;
    std::cout << std::endl;
  }
}
