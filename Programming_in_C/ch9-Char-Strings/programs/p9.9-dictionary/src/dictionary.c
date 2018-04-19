/*
* Programming in C, 4th, Kochan
* Program 9.9
* Created by @guti7 on 04/18/2018
*
* Simulate a dictionary and lookup words to get a definition
*/

struct entry {
  char word[15];
  char definition[50];
};


int main(void) {
  
  const struct entry dictionary[5] = 
    {
      { "abyss", "a bottomless pit" },
      { "aerie", "a high nest" },
      { "agar",  "a jelly made from seaweed" },
      { "ajar",  "partially open" },
    };
  
  return 0;
}