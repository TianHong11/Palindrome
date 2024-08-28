//
// Created by tianh on 9/19/2022.

#include "palindrome.h"
bool palindrome(std::string word) {
    char *begin = &word[0];
    char *end = &word[word.size() - 1];

    /**
    while (*begin == *end) {
        for (int i = 0; i < word.size() / 2; i++) {
            if (*begin == *end) {
                std::cout<<*begin;
                begin++;
                end--;
            }
            else if (*begin != *end) {
                return false;
            }
        }
    }
    return true;
*/


    while(begin<= end){
        if(*begin== *end) {
            begin++;
            end--;
        }
        else if(*begin!=*end){
            return false;
        }
    }
    std::cout<<word;

    return true;
}

