template <class T>
class Node {
public:
	T data;
	Node* nextElement;

	Node() {
		nextElement=nullptr;
	}
};
