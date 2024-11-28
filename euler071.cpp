#include <vector>
#include <cmath>
#include <iostream>

#define LIMIT 1000000

int
gcd(int p, int q);

int
gcd(int p, int q)
{
  return p % q == 0 ? q : gcd(q, p % q);
}

int
main()
{
  double max_fraction = 0.0;
  double max_n = -1.0;
  for (double d = 2.0; d < LIMIT; d++) {
    for (double n = ceil(3.0 / 7.0 * d) - 1; n > 0; n--)
    {
      if (gcd(d, n) != 1)
        continue;
      if (n / d > max_fraction)
      {
        max_fraction = n / d;
        max_n = n;
        std::cout << n << " " << d << std::endl;
      }
      break;
    }
  }
  std::cout << max_n << " " << max_fraction << std::endl;
}
