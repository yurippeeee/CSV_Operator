#include <string>
#include <vector>
#include <iostream>
#include "../csv_operator/include/csv.h"

using namespace std;

int main(){
        vector<string> values = {"one", "two", "three", "four"};
        //cout << "test" << endl;
        vector<string> columns = {"one", "two", "three", "four"};
        vector<string> rows = {"one", "two", "three", "four"};
        
        Dataframe *df = new Dataframe(values,columns,rows);
        df->print_columns_from_Dataframe();

        return 0;
}