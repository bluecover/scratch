#pragma once

template <class T>
int factorial(T)
{
	return -1;
}

// ����ģ��ƫ�ػ������벻��
//
// template<class T>
// int factorial<T*>(T* i)
// {
// 	return 888;
// }

//template<>
int factorial(int n)
{
	if (n == 0)
		return 1;
	return n * factorial(n - 1);
}
