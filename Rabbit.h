#include <iostream>

using namespace std;
class Rabbit{
public:
    Rabbit();
    void Print(ostream &out);
    void readFromUser();
    void readFromFile(ifstream &inFile);
    bool getValid(); 
    void inValid();
private:
enum {MAX_CHAR_LEN=100};
    char name[MAX_CHAR_LEN];
    double maxWeight;
    int yearRecognized;
    bool isRare;
    bool isValid;

};