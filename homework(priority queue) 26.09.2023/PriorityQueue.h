#pragma once
#include <iostream>

using namespace std;

struct client {
	string name;
};

class PriorityQueue {
	client* wait; // Очередь
	int* priority; // Приоритет

	int maxQueueLength; // Макс. размер очереди
	int queueLength; // Текущий размер очереди
public:
	PriorityQueue(int maxSize);
	~PriorityQueue();

	void Add(string, int); // Добавление элемента
	void Show(); // Вывод очереди
	// void ShowPriority(); // Вывод очереди по приоритетам

	string Extract(); // Извлечение элемента

	void Clear(); // Очистка очереди

	bool IsEmpty(); // Проверка на сущ. элементов
	bool IsFull(); // Проверка на переполнение очереди

	int GetCount(); // Получение кол-во элементов
};

