#include <vector>

using std::vector;

double median(std::vector<double> hw)
{
  typedef vector<double>::size_type vec_sz; // Defines vec_sz as the type vector<double>::size_type
  vec_sz size = hw.size();

  sort(hw.begin(), hw.end());
  vec_sz mid = size/2;
  return size % 2 == 0 ? (hw[mid] + hw[mid] - 1) / 2 : hw[mid];
}
