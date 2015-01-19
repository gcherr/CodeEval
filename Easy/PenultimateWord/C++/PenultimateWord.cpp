#include <iostream>
#include <string>
#include <fstream>
using namespace std;

string pen_word(string line){
   string trunc = line.substr(0, line.find_last_of(" "));
   size_t pen_space = trunc.find_last_of(" ");
   if(pen_space != -1) //if no previous space, string has only 1 word
      return trunc.substr(pen_space+1, trunc.length()-1);
   return trunc;
}

int main(int argv, char** argc){
   argv = argv;
   ifstream in;
   string line;
   in.open(argc[1]);
   while(getline(in,line)){
      cout << pen_word(line) << "\n";
   }
   in.close();
   return 0;
}
