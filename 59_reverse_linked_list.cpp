#include<iostream>
using namespace std;

struct node
{
  int num;
  node *nxt;
} *stnode;

void list (int n);
void rev (node * stnode);

int main ()
{
  int n, num, item;

  cout << "Enter the number of nodes: ";
  cin >> n;
  list (n);
  cout << "After reversing\n";
  rev (stnode);

  return 0;
}

void list (int n)
{
  struct node *frnt, *tmp;
  int num, i;

  stnode = (struct node *) malloc (sizeof (struct node));
  if (stnode == NULL)
    {
      cout << "Memory can not be allocated";
    }
  else
    {

      cout << "Enter the data for node 1: ";
      cin >> num;
      cout << "\n";
      stnode->num = num;
      stnode->nxt = NULL;
      tmp = stnode;

      for (i = 2; i <= n; i++)
	{
	  frnt = (struct node *) malloc (sizeof (struct node));


	  if (frnt == NULL)
	    {
	      cout << "Memory can not be allocated";
	      break;
	    }
	  else
	    {
	      cout << "Enter the data for node " << i << ": ";
	      cin >> num;
	      cout << "\n";
	      frnt->num = num;
	      frnt->nxt = NULL;
	      tmp->nxt = frnt;
	      tmp = tmp->nxt;
	    }
	}
    }
}


void rev (node * stnode)
{
  if (stnode == NULL)
    return;
  rev (stnode->nxt);

  cout << stnode->num << "\t";
}