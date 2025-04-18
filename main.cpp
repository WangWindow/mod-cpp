import std;

auto main() -> int {
    std::println("Hello, World!");

    std::vector<int> numbers = { 1, 2, 3, 4, 5 };

    std::for_each(numbers.begin(), numbers.end(), [](int n) {
        std::println("Number: {}", n);
    });
}
