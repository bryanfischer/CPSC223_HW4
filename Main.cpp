#include "Main.h"


int main(){

    //TODO: adequately test your hashTable with
    //  insertions, deletions, searches, etc.
    // add more test cases
    // place tests inside of functions and call those functions from main

    
    //visualTestCase();
    //testLinearInsertOneCollision();
    //testLinearInsertMultipleCollisionRehash();

}

//print out the hash table after each operation
//showing your program can resolve collisions and
//rehash properly.
void visualTestCase(){

}

//sample test case that should check the hashtable changes in size from 11 to 23
void testLinearInsertMultipleCollisionRehash(){

    //creates a new vector of size 11
    std::vector<std::string> hashTable(11);

    //create a new linearHash object
    LinearProbing* linearHash = new LinearProbing(hashTable);

    //print the empty hash table
    //linearHash->printTable(hashTable);

    //each of these strings hash to be the same
    linearHash->insertItem(hashTable, "abcdefg");
    linearHash->insertItem(hashTable, "bcdefga");
    linearHash->insertItem(hashTable, "cdefgab");
    linearHash->insertItem(hashTable, "defgabc");
    linearHash->insertItem(hashTable, "efgabcd");
    linearHash->insertItem(hashTable, "fgabcde");
    linearHash->insertItem(hashTable, "gabcdef");

    //print the new hashTable
    //linearHash->printTable(hashTable);

    //since load factor increased beyond threshold, table should have been rehashed
    assert(linearHash->getTableSize() == 23);

    delete linearHash;

    
}

//simple test case to check that a collision is resolved with linear probing
void testLinearInsertOneCollision(){

    //setup the states of the test
    std::vector<std::string>hashTable(11);

    LinearProbing* linearHash = new LinearProbing(hashTable);

    linearHash->insertItem(hashTable, "abc");
    linearHash->insertItem(hashTable, "bac");

    //check that "abc" and "bac" were placed in the correct locations
    int index = linearHash->hashFunction("abc");
    assert(hashTable.at(index) == "abc" && hashTable.at(index + 1) == "bac");

    std::cout << "test case passed: linear probing insertion one collison" << std::endl;

    delete linearHash;

}

//add more test cases