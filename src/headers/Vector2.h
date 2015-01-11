#ifndef VECTOR2_H
#define VECTOR2_H

#include <iostream>

using namespace std;

namespace czvc
{
	class Vector2
	{
		public:
			double X;
			double Y;

			Vector2()
			{
				X = Y = 0.0;
			}

			Vector2(double x, double y)
			{
				X = x;
				Y = y;
			}

			Vector2(const Vector2& v)
			{
				X = v.X;
				Y = v.Y;
			}

			Vector2 operator+(const Vector2& v)
			{
				return Vector2(X + v.X, Y + v.Y);
			}

			Vector2 operator-(const Vector2& v)
			{
				return Vector2(X - v.X, Y - v.Y);
			}

			Vector2 operator*(const double s)
			{
				return Vector2(X * s, Y * s);
			}

			Vector2 operator/(const double s)
			{
				return Vector2(X / s, Y / s);
			}

			friend ostream& operator<<(ostream& out, const Vector2& v);
	};

	ostream& operator<<(ostream& out, const Vector2& v)
	{
		out << "< " << v.X << " , " << v.Y << " >";
		return out;
	}
}

#endif //VECTOR2_H
