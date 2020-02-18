#include <string>
#include <vector>
#include "boost/filesystem.hpp"
#include "boost/optional.hpp"
using namespace boost::filesystem;
typedef recursive_directory_iterator rd_iterator;
int main()
{
	std::vector<std::string> names;
	const path dir = "E:\\FFOutput\\regular_pic";
	if (!exists(dir) || !is_directory(dir))
	{
		return -1;
	}

	rd_iterator end;
	for (rd_iterator pos(dir);pos != end;++pos)
	{
		if (!is_directory(*pos))
		{
			names.push_back(pos->path().string());
		}
	}
}