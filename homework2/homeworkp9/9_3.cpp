#include <iostream>
using namespace std;

template <typename _Elem>
class List
{
public:
	struct node
	{
		_Elem data;
		node* next;
	};
	List() : head(NULL) {}				//构造函数
	void Insert(const _Elem& newElem);	//在链表尾插入某值
	void Delete(const _Elem& delElem);	//删除等于某值的一个结点
	void Print() const;					//打印所有值
	void Clear();						//清空链表
	~List() { Clear(); }				//析构函数，调用Clear()
private:
	node* head;
};

template <typename _Elem>
void List<_Elem>::Insert(const _Elem& newElem)
{
	if (head == NULL)
	{
		head = new node;
		head->data = newElem;
		head->next = NULL;
		return;
	}
	node* tmp = head;
	while (tmp->next) tmp = tmp->next;
	tmp = tmp->next = new node;
	tmp->data = newElem;
	tmp->next = NULL;
}

template <typename _Elem>
void List<_Elem>::Delete(const _Elem& delElem)
{
	if (head == NULL) return;
	if (head->data == delElem)
	{
		node* tmp = head;
		head = head->next;
		delete tmp;
		return;
	}
	node* tmp = head;
	while (tmp->next && tmp->next->data != delElem) tmp = tmp->next;
	if (tmp->next)
	{
		node* aft = tmp->next->next;
		delete tmp->next;
		tmp->next = aft;
	}
}

template <typename _ELem>
void List<_ELem>::Print() const
{
	if (head == NULL) return;
	node* tmp = head;
	do
	{
		cout << tmp->data << " ";
	} while (tmp = tmp->next);
	cout << endl;
}

template <typename _Elem>
void List<_Elem>::Clear()
{
	if (head == NULL) return;
	node* tmp = head;
	do
	{
		tmp = tmp->next;
		delete head;
	} while (head = tmp);
	head = NULL;
}

int main()
{
	List<int> l;
	List<char> lc;
	for (int i = 0; i < 20; ++i)
		l.Insert(i);
	l.Print();
	cout << "====================" << endl;
	l.Delete(15);
	l.Delete(15);
	l.Delete(0);
	l.Delete(19);
	l.Delete(40);
	l.Print();
	cout << "====================" << endl;
	l.Clear();
	l.Delete(9);
	l.Insert(4);
	l.Delete(5);
	l.Print();
	cout << "====================" << endl << "====================" << endl;
	for (char c = 'a'; c < 'z' + 1; ++c)
	{
		lc.Insert(c);
	}
	lc.Print();
	cout << "====================" << endl;
	lc.Delete('p');
	lc.Insert('T');
	lc.Insert('H');
	lc.Insert('U');
	lc.Print();
	return 0;
}
