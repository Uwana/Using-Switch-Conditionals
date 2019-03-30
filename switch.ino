#include <iostream>

int main() {
  
  double weight, weight1;
  int planet;
  
  std::cout <<"Type your weight(kg): \n";
  std::cin >> weight;
  
  std::cout <<"Venus   : 1\n";
  std::cout <<"Mars    : 2\n";
  std::cout <<"Jupiter : 3\n";
  std::cout <<"Saturn  : 4\n";
  std::cout <<"Uranus  : 5\n";
  std::cout <<"Neptune : 6\n";
  
  std::cout <<"Choose a planet: \n";
  std::cin >> planet;
  
  switch (planet) {
    case 1:
      weight1 = weight * 0.78;
      std::cout <<"You chose Venus, your weight is " <<weight1 <<"kg\n";
      break;
    case 2:
      weight1 = weight * 0.39;
      std::cout <<"You chose Mars, your weight is " <<weight1 <<"kg\n";
      break;
    case 3:
      weight1 = weight * 2.65;
      std::cout <<"You chose Jupiter, your weight is " <<weight1 <<"kg\n";
      break;
    case 4:
      weight1 = weight * 1.17;
      std::cout <<"You chose Saturn, your weight is " <<weight1 <<"kg\n";
      break;
    case 5:
      weight1 = weight * 1.05;
      std::cout <<"You chose Uranus, your weight is " <<weight1 <<"kg\n";
      break;
    case 6:
      weight1 = weight * 1.23;
      std::cout <<"You chose Neptune, your weight is " <<weight1 <<"kg\n";
      break;
    default:
      std::cout <<"Please pick a valid planet\n";
      break;
  }  
}
