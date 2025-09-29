#include "../src/hello.cc"

#include <cstdlib>
#include <string>

int main() {
    if (greet("Bazel") != "Hello, Bazel!") return 1;
    if (greet("") != "Hello, !") return 1;
    return 0;
}
