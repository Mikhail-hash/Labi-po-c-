#include <iostream>
using namespace std;
struct node
{
    int Key;
    int Count;
    node* Left;
    node* Right;
};

class TREE
{
private:
    node* Tree; //Указатель на корень дерева.
    void Search(int, node**);
public:
    TREE()
    {
        Tree = NULL;
    }
    node** GetTree()
    {
        return &Tree;
    } 
    //Получение вершины дерева.
    void BuildTree();
    void CleanTree(node**);
    void ObhodEnd(node**);
    void ObhodLeft(node**);
    void ObhodBack(node**);
    void Swap(node**);
    void Vyvod(node**, int);
    int Height(node**);
};
int main()
{
    TREE A;
    A.BuildTree();
    cout << "\nVyvod Dereva:\n";
    A.Vyvod(A.GetTree(), 0);
    cout << "\nVysota dereva:" << A.Height(A.GetTree()) << endl;
    cout << "\nLevostoronnyi obhod dereva: ";
    A.ObhodLeft(A.GetTree());
    cout << "\nKonsevoy obhod dereva: "; A.ObhodEnd(A.GetTree());
    cout << "\nObratniy obhod dereva: "; A.ObhodBack(A.GetTree());
    A.CleanTree(A.GetTree());
    system("pause");
    return 0;
}
void TREE::BuildTree()
{
    int el;
    cout << "Vvedite slovo ...\n";
    cin >> el;
    while (el != 0)
    {
        Search(el, &Tree); cin >> el;
    }
}
void TREE::Search(int x, node** p)
{
    if (*p == NULL)
    {
        *p = new(node);
        (**p).Key = x; (**p).Count = 1;
        (**p).Left = NULL; (**p).Right = NULL;
    }
    else
        if (x < (**p).Key) Search(x, &((**p).Left));
        else
            if (x > (**p).Key) Search(x, &((**p).Right));
            else (**p).Count = (**p).Count + 1;
}
void TREE::Swap(T& a, T& b) {
    T tmp(std::move(a));
    a = std::move(b);
    b = std::move(tmp);
}
void TREE::ObhodLeft(node** w)
{
    if (*w != NULL)
    {
        cout << (**w).Key << " ";
        ObhodLeft(&((**w).Left));
        ObhodLeft(&((**w).Right));
    }
}
//Концевой обход дерева.
void TREE::ObhodEnd(node** w)
//*w - указатель на корень дерева.
{
    if (*w != NULL)
    {
        ObhodEnd(&((**w).Left));
        ObhodEnd(&((**w).Right));
        cout << (**w).Key << " ";
    }
}
//Обратный обход дерева.
void TREE::ObhodBack(node** w)
{
    if (*w != NULL)
    {
        ObhodBack(&((**w).Left));
        cout << (**w).Key << " ";
        ObhodBack(&((**w).Right));
    }
}
//Очистка дерева.
void TREE::CleanTree(node** w)
{
    if (*w != NULL)
    {
        CleanTree(&((**w).Left));
        CleanTree(&((**w).Right));
        delete* w;
    }
}
//Изображение дерева *w на экране дисплея(рекурсивный алгоритм).
void TREE::Vyvod(node** w, int l)
{
    int i;
    if (*w != NULL)
    {
        Vyvod(&((**w).Right), l + 1);
        for (i = 1; i <= l; i++) cout << " ";
        cout << (**w).Key << endl;
        Vyvod(&((**w).Left), l + 1);
    }
}
//Определение высоты бинарного дерева.
int TREE::Height(node** w)
{
    int h1, h2;
    if (*w == NULL) return (-1);
    else
    {
        h1 = Height(&((**w).Left));
        h2 = Height(&((**w).Right));
        if (h1 > h2) return (1 + h1);
        else return (1 + h2);
    }
}