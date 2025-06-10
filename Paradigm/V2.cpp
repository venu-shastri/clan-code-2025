#include <stdio.h>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

// Search strategy: names starting with 's' or 'S'
bool searchNamesStartingWithS(const std::string& name) {
    return !name.empty() && (name[0] == 's' || name[0] == 'S');
}

// Generic search function using a strategy
std::vector<std::string> searchNames(
    const std::vector<std::string>& names,
    std::function<bool(const std::string&)> searchStrategy)
{
    std::vector<std::string> result;
    for (const auto& name : names) {
        if (searchStrategy(name)) {
            result.push_back(name);
        }
    }
    return result;
}

// Print the result
void printNames(const std::vector<std::string>& names) {
    for (const auto& name : names) {
        printf("%s\n", name.c_str());
    }
}

int main() {
    std::vector<std::string> names = {"Sam", "John", "Sara", "Michael", "Steve", "Alice", "susan"};

    char searchChar = 's';
    auto filteredNames = searchNames(names, searchNamesStartingWithS);

    printf("Names starting with '%c':\n", searchChar);
    printNames(filteredNames);

    return 0;
}
