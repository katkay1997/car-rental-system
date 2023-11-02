#include <rapidcsv.h>
#include <vector>
#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    rapidcsv::Document doc("list.csv");

    std::cout << "Column Count: " << doc.GetColumnCount() << std::endl;
    std::cout << "Row Count:    " << doc.GetRowCount()    << std::endl;

    // Start at 1 to skip the header row
    for(size_t Row = 1; Row < doc.GetRowCount(); Row++)
    {
        // Rapidcsv will throw a std::out_or_range exception if the csv file isn't formatted correctly.
        try 
        {
            std::string Make  = doc.GetCell<std::string>(0, Row);
            std::string Model = doc.GetCell<std::string>(1, Row);
            double Cost       = doc.GetCell<double>(2, Row);

            // For now, just print the data to the screen
            std::cout << "Make: " << Make << ", Model: " << Model << ", Cost: $" << Cost << std::endl;
        }
        catch(const std::out_of_range &e)
        {
            // Throw our hands up in the air for this row and print an error
            std::cerr << "Out of range error." << std::endl;
        }
    }

    return 0;
}
