#include <stdio.h>
#include <string.h>
#include <openssl/sha.h>

void print_hash(unsigned char hash[], int length) {
    for (int i = 0; i < length; i++) {
        printf("%02x", hash[i]);
    }
    printf("\n");
}

int main() {
    // Input string to hash
    const char *input = "Hello, World!";
    unsigned char hash[SHA256_DIGEST_LENGTH];

    // Compute SHA-256 hash
    SHA256_CTX sha256;
    SHA256_Init(&sha256);
    SHA256_Update(&sha256, input, strlen(input));
    SHA256_Final(hash, &sha256);

    // Print the hash in hexadecimal format
    printf("SHA-256 hash of '%s':\n", input);
    print_hash(hash, SHA256_DIGEST_LENGTH);

    return 0;
}
