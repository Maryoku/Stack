������� ��� ������������ ������� �� ����
���������� ������: ����. ���������� � ������� ������� � �������� ������

1) ����������� ��� ���� �� ������ ������� � �� ������ ���������� ������. ��� ������ �� ���� ���������� � ��� ������ ���� 5 �������:

        int Pop(void);//���������� ��������� ������� �����
        bool Push(int elem);//�������� elem � ����, ���������� 1 � ������ ������ � 0 � ������ ������ ��� ��������� � ����
        bool IsEmpty(void);//���������� 1, ���� ���� ����; � ��������� ������ - 0 
        int Top(void);// ���������� ��������, ���������� � ������� �����

����. � ������ ���������� �� ������� ��������� ����� �������� 
struct Node{
int value;//�������� 
int *next;//��������� �� ��������� �������
}

2) �������� ������������� ���� ����������. ��� ����� ������������� ������������������ �������� �� ������ �� 10^7 �������� (������� � ������). ����� ��������� ��������� ������������������ �������� � ����� ������������ �����, ������� ��� ���� ����������������� ���� ���������.
3) ��������� �.2) ��� ���� ��������� ����� ������������������� �������� (��������� ����� �������� �������������������).
4) ����������� ��������� ���������� ��������� �����, ��������� ������ ������� ������ �� ������ � ��������������� ���������� (�������� ������������� ���������� ������, �� ������ ������������ ������� ��� ������ ��������� ������, ����� �����).
5) �������� �������� ������ ��������� ���� 4 ��� ��������� ����������. ��� ����� ����������� �������� ���������, ���������� ���������� ����� � ��������� ����������, � ����� ������������ ��������� ��������:
   �) �������� ����� data.txt � ���������� � ���� ��� ����������� (� ����� �������� 50000 ����� ����� �� ������ � ������ ������);
   �) ���������� ����������� ����� � ������������� ������� ������������ �� ��� �����;
   �) ��������� ���� �) � �) ��� ������ ���������� �����;
   �) ����� �� ����� ��������� ����:

       ���������� � ������� �������: x ������
       ���������� � ������� ������ : y ������
       �������� ��������� �� 0.001 �.

6) � ������ ������� ������� ������ �������������� ����� (������� ���������� ��������� �������). ��� ������� ����� �� ������ ���������� ��������� � ���� ������ �����, ������� ��� ������. ��������� �������� � ���� �����, � ������� ������������ ������ ����
<����� �� ������> <��������� ���������>
���� ���������� �������� ��� ���������� ����� �� �������, �� ������ ���������� ����� ������� -1.
������������ ����� �������� ������� ����� � ��������� ������ ���� ������� ����� �������� ������������������.
������������ ���������� ��� ��������: ������������� ���������, ���������� � ������� ��������. 
