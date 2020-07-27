#include <iostream>
using namespace std;

class list_node
{
	int data;
	list_node* next;
	friend class ordered_list;
};

class ordered_list
{
public:
	ordered_list() { head = NULL; }
	void insert(int ins);
	void visit(void(*vis)(int&));
	~ordered_list();
private:
	list_node* head;
};

void ordered_list::insert(int ins)
{
	list_node* newnode = new list_node;
	newnode->data = ins;
	if (head == NULL || head->data > ins)
	{
		newnode->next = head;
		head = newnode;
		return;
	}
	list_node* p = head, * q = head->next;
	while (q)
	{
		if (q->data >= ins)
		{
			newnode->next = p->next;
			p->next = newnode;
			return;
		}
		p = q;
		q = q->next;
	}
	p->next = newnode;
	newnode->next = NULL;
}
void ordered_list::visit(void(*vis)(int&))
{
	list_node* p = head;
	while (p)
	{
		vis(p->data);
		p = p->next;
	}
}

ordered_list::~ordered_list()
{
	list_node* p = head;
	while (head)
	{
		p = head->next;
		delete head;
		head = p;
	}
}

void output(int& i)
{
	cout << i << " ";
}

int main()
{
	ordered_list ol;
	int k;
	while (cin >> k)
		ol.insert(k);
	ol.visit(output);
	return 0;
}
