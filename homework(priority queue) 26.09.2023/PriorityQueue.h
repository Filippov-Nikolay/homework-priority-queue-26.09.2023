#pragma once
#include <iostream>

using namespace std;

struct client {
	string name;
};

class PriorityQueue {
	client* wait; // �������
	int* priority; // ���������

	int maxQueueLength; // ����. ������ �������
	int queueLength; // ������� ������ �������
public:
	PriorityQueue(int maxSize);
	~PriorityQueue();

	void Add(string, int); // ���������� ��������
	void Show(); // ����� �������
	// void ShowPriority(); // ����� ������� �� �����������

	string Extract(); // ���������� ��������

	void Clear(); // ������� �������

	bool IsEmpty(); // �������� �� ���. ���������
	bool IsFull(); // �������� �� ������������ �������

	int GetCount(); // ��������� ���-�� ���������
};

