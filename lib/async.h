#pragma once


#include "Bulk.h"
#include "WriteThreads.h"
#include "Context.h"
#include <unordered_set>
using namespace std;


/*
start - ������� ����� ������ Context
������� ��� � ������ ����������
get - �������� ������ ������� Bulk ����������� ���������
� ����� ����� �������� ������, ������� ����� �������� �� �����
��� ������ ���������� ������������� ������� WriteThreads, 
������������� ������������ �������
Lib::end - �������� ������� Bulk ��� ������ ������ �� �����������,
�������� �� ������� ��������� ������ ������
*/


namespace async 
{

using handle_t = void *;

WriteThreads tObj;
unordered_set<void*> contextArray;

handle_t connect(std::size_t bulk);


void receive(handle_t handle, const char* data, std::size_t size);

void disconnect(handle_t handle);

void wait();

}
