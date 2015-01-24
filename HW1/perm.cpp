/**
 * Incorrect code to generate all permutations of a string of characters
 */

#include <iostream>
#include <cstring>

using namespace std;


// A nice interface to the user who doesn't care about a current location
void all_perms(char *src_chars, char* buf);

// This is where we'll do the work
void perm_helper(char *src_chars, char* buf, int curr);

// Invokes the helper
void all_perms(char *src_chars, char* buf)
{
  perm_helper(src_chars, buf, 0);
}

// Iterates through all possible characters for the 'curr' location
// which are characters not previously used earlier in buf
void perm_helper(char *src_chars, char* buf, int curr)
{

  int len = strlen(src_chars);

  if(buf[curr] == ' '&& (curr)==len ){//added a >2 to get to the in rger to do the program 
    cout << buf << endl;
  }
  else {
    
    for(int i=0; i < len; i++){
      buf[curr] = src_chars[i];

        int copies=0;
      //if(buf[curr]!=buf[curr+1]){
        for(int j=0; j<len; j++){
          if(buf[curr]==buf[j]){
            copies++;
          }
        }
        if(copies<2)
          perm_helper(src_chars, buf, curr+1);

          buf[curr] = ' ';
        
      //}
    }
  }
}

int main(int argc, char* argv[])
{
  if(argc < 2){
    cerr << "Please provide a string of characters to generate all permutations" << endl;
    return 1;
  }

  // Allocate a temporary buffer of equal size to the src string
  //  and initialize it with all spaces
  char* buf = new char[strlen(argv[1])+1];
  for(int i=0; i < strlen(argv[1]); i++){
    buf[i] = ' ';
  }
  buf[strlen(argv[1])] = ' ';

  // Now find all permutations
  all_perms(argv[1], buf);

  // Cleanup and return
  delete [] buf;
  return 0;
}