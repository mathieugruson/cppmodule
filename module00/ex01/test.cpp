#include <iostream>
#include <iomanip>
#include <string>

struct Contact {
  int index;
  std::string first_name;
  std::string last_name;
  std::string nickname;
};

void display_contact(const Contact &contact, int column_width) {
  std::cout << std::right << std::setw(column_width) << contact.index << " |"
            << std::right << std::setw(column_width) << (contact.first_name.length() <= column_width - 1
                                 ? contact.first_name
                                 : contact.first_name.substr(0, column_width - 2) + ".")
            << " |"
            << std::right << std::setw(column_width) << (contact.last_name.length() <= column_width - 1
                                 ? contact.last_name
                                 : contact.last_name.substr(0, column_width - 2) + ".")
            << " |"
            << std::right << std::setw(column_width) << (contact.nickname.length() <= column_width - 1
                                 ? contact.nickname
                                 : contact.nickname.substr(0, column_width - 2) + ".")
            << " |\n";
}

int main() {
  int column_width = 10;
  Contact contacts[] = {
      {1, "John", "Doe", "jdoe"},
      {2, "Jane", "Doe", "jane"},
      {3, "Jim", "Smith", "jimmy"},
  };
  for (const auto &contact : contacts) {
    display_contact(contact, column_width);
  }
  return 0;
}
