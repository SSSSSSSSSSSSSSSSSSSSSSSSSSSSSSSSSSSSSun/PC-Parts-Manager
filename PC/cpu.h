#pragma once
#include <string>

#define DDR1 "DDR1"
#define DDR2 "DDR2"
#define DDR3 "DDR3"
#define DDR4 "DDR4"
#define DDR5 "DDR5"

struct CPUMemorySpec {
    std::string m_strType;                // 종류
    unsigned short m_usClock;             // 클럭 (MHz)
};


class CPU{
private:
	std::string m_strManufacturer;		  // 제조사

	std::string m_strGeneration;		  // 세대
	std::string m_strArchitecture;		  // 아키텍쳐
    std::string m_strProcess;             // 공정

    bool m_isDesktop;                     // 데스크탑/모바일 여부
    std::string m_strReleaseYear;         // 출시 년도
    bool m_isOfficialReleaseInKorea;      // 정식 한국 발매 여부

    unsigned short m_usCores;             // 코어 수
    unsigned short m_usThreads;           // 쓰레드 수
    unsigned int m_unL1Cache;             // L1 캐시 (KB)
    unsigned int m_unL2Cache;             // L2 캐시 (KB)
    unsigned int m_unL3Cache;             // L3 캐시 (KB)
    unsigned short m_usBaseClock;         // 기본 클럭 (MHz)
    unsigned short m_usBoostClock;        // 부스트 클럭 (MHz)
    CPUMemorySpec m_cMemory;              // 램 규격/클럭
    std::string m_sIntegratedGraphics;    // 내장 그래픽
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
    unsigned short m_usECores;             // E코어 수
    unsigned short m_usEThreads;           // E코어 쓰레드 수
    unsigned short m_usEBaseClock;         // E코어 기본 클럭 (MHz)
    unsigned short m_usEMaxClock;          // E코어 최대 클럭 (MHz)
};

class AMD_CPU : public CPU {
public:
    unsigned short m_PPT;                 // PPT
};