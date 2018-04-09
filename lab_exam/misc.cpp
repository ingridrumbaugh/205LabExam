#include <iostream>
#include <fstream>
#include <string>
#include <map>

class Misc {

public:
    /**
     * ENUMS: Example
     * @brief The tokenType enum
     */
    enum tokenType {Player, Robot, Trash, Wall, Food, Empty};
};

/**
 * Constructors and Extending Classes
 *
 */
// HEADER: class RobotEngine : public GameEngine { };

//RobotEngine::RobotEngine() : GameEngine(23, 65) { }

//RobotEngine::RobotEngine(int x, int y) : GameEngine(x,y) { }

/**
 * Hash Map Example From Lab
 */

std::map<std::string, std::string> configMap;
std::ifstream fh;

// Insert key and pair into the hash map
// configMap.insert((std::make_pair(key,value)));

// Put the key, value pair into the map
// configMap.insert((std::make_pair(key,value)));

void read_map() {

    try {
        // Start with an empty map
        configMap.clear();

        // If the file exists, continue
        if(fh) {
            // while we're not at the end of the file
            while(! fh.eof()) {

                // Temp var for reading in lines from a file
                std::string templine;
                // Save the line in a temp variable
                std::getline(fh,templine);

                // Determine size of first line - If it's 0 then the line is empty
                int size = templine.size();

                if(size == 0)
                    continue;
                else {
                    // Splitting the line up
                    int position = 0;

                    // Look for the > character in the line (this is the delimiter)
                    position = templine.find(">");
                    // Get the key and value for the map
                    std::string key   = templine.substr(0, position);
                    std::string value = templine.substr(position+1, templine.size());

                    // Put the key, value pair into the map
                    configMap.insert((std::make_pair(key,value)));
                }
            }
        }

        // Catch any errors reading data from the file
    } catch(std::exception_ptr *e) {
        std::cout<<"Unable to read in from file \n";
    }

}




