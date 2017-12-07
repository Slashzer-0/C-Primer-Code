//
// Created by slashzero on 12/6/17.
//

#ifndef C_PRIMER_CODE_SALES_DATA_H
#define C_PRIMER_CODE_SALES_DATA_H
#include <string>

struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

#endif //C_PRIMER_CODE_SALES_DATE_H
