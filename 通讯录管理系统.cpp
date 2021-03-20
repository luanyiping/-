#include<iostream>
#include<string>
#define max 1000

using namespace std;
struct person
{
	string name;
	string sex;
	string age;
	string phone;
	string address;
};
struct addressbooks
{
	struct person personarray[max];
	int size;
};
void showmenu()
{
	cout << "*****   1.添加联系人   *****" << endl;
	cout << "*****   2.显示联系人   *****" << endl;
	cout << "*****   3.删除联系人   *****" << endl;
	cout << "*****   4.查找联系人   *****" << endl;
	cout << "*****   5.修改联系人   *****" << endl;
	cout << "*****   6.清空联系人   *****" << endl;
	cout << "*****   7.退出通讯录   *****" << endl;

}
void addperson(addressbooks* abs)
{
	if (abs->size == max)
	{
		cout << "通讯录已满，无法添加!" << endl;
		return;
	}
	else
	{
		string name;
		cout << "请输入姓名:" << endl;
		cin >> name;
		abs->personarray[abs->size].name = name;
		string sex;
		cout << "请输入性别:" << endl;
		cin >> sex;
		abs->personarray[abs->size].sex = sex;
		string age;
		cout << "请输入年龄:" << endl;
		cin >> age;
		abs->personarray[abs->size].age = age;
		string phone;
		cout << "请输入联系电话:" << endl;
		cin >> phone;
		abs->personarray[abs->size].phone = phone;
		string address;
		cout << "请输入家庭住址:" << endl;
		cin >> address;
		abs->personarray[abs->size].address = address;
		abs->size++;
		cout << "添加成功" << endl;
		system("pause");
		system("cls");
	}
}
void showperson(addressbooks* abs)
{
	if (abs->size == 0)
	{
		cout << "当前记录为空" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		for (int i = 0; i <abs->size; i++)
		{
			cout<<"姓名为:" << abs->personarray[i].name << "\t";
			cout <<"性别为:"<< abs->personarray[i].sex  << "\t";
			cout <<"年龄为:"<< abs->personarray[i].age  << "\t";
			cout <<"电话为:"<<abs->personarray[i].phone << "\t";
			cout <<"地址为:"<< abs->personarray[i].address << endl;
		}
		system("pause");
		system("cls");
	}
}
int isexist(addressbooks* abs,string name)   //检测联系人是否存在，若存在，返回联系人所在数组中的具体位置，不存在返回-1   参数1:通讯录   参数2:联系人姓名
{
	for (int i = 0; i < abs->size; i++)
	{
		if (abs->personarray[i].name == name)
		{
			return i;
		}
	}
	return -1;    //遍历结束都没有找到，返回-1
}
void deleteperson(addressbooks* abs)
{
	cout << "请输入您要输入删除的联系人" << endl;
	string name;
	cin >> name;
	int ret = isexist(abs, name);
	if (ret != -1)
	{
		for (int i = ret; i < abs->size - 1; i++)
		{
			abs->personarray[i] = abs->personarray[i + 1];
		}
		abs->size--;
	}
	else
		cout << "查无此人" << endl;
	system("pause");
	system("cls");
}
void findperson(addressbooks* abs)
{
	cout << "请输入待查找人的姓名:" << endl;
	string name;
	cin >> name;
	for (int i = 0; i < abs->size; i++)
	{
		if (abs->personarray[i].name == name)
		{
			cout << "姓名为:" << abs->personarray[i].name << "\t";
			cout << "性别为:" << abs->personarray[i].sex << "\t";
			cout << "年龄为:" << abs->personarray[i].age << "\t";
			cout << "电话为:" << abs->personarray[i].phone << "\t";
			cout << "地址为:" << abs->personarray[i].address << endl;
			cout << "查找成功" << endl;
			return;
		}
	}
	cout << "查无此人" << endl;
}
void modifyperson(addressbooks* abs)
{
	cout << "请输入要修改人的姓名:" << endl;
	string name;
	cin >> name;
	int ret = isexist(abs, name);
	if (ret != -1)
	{
		cout << "修改后姓名为:";
		cin >> abs->personarray[ret].name;
		cout << "修改后性别为:";
		cin >> abs->personarray[ret].sex;
		cout << "修改后年龄为:";
		cin >> abs->personarray[ret].age;
		cout << "修改后电话为:";
		cin >> abs->personarray[ret].phone;
		cout << "修改后地址为:";
		cin >> abs->personarray[ret].address;
		return;
	}
	else
	{
		cout << "查无此人，无法修改" << endl;
		return;
	}

}
void clearperson(addressbooks* abs)
{
	abs->size = 0;
	cout << "清空成功" << endl;
	system("pause");
	system("cls");
}

int main()
{
	addressbooks abs;   //创建结构体变量
	abs.size = 0;          //初始化通讯录人数
	int select = 0;
	while (1)
	{
		showmenu();
		cin >> select;
		switch (select)
		{
		case 1:
			addperson(&abs);
			break;
		case 2:
			showperson(&abs);
			break;
		case 3:
			deleteperson(&abs);
			break;
		case 4:
			findperson(&abs);
			system("pause");
			system("cls");
			break;
		case 5 :
			modifyperson(&abs);
			system("pause");
			system("cls");
			break;
		case 6:
			clearperson(&abs);
			break;
		case 7:
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		}
	}
	system("pause");
	return 0;
}
