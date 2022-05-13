///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  FinalExam - EE 205 - Spr 2022
///
/// @file trim.cpp
/// @version 1.0
///
/// @author Kaianu Reyes-Huynh <@kaianu@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////

#include "trim.h"

#include <cstring>
#include <iostream>
#include <algorithm>
#include <string>

unsigned  int string_length(const char inString[]) {

    if(inString == nullptr) {
        return 0;
    }
    else {
        int length;


        length = strlen(inString);

        return length;
    }
};

const char* trim_left(const char inString[]){
    if(inString == nullptr){
        return 0;
    }
    else{
        int i = 0;
        for(char c: "-"){
            inString = "\0";
        }
    }
};

char* map_chars(const char inString[], char buffer[]){
    switch (inString) {
        case "a":
            return "n";
    }

    return buffer;
};
