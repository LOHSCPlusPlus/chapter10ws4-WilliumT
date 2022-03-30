#include "RabbitDataBase.h"
#include "ReadUtils.h"


RabbitKai::RabbitKai() {
numRabbits = 0;
void read();
}

void RabbitKai::read() {
    ifstream rabbitFile("rabbits.txt");
     numRabbits = 0;
    while(rabbitFile.peek() != EOF && numRabbits < MAX_RABBITS) {
        rabbitArray[numRabbits].readFromFile(rabbitFile);
        numRabbits++;
    }
}
void RabbitKai::print(ostream &out, bool printIndex) {
    for (int index = 0; index < MAX_RABBITS; index++) {
        if (rabbitArray[index].getValid()) {
            if (printIndex) {
                out << "Index " << index << ": ";
            }
            rabbitArray[index].Print(out); 
        } 
    }
}
void RabbitKai::save() {
    ofstream out("rabbits.txt");
    print(out, false);
}

void RabbitKai::remove () {
    int index = 0;
    do {
        index = readInt("Enter an index to remove between 0 and 500: ");
    }while (index < 0 || index >= MAX_RABBITS);
    rabbitArray[index].inValid();
}

void RabbitKai::add() {
    for (int index = 0; index < MAX_RABBITS; index++) {
        if (rabbitArray[index].getValid() == false) {
            rabbitArray[index].readFromUser();
            return;
        }
    }
    cout << "Too many rabbits! No room for more!" << endl;
}
