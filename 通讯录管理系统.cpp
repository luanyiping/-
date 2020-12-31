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
	cout << "*****   1.�����ϵ��   *****" << endl;
	cout << "*****   2.��ʾ��ϵ��   *****" << endl;
	cout << "*****   3.ɾ����ϵ��   *****" << endl;
	cout << "*****   4.������ϵ��   *****" << endl;
	cout << "*****   5.�޸���ϵ��   *****" << endl;
	cout << "*****   6.�����ϵ��   *****" << endl;
	cout << "*****   7.�˳�ͨѶ¼   *****" << endl;

}
void addperson(addressbooks* abs)
{
	if (abs->size == max)
	{
		cout << "ͨѶ¼�������޷����!" << endl;
		return;
	}
	else
	{
		string name;
		cout << "����������:" << endl;
		cin >> name;
		abs->personarray[abs->size].name = name;
		string sex;
		cout << "�������Ա�:" << endl;
		cin >> sex;
		abs->personarray[abs->size].sex = sex;
		string age;
		cout << "����������:" << endl;
		cin >> age;
		abs->personarray[abs->size].age = age;
		string phone;
		cout << "��������ϵ�绰:" << endl;
		cin >> phone;
		abs->personarray[abs->size].phone = phone;
		string address;
		cout << "�������ͥסַ:" << endl;
		cin >> address;
		abs->personarray[abs->size].address = address;
		abs->size++;
		cout << "��ӳɹ�" << endl;
		system("pause");
		system("cls");
	}
}
void showperson(addressbooks* abs)
{
	if (abs->size == 0)
	{
		cout << "��ǰ��¼Ϊ��" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		for (int i = 0; i <abs->size; i++)
		{
			cout<<"����Ϊ:" << abs->personarray[i].name << "\t";
			cout <<"�Ա�Ϊ:"<< abs->personarray[i].sex  << "\t";
			cout <<"����Ϊ:"<< abs->personarray[i].age  << "\t";
			cout <<"�绰Ϊ:"<<abs->personarray[i].phone << "\t";
			cout <<"��ַΪ:"<< abs->personarray[i].address << endl;
		}
		system("pause");
		system("cls");
	}
}
int isexist(addressbooks* abs,string name)   //�����ϵ���Ƿ���ڣ������ڣ�������ϵ�����������еľ���λ�ã������ڷ���-1   ����1:ͨѶ¼   ����2:��ϵ������
{
	for (int i = 0; i < abs->size; i++)
	{
		if (abs->personarray[i].name == name)
		{
			return i;
		}
	}
	return -1;    //����������û���ҵ�������-1
}
void deleteperson(addressbooks* abs)
{
	cout << "��������Ҫ����ɾ������ϵ��" << endl;
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
		cout << "���޴���" << endl;
	system("pause");
	system("cls");
}
void findperson(addressbooks* abs)
{
	cout << "������������˵�����:" << endl;
	string name;
	cin >> name;
	for (int i = 0; i < abs->size; i++)
	{
		if (abs->personarray[i].name == name)
		{
			cout << "����Ϊ:" << abs->personarray[i].name << "\t";
			cout << "�Ա�Ϊ:" << abs->personarray[i].sex << "\t";
			cout << "����Ϊ:" << abs->personarray[i].age << "\t";
			cout << "�绰Ϊ:" << abs->personarray[i].phone << "\t";
			cout << "��ַΪ:" << abs->personarray[i].address << endl;
			cout << "���ҳɹ�" << endl;
			return;
		}
	}
	cout << "���޴���" << endl;
}
void modifyperson(addressbooks* abs)
{
	cout << "������Ҫ�޸��˵�����:" << endl;
	string name;
	cin >> name;
	int ret = isexist(abs, name);
	if (ret != -1)
	{
		cout << "�޸ĺ�����Ϊ:";
		cin >> abs->personarray[ret].name;
		cout << "�޸ĺ��Ա�Ϊ:";
		cin >> abs->personarray[ret].sex;
		cout << "�޸ĺ�����Ϊ:";
		cin >> abs->personarray[ret].age;
		cout << "�޸ĺ�绰Ϊ:";
		cin >> abs->personarray[ret].phone;
		cout << "�޸ĺ��ַΪ:";
		cin >> abs->personarray[ret].address;
		return;
	}
	else
	{
		cout << "���޴��ˣ��޷��޸�" << endl;
		return;
	}

}
void clearperson(addressbooks* abs)
{
	abs->size = 0;
	cout << "��ճɹ�" << endl;
	system("pause");
	system("cls");
}

int main()
{
	addressbooks abs;   //�����ṹ�����
	abs.size = 0;          //��ʼ��ͨѶ¼����
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
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		}
	}
	system("pause");
	return 0;
}