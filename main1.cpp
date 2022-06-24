#include <iostream>

using namespace std;

int lp = 1, lp1 = 1, lp2 = 1, lp3 = 1;
int key_id = 0, n, j = 0, final = 0, a, ch = 0;
double acc = 0, newProfit, newLoss;
string newName;
float newAmt;

int index = 0;
int id1[100];
int account_number1[100];
int amount1[100];
string name1[100];
int profit1[100];
int loss1[100];
string gender1[100];

class Employee
{
protected:
    int id;
    double accNo;
    string name;
    double profit, loss;
    float amt;

public:
    void setID(int i)
    {
        id = i;
    }
    int getID()
    {
        return id;
    }
    void setAccNo(double a)
    {
        accNo = a;
    }
    double getAccNo()
    {
        return accNo;
    }
    void getDataE()
    {
        cout << "Enter the Emp Id : ";
        cin >> id;
        cout << "Enter the Account No : ";
        cin >> accNo;
        cout << "Enter the Name : ";
        cin >> name;
        cout << "Enter the Balance : ";
        cin >> amt;
        id1[index] = id;
        account_number1[index] = accNo;
        name1[index] = name;
        amount1[index] = amt;
    }
};

class HR : public Employee
{
    string gender;

public:
    void getData(int x)
    {
        cout << "Enter Employee " << x + 1 << " Data" << endl;
        getDataE();
        cout << "Enter the gender : ";
        cin >> gender;
        cout << "Enter the Profit : ";
        cin >> profit;
        cout << "Enter the Loss : ";
        cin >> loss;
        gender1[index] = gender;
        profit1[index] = profit;
        loss1[index] = loss;
    }
    void add()
    {

        cout << "\nOkay.." << endl;
        final = n + j;
        for (int i = j; i < final; i++)
        {
            getData(i);
            index++;
            j++;
        }
        cout << "\nOkay...Great Your All Data Saved!\n";
    }
    void search()
    {
        a = 0;
        cout << "\nEnter Emp ID : ";
        cin >> key_id;
        for (int i = 0; i < index; i++)
        {
            if (key_id == id1[i])
            {
                cout << "\nEmp ID \t|\t Acc No \t|\t Name \t|\t Balance \t|\t Gender \t\n";
                cout << "\n " << id1[i] << " \t|\t " << account_number1[i] << " \t|\t " << name1[i] << " \t|\t " << amount1[i] << " \t|\t " << gender1[i] << " \t\n";
            }
            else
            {
                a++;
            }
        }
        if (a == index)
        {
            printf("\n\n Sorry.. This ID Not Exist. Please Check!!\n");
            a = 0;
        }
    }
    void display()
    {
        cout << "\n\t Display All Data \t\n";
        cout << "================================================================================================" << endl;
        cout << "\nEmp ID \t|\t Acc No \t|\t Name \t|\t Balance \t|\t Gender \t\n";
        cout << "================================================================================================" << endl;
        for (int i = 0; i < index; i++)
        {
            if (id1[i] != 0)
            {
                cout << "\n " << id1[i] << " \t|\t " << account_number1[i] << " \t|\t " << name1[i] << " \t|\t " << amount1[i] << " \t|\t " << gender1[i] << " \t\n";
            }
        }
        cout << endl;
    }
    void deleteData()
    {
        cout << "\nEnter Emp ID : ";
        cin >> key_id;
        for (int i = 0; i < index; i++)
        {
            if (key_id == id1[i])
            {
                id1[i] = 0;
            }
        }
    }
};

class Manager : public Employee
{
public:
    void display()
    {
        cout << "\n\t All Emplyee Data \t\n";
        cout << "=================================================================================================================" << endl;
        cout << "\nEmp ID \t|\t Acc No \t|\t Name \t\t|\t Balance \t|\t Profit \t|\t Loss \t\n";
        cout << "=================================================================================================================" << endl;
        for (int i = 0; i < index; i++)
        {
            if (id1[i] != 0)
            {
                cout << "\n " << id1[i] << " \t|\t " << account_number1[i] << " \t|\t " << name1[i] << " \t\t|\t " << amount1[i] << " \t|\t " << profit1[i] << " \t|\t " << loss1[i] << " \t\n";
            }
        }
        cout << endl;
    }
    void search()
    {
        a = 0;
        cout << "\nEnter Emp ID : ";
        cin >> key_id;
        for (int i = 0; i < index; i++)
        {
            if (key_id == id1[i])
            {
                cout << "\nEmp ID \t|\t Acc No \t|\t Name \t\t|\t Balance \t|\t Profit \t|\t Loss \t\n";
                cout << "\n " << id1[i] << " \t|\t " << account_number1[i] << " \t|\t " << name1[i] << " \t\t|\t " << amount1[i] << " \t|\t " << profit1[i] << " \t|\t " << loss1[i] << " \t\n";
            }
            else
            {
                a++;
            }
        }
        if (a == index)
        {
            printf("\n\n Sorry.. This ID Not Exist. Please Check!!\n");
            a = 0;
        }
    }
    void update()
    {
        long int empID;
        cout << "\nEnter Emp Id : ";
        cin >> empID;
        int ch1, ch2;
        for (int i = 0; i < index; i++)
        {
            if (id1[i] == empID)
            {
                cout << "\n  :: Function ::\n\n";
                cout << "-------------------------------------------------------------------------\n";
                cout << "\t1. | Name" << endl;
                cout << "\t2. | Balance" << endl;
                cout << "\t3. | Profit" << endl;
                cout << "\t4. | Loss" << endl;
                cout << "\t5. | Exit " << endl;
                cout << "-------------------------------------------------------------------------\n";

                cout << "\nEnter your choice : ";
                cin >> ch;

                switch (ch)
                {
                case 1:
                    cout << "\nDo you really want to Change Name ?\n";
                    cout << "1. Yes\n2. No\n Choice : ";
                    cin >> ch1;
                    switch (ch1)
                    {
                    case 1:
                        cout << "\nYour Old Name is " << name1[i];
                        cout << "\nPlease Enter Correct Name ?\n";
                        cin >> newName;
                        cout << "\nNow, Your New Name is " << newName;

                        cout << "\nDo you really want to Update ?\n";
                        cout << "1. Yes\n2. No\n Choice : ";
                        cin >> ch2;
                        switch (ch2)
                        {
                        case 1:
                            name1[i] = newName;
                            cout << "\nData Updated Succesfully...\n";
                            break;
                        case 2:
                            cout << "Okay";
                            break;
                        default:
                            cout << "\nSorry Invalid....\n";
                            break;
                        }
                        break;
                    case 2:
                        cout << "Okay..No Problem\n\n";

                        break;
                    default:
                        cout << "Invalid";
                        break;
                    }
                    break;
                case 2:
                    cout << "\nDo you really want to Change Balance ?\n";
                    cout << "1. Yes\n2. No\n Choice : ";
                    cin >> ch1;
                    switch (ch1)
                    {
                    case 1:
                        cout << "\nYour Old Balance is " << amount1[i];
                        cout << "\nPlease Enter Correct Balance ?\n";
                        cin >> newAmt;
                        cout << "\nNow, Your New Balance is " << newAmt;

                        cout << "\nDo you really want to Update ?\n";
                        cout << "1. Yes\n2. No\n Choice : ";
                        cin >> ch2;
                        switch (ch2)
                        {
                        case 1:
                            amount1[i] = newAmt;
                            cout << "\nData Updated Succesfully...\n";
                            break;
                        case 2:
                            cout << "Okay";

                            break;
                        default:
                            cout << "\nSorry Invalid....\n";
                            break;
                        }
                        break;
                    case 2:
                        cout << "Okay..No Problem\n\n";

                        break;
                    default:
                        cout << "Invalid";
                        break;
                    }
                    break;
                case 3:
                    cout << "\nDo you really want to Change Profit Amount ?\n";
                    cout << "1. Yes\n2. No\n Choice : ";
                    cin >> ch1;
                    switch (ch1)
                    {
                    case 1:
                        cout << "\nYour Old Profit Amount is " << profit1[i];
                        cout << "\nPlease Enter Correct Profit Amount ?\n";
                        cin >> newProfit;
                        cout << "\nNow, Your New Profit Amount is " << newProfit;

                        cout << "\nDo you really want to Update ?\n";
                        cout << "1. Yes\n2. No\n Choice : ";
                        cin >> ch2;
                        switch (ch2)
                        {
                        case 1:
                            profit1[i] = newProfit;
                            cout << "\nData Updated Succesfully...\n";
                            break;
                        case 2:
                            cout << "Okay";

                            break;
                        default:
                            cout << "\nSorry Invalid....\n";
                            break;
                        }
                        break;
                    case 2:
                        cout << "Okay..No Problem\n\n";

                        break;
                    default:
                        cout << "Invalid";
                        break;
                    }
                    break;
                case 4:
                    cout << "\nDo you really want to Change Loss Amount ?\n";
                    cout << "1. Yes\n2. No\n Choice : ";
                    cin >> ch1;
                    switch (ch1)
                    {
                    case 1:
                        cout << "\nYour Old Loss Amount is " << loss1[i];
                        cout << "\nPlease Enter Correct Loss Amount ?\n";
                        cin >> newLoss;
                        cout << "\nNow, Your New Loss Amount is " << newLoss;

                        cout << "\nDo you really want to Update ?\n";
                        cout << "1. Yes\n2. No\n Choice : ";
                        cin >> ch2;
                        switch (ch2)
                        {
                        case 1:
                            loss1[i] = newLoss;
                            cout << "\nData Updated Succesfully...\n";
                            break;
                        case 2:
                            cout << "Okay";

                            break;
                        default:
                            cout << "\nSorry Invalid....\n";
                            break;
                        }
                        break;
                    case 2:
                        cout << "Okay..No Problem\n\n";

                        break;
                    default:
                        cout << "Invalid";
                        break;
                    }
                    break;
                default:
                    printf("\nInvalid !!\n");
                    break;
                }
            }
        }
    }
};

class General : public Employee
{
public:
    void search()
    {
        a = 0;
        cout << "\nEnter Emp Account No : ";
        cin >> acc;
        for (int i = 0; i < index; i++)
        {
            if (acc == account_number1[i])
            {
                printf("\nEmp ID \t|\t Acc No \t|\t Name \t\t|\t Balance \n");
                cout << "\n " << id1[i] << " \t|\t " << account_number1[i] << " \t|\t " << name1[i] << " \t\t|\t " << amount1[i] << " \t\n";
            }
            else
            {
                a++;
            }
        }
        if (a == n)
        {
            printf("\n\n Sorry.. This ID Not Exist. Please Check!!\n");
            a = 0;
        }
    }
};

void submenu()
{
    cout << "\n  :: Function ::\n\n";
    cout << "\t1. | Display All Data" << endl;
    cout << "\t2. | Update Data" << endl;
    cout << "\t3. | Search By ID" << endl;
    cout << "\t4. | Exit " << endl;
    cout << "-------------------------------------------------------------------------\n";
}
void menu()
{
    cout << "\n  :: Function ::\n\n";
    cout << "\t1. | Add Data" << endl;
    cout << "\t2. | Display All Data" << endl;
    cout << "\t3. | Search By ID" << endl;
    cout << "\t4. | Delete Data" << endl;
    cout << "\t5. | Exit " << endl;
    cout << "-------------------------------------------------------------------------\n";
}

void mainScreen()
{
    cout << "\n\n  :: MAIN SCREEN ::\n\n";
    cout << "\t1. HR Login" << endl;
    cout << "\t2. Manager Login" << endl;
    cout << "\t3. General Login" << endl;
    cout << "\t4. Exit " << endl;
     cout << "-------------------------------------------------------------------------\n";
}

int main()
{
    int choice = 0;
    HR h[100];
    Manager m[100];
    General g[100];
    cout << "\n\t   Employee MANAGEMENT SYSTEM  \n\n";
    cout << "-------------------------------------------------------------------------\n";
    while (lp)
    {
        mainScreen();
        cout << "\n Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            while (lp1)
            {
                cout << "\n======= HR Login ======= \n";
                menu();
                cout << "\n Enter your choice: ";
                cin >> ch;
                switch (ch)
                {
                case 1:
                    cout << "Enter the number of Entry : ";
                    cin >> n;
                    h[n].add();
                    break;
                case 2:
                    h[n].display();
                    break;
                case 3:
                    cout << "How many Emp you want to Search : ";
                    cin >> n;
                    h[n].search();
                    break;
                case 4:
                    cout << "How many Emp you want to Delete : ";
                    cin >> n;
                    h[n].deleteData();
                    break;
                case 5:
                    lp1 = 0;
                    break;
                }
            }
            break;
        case 2:
            while (lp2)
            {
                cout << "\n======= Manager Login ======= \n";
                submenu();
                cout << "\n Enter your choice: ";
                cin >> ch;
                switch (ch)
                {
                case 1:
                    m[n].display();
                    break;
                case 2:
                    cout << "How many Emp Data you want to update : ";
                    cin >> n;
                    m[n].update();
                    break;
                case 3:
                    cout << "How many Emp you want to search : ";
                    cin >> n;
                    m[n].search();
                    break;
                case 4:
                    lp2 = 0;
                    break;
                default:
                    break;
                }
            }
            break;
        case 3:
            while (lp3)
            {
                cout << "\n======= General Login ======= \n";
                cout << "\n  :: Function ::\n\n";
                cout << "\t1. | Search By Account No" << endl;
                cout << "\t2. | Exit" << endl;
                cout << "-------------------------------------------------------------------------\n";
                cout << "\n Enter your choice: ";
                cin >> ch;
                switch (ch)
                {
                case 1:
                    cout << "How many Emp you want to search : ";
                    cin >> n;
                    g[n].search();
                    break;
                case 2:
                    lp3 = 0;
                    break;
                }
            }
            break;
        case 4:
            lp = 0;
            cout << "\nT H A N K   Y O U \n";
            cout<<"We look forward to working with you again.\n"<<endl;
            break;
        }
    }

    return 0;
}