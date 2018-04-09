#include <iostream>
#include <fstream>

using namespace std;

class FileIO {

    void write_file() {
        ofstream outFile;
        ofstream fout;

        outFile.open("temp.txt"); // outFile used to write to the temp.txt file
        char filename[50];
        cin >> filename;
        fout.open(filename); // fout used to read the user specified file

        // Write to the file
        double wt = 125.8;
        outFile << wt; // write a number to the file

        char line[81] = "Objects are closer than they appear.";
        fout << line << endl; // write a line of text

        outFile.close();
        fout.close();
    }

    void read_file() {
        ifstream inFile;
        ifstream fin;

        inFile.open("temp.txt");

        // EXAMPLE FROM LAB
        // Open the file, named config.txt and truncate
        // fh.open("./config.txt",std::ifstream::in | std::ifstream::app);
        // fhOut.open(location, std::ofstream::out | std::ofstream::trunc);
    }

    void file_loops() {
        ifstream inFile;

        if (inFile.eof())
            cout << "End of file reached. \n";
        else if (inFile.fail())
            cout << "Input terminated by data mismatch. \n";
        else
            cout << "Input terminated for unknown reason. \n";
        // Standard file-reading loop design
        inFile >> value; // Get first value

        while (inFile.good()) { //while input good and not at EOF
            // loop body goes here
            inFile >> value; // get next
        }
    }

    /**
      * NOTE:  fh.flush(); will clear the file.
      */
};



