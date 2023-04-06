// i/o example

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main ()
{
   /*Create variables*/
   string binary_value [16] = {"0000","0001","0010","0011","0100","0101","0110","0111","1000","1001","1010","1011","1100","1101","1110","1111"};
   string hexadecimal_value;
   cout << "//Insert a hexadecimal value// ";
   cin >> hexadecimal_value;
   std::string input_string = hexadecimal_value;
    std::string substr;
    std::stringstream ss(input_string);
    const int MAX_TOKENS = 20; // máximo de tokens permitidos en el array
    std::string tokens[MAX_TOKENS];
    int i = 0;

    while (std::getline(ss, substr, ',')) {
        tokens[i] = substr;
        i++;
        if (i >= MAX_TOKENS) {
            break; // el array está lleno, no se pueden almacenar más substrings
        }
    }

    const int num_tokens = i;
   
   string output_array[15];
   for (int i = 0; i < 5; i++) {
      string final_array[100];
      if (tokens[i] == "0") {
         output_array[0] = {(binary_value[0])};
         
        final_array[0]=output_array[0];

      }
      if (tokens[i] == "1") {
         output_array[1] = {(binary_value[1])};
         final_array[1]=output_array[1];
      }
      if (tokens[i] == "2") {
         output_array[2] = {(binary_value[2])};
         final_array[2]=output_array[2];
      }
      if (tokens[i] == "3") {
         output_array[3] = {(binary_value[3])};
         final_array[3]=output_array[3];
      }
      if (tokens[i] == "4") {
         output_array[4] = {(binary_value[4])};
         final_array[4]=output_array[4];
      }
      if (tokens[i] == "5") {
         output_array[5] = {(binary_value[5])};
         final_array[5]=output_array[5];
      }
      if (tokens[i] == "6") {
         output_array[6] = {(binary_value[6])};
         final_array[6]=output_array[6];
      }
      if (tokens[i] == "7") {
         output_array[7] = {(binary_value[7])};
         final_array[7]=output_array[7];
      };
         if (tokens[i] == "8") {
         output_array[8] = {(binary_value[8])};
         final_array[8]=output_array[8];
      };
         if (tokens[i] == "9") {
         output_array[9] = {(binary_value[9])};
         final_array[9]=output_array[9];
      };
         if (tokens[i] == "A"  || tokens[i]=="a") {
         output_array[10] = {(binary_value[10])};
         final_array[10]=output_array[10];
      };
         if (tokens[i] == "B" || tokens[i]=="b") {
         output_array[11] = {(binary_value[11])};
         final_array[11]=output_array[11];
      };
           if (tokens[i] == "C"|| tokens[i]=="c") {
         output_array[12] = {(binary_value[12])};
         final_array[12]=output_array[12];
      };
           if (tokens[i] == "D"|| tokens[i]=="d") {
         output_array[13] = {(binary_value[13])};
         final_array[13]=output_array[13];
      };
           if (tokens[i] == "E" || tokens[i]=="e") {
         output_array[14] = {(binary_value[14])};
         final_array[14]=output_array[14];
      };
           if (tokens[i] == "F" || tokens[i]=="f") {
         output_array[15] = {(binary_value[15])};
         final_array[15]=output_array[15];
      };
      for (int i = 0; i < sizeof(final_array) / sizeof(final_array[0]); i++) {
        std::cout<< final_array[i];
        
      }
     


      
   }
    cout<<" VALOR COMPLETADO"<<endl;
    string newvalue;
    cin >> newvalue;


   

   
    
  
 
   
}
