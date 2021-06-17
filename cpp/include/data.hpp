#ifndef __DATA_H
#define __DATA_H

#include <vector>
#include "stdint.h"
#include "data.h"

#include <string>
#include <map>
#include <unordered_set>

#include <fstream>


class data 
{
    std::vector<uin8_t> * feature_vector; // the datapoints?
    uint8_t label;
    int enum_label;     // index?

    public:
    void set_feature_vector(std::vector<uint8_t> *);
    void append_to_feature_vector(uint8_t);
    void set_label(uint8_t);
    void set_enumerated_label(int);
    
    int get_feature_vector_size();
    uint8_t get_label();
    uint8_t get_enumerated_label();

    std::vector<uint8_t> * get_feature_vector();
}



#endif
