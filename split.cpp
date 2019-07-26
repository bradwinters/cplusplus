#include <vector>
#include <string>
#include <sstream>
#include <iostream>
using namespace std;

// accpet a string with white space separated words, return a vector of strings, the words by themselves
 vector<string> splitter(string passedInSentance) {
   
   std::string str("Split me by whitespaces if you think you can");
   std::string buf;                 // Have a buffer string
   std::stringstream ss(passedInSentance);       // Insert the string into a stream

   std::vector<std::string> tokens; // Create vector to hold our words
   cout << "!!!  The sentance I got passed to me is as follows:\n";
   cout << passedInSentance << endl;

     int cntr=0;
      cout << "hello, starting\n";
      cout << "Input string is " << str << endl;
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
    cout << "Show tokens, zis is " << zis << endl;
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
	  
