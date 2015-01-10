#ifndef VECTOR2_H
#define VECTOR2_H

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

			Vector2 operator+(const Vector2& v)
			{
				return Vector2(X + v.X, Y + v.Y);
			}

			Vector2 operator-(const Vector2& v)
			{
				return Vector2(X - v.X, Y - v.Y);
			}
	};
}

#endif //VECTOR2_H
