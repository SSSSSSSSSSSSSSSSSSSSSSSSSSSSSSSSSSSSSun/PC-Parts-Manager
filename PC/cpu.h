#pragma once
#include <string>

class RAM {

    
};


class CPU{


private:
	std::string sManufacturer;		// 제조사

	std::string sGeneration;		// 세대
	std::string sArchitecture;		// 아키텍쳐
    std::string sProcess;           // 공정

    bool isDesktop;                // 데스크탑/모바일 여부
    std::string sReleaseYear;       // 출시 년도

    unsigned short usCores;         // 코어 수
    unsigned short usThreads;       // 쓰레드 수
    unsigned int uiL1Cache;         // L1 캐시 (KB)
    unsigned int uiL2Cache;         // L2 캐시 (KB)
    unsigned int uiL3Cache;         // L3 캐시 (KB)
    unsigned short usBaseClock;     // 기본 클럭 (MHz)
    unsigned short usMaxClock;      // 최대 클럭 (MHz)

    std::string sIntegratedGraphics;// 내장 그래픽
    unsigned short usTDP;           // TDP

    bool isOfficialReleaseInKorea;  // 정식 한국 발매 여부
    RAM cMemory;                    // 램 규격/클럭
};

class Intel_CPU : public CPU {
public:
    unsigned short MTP;             // MTP
};

class AMD_CPU : public CPU {
public:
    unsigned short PPT;  // PPT
};