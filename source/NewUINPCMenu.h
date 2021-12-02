//*****************************************************************************
// File: NewUINPCMenu.h

//*****************************************************************************

#if !defined(AFX_NEWUINPCMENU_H__FA3E0F1C_3C30_4BFD_AC94_843421A3F04A__INCLUDED_)
#define AFX_NEWUINPCMENU_H__FA3E0F1C_3C30_4BFD_AC94_843421A3F04A__INCLUDED_

#pragma once

#ifdef ASG_ADD_UI_NPC_MENU

#include "NewUIBase.h"
#include "NewUIMessageBox.h"
#include "NewUIMyInventory.h"
#include "NewUIMyQuestInfoWindow.h"
#include "NewUIQuestProgress.h"
#include "QuestMng.h"

#define NM_NPC_LINE_MAX				4
#define NM_SEL_TEXT_LINE_MAX		11
#define NM_TEXT_ROW_MAX				64
#define NM_QUEST_INDEX_MAX_COUNT	20

namespace SEASON3B
{
	class CNewUINPCMenu : public CNewUIObj, public INewUI3DRenderObj
	{
	public:
		enum IMAGE_LIST
		{
			IMAGE_NM_BACK = CNewUIMessageBoxMng::IMAGE_MSGBOX_BACK,				//. newui_msgbox_back.jpg
			IMAGE_NM_TOP = CNewUIMyInventory::IMAGE_INVENTORY_BACK_TOP,			//. newui_item_back01.tga	(190,64)
			IMAGE_NM_LEFT = CNewUIMyInventory::IMAGE_INVENTORY_BACK_LEFT,	// newui_item_back02-l.tga	(21,320)
			IMAGE_NM_RIGHT = CNewUIMyInventory::IMAGE_INVENTORY_BACK_RIGHT,	// newui_item_back02-r.tga	(21,320)
			IMAGE_NM_BOTTOM = CNewUIMyInventory::IMAGE_INVENTORY_BACK_BOTTOM,	//. newui_item_back03.tga	(190,45)

			IMAGE_NM_LINE = CNewUIMyQuestInfoWindow::IMAGE_MYQUEST_LINE,
#ifdef ASG_ADD_UI_QUEST_PROGRESS
#ifndef ASG_MOD_3D_CHAR_EXCLUSION_UI
			IMAGE_NM_BOX_NPC = CNewUIQuestProgress::IMAGE_QP_BOX_PLAYER,
#endif	// ASG_MOD_3D_CHAR_EXCLUSION_UI
#endif	// ASG_ADD_UI_QUEST_PROGRESS
			IMAGE_NM_BTN_CLOSE = CNewUIMyInventory::IMAGE_INVENTORY_EXIT_BTN,
		};

	private:
		enum
		{
			NM_WIDTH = 190,
			NM_HEIGHT = 429,
		};

		CNewUIManager*		m_pNewUIMng;
		CNewUI3DRenderMng*	m_pNewUI3DRenderMng;
		POINT				m_Pos;

		CNewUIButton		m_btnClose;

		char	m_aszNPCWords[NM_NPC_LINE_MAX][NM_TEXT_ROW_MAX];
		DWORD	m_adwQuestIndex[NM_QUEST_INDEX_MAX_COUNT];
		char	m_aszSelText[NM_SEL_TEXT_LINE_MAX][NM_TEXT_ROW_MAX];
		int		m_anSelTextLine[NM_SEL_TEXT_LINE_MAX];
		int		m_nSelTextCount;

		int		m_nSelText;
		bool	m_bCanClick;

	public:
		CNewUINPCMenu();
		virtual ~CNewUINPCMenu();

		bool Create(CNewUIManager* pNewUIMng, CNewUI3DRenderMng* pNewUI3DRenderMng, int x, int y);
		void Release();
		
		void SetPos(int x, int y);
		
		bool UpdateMouseEvent();
		bool UpdateKeyEvent();
		bool Update();
		bool Render();
		void Render3D();
		
		bool IsVisible() const;
		
		float GetLayerDepth();	//. 3.1f
		
		void ProcessOpening();
		bool ProcessClosing();
		
		void SetContents(DWORD* adwSrcQuestIndex, int nIndexCount);
		
	private:
		void LoadImages();
		void UnloadImages();
		
		bool UpdateSelTextMouseEvent();
		void RenderBackImage();
		void RenderSelTextBlock();
		void RenderText();
		//		void RenderItem3D();
		
		bool ProcessBtns();
		
		void SetNPCWords();
		void SetSelText(DWORD* adwSrcQuestIndex, int nIndexCount);
	};
}

#endif	// ASG_ADD_UI_NPC_MENU

#endif // !defined(AFX_NEWUINPCMENU_H__FA3E0F1C_3C30_4BFD_AC94_843421A3F04A__INCLUDED_)
