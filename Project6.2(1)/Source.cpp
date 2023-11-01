#include <iostream>
#include <vector>
#include <climits>

// Функція findIndex призначена для рекурсивного пошуку індексу найменшого непарного елемента в векторі 'a'.
int findIndex(const std::vector<int>& a, int currentIndex, int min, int minIndex) {
    if (currentIndex == a.size()) {
        return minIndex; // Якщо досягнуто кінець вектора, повертаємо індекс мінімального непарного елемента.
    }

    if (a[currentIndex] % 2 != 0 && a[currentIndex] < min) {
        min = a[currentIndex];  // Якщо поточний елемент непарний і менший за поточний мінімум, оновлюємо мінімум та індекс.
        minIndex = currentIndex;
    }

    return findIndex(a, currentIndex + 1, min, minIndex); // Рекурсивний виклик для перевірки наступного елемента.
}

// Головна функція для пошуку індексу найменшого непарного елемента в векторі 'a'.
int findIndex(const std::vector<int>& a) {
    return findIndex(a, 0, INT_MAX, -1); // Початковий виклик функції з ініціалізацією початкового мінімуму та індексу.
}

// Функція для заповнення вектора 'vectorA' значеннями користувача.
void fillVector(std::vector<int>& vectorA, int currentIndex) {
    if (currentIndex < vectorA.size()) {
        std::cout << " Vvedit a[" << currentIndex << "]: ";
        std::cin >> vectorA[currentIndex];
        fillVector(vectorA, currentIndex + 1); // Рекурсивний виклик для заповнення наступного елемента.
    }
}

// Функція для виведення вмісту вектора 'vectorA'.
void printVector(const std::vector<int>& vectorA, int currentIndex) {
    if (currentIndex < vectorA.size()) {
        std::cout << vectorA[currentIndex] << " ";
        printVector(vectorA, currentIndex + 1); // Рекурсивний виклик для виведення наступного елемента.
    }
}

int main() {
    int n;
    std::cout << " Rozmir vectora: ";
    std::cin >> n;

    std::vector<int> vectorA(n);

    fillVector(vectorA, 0); // Заповнюємо вектор 'vectorA' значеннями користувача.

    std::cout << " Vector a: ";
    printVector(vectorA, 0); // Виводимо вміст вектора 'vectorA'.

    std::cout << std::endl;

    int minIndex = findIndex(vectorA);

    if (minIndex != -1) {
        std::cout << " Index naimenshogo neparnogo elementa: " << minIndex << std::endl;
    }
    else {
        std::cout << " Nemae naimenshogo neparnogo elementa." << std::endl;
    }

    return 0;
}
