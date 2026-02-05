#include <iostream>

int main (int argc, char *argv[]) {
  
  int conversion;
  double temp;
  double C, F, K;

  std::cout << "\n*** WELCOME TO SIGMA TEMPARETURE CONVERTER ***\n";

  std::cout << "\nChoose one conversion below. (C -> Celcius) (F -> Farenheit) (K -> Kelvin)\n";
  std::cout << "1. C -> F\n";
  std::cout << "2. C -> K\n";
  std::cout << "3. F -> C\n";
  std::cout << "4. F -> K\n";
  std::cout << "5. K -> C\n";
  std::cout << "6. K -> F\n";
  //1 - 6 are single type conversion.
  std::cout << "7. C -> F and C -> K\n";
  std::cout << "8. F -> C and F -> K\n";
  std::cout << "9. K -> C and K -> F\n";
  //7 - 9 are double type type convertion.
 
  std::cout << "\nEnter one option from above (1 - 9) : ";
  std::cin >> conversion;

  if (conversion >= 1 && conversion <=9){

    switch (conversion) {

      case 1:
        std::cout << "Enter your tempareture in C: ";
        std::cin >> C;
        F = (C * 1.8)+ 32; // 9/5 is 1.8
        std::cout << "Your tempareture is " << F << "°F.\n";
        break;

      case 2:
        std::cout << "Enter your tempareture in C: ";
        std::cin >> C;
        K = C + 273.15;
        std::cout << "Your tempareture is " << K << "°K.\n";
        break;
    
      case 3:
        std::cout << "Enter your tempareture in F: ";
        std::cin >> F;
        C = (F - 32) * 5/9;
        std::cout << "Your tempareture is " << C << "°C.\n";
        break;

      case 4:
        std::cout << "Enter your tempareture in F: ";
        std::cin >> F;
        K = ((F - 32) * 5/9) +273.15;
        std::cout << "Your tempareture is " << K << "°K.\n";
        break;

      case 5:
        std::cout << "Enter your tempareture in K: ";
        std::cin >> K;
        C = K - 273.15;
        std::cout << "Your tempareture is " << C << "°C.\n";
        break;

      case 6:
        std::cout << "Enter your tempareture in K: ";
        std::cin >> K;
        F = (K - 273.15) * 9/5 +32;
        std::cout << "Your tempareture is " << F << "°F.\n";
        break;

      case 7:
        std::cout << "Enter your tempareture in C: ";
        std::cin >> C;
        F = (C * 1.8)+ 32; // 9/5 is 1.8
        K = C + 273.15;
        std::cout << "Your tempareture is " << F << "°F and " << K << "°K.\n";
        break;

      case 8:
        std::cout << "Enter your tempareture in F: ";
        std::cin >> F;
        C = (F - 32) * 5/9;
        K = C + 273.15;
        std::cout << "Your tempareture is " << C << "°C and " << K << "°K.\n";
        break;

      case 9:
        std::cout << "Enter your tempareture in K: ";
        std::cin >> K;
        C = K - 273.15;
        F = (K - 273.15) * 9/5 +32;
        std::cout << "Your tempareture is " << C << "°C and " << F << "°F.\n";
        break;

    }

  }
  else{
    std::cout << "\033[31m" << "\nInvalid input.\n" << std::endl;
  }

  std::cout << "\033[0m" << "\n**********************************************\n\n";

  return 0;
}
