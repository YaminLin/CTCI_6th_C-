typedef struct node
{
	int key;
	node *left;
	node *right;
}node;


bool ValidateBST(node* root) {
	if (root == NULL)
		return true;

	return (_checkbst(root->left, (long)INT_MIN - 1, (long)root->key) && _checkbst(root->right, (long)root->key, (long)INT_MAX + 1));
}


bool _checkbst(node* root, long left, long right)
{

	if (root == NULL)
		return true;

	if (left < root->key &&  root->key < right)
		return (_checkbst(root->left, left, root->key) && _checkbst(root->right, root->key, right));
	else
		return false;
}