//  +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
//       vector<string> splitter(string stringOftokens) 
//       
//  splitter routine accepts a string and creates a vector or words in the string, presummed to be a sentance or space separated tokens, words, numbers etc.
//  it uses the iterator stringstream and pushes tokens onto a string vector with it returns
//  its tested here with two ways to print a vector
//  splitter will be put into a library in the near future.
//  Could be enhanced to accept optional separator as an overloaded parameter, defaulting to blank separator
//  Brad Winters    7/26/2019
//  +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
#include <vector>
#include <string>
#include <sstream>
#include <iostream>
using namespace std;

// accpet a string with white space separated words, return a vector of strings, the words by themselves
 vector<string> splitter(string passedInSentance) {

   // used to debug, elimiate passing of string 
   std::string str("Split me by whitespaces if you think you can");
   std::string buf;                 // Have a buffer string
   std::stringstream ss(passedInSentance);       // Insert the string into a stream

   std::vector<std::string> tokens; // Create vector to hold our words
   // uncomment to test cout << "!!!  The sentance I got passed to me is as follows:\n";
   // uncomment to test cout << passedInSentance << endl;

     int cntr=0;
   // uncomment to test   cout << "hello, starting\n";
   // uncomment to test   cout << "Input string is " << str << endl;
         while (ss >> buf){
           tokens.push_back(buf);
           cntr++;
      }
    return tokens;
 }

int main() {
    //++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
    //
    // Driver program to test out the splitter function.   Pass in a sentance and get back a vector of words
    //
    //++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
    
    // String to recieve the parsed words from the line
    vector<string> tokenV;

    // declare routine to split the string and return a vector of tokens
    string aString = "The quick brown fox jumpped over the lazy dog";
    vector<string> splitter(string);

    // call to the actual routine
    tokenV = splitter(aString);

    // Prove it worked by printing out.  Two methods used
    // Method 1: get size of vector, then loop it
    int zis = tokenV.size();
    // uncomment to test cout << "Show tokens, zis is " << zis << endl;
    for (int i =0; i<zis;i++){
        cout << i << ")" << tokenV[i] << endl;
    }
	      
    // Method 2:  use an iterator  
    cout << "=========================================================================\n";
    cout << "iterate with begin and end \n";
    for (vector<string>::iterator it = tokenV.begin() ; it != tokenV.end(); ++it)
        cout << ' ' << *it << endl;

     cout << "\nDone\n";
 }  // the end
	  
