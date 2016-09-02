// a small C++ program
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
  cout << "Please enter your first name: ";

  string name;
  cin >> name;

  const string greeting = "Hello " + name + "!";

  const int pad = 0;

  const int rows = pad * 2 + 3;
  const string::size_type cols = greeting.size() + pad * 2 + 2; // 2 padded values and 2 boarders

  // Write a blank line to separate the output from the input (forces a flush I guess)
  cout << endl;
  // write rows of output
  // invariant: we have written r rows so far
  for (int r = 0; r < rows; ++r)
  {
    string::size_type c = 0;

    // invariant: we have written c characters so far in the current row
    while (c != cols)
    {
      // is it time to write the greeting?
      if (r == pad + 1 && c == pad + 1)
      {
        cout << greeting;
        c += greeting.size();
      } else
      {
        // are we on the boarder?
        if (r ==0 || r == rows -1 || c == 0 || c == cols -1)
        {
          cout << "*";
        } else
        {
          cout << " ";
        }
        ++c;
      }
    }
    cout << endl;
  }
  return 0;
}
