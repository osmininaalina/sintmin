const char chars[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

int main() {
    // Printing the characters in the 'chars' string
    for (int i = 0; i < sizeof(chars) - 1; i++) {
        std::cout << chars[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
