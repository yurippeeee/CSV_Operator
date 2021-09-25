#ifndef CSV_H
#define CSV_H

#include <string>
#include <vector>

using namespace std;

class Dataframe{
private:
        vector<string> values;
        vector<string> columns;
        vector<string> rows;

public:
        Dataframe(vector<string> &values, vector<string> &columns, vector<string> &rows);
        void print_columns_from_Dataframe();
};



#endif 