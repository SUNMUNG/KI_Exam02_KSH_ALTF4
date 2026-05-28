# 🐔 KI_Exam02 — ALTF4

<p align="center">
  <img src="./assets/cover.png" alt="ALTF4 Cover" width="50%"/>
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Unreal_Engine_5-000000?style=for-the-badge&logo=unrealengine&logoColor=white"/>
  <img src="https://img.shields.io/badge/Blueprint_Only-0072C6?style=for-the-badge&logo=unrealengine&logoColor=white"/>
  <img src="https://img.shields.io/badge/Platform-Windows-0078D4?style=for-the-badge&logo=windows&logoColor=white"/>
  <img src="https://img.shields.io/badge/Release-v1.3-brightgreen?style=for-the-badge"/>
</p>

---

## 📌 프로젝트 소개

> ALTF4에서 영감을 받은 함정 맵 기반 액션 플랫포머 게임  
> 맵에 가득한 기믹과 함정을 헤쳐나가 최종 목적지에 도달하라!

| 항목 | 내용 |
|:---|:---|
| 🎮 장르 | 액션 어드벤처 / 플랫포머 |
| 🖥️ 플랫폼 | Windows (PC) |
| 👤 개발 인원 | 1인 (개인 프로젝트) |
| 📅 개발 기간 | 2025.10.23 ~ 2025.11.06 |
| ⚙️ 개발 환경 | Unreal Engine 5, Blueprint Only |

---

## 🎬 시연 영상

<p align="center">
  <a href="https://youtu.be/a2J2f-maVHQ?si=dv5i3nbpERICH8mR">
    <img src="./assets/thumbnail.png" alt="Demo Video" width="30%"/>
  </a>
</p>

---

## 🕹️ 조작 방법

| 키 | 동작 |
|:---:|:---|
| <kbd>W</kbd> <kbd>A</kbd> <kbd>S</kbd> <kbd>D</kbd> | 캐릭터 이동 |
| <kbd>Shift</kbd> | 달리기 |
| <kbd>Space</kbd> | 점프 |
| <kbd>R</kbd> | 죽은척하기 (래그돌 상태) |
| <kbd>G</kbd> | 리스폰 |
| `마우스 우클릭` | 에임 모드 전환 |
| `에임 중 마우스 좌클릭` | 닭 발사 (쿨타임 존재) |

---

## ✨ 주요 기능

| 기능 | 설명 | 블루프린트 바로가기 |
|:---|:---|:---:|
| 캐릭터 이동 & 달리기 | 물리 기반 이동 및 속도 전환 | [BP_Player](https://github.com/SUNMUNG/KI_Exam02_KSH_ALTF4/blob/main/ALTF4/Content/BluePrint/Player/BP_Player.uasset) |
| 래그돌 (죽은척) | R키로 즉시 래그돌 전환 | [BP_DeadBody](https://github.com/SUNMUNG/KI_Exam02_KSH_ALTF4/blob/main/ALTF4/Content/BluePrint/Player/BP_DeadBody.uasset) |
| 닭 발사 | 에임 모드에서 쿨타임 기반 투사체 발사 | [BP_ThrowChicken](https://github.com/SUNMUNG/KI_Exam02_KSH_ALTF4/blob/main/ALTF4/Content/BluePrint/Player/BP_ThrowChicken.uasset) |
| 리스폰 & 세이브 지점 | 세이브 사인 활성화 시 리스폰 위치 저장 | [BP_SaveSign](https://github.com/SUNMUNG/KI_Exam02_KSH_ALTF4/blob/main/ALTF4/Content/BluePrint/Item/BP_SaveSign.uasset) · [BP_ActiveSaveSign](https://github.com/SUNMUNG/KI_Exam02_KSH_ALTF4/blob/main/ALTF4/Content/BluePrint/Item/BP_ActiveSaveSign.uasset) |
| 풍선 시스템 | 풍선 소환 및 사망 후 잔여 풍선 삭제 처리 | [BP_SaveBalloon](https://github.com/SUNMUNG/KI_Exam02_KSH_ALTF4/blob/main/ALTF4/Content/BluePrint/Item/BP_SaveBalloon.uasset) · [BP_BalloonSpawn](https://github.com/SUNMUNG/KI_Exam02_KSH_ALTF4/blob/main/ALTF4/Content/BluePrint/Item/BP_BalloonSpawn.uasset) |
| 함정 오브젝트 | 화살, 단두대, 철제함정, 상어, 드럼통 등 18종 | [📂 BluePrint/Trap](https://github.com/SUNMUNG/KI_Exam02_KSH_ALTF4/tree/main/ALTF4/Content/BluePrint/Trap) |
| 맵 오브젝트 | 집, 바위, 통나무, 다리 등 맵 구성 요소 | [📂 BluePrint/MapBluePrint](https://github.com/SUNMUNG/KI_Exam02_KSH_ALTF4/tree/main/ALTF4/Content/BluePrint/MapBluePrint) |
| 클리어 판정 | 최종 목적지 도달 시 스테이지 클리어 | [BP_EndArea](https://github.com/SUNMUNG/KI_Exam02_KSH_ALTF4/blob/main/ALTF4/Content/BluePrint/MapBluePrint/BP_EndArea.uasset) |
| 게임 시스템 | GameMode, PlayerController, GameInstance | [📂 BluePrint/GameBluePrint](https://github.com/SUNMUNG/KI_Exam02_KSH_ALTF4/tree/main/ALTF4/Content/BluePrint/GameBluePrint) |

---

## 🗂️ 프로젝트 구조

```
📁 ALTF4/Content/BluePrint/
 ├── 📁 Player/                  # 캐릭터 관련
 │    ├── BP_Player               # 플레이어 메인 블루프린트
 │    ├── BP_PlayerCPP            # C++ 기반 플레이어
 │    ├── BP_DeadBody             # 래그돌 (죽은척)
 │    ├── BP_ThrowChicken         # 닭 투사체 발사
 │    └── BP_CameraShake         # 카메라 쉐이크
 │
 ├── 📁 Item/                    # 아이템 & 리스폰 시스템
 │    ├── BP_SaveSign             # 세이브 지점
 │    ├── BP_ActiveSaveSign       # 활성화된 세이브 지점
 │    ├── BP_SaveBalloon          # 리스폰 풍선
 │    ├── BP_BalloonSpawn         # 풍선 스폰 관리
 │    └── BP_BalloonTarget        # 풍선 타겟
 │
 ├── 📁 Trap/                    # 함정 오브젝트 (18종)
 │    ├── BP_ArrowTrap1/2         # 화살 함정
 │    ├── BP_Guilotine            # 단두대
 │    ├── BP_IronTrap/IronBlade   # 철제 함정
 │    ├── BP_Shark / BP_SharkTrap # 상어 함정
 │    ├── BP_OakBarrel            # 드럼통
 │    ├── BP_WoodSpike            # 나무 가시
 │    ├── BP_WoodBridge/1        # 무너지는 다리
 │    ├── BP_Wheel                # 회전 바퀴
 │    └── BP_BrickTrap 외 다수
 │
 ├── 📁 MapBluePrint/            # 맵 구성 오브젝트
 │    ├── BP_EndArea              # 클리어 지점
 │    ├── BP_House 1~13           # 집 오브젝트
 │    ├── BP_Rock 1~10            # 바위
 │    ├── BP_RotateLog            # 회전 통나무
 │    ├── BP_WaterSurface/Bottom  # 수면 / 수중
 │    └── BP_WoodBridge/Pillar    # 다리, 기둥
 │
 └── 📁 GameBluePrint/           # 게임 시스템
      ├── BP_GameInstance         # 게임 인스턴스
      ├── GM_Stage1GameMode       # 스테이지 게임모드
      ├── GM_MainMenuGameMode     # 메인메뉴 게임모드
      ├── GM_SettingMenuGameMode  # 설정메뉴 게임모드
      ├── PC_PlayerController     # 플레이어 컨트롤러
      └── SG_GameSettings         # 게임 설정 저장
```

---

## 📅 개발 일정

| 기간 | 내용 |
|:---|:---|
| 10/23 ~ 10/24 | 에셋 수집 및 폴더 구조 정리, 기본 입력 컨트롤러 구현 |
| 10/26 ~ 10/27 | 물리 이동 & 상호작용 구현 |
| 10/28 ~ 10/29 | 특수 기믹 오브젝트 설계 및 구현 (드럼통, 점프대 등 5~6종) |
| 10/30 ~ 10/31 | 기믹 오브젝트 기반 맵 구현 |
| 11/03 ~ 11/04 | 맵 마무리 및 UI 구현 |
| 11/05 ~ 11/06 | 발표 자료 및 시연 영상 제작, 최종 제출 |

---

## 📦 Release 히스토리

| 버전 | 날짜 | 내용 |
|:---:|:---:|:---|
| v1.3 | 2025.11.07 | 사망 후 잔여 풍선 삭제 로직 핀 연결 수정 (완성도 개선) |
| v1.2 | - | - |
| v1.1 | - | - |
| v1.0 | - | 최초 릴리즈 |

> 📥 [최신 Release 다운로드](../../releases/latest)
