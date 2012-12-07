#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <utility>

using std::string;
using std::ifstream;
using std::cout;
using std::endl;
using std::map;
using std::pair;

int main(int argC, char* args[]) {
 bool repeat;
 map<string, int> values = map<string, int>();
 string line;
 cout << args[1] << endl;
 ifstream file (args[1]);
 if(file.is_open()) {
  while(file.good()){
   getline(file,line);
   repeat = (values.insert(pair<string, int>(line, 1))).second;
   if(repeat == false){
    (values[line]) += 1;
   }
  }
  file.close();
 }
 else cout << "File Not Found." << endl;

 //prints out nice values
 map<string, int>::iterator it;
 for(it=values.begin(); it!=values.end(); it++){
  cout << (*it).first << ": " << (*it).second << endl;
 }

 return 0;
}
