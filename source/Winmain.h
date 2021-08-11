#ifndef __WINMAIN_H__
#define __WINMAIN_H__

#define FOR_LAST_TEST
#define FOR_WORK
/*--------------------------------------------------------------------------------------*/

#define LANGUAGE_KOREAN			( 0 )
#define LANGUAGE_ENGLISH		( 1 )
#define LANGUAGE_TAIWANESE		( 2 )
#define LANGUAGE_CHINESE		( 3 )
#define LANGUAGE_JAPANESE		( 4 )
#define LANGUAGE_THAILAND		( 5 )
#define LANGUAGE_PHILIPPINES	( 6 )
#define LANGUAGE_VIETNAMESE		( 7 )
#define NUM_LANGUAGE			( 8 )

#define SELECTED_LANGUAGE	( LANGUAGE_ENGLISH )

#define GAMEGUARD_AUTH25

#ifdef _DEBUG
	#define ENABLE_EDIT
	#define ENABLE_EDIT2
#endif // _DEBUG

#ifdef FOR_WORK
#ifdef _DEBUG

	#define CSK_LH_DEBUG_CONSOLE
	#ifdef CSK_LH_DEBUG_CONSOLE
		#define CONSOLE_DEBUG
	#endif // CSK_LH_DEBUG_CONSOLE

	#define CSK_DEBUG_MAP_ATTRIBUTE

	#define CSK_DEBUG_RENDER_BOUNDINGBOX

	#define CSK_DEBUG_MAP_PATHFINDING

	//#define LDS_ADD_DEBUGINGMODULES	// ���� Profiling ��� (��������� RESULT_PROFILING.txt�� ����) 

	#ifdef LDS_ADD_DEBUGINGMODULES
		#define DO_PROCESS_DEBUGCAMERA	// Main GameScene �� ������ ī�޶� ���� (2008.07.30)
		//#define LDS_ADD_DEBUGINGMODULES_FOR_PROFILING
		#ifdef LDS_ADD_DEBUGINGMODULES_FOR_PROFILING
			#define DO_PROFILING			// PROFILING_RESULT.txt-��� ��� // ���� Profiling ��� ���� ����.  (2008.07.11)
			//#define DO_PROFILING_FOR_LOADING// PROFILING_FOR_LOADING_RESULT.txt-��� ��� // Loading������ Profiling ���.  (2008.08.19)
		#endif // LDS_ADD_DEBUGINGMODULES_FOR_PROFILING
	#endif // LDS_ADD_DEBUGINGMODULES
#endif // _DEBUG
#endif // FOR_WORK



#if defined USER_WINDOW_MODE || (defined WINDOWMODE)
#define ACTIVE_FOCUS_OUT
#endif	// USER_WINDOW_MODE

// 	#define LIMIT_CHAOS_MIX
// 	#define LIMIT_SKILL
	#define GRAMMAR_OF


#define BAN_USE_CMDLINE
#define NEW_YEAR_BAG_EVENT
#define GRAMMAR_VERB

#ifndef ANTIHACKING_ENABLE
	#define hanguo_check1();	{}
	#define hanguo_check2();	{}
	#define hanguo_check3();	{}
	#define hanguo_check4();	{}
	#define hanguo_check5();	{}
	#define hanguo_check6();	{}
	#define hanguo_check7();	{}
	#define hanguo_check8();	{}
	#define hanguo_check9();	{}
	#define hanguo_check10();	{}
	#define hanguo_check11();	{}
	#define hanguo_check12();	{}
	#define	pre_send( g_hInst);	{}
#endif

/*--------------------------------------------------------------------------------------*/


/*----------------------- �̺�Ʈ -------------------------------------------------------*/

//#define CSK_EVENT_HALLOWEEN_MAP	//	�ҷ��� �̺�Ʈ �� ó��(2006.10.09)
//#define DEVIAS_XMAS_EVENT			//  ũ�������� �̺�Ʈ ���� ����ƽ� �� �� ���ҽ� ����(2005.12)
#define STONE_EVENT_DIALOG			// ���� �̺�Ʈ ( ���� ���� ����, ��¥ ��� �̺�Ʈ ).
//#define LENA_EXCHANGE_ZEN			// ���� ȯ�� �ý���, ���� : ���濡���� �Ѽ��� �ȵȴ�.
#define BLOODCASTLE_2ND_PATCH		// ���� ȯ�� �ý���, ���հ���
#define USE_EVENT_ELDORADO			// �������� ���� �̺�Ʈ
#define SCRATCH_TICKET				// ���ȭ 2�ֳ� �̺�Ʈ.
#define FRIEND_EVENT				// ģ�� �̺�Ʈ.
#define FRIENDLYSTONE_EXCHANGE_ZEN	// �����ǵ� ȯ�� �ý���

#define CASTLE_EVENT				// ������ ���� ���
#ifdef CASTLE_EVENT
	#undef FRIEND_EVENT
	#undef FRIENDLYSTONE_EXCHANGE_ZEN
	#undef LENA_EXCHANGE_ZEN
	#define DISABLE_MUTO			// CASTLE_EVENT �� �ʿ�
#endif

#define BATTLE_SOCCER_EVENT         // ��Ʋ��Ŀ �̺�Ʈ.
#define LOREN_RAVINE_EVENT			// �η����� �̺�Ʈ���� ����.
//#define GUILD_WAR_EVENT           // ���� �̺�Ʈ.
//#define MYSTERY_BEAD				// �ź��� ���� �̺�Ʈ

#define	PCROOM_EVENT
#define DUEL_SYSTEM
#define PET_SYSTEM
#define PROTECT_SYSTEMKEY
#define CHANGE_RATE
//#define SYSTEM_NOT_RENDER_TEXT
//#define ON_AIR_BLOODCASTLE
//#define CAMERA_TEST
//#define CAMERA_TEST_FPS
//#define DONTRENDER_TERRAIN


#define CRYINGWOLF_2NDMVP
#define GIFT_BOX_EVENT
#define BUGFIX_CRYWOLF_END_COUNT
#define WM_USER_MEMORYHACK	( WM_USER + 1)
#define WM_NPROTECT_EXIT_TWO  (WM_USER + 10001)

//#define PBG_ADD_INGAMESHOP_FONT

extern bool ashies;
extern int weather;
extern int Time_Effect;
extern HWND      g_hWnd;
extern HINSTANCE g_hInst;
extern HDC       g_hDC;
extern HGLRC     g_hRC;
extern HFONT     g_hFont;
extern HFONT     g_hFontBold;
extern HFONT     g_hFontBig;
extern HFONT     g_hFixFont;
#ifdef PBG_ADD_INGAMESHOP_FONT
extern HFONT	 g_hInGameShopFont;
#endif //PBG_ADD_INGAMESHOP_FONT
//extern HFONT     g_hFontSmall;
extern bool      Destroy;
extern int       RandomTable[];

extern char m_ID[];
extern char m_Version[];
extern int  m_SoundOnOff;
extern int  m_MusicOnOff;
extern int  m_Resolution;
extern int m_nColorDepth;	

void MouseUpdate();
extern void CheckHack( void);
extern DWORD GetCheckSum( WORD wKey);
extern void StopMp3(char *Name, BOOL bEnforce=false);
extern void PlayMp3(char *Name, BOOL bEnforce=false);
extern bool IsEndMp3();
#ifdef YDG_ADD_DOPPELGANGER_SOUND
extern int GetMp3PlayPosition();
#endif	// YDG_ADD_DOPPELGANGER_SOUND
extern unsigned int GenID();

extern void CloseMainExe( void);
extern GLvoid KillGLWindow(GLvoid);
extern void DestroyWindow();
extern void DestroySound();

/*-------------------- Macro --------------------*/

/*----------------------- ������ ���� --------------------------------------------------*/
#ifdef DO_PROFILING
	#include "Profiler.h"
	extern CProfiler	*g_pProfiler;
#endif // DO_PROFILING

#ifdef DO_PROFILING_FOR_LOADING
	#include "Profiler.h"
	extern CProfiler	*g_pProfilerForLoading;
#endif // DO_PROFILING_FOR_LOADING

#ifdef DO_PROCESS_DEBUGCAMERA
	#include "DebugCameraManager.h"
	extern CDebugCameraManager *g_pDebugCameraManager;
#endif // DO_PROCESS_DEBUGCAMERA

#if defined(LDS_FOR_DEVELOPMENT_TESTMODE) || defined(LDS_UNFIXED_FIXEDFRAME_FORDEBUG)
	extern bool g_bUnfixedFixedFrame;
#endif // defined(LDS_FOR_DEVELOPMENT_TESTMODE) || defined(LDS_UNFIXED_FIXEDFRAME_FORDEBUG)

#if defined _DEBUG || defined PBG_LOG_PACKET_WINSOCKERROR
	#include "./Utilities/Log/DebugAngel.h"
#define ExecutionLog	DebugAngel_Write
#else
#define ExecutionLog	{}
#endif //_DEBUG

#ifdef USE_CRT_DEBUG				
	#define _CRTDBG_MAP_ALLOC
	#include <stdlib.h>
	#include <crtdbg.h>
	#define new new(_NORMAL_BLOCK, __FILE__, __LINE__)
#endif // USE_CRT_DEBUG

#define FAKE_CODE( pos)\
	_asm { jmp pos };\
	_asm { __emit 0xFF };\
	_asm { __emit 0x15 }


#endif
