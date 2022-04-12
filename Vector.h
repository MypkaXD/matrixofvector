#include <cmath>
#include <iostream>
#include <ctime>
#pragma once
class MyVector
{
	double* data = nullptr;
	int N = 0;

public:
	MyVector();
	MyVector(int N);
	~MyVector();
	MyVector(const MyVector& other);

	int size() const
	{
		return N;
	}
	void resize(int newSize);

	double& operator[] (int i)
	{
		return data[i];
	}
	double operator[] (int i) const
	{
		return data[i];
	}

	MyVector operator + (const MyVector& other) const;
	MyVector operator - (const MyVector& other) const;
	MyVector& operator = (const MyVector& other);
	MyVector& operator += (const MyVector& other);
	MyVector& operator -= (const MyVector& other);

	MyVector operator * (double other) const;
	MyVector& operator *= (double other);

	double dot(const MyVector& other) const;

	double getNorm()  const
	{
		return sqrt(dot(*this));
	}

	friend std::ostream& operator<<(std::ostream& out, const MyVector& v);

};

class Vector {
	int m_line{ 0 };
	double* m_data{ nullptr };
public:
	void setValue(int x) {
		m_line = x;
	}
	void mallocMemoryForVector()
	{
		m_data = new double[m_line];
	}
	void setVector()
	{
		for (int count = 0; count < m_line; count++)
		{
			std::cin >> m_data[count];
		}
	}
	void deleteMemoryForVector()
	{
		delete[] m_data;
	}
	void printVector() {
		for (int count = 0; count < m_line; count++)
		{
			std::cout << "\t" << m_data[count];
		}
	}
};

class Matrix{
	int m_n{ 0 };
	int m_m{ 0 };
	double** m_arr{ nullptr };
public:
	void mallocMemory()
	{
		m_arr = new double* [m_n];
		for (int count = 0; count < m_m; count++)
		{
			m_arr[count] = new double[m_m];
		}
	}
	void fillMatrix(Vector& m_data, int x, int y) {
		for (int count = 0; count < y; count++) {
			for (int i = 0; i < x; i++) {
				m_data[count][i] = 
			}
		}
	}
	void deleteMatrix()
	{
		for (int count = 0; count < m_n; count++) {
			delete[] m_arr[count];
		}
		delete[] m_arr;
	}
	void setValue(int n, int m)
	{
		m_n = n;
		m_m = m;
	}
	void randFillMatrixOfVector()
	{
		for (int count = 0; count < m_n; count++) {
			for (int i = 0; i < m_m; i++)
			{
				m_arr[count][i] = rand();
			}
		}
	}
	void printMatrixOfVecot() {
		for (int count = 0; count < m_n; count++)
		{
			for (int i = 0; i < m_m; i++)
			{
				std::cout << m_arr[count][i] << std::endl;
			}
		}
	}
	void vector() {

	}
};
