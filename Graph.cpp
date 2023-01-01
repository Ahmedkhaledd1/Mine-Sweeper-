#include "Graph.h"
#include <algorithm>
//using namespace std;

Graph::Graph(int r, int c) {
	this->rows = r;
	this->columns = c;
	myN = new std::vector<Node*>(r * c);
	for (int i = 0; i < r * c; i++) {
		myN->at(i) = new Node();
	}
}
Graph::~Graph() {

	for (int i = 0; i < myN->size(); i++) {
		delete(myN->at(i));
	}
	delete(myN);

}
void Graph::connectNodes() {
	int i = 0;
	for (std::vector<Node*>::iterator it = myN->begin(); it != myN->end(); it++, i++) {
		Node* ptr = *it;
		ptr->top = (i - columns) >= 0 ? myN->at(i - rows) : NULL;
		ptr->right = (i + 1) % columns == 0 ? NULL : myN->at(i + 1);
		ptr->bot = (i + columns) <= (rows * columns - 1) ? myN->at(i + columns) : NULL;
		ptr->left = (i % columns == 0) ? NULL : myN->at(i - 1);

	}
}
void Graph::traverse() {
	int i = 1;
	for (std::vector<Node*>::iterator it1 = myN->begin(); it1 != myN->end(); it1++, i++) {
		//if ((*it1)->explored)continue;
		if ((*it1)->bomb)std::cout << "X" << "    ";
		else std::cout << (*it1)->value << "    ";
		//(*it1)->explored = true;
		if (i % 8 == 0)std::cout << std::endl;
	}
}

int Graph::getNodeValue(int index) {
	return myN->at(index)->value;
}
int Graph::getRem() {
	return rem;
}
void Graph::explore(Node* ptr) {
	if (ptr->explored)return;
	ptr->explored = true;
	rem--;
}
void Graph::exploreNodeAdj(int index) {
	Node* ptr = myN->at(index);
	if (ptr->top != NULL) {
		explore(ptr->top);
		if (ptr->top->left != NULL)explore(ptr->top->left);
	if (ptr->top->right != NULL)explore(ptr->top->right);

	}
	if (ptr->bot != NULL) {
		explore(ptr->bot);
		if(ptr->bot->right != NULL)explore(ptr->bot->right);
		if(ptr->bot->left != NULL)explore(ptr->bot->left);

	}
	if (ptr->right != NULL)explore(ptr->right);
	if (ptr->left != NULL)explore(ptr->left);

}
bool Graph::getExplore(int index) {
	return myN->at(index)->explored;
}

bool Graph::checkBomb(int index) {
	return myN->at(index)->bomb;
}
//random function for initializing mines and shuffling them.
int myrandom(int i) { return std::rand() % i; }
void Graph::initializeBombs(int n) {
	rem = (rows * columns) - n;
	std::srand(unsigned(std::time(0)));
	std::vector<int>* v = new std::vector<int>;
	int x = n;
	while (x > 0) {
		v->push_back(-5);
		x--;
	}
	for (int i = n - 1; i < (rows * columns); i++) {
		v->push_back(-1);
	}
	std::random_shuffle(v->begin(), v->end(), myrandom);
	int c = 0;
	for (std::vector<Node*>::iterator it = myN->begin(); it != myN->end(); it++, c++) {
		Node* ptr = *it;
		if (v->at(c) == -5)ptr->bomb = true;
	}
}

void Graph::initializeNodes() {
	for (std::vector<Node*>::iterator it = myN->begin(); it != myN->end(); it++) {
		Node* ptr = *it;
		if (ptr->bomb)continue;
		short b = 0;
		if (ptr->top != NULL) {
			if (ptr->top->bomb)b++;
			if (ptr->top->right != NULL && ptr->top->right->bomb)b++;
			if (ptr->top->left != NULL && ptr->top->left->bomb)b++;
		}
		if (ptr->right != NULL) {
			if (ptr->right->bomb)b++;
		}
		if (ptr->bot != NULL) {
			if (ptr->bot->bomb)b++;
			if (ptr->bot->right != NULL && ptr->bot->right->bomb)b++;
			if (ptr->bot->left != NULL && ptr->bot->left->bomb)b++;
		}
		if (ptr->left != NULL) {
			if (ptr->left->bomb)b++;
		}
		ptr->value = b;
	}
}

void Graph::explore(int index) {
	Node* ptr = myN->at(index);
	if (ptr->explored)return;
	ptr->explored = true;
	rem--;
}
int Graph::getFirstZero() {
	int i = 0;
	for (auto it = myN->begin(); it != myN->end(); it++,i++) {
		Node* ptr = *it;
		if (ptr->value == 0) {
			return i+1;
		}
	}
}
