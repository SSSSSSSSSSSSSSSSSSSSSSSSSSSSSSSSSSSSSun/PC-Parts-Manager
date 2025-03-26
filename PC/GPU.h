#pragma once
#include <string>
#include <vector>
#include <optional>

#define GDDR1  "GDDR1"
#define GDDR2  "GDDR2"
#define GDDR3  "GDDR3"
#define GDDR4  "GDDR4"
#define GDDR5  "GDDR5"
#define GDDR5X "GDDR5X"
#define GDDR6  "GDDR6"
#define GDDR6X "GDDR6X"
#define GDDR7  "GDDR7"

#define PCIE6PIN    "6-pin"
#define PCIE8PIN    "8-pin"
#define PCIE16PIN   "16-pin"

#define HDMI    "HDMI"
#define DP      "DP"
#define USBC    "USB-C"
#define DVI     "DVI"
#define DSUB    "D-SUB"

struct GPUMemorySpec {
    std::string m_strType;                      // 종류
    unsigned short m_usClock;                   // 클럭 (MHz)
};

struct Fan {
    unsigned short m_usSize;                    // 팬 크기 (mm)
    unsigned char m_ucCount;                    // 팬 개수
};

struct HeatPipe {
    unsigned short m_usSize;                    // 히트파이프 크기 (mm)
    unsigned char m_ucCount;                    // 히트파이프 개수
};

struct PCIe {
    std::string m_strVersion;                   // 버전
    unsigned char m_ucLanes;                    // 배속
};

struct Dimensions {
    float m_fWidth;                             // 가로
    float m_fHeight;                            // 세로
    float m_fThickness;                         // 두께
};

struct PCIeConnector {
    std::string m_strType;                      // 핀 종류
    
    unsigned char m_ucCount;                    // 핀 개수
};

struct Interface {
    std::string m_strType;                      // 인터페이스 종류
    std::optional<std::string> m_strVersion;    // 인터페이스 버전 (옵션)
    unsigned char m_ucCount;                    // 인터페이스 개수
};

class GPU
{
    std::string m_strManufacturer;		        // 제조사
    std::string m_strvendor;                    // 벤더사

    std::string m_strGeneration;		        // 세대
    std::string m_strArchitecture;		        // 아키텍쳐
    std::string m_strProcess;                   // 공정

    bool m_isDesktop;                           // 데스크탑/모바일 여부
    std::string m_strReleaseYear;               // 출시 년도
    bool m_isOfficialReleaseInKorea;            // 정식 한국 발매 여부

    unsigned short m_usBaseClock;               // 기본 클럭 (MHz)
    unsigned short m_usBoostClock;              // 부스트 클럭 (MHz)

    Dimensions dimensions;                      // 크기 (mm)
    PCIeConnector pcieConnectors;               // 커넥터 종류/개수
    std::vector<Interface> displayInterfaces;   // 디스플레이 인터페이스 종류/개수

    std::vector<Fan> fans;                      // 히트파이프 종류/개수
    bool hasZeroFan;                            // 제로팬 여부

    std::vector<HeatPipe> m_heatPipes;          // 히트파이프 종류/개수

    bool hasBackplate;                          // 백플레이트 여부

    unsigned short m_usRatedPower;              // 정격 파워 용량

};

