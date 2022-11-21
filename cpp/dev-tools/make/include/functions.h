#ifndef FUNC
#define FUNC

class Vector{

private:
	int size;
	int capacity;
	double *arr;
public:
	Vector();
	~Vector();
	Vector(const Vector&);
	void push_back(double);
	void push_front(double);
	void erase(int);
	void insert(int, double);
	const Vector operator = (const Vector &ob);
	double operator [] (int i);
	double get_size() const;
	double get_capacity() const;
};


#endif
