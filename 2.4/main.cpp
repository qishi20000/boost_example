#include "boost\progress.hpp"
#include <vector>
#include <string>
#include <fstream>
using namespace std;
using namespace boost;
int main()
{
	std::vector<string> v(100);
	ofstream fs("./test.txt");
	progress_display pd(v.size());
	for (auto& x : v)
	{
		fs << x << endl;
		++pd;
	}
}

