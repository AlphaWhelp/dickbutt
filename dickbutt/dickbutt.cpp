#include "dickbutt.h"

namespace dick
{
	bool butt::dickbutt(bool _, int D)
	{
		return (_|_) & 8==D ; // returns true if you have a dickbutt, otherwise returns false
	}

	bool butt::dick_or_butt(bool _, int D)
	{
		if (_|_) return (_|_) ; // returns butt if it's a butt
		else return 8==D ; // otherwise, return dick if its a dick
		// if it's neither, it returns false, you are lacking in dickbutt
	}

	bool butt::isButt(bool _)
	{
		return (_|_) ; // checks to see if you have a butt
	}

	bool butt::isDick(int D)
	{
		return 8==D ; // checks to see if you have a dick
	}
}
