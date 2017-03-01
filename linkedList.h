class linkedList
{
public:
	linkedList();
	void push(double info, int count, int max);
	void print(int count, int max);
	void columnPrint(int count, int max);
	void printHead();
	double sum(int count, int max);
	double average(int count, int max);
	double minimum(int count, int max);
	double maximum(int count, int max);
	bool isFull(int count, int max);
	bool isEmpty(int count);
private:
    struct node{
        double num;
        node *next;
    };
    node *head, *current;

};
