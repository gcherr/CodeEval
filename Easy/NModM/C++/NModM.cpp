#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int mod(int dividend, int divisor){
   if(dividend < divisor)
      return dividend;
   else{
      //cout << "div" << dividend << "\n";
      mod(dividend-divisor, divisor);
   }
   //return 0;
}

int main(int argv, char** argc){
   argv = argv;
   ifstream in;
   string line;
   in.open(argc[1]);
   while(getline(in,line)){
      size_t com_pos = line.find(",");
      string dividend = line.substr(0, com_pos);
      string divisor = line.substr(com_pos+1, line.length()-1);
      int result = mod(stoi(dividend,nullptr), stoi(divisor,nullptr));
      //cout << dividend << " and " << divisor << '\n';
      cout << result << "\n";
   }
   in.close();
   return 0;
}
