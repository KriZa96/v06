#pragma once

namespace vsite::oop::v6 
{
	template <typename T>
	T minimum(const T a, const T b) {
		return a < b ? a : b;
	}

	template <typename T>
	struct point {
		T x;
		T y;
	};

	template <typename T, unsigned long long N>
	class fixed_array {
	public:
		unsigned long long size() const {
			return N;
		}

		T& operator[](const unsigned long long index)
		{
			return arr[index];
		}

	private:
		T arr[N];
		unsigned long long size_;
	};
}