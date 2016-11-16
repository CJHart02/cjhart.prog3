class linkedList
{
public:
	linkedList();
	void push(double info, int count, int max);
	void print();
	double sum(int);
	double average();
	double minimum();
	double maximum();
	bool isFull(int count, int max);
	bool isEmpty(int count);
private:
    struct node{
        double num;
        node *next;
    };
    node *head, *current;

};
