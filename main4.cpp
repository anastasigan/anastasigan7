#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");
    double a, b, c;

    // Введення координат точок A, B і C
    std::cout << "Введіть координату точки A: ";
    std::cin >> a;

    std::cout << "Введіть координату точки B: ";
    std::cin >> b;

    std::cout << "Введіть координату точки C: ";
    std::cin >> c;

    // Знаходимо довжини відрізків AC і BC
    double lengthAC = std::abs(c - a);
    double lengthBC = std::abs(c - b);

    // Знаходимо суму довжин відрізків
    double sumLength = lengthAC + lengthBC;

    // Виводимо результат
    std::cout << "Довжина відрізка AC: " << lengthAC << std::endl;
    std::cout << "Довжина відрізка BC: " << lengthBC << std::endl;
    std::cout << "Сума довжин відрізків AC і BC: " << sumLength << std::endl;






        const double pi = 3.14;
        double alpha_degrees, alpha_radians;

        // Зчитуємо значення кута в градусах
        cout << "Введіть значення кута в градусах (0 ≤ α < 360): ";
        cin >> alpha_degrees;

        // Обчислюємо кут в радіанах
        alpha_radians = (alpha_degrees * pi) / 180;

        // Виводимо результат
        cout << "Значення кута в радіанах: " << alpha_radians << endl;

        return 0;
    }