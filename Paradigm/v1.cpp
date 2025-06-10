//copilot generated code.
//Q: consider array of names and write a program to search a string starts with character s

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

void searchNamesStartingWithS(const std::vector<std::string>& names) {
    std::cout << "Names starting with 's':" << std::endl;
    for (const auto& name : names) {
        if (!name.empty() && (name[0] == 's' || name[0] == 'S')) {
            std::cout << name << std::endl;
        }
    }
}

int main() {
    std::vector<std::string> names = {"Sam", "John", "Sara", "Michael", "Steve", "Alice", "susan"};
    
    searchNamesStartingWithS(names);

    return 0;
}
