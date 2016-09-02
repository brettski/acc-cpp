// example which calcs a students grades
// final exam is 40% of grade
// midterm exam is 20% of grade
// homework is remaining 40% of grade
#include <algorithm>  // for sort
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::setprecision;
using std::string;
using std::streamsize;
using std::sort;
using std::vector;

int main()
{
  cout << "Please enter you first name: ";
  string name;
  cin >> name;
  cout << "Hello, " << name << "!" << endl;

  cout << "Please enter your midterm and final exam grades: ";
  double midterm, final;
  cin >> midterm >> final;

  cout << "Enter all your homework grades, "
          "followed by end-of-file: ";

  double sum = 0.0; // I want this to play with and better than looping through the vector for a sum
  double x;
  vector<double> homework;

  while (cin >> x)
  {
    sum += x;
    homework.push_back(x);
  }

  typedef vector<double>::size_type vec_sz; // Defines vec_sz as the type vector<double>::size_type
  vec_sz size = homework.size();

  if (size == 0 )
  {
    cout << endl << "you must enter your grades. Please try again." << endl;
    return 1;
  }

  sort(homework.begin(), homework.end());
  vec_sz mid = size/2;
  double median = 0.0;
  median = size % 2 == 0 ? (homework[mid] + homework[mid] - 1) / 2 : homework[mid];
  int z = 0;

  // write result
  streamsize prec = cout.precision(); // saves cout's current precision so we may set it back
  cout << "Your final grade is " << setprecision(3)
       << 0.2 * midterm + 0.4 * final + 0.4 * median
       << setprecision(prec) << endl;
  cout << "\n\nThe median|average is: " << median << "|" << sum / size << endl;

  return 0;
}
