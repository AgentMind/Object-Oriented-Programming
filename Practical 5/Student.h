#ifndef studenttask5
#define studenttask5

class student{
    private:
    string name; 
    int numUnits;
    string *unitList;

    public:
    student(string inputName, int units){
        name = inputName;
        numUnits = units; 
        unitList = new string[units];
    }

    void run(); 
    void userInput(string unitList[], int numUnits);
    void display(int numUnits, string unitList[], string name);

    ~student(){
        delete[] unitList;  
    }

};

void student::run(){

    userInput(unitList, numUnits);
    display(numUnits, unitList, name);

}

void student::userInput(string unitList[], int numUnits){

    for(int i = 0; i < numUnits; i++){
        cout << "Enter the name of the unit (End with ?) " << i+1 << ":" << endl;
        string c; 
        getline(cin, c, '?');
        unitList[i] = c;
        //cin >> unitList[i];
    }

}

void student::display(int numUnits, string unitList[],string name){
    cout << endl;
    cout << name << endl;

    for(int j = 0; j < numUnits; j++){
        cout << unitList[j] << endl;
    }

}


#endif