#include<iostream>
#include<fstream> 
using namespace std;

//�ļ����� - �ı��ļ� - ���ļ�
/*���ļ��������£�(��д�ļ�����)

1. ����ͷ�ļ�   #include <fstream>

2. ����������   ifstream ifs;

3. ���ļ����ж��ļ��Ƿ�򿪳ɹ�     ifs.open("�ļ�·��",�򿪷�ʽ);

4. ������       ���ַ�ʽ��ȡ

5. �ر��ļ�     ifs.close();
*/


/*�ܽ᣺
���ļ��������� ifstream ������fstream��
����is_open���������ж��ļ��Ƿ�򿪳ɹ�
close �ر��ļ� 
*/

void test01()
{
	ifstream ifs;
	ifs.open("1.txt",ios::in);
	
    if(!ifs.is_open())
    {
		cout<<"�ļ���ʧ��"<<endl;
		return;
	}
	
//		//��һ�ַ�ʽ
//		char buf[1024] = { 0 };
//		while (ifs >> buf)
//		{
//			cout << buf << endl;
//		}
	
//		//�ڶ���
//		char buf[1024] = { 0 };
//		while (ifs.getline(buf,sizeof(buf)))
//		{
//			cout << buf << endl;
//		}
	
		//������
		//string buf;
		//while (getline(ifs, buf))
		//{
		//	cout << buf << endl;
		//}
		
		 
	//�����ַ��� 
	char c;
	while((c=ifs.get())!=EOF)
	{
		cout<<c;
	}
	
	ifs.close(); 
}


int main() {

    test01();
	system("pause");

	return 0;
}
