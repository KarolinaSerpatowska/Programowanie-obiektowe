template<class T>
class smartpointer
{
	T *id;
public:
	smartpointer()
	{
		cout << "utworzono obiekt o id " << id << endl;
	}
	~smartpointer()
	{
		cout << "destruktor" << endl;
	}

	T operator->()
	{
		return *id;
	}

	T operator&()
	{
		return id;
	}
};
