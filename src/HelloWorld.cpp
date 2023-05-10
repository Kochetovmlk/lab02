#include <iostream>
#include <string>

int
main()
{
  // Запросить имя пользователя
  std::string name;
  std::cout << "Введите имя пользователя: ";
  std::cin >> name;

  // Вывести приветствие
  std::cout << "Hello world from @" << name << std::endl;

  return 0;
}
