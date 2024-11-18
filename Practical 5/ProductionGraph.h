#ifndef productiongraph
#define productiongraph


class  ProductionGraph{
    private:
    int *production;
    int numOfPlants;

    public:
    void inputData(int a[], int numOfPlants);
    void graph(const int a[], int numOfPlants);
    void getTotal(int&);
    void printAsterisks(int n);
    int create();
    ProductionGraph(int size){
        production = new int[size];
        numOfPlants = size;
    }
    ~ProductionGraph(){
        delete[] production;
    }
};

int ProductionGraph::create()
{

    cout << "This program displays a graph showing\n"
         << "production for each plant in the company.\n";

    inputData(production, numOfPlants);
    graph(production, numOfPlants);

    return 0; 
}


void ProductionGraph::inputData(int production[], int numOfPlants)
{
    for (int i = 1; i <= numOfPlants; i++)
    {
        cout << endl
             << "Enter production data for plant number "
             << i << endl;
        getTotal(production[i - 1]);
    }
}

void ProductionGraph::getTotal(int& amount)
{
    cout << "Enter a positive integer of units produced by each department, ranging from 1-20.\n" << endl;
    cin >> amount;
    while (amount < 0)
    {
    	    cout<<"input again" << endl;
        cin >> amount;
    }
}

void ProductionGraph::graph(const int production[], int numOfPlants)
{
    cout << "\nUnits produced in units:\n";
    for (int i = 1; i <= numOfPlants; i++)
    {
        cout << "Plant #" << i << " ";
        printAsterisks(production[i - 1]);
        cout << endl;
    }
}

void ProductionGraph::printAsterisks(int n)
{
    for (int count = 1; count <= n; count++)
        cout << "*";
}


#endif 