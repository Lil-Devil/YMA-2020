#pragma once
#include <string>
#include <stack>
#include <vector>

using namespace std;

#define ID_MAXSIZE			21				// ������������ ���������� �������� � �������������� + '\0'
#define TI_MAXSIZE			4096			// ������������ ���������� ��-�� � ������� ��������������� 
#define TI_INT_DEFAULT		0x00000000		// �������� �� ��������� ��� ���� integer 
#define TI_STR_DEFAULT		0x00			// �������� �� ��������� ��� ���� string 
#define TI_NULLIDX			0xffffffff		// ��� �������� ������� ���������������
#define GLOBAL				"global"		// ���������� ���������� ������� ���������
#define TI_STR_MAXSIZE		256				// ������������ ������ ������ + '\0'
#define FUNC_COPY			"copy_str"		// ������������� ������������ �������
#define FUNC_LEN			"lenght_str"	// ������������� ������������ �������

#define PARM_ID_DEFAULT_LOCATION		L"Files\\"
#define PARM_ID_DEFAULT_EXT				L".id.txt" //��� ����� � ������ ������������ ������a(������� ��������������� � ���������)

namespace IT	// ������� �������������
{
	enum class IDDATATYPE { DEF, INT, STR };						// ���� ������ ���������������: �� ���������, integer, string
	enum class IDTYPE { D, V, F, P, L };							// ���� ���������������: �� ���������, ����������, �������, ��������, �������

	struct Entry	// ������ ������� ���������������
	{
		int idxfirstLE;							// ������ ������ ������ � ������� ������
		char areaOfVisibility[ID_MAXSIZE]{};	// ������� ���������
		char id[ID_MAXSIZE]{};					// ������������� (������������� ��������� �� ID_MAXSIZE)
		IDDATATYPE	iddatatype;					// ��� ������
		IDTYPE	idtype;							// ��� ������������
		union
		{
			int vint;							// �������� integer
			struct
			{ 
				unsigned char len;				// ��������� �������� � string
				char str[TI_STR_MAXSIZE];		// ������� string
			} vstr;								// �������� string
		}value;									// �������� ��������������
		struct Param
		{
			int count;							// ���������� ���������� �������
			vector<IDDATATYPE> types;			// ���� ���������� �������
		} params;
		string FullName;
		Entry(int idxfirstLE, string areaOfVisibility, const char* id, IDDATATYPE iddatatype, IDTYPE idtype);	
		Entry(int idxfirstLE ,IDDATATYPE iddatatype, IDTYPE idtype, char* value);								
	};
	struct IdTable // ��������� ������� ���������������
	{
		int maxsize;				// ������� ������� ��������������� < TI_MAXSIZE
		int current_size;			// ������� ������ ������� ��������������� < maxsize
		Entry** table;				// ������ ���������� �� ������ ������� ���������������

		IdTable(int size);
	};

	static Entry len(0, string(GLOBAL), FUNC_LEN, IDDATATYPE::INT, IDTYPE::F);

	void Add(IdTable& idtable, Entry* entry);
	Entry GetEntry(IdTable& idtable, int n);
	int IsId(IdTable& idtable, char id[ID_MAXSIZE], stack<string> areaOfVisibility);
	int IsLiteralInt(IdTable& idtable, char* lexema);
	int IsLiteralString(IdTable& idtable, char* lexema);
	void PrintIdTable(IdTable& idtable, const wchar_t* in);
	void Delete(IdTable& idtable);
}