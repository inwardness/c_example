//This code defines a basic Block structure and includes functions to create blocks and calculate their hashes. The main function demonstrates the creation of the genesis block and a subsequent block linked to it. In a real blockchain implementation, you would need to incorporate more sophisticated concepts such as consensus algorithms, proof-of-work, and network communication.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define BLOCK_SIZE 256

// Block structure
struct Block {
    int index;
    char timestamp[30];
    char data[BLOCK_SIZE];
    char previousHash[64];
    char hash[64];
};

// Function to calculate the hash of a block
void calculateHash(struct Block *block) {
    // For simplicity, concatenate index, timestamp, data, and previousHash for hashing
    snprintf(block->hash, sizeof(block->hash), "%d%s%s%s", block->index, block->timestamp, block->data, block->previousHash);
    // In a real-world scenario, you would use a cryptographic hash function like SHA-256
}

// Function to create a new block
struct Block createBlock(int index, const char *data, const char *previousHash) {
    struct Block newBlock;
    newBlock.index = index;
    time_t rawtime;
    time(&rawtime);
    strftime(newBlock.timestamp, sizeof(newBlock.timestamp), "%Y-%m-%d %H:%M:%S", localtime(&rawtime));
    strncpy(newBlock.data, data, sizeof(newBlock.data));
    strncpy(newBlock.previousHash, previousHash, sizeof(newBlock.previousHash));
    calculateHash(&newBlock);
    return newBlock;
}

int main() {
    // Create the genesis block
    struct Block genesisBlock = createBlock(0, "Genesis Block", "0");

    // Create a new block linked to the genesis block
    struct Block block1 = createBlock(1, "Transaction 1", genesisBlock.hash);

    // Display block information
    printf("Genesis Block:\n");
    printf("Index: %d\nTimestamp: %s\nData: %s\nPrevious Hash: %s\nHash: %s\n\n",
           genesisBlock.index, genesisBlock.timestamp, genesisBlock.data,
           genesisBlock.previousHash, genesisBlock.hash);

    printf("Block 1:\n");
    printf("Index: %d\nTimestamp: %s\nData: %s\nPrevious Hash: %s\nHash: %s\n",
           block1.index, block1.timestamp, block1.data, block1.previousHash, block1.hash);

    return 0;
}