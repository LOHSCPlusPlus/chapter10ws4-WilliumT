#include "Rabbit.h"
#include <fstream>

using namespace std;
class RabbitKai{
public:
RabbitKai();
void read();
void print(ostream &out, bool printIndex);
void save();
void remove();
void add();
private:
enum {MAX_RABBITS = 50};
Rabbit rabbitArray[MAX_RABBITS];
int numRabbits;

};