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
    std::string m_strType;                      // ����
    unsigned short m_usClock;                   // Ŭ�� (MHz)
};

struct Fan {
    unsigned short m_usSize;                    // �� ũ�� (mm)
    unsigned char m_ucCount;                    // �� ����
};

struct HeatPipe {
    unsigned short m_usSize;                    // ��Ʈ������ ũ�� (mm)
    unsigned char m_ucCount;                    // ��Ʈ������ ����
};

struct PCIe {
    std::string m_strVersion;                   // ����
    unsigned char m_ucLanes;                    // ���
};

struct Dimensions {
    float m_fWidth;                             // ����
    float m_fHeight;                            // ����
    float m_fThickness;                         // �β�
};

struct PCIeConnector {
    std::string m_strType;                      // �� ����
    
    unsigned char m_ucCount;                    // �� ����
};

struct Interface {
    std::string m_strType;                      // �������̽� ����
    std::optional<std::string> m_strVersion;    // �������̽� ���� (�ɼ�)
    unsigned char m_ucCount;                    // �������̽� ����
};

class GPU
{
    std::string m_strManufacturer;		        // ������
    std::string m_strvendor;                    // ������

    std::string m_strGeneration;		        // ����
    std::string m_strArchitecture;		        // ��Ű����
    std::string m_strProcess;                   // ����

    bool m_isDesktop;                           // ����ũž/����� ����
    std::string m_strReleaseYear;               // ��� �⵵
    bool m_isOfficialReleaseInKorea;            // ���� �ѱ� �߸� ����

    unsigned short m_usBaseClock;               // �⺻ Ŭ�� (MHz)
    unsigned short m_usBoostClock;              // �ν�Ʈ Ŭ�� (MHz)

    Dimensions dimensions;                      // ũ�� (mm)
    PCIeConnector pcieConnectors;               // Ŀ���� ����/����
    std::vector<Interface> displayInterfaces;   // ���÷��� �������̽� ����/����

    std::vector<Fan> fans;                      // ��Ʈ������ ����/����
    bool hasZeroFan;                            // ������ ����

    std::vector<HeatPipe> m_heatPipes;          // ��Ʈ������ ����/����

    bool hasBackplate;                          // ���÷���Ʈ ����

    unsigned short m_usRatedPower;              // ���� �Ŀ� �뷮

};

