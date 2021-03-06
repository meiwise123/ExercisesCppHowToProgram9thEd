#pragma once
#include "List.h"

namespace name19_13
{
	template <class T>
	class Stack : private List<T>
	{
	public:

		Stack(void)
		{
		}
		~Stack() {}

		bool push(const T& data)
		{
			return List<T>::insertAtFront(data);
		}

		bool pop(T& data)
		{
			return List<T>::removeAtFront(data);
		}

		bool pop(void)
		{
			T data;
			return List<T>::removeAtFront(data);
		}

		const T& top(void)
		{
			return List<T>::operator[](0);
		}

		bool isEmpty(void) const
		{
			return List<T>::isEmpty();
		}

	};
}
