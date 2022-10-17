#include "Hash.h"

class LinearProbing : public Hash{
    

    public:

        //EVC constructor
        //set the type to "Linear Probing"
        //set the initial table size to be length of the vector passed in
        //set initial load factor to 0.0
        //set item count to 0
        LinearProbing(std::vector<std::string> & vec){
            
            
        }

        //Given a string, calculate the hashkey based on the sum of the chars
        int hashFunction(std::string str){

            return 0;
        }

        //Use linear probing strategy to insert an item into the hashtable
        //If a collision occurs, it should probe until it finds an empty location.
        //  an empty, or free location, is either the empty string "" or an element
        //  marked by lazy deletion.
        //After each insert, check if the table needs to be rehashed. If it does,
        //  perform the rehash
        void insertItem(std::vector<std::string> & vec, std::string str){
            
        }

        //Perform lazy deletion on the hash table
        //To mark an element as deleted, use the string "DELETED"
        //When removing an item it should also decrease the load factor
        void removeItem(std::vector<std::string> & vec, std::string str){
            
        }

        //Search the hashtable for an item
        //Use the hashkey to find the index where the item should belong
        //  and perform linear traversal until you find the item or reach
        //  empty space.
        //Function should return true if the item was found, and false if not found
        bool findItem(std::vector<std::string> & vec, std::string str){
            return NULL;
        }

        //Rehash the hash table
        //double the size of the table to the next largest prime
        //move all the elements over from the old table to the new table
        //update all attributes of the hash table (size, load factor, etc.)
        void rehash(std::vector<std::string> & vec){

        }

        //Print the stats of the hash table first, then the contents
        //stats include: table size, load factor, number of collisions, and any others you may think of
        void printTable(std::vector<std::string> &vec){
            
        }

        //checkRehash will return true if the current table needs to be rehash, false if not
        //This function should also print a message indicating a rehash is occuring as well as
        //  the current load factor
        bool checkRehash(std::vector<std::string> & vec){

            return NULL;
        }
        

};