#include<iostream>
#include<fstream> 
using namespace std;

//�ļ����� - �ı��ļ� - д�ļ�
/*   д�ļ��������£�
1. ����ͷ�ļ�   #include <fstream>

2. ����������   ofstream ofs;

3. ���ļ�     ofs.open("�ļ�·��",�򿪷�ʽ);

4. д����       ofs << "д�������";

5. �ر��ļ�     ofs.close();
*/

/*�ļ��򿪷�ʽ��
| �򿪷�ʽ    | ����                       |
| ----------- | -------------------------- |
| ios::in     | Ϊ���ļ������ļ�         |
| ios::out    | Ϊд�ļ������ļ�         |
| ios::ate    | ��ʼλ�ã��ļ�β           |
| ios::app    | ׷�ӷ�ʽд�ļ�             |
| ios::trunc  | ����ļ�������ɾ�����ٴ��� |
| ios::binary | �����Ʒ�ʽ                 |
*/ 

/*ע�⣺�ļ��򿪷�ʽ�������ʹ�ã�����|������
���磺�ö����Ʒ�ʽд�ļ� ios::binary |  ios:: out
*/

/*�ܽ᣺
* �ļ������������ͷ�ļ� fstream
* ���ļ��������� ofstream ,����fstream��
* ���ļ�ʱ����Ҫָ�������ļ���·�����Լ��򿪷�ʽ
* ����<<�������ļ���д����
* ������ϣ�Ҫ�ر��ļ�
 */

void test01()
{
	ofstream ofs;
	ofs.open("1.txt",ios::out);
	ofs<<"����������"<<endl;
	ofs<<"�Ա���"<<endl;
	ofs<<"���䣺22"<<endl;
	
	ofs.close(); 
}

int main() {

    test01();
	system("pause");

	return 0;
}
