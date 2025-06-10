#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
#include <cctype>

// Generic search function using a strategy - works with any type T
template<typename T>
std::vector<T> searchItems(
    const std::vector<T>& items,
    std::function<bool(const T&)> searchStrategy)
{
    std::vector<T> result;
    for (const auto& item : items) {
        if (searchStrategy(item)) {
            result.push_back(item);
        }
    }
    return result;
}

// Print the result for any printable type
template<typename T>
void printItems(const std::vector<T>& items) {
    for (const auto& item : items) {
        std::cout << item << std::endl;
    }
}

// Function returns a strategy to check if a string starts with a given character
std::function<bool(const std::string&)> checkStringStartsWithGivenChar(char startChar) {
    return [startChar](const std::string& name) {
        return !name.empty() && std::tolower(name[0]) == std::tolower(startChar);
    };
}

int main() {
    std::vector<std::string> names = {
        "Sam", "John", "Sara", "Michael", "Steve", "Alice", "susan", "Tom", "Travis"
    };

    // Example 1: Search names starting with 's'
    char startChar = 's';
    auto startsWithS = checkStringStartsWithGivenChar(startChar);
    auto filteredStart = searchItems(names, startsWithS);
    std::cout << "Names starting with '" << startChar << "':\n";
    printItems(filteredStart);

    // Example 2: Search names starting with 'M'
    auto startsWithM = checkStringStartsWithGivenChar('M');
    auto filteredM = searchItems(names, startsWithM);
    std::cout << "Names starting with 'M':\n";
    printItems(filteredM);

    return 0;
}
