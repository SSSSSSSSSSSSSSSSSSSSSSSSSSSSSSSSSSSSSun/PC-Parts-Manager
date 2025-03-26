#pragma once
#include <string>

#define DDR1 "DDR1"
#define DDR2 "DDR2"
#define DDR3 "DDR3"
#define DDR4 "DDR4"
#define DDR5 "DDR5"

struct CPUMemorySpec {
    std::string m_strType;                // ����
    unsigned short m_usClock;             // Ŭ�� (MHz)
};


class CPU{
private:
	std::string m_strManufacturer;		  // ������

	std::string m_strGeneration;		  // ����
	std::string m_strArchitecture;		  // ��Ű����
    std::string m_strProcess;             // ����

    bool m_isDesktop;                     // ����ũž/����� ����
    std::string m_strReleaseYear;         // ��� �⵵
    bool m_isOfficialReleaseInKorea;      // ���� �ѱ� �߸� ����

    unsigned short m_usCores;             // �ھ� ��
    unsigned short m_usThreads;           // ������ ��
    unsigned int m_unL1Cache;             // L1 ĳ�� (KB)
    unsigned int m_unL2Cache;             // L2 ĳ�� (KB)
    unsigned int m_unL3Cache;             // L3 ĳ�� (KB)
    unsigned short m_usBaseClock;         // �⺻ Ŭ�� (MHz)
    unsigned short m_usBoostClock;        // �ν�Ʈ Ŭ�� (MHz)
    CPUMemorySpec m_cMemory;              // �� �԰�/Ŭ��
    std::string m_sIntegratedGraphics;    // ���� �׷���
    unsigned short m_usTDP;               // TDP





public:
    CPU();
    ~CPU();
};

class Intel_CPU : public CPU {
public:
    unsigned short m_MTP;                 // MTP
};

class Intel_Core_13th : public Intel_CPU {
    unsigned short m_usECores;             // E�ھ� ��
    unsigned short m_usEThreads;           // E�ھ� ������ ��
    unsigned short m_usEBaseClock;         // E�ھ� �⺻ Ŭ�� (MHz)
    unsigned short m_usEMaxClock;          // E�ھ� �ִ� Ŭ�� (MHz)
};

class AMD_CPU : public CPU {
public:
    unsigned short m_PPT;                 // PPT
};