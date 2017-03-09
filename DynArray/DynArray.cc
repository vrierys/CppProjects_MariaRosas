#include "DynArray.hh"

DynArray::DynArray(void)
{
	m_data = new int [DYN_ARRAY_DEFAULT_SIZE];
	m_capacity = DYN_ARRAY_DEFAULT_SIZE;
	m_size = 0;
}

DynArray::DynArray(size_t size, const int & value)
{
	m_data = new int [size];
	m_capacity = size;
	m_size = size;

	fill(begin(), end(), value);
}

DynArray::~DynArray(void)
{
	delete[]m_data;
}

int * DynArray::begin(void) const
{
	return m_data;
}

int * DynArray::end(void) const
{
	return (m_data + m_size);
}

void DynArray::fill(int *first, int *last, int value)
{
	while (first != last) {
		*first = value;
		first++;
	}
}

int & DynArray::operator[](size_t n) const
{
	return m_data[n];
}

bool operator==(const DynArray & lhs, const DynArray & rhs)
{
	for (int i = 0; i < lhs.m_size || rhs.m_size; i++) {
	
		if (lhs.m_data[i] == rhs.m_data[i]) {
			continue;
		}
		else {
			return false;
		}
	
	}
	return true;
}

void DynArray::push(const int & val)
{

	
	if (m_size == m_capacity) {
		int *aux;
		aux = new int[];
		

		m_data = new int[];
		m_capacity = ;
		m_data = aux;
	}


	



}
