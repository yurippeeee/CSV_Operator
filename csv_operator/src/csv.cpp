#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "../include/csv.h"

using namespace std;

Dataframe::Dataframe(vector<string> &values, vector<string> &columns, vector<string> &rows)
{
        this->values = values;
        this->columns = columns;
        this->rows = rows;
}

void Dataframe::print_columns_from_Dataframe()
{
        for(const auto& e : this->columns) {
                cout << e << endl;
        }       
}