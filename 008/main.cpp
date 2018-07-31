#include <iostream>
#include <vector>

using namespace std;

template <typename T>
bool binary_search_vector(const T& key, typename vector<T>::const_iterator data, size_t N)
{
  size_t low = 0;
  size_t high = N;
  while (low < high)
  {
    size_t mid = low + (high - low) / 2;
	// 小则去前半部分继续查找.
	if (key < *(data + mid)) {
		high = mid;
	}
	// 大则去后半部分继续查找.
	else if (*(data + mid) < key) {
		low = mid + 1;
	}
	else {
		return true;
	}
  }
  return false;
}

int main()
{
  vector<int> v = {1, 2, 3, 4, 5};
  cout << binary_search_vector(2, v.cbegin(), 5) << endl;
  cout << binary_search_vector(0, v.cbegin(), 5) << endl;
  cout << binary_search_vector(2, v.cbegin() + 2, 3) << endl;
  cout << binary_search_vector(0, v.cbegin(), 0) << endl;
  system("pause");
  return 0;
}