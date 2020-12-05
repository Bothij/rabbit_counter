#include <iostream>

int main() {
  int rabbit_population = 30;
  int month_counter = 1;

  for (; month_counter <= 6; month_counter++) {
        rabbit_population = rabbit_population * 2;std::cout << "A Skylark-völgy nyulainak száma " << rabbit_population << " a(z) " << month_counter << ". hónap végén." << std::endl;
        
    }
    for (; month_counter <= 12; month_counter++) {
        rabbit_population = rabbit_population * 3;std::cout << "A Skylark-völgy nyulainak száma " << rabbit_population << " a(z) " << month_counter << ". hónap végén." << std::endl;
        
    }
}

