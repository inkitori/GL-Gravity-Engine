#include "MathUtils.h"

namespace MathUtils
{
	Vec3 GetSphereVertex(double radius, double theta, double phi)
	{
		double x = radius * sin(phi) * cos(theta);
		double y = radius * sin(phi) * sin(theta);
		double z = radius * cos(phi);

		return {x, y, z};
	}
}