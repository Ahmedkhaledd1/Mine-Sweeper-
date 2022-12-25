#include "Graph.h"

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
/*
void Graph::addEdge(int index1, int index2) {
	Node* n1 = myN->at(index1);
	Node* n2 = myN->at(index2);
	n1->adjList->push_back(n2);
	n2->adjList->push_back(n1);
}
*/
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
	for (std::vector<Node*>::iterator it1 = myN->begin(); it1 != myN->end(); it1++) {
		if ((*it1)->explored)continue;
		std::cout << (*it1)->value << " ";
		(*it1)->explored = true;
	}
}

void Graph::initializeNode(int index, short value) {
	myN->at(index)->value = value;
}
int Graph::getNodeValue(int index) {
	return myN->at(index)->value;
}

void Graph::exploreNodeAdj(Node* ptr) {
	ptr->top->explored = true;
	ptr->right->explored = true;
	ptr->bot->explored = true;
	ptr->left->explored = true;
	ptr->top->left->explored = true;
	ptr->top->right->explored = true;
	ptr->bot->left->explored = true;
	ptr->bot->right->explored = true;
}

void Graph::traverseNodeAdj(int index) {
	Node* ptr = myN->at(index);
	ptr->top->value;
	ptr->right->value;
	ptr->bot->value;
	ptr->left->value;
}


bool Graph::checkBomb(int index) {
	return myN->at(index)->bomb;
}



void Graph::initializeBombs(int n) {
	int x = n;
	while (x != 0) {
		for (std::vector<Node*>::iterator it = myN->begin(); it != myN->end(); it++) {
			if (x == 0)return;
			Node* ptr = *it;
			if (ptr->bomb)continue;
			srand(time(0));
			if (rand() % 100 < 30) {
				ptr->bomb = true;
				x--;
			}
		}
	}
	/*
	if (x != 0) {
		initializeBombs(x);
	}
	*/
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
	ptr->explored = true;
	if (ptr->value == 0) {
		exploreNodeAdj(ptr);
	}
}

void Graph::firstClick(int index) {
	Node* ptr = myN->at(index);
	if (ptr->bomb) {
		ptr->bomb = false;
		initializeBombs(1);
		initializeNodes();
	}
	else {
		explore(index);
	}
}