//this is where all of the magic happens!!


#include <iostream>
#include <fstream>


using namespace std;


//encrypts the input file and writes to the output file
void encrypt(ifstream * inputFile,ofstream * outputFile,char * key);

//decrypts the input file and writes to the output file
void decrypt(ifstream * inputFile,ofstream * outputFile,char * key);

//this is where tha magic happens, baby
int main(int argc,char * * argv)
{
  //there should be 5 arguments, ebolafier, mode, inputFile, outputFile, key
  if (argc != 5)
  {
    cout << "usage:ebolafier mode inputFile outputFile key" << endl;
    return 1;
  }

  //open the input and output files
  ifstream inputFile(argv[2]);
  ofstream outputFile(argv[3]);

  //check if they worked
  if (!inputFile.is_open())
  {
    cout << "couldn't open file " << argv[2] << endl;
  }
  if (!outputFile.is_open())
  {
    cout << "couldn't open file " << argv[3] << endl;
  }

  //if it says encrypt
  if (strcmp(argv[1],"enc") == 0)
  {
    encrypt(&inputFile,&outputFile,argv[4]);
  }
  //if it says decrypt
  else if (strcmp(argv[1],"dec") == 0)
  {
    decrypt(&inputFile,&outputFile,argv[4]);
  }
  //otherwise
  else
  {
    cout << argv[1] << " is not a mode" << endl;
  }

  //close the files
  inputFile.close();
  outputFile.close();

  return 0;
}
