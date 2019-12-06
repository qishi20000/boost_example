#include <boost/thread.hpp>
#include <iostream>
#include <boost/thread/lock_factories.hpp>

using namespace boost;
int main()
{
	mutex mu;
	{
		auto g = make_unique_lock(mu);
		assert(g.owns_lock());
		std::cout << "some operations" << std::endl;
	}

	{
		auto g = make_unique_lock(mu, defer_lock);
		assert(!g);

		assert(g.try_lock());
		assert(g);
		std::cout << "some operations" << std::endl;
	}

}