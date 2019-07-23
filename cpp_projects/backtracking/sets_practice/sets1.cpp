#include <iostream>
#include <set>

using namespace std;

int main(){
std::set<float> setnum;

setnum.insert(50.3);
setnum.insert(0.000345667);
setnum.insert(10234568238959.4758920);
setnum.insert(-223.3);

std::cout << "set size = "<< setnum.size() << std::endl;

for(set<float>::iterator itr = setnum.begin(); itr != setnum.end(); itr++){
        cout << " " << *itr ;
        }
}