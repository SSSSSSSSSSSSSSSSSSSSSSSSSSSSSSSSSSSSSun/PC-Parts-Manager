#pragma once
#include <string>

class RAM {

    
};


class CPU{


private:
	std::string sManufacturer;		// ������

	std::string sGeneration;		// ����
	std::string sArchitecture;		// ��Ű����
    std::string sProcess;           // ����

    bool isDesktop;                // ����ũž/����� ����
    std::string sReleaseYear;       // ��� �⵵

    unsigned short usCores;         // �ھ� ��
    unsigned short usThreads;       // ������ ��
    unsigned int uiL1Cache;         // L1 ĳ�� (KB)
    unsigned int uiL2Cache;         // L2 ĳ�� (KB)
    unsigned int uiL3Cache;         // L3 ĳ�� (KB)
    unsigned short usBaseClock;     // �⺻ Ŭ�� (MHz)
    unsigned short usMaxClock;      // �ִ� Ŭ�� (MHz)

    std::string sIntegratedGraphics;// ���� �׷���
    unsigned short usTDP;           // TDP

    bool isOfficialReleaseInKorea;  // ���� �ѱ� �߸� ����
    RAM cMemory;                    // �� �԰�/Ŭ��
};

class Intel_CPU : public CPU {
public:
    unsigned short MTP;             // MTP
};

class AMD_CPU : public CPU {
public:
    unsigned short PPT;  // PPT
};