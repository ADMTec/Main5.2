//*****************************************************************************
// File: NewUIQuestProgress.cpp
//*****************************************************************************

#include "stdafx.h"
#include "NewUIQuestProgress.h"
#include "NewUISystem.h"
#include "wsclientinline.h"
#include "UsefulDef.h"

#ifdef ASG_ADD_UI_QUEST_PROGRESS

using namespace SEASON3B;

#define QP_NPC_MAX_LINE_PER_PAGE	7
#define QP_TEXT_GAP					15
#define QP_LIST_BOX_LINE_NUM		12

CNewUIQuestProgress::CNewUIQuestProgress()
{
	m_pNewUIMng = NULL;
#ifndef ASG_MOD_3D_CHAR_EXCLUSION_UI
	m_pNewUI3DRenderMng = NULL;
#endif	// ASG_MOD_3D_CHAR_EXCLUSION_UI
	m_Pos.x = m_Pos.y = 0;
}

CNewUIQuestProgress::~CNewUIQuestProgress()
{
	Release();
}

bool CNewUIQuestProgress::Create(CNewUIManager* pNewUIMng,
#ifndef ASG_MOD_3D_CHAR_EXCLUSION_UI
								 CNewUI3DRenderMng* pNewUI3DRenderMng,
#endif	// ASG_MOD_3D_CHAR_EXCLUSION_UI
								 int x, int y)
{
#ifdef ASG_MOD_3D_CHAR_EXCLUSION_UI
	if (NULL == pNewUIMng)
#else	// ASG_MOD_3D_CHAR_EXCLUSION_UI
	if (NULL == pNewUIMng || NULL == pNewUI3DRenderMng)
#endif	// ASG_MOD_3D_CHAR_EXCLUSION_UI
		return false;

	m_pNewUIMng = pNewUIMng;
	m_pNewUIMng->AddUIObj(SEASON3B::INTERFACE_QUEST_PROGRESS, this);
#ifndef ASG_MOD_3D_CHAR_EXCLUSION_UI
	m_pNewUI3DRenderMng = pNewUI3DRenderMng;
	m_pNewUI3DRenderMng->Add3DRenderObj(this, INVENTORY_CAMERA_Z_ORDER);
#endif	// ASG_MOD_3D_CHAR_EXCLUSION_UI

	SetPos(x, y);

	LoadImages();

	// ��ȭ ���� L,R ��ư.
	m_btnProgressL.ChangeButtonImgState(true, IMAGE_QP_BTN_L);
#ifdef ASG_MOD_3D_CHAR_EXCLUSION_UI
	m_btnProgressL.ChangeButtonInfo(x + 131, y + 168, 17, 18);
#else	// ASG_MOD_3D_CHAR_EXCLUSION_UI
	m_btnProgressL.ChangeButtonInfo(x + 210, y + 189, 17, 18);
#endif	// ASG_MOD_3D_CHAR_EXCLUSION_UI

	m_btnProgressR.ChangeButtonImgState(true, IMAGE_QP_BTN_R);
#ifdef ASG_MOD_3D_CHAR_EXCLUSION_UI
	m_btnProgressR.ChangeButtonInfo(x + 153, y + 168, 17, 18);
#else	// ASG_MOD_3D_CHAR_EXCLUSION_UI
	m_btnProgressR.ChangeButtonInfo(x + 232, y + 189, 17, 18);
#endif	// ASG_MOD_3D_CHAR_EXCLUSION_UI

	m_btnComplete.ChangeText(GlobalText[2811]);
	m_btnComplete.ChangeButtonImgState(true, IMAGE_QP_BTN_COMPLETE, true);
#ifdef ASG_MOD_3D_CHAR_EXCLUSION_UI
	m_btnComplete.ChangeButtonInfo(x + (QP_WIDTH - 108) / 2, y + 362, 108, 29);
#else	// ASG_MOD_3D_CHAR_EXCLUSION_UI
	m_btnComplete.ChangeButtonInfo(x + (QP_WIDTH - 108) / 2, y + 392, 108, 29);
#endif	// ASG_MOD_3D_CHAR_EXCLUSION_UI

	m_btnClose.ChangeButtonImgState(true, IMAGE_QP_BTN_CLOSE);
	m_btnClose.ChangeButtonInfo(x + 13, y + 392, 36, 29);
	m_btnClose.ChangeToolTipText(GlobalText[1002], true);

	m_RequestRewardListBox.SetNumRenderLine(QP_LIST_BOX_LINE_NUM);
#ifdef ASG_MOD_3D_CHAR_EXCLUSION_UI
	m_RequestRewardListBox.SetSize(174, 158);
#else	// ASG_MOD_3D_CHAR_EXCLUSION_UI
	m_RequestRewardListBox.SetSize(252, 158);
#endif	// ASG_MOD_3D_CHAR_EXCLUSION_UI

	Show(false);

	return true;
}

void CNewUIQuestProgress::Release()
{
	UnloadImages();
#ifndef ASG_MOD_3D_CHAR_EXCLUSION_UI
	if (m_pNewUI3DRenderMng)
	{
		m_pNewUI3DRenderMng->Remove3DRenderObj(this);
		m_pNewUI3DRenderMng = NULL;
	}
#endif	// ASG_MOD_3D_CHAR_EXCLUSION_UI

	if (m_pNewUIMng)
	{
		m_pNewUIMng->RemoveUIObj(this);
		m_pNewUIMng = NULL;
	}
}

void CNewUIQuestProgress::SetPos(int x, int y)
{
	m_Pos.x = x;
	m_Pos.y = y;

#ifdef ASG_MOD_3D_CHAR_EXCLUSION_UI
	m_RequestRewardListBox.SetPosition(m_Pos.x+9, m_Pos.y+360);
#else	// ASG_MOD_3D_CHAR_EXCLUSION_UI
	m_RequestRewardListBox.SetPosition(m_Pos.x+9, m_Pos.y+388);
#endif	// ASG_MOD_3D_CHAR_EXCLUSION_UI
}

bool CNewUIQuestProgress::UpdateMouseEvent()
{
	if (REQUEST_REWARD_MODE == m_eLowerView)
		m_RequestRewardListBox.DoAction();

	if (ProcessBtns())
		return false;

	if (UpdateSelTextMouseEvent())
		return false;

	// â ���� Ŭ���� ���� UIó�� �� �̵� �Ұ�
	if(CheckMouseIn(m_Pos.x, m_Pos.y, QP_WIDTH, QP_HEIGHT))
		return false;

	return true;
}

bool CNewUIQuestProgress::ProcessBtns()
{
	if (m_btnClose.UpdateMouseEvent())
	{
		g_pNewUISystem->Hide(SEASON3B::INTERFACE_QUEST_PROGRESS);
		return true;
	}
#ifdef ASG_MOD_3D_CHAR_EXCLUSION_UI
	else if (SEASON3B::IsPress(VK_LBUTTON) && CheckMouseIn(m_Pos.x+169, m_Pos.y+7, 13, 12))
#else	// ASG_MOD_3D_CHAR_EXCLUSION_UI
	else if (SEASON3B::IsPress(VK_LBUTTON) && CheckMouseIn(m_Pos.x+246, m_Pos.y+7, 13, 12))
#endif	// ASG_MOD_3D_CHAR_EXCLUSION_UI
	{
		g_pNewUISystem->Hide(SEASON3B::INTERFACE_QUEST_PROGRESS);
		return true;
	}
	else if (m_btnProgressR.UpdateMouseEvent())
	{
		if (m_nSelNPCPage == m_nMaxNPCPage)
		{
			if (NON_PLAYER_WORDS_MODE == m_eLowerView)
				m_eLowerView = PLAYER_WORDS_MODE;
		}
		else
			m_nSelNPCPage = MIN(++m_nSelNPCPage, m_nMaxNPCPage);
		::PlayBuffer(SOUND_CLICK01);

		if (m_nSelNPCPage == m_nMaxNPCPage && NON_PLAYER_WORDS_MODE != m_eLowerView)
			m_btnProgressR.Lock();
		if (0 != m_nMaxNPCPage)
			m_btnProgressL.UnLock();

		return true;
	}
	else if (m_btnProgressL.UpdateMouseEvent())
	{
		m_nSelNPCPage = MAX(--m_nSelNPCPage, 0);
		::PlayBuffer(SOUND_CLICK01);

		if (0 == m_nSelNPCPage)
			m_btnProgressL.Lock();
		m_btnProgressR.UnLock();

		return true;
	}
	else if (m_bRequestComplete && m_bCanClick)
	{
		if (m_btnComplete.UpdateMouseEvent())
		{
			SendRequestQuestComplete(m_dwCurQuestIndex);
			::PlayBuffer(SOUND_CLICK01);
			m_bCanClick = false;
			return true;
		}
	}

	return false;
}

bool CNewUIQuestProgress::UpdateSelTextMouseEvent()
{
	if (PLAYER_WORDS_MODE != m_eLowerView || !m_bCanClick)
		return false;

	m_nSelAnswer = 0;
#ifdef ASG_MOD_3D_CHAR_EXCLUSION_UI
	if (MouseX < m_Pos.x+11 || MouseX > m_Pos.x+179)
#else	// ASG_MOD_3D_CHAR_EXCLUSION_UI
	if (MouseX < m_Pos.x+100 || MouseX > m_Pos.x+254)
#endif	// ASG_MOD_3D_CHAR_EXCLUSION_UI
		return false;

	int nTopY;
#ifdef ASG_MOD_3D_CHAR_EXCLUSION_UI
	int nBottomY = m_Pos.y+251;
#else	// ASG_MOD_3D_CHAR_EXCLUSION_UI
	int nBottomY = m_Pos.y+286;
#endif	// ASG_MOD_3D_CHAR_EXCLUSION_UI
	int i;
	for (i = 0; i < QM_MAX_ANSWER; ++i)
	{
		nTopY = nBottomY;
		nBottomY += m_anAnswerLine[i] * QP_TEXT_GAP;

		if (nTopY <= MouseY && MouseY < nBottomY)
		{
			m_nSelAnswer = i + 1;
			if (SEASON3B::IsRelease(VK_LBUTTON))
			{
				SendQuestSelAnswer(m_dwCurQuestIndex, (BYTE)m_nSelAnswer);
				::PlayBuffer(SOUND_CLICK01);
				m_bCanClick = false;
				return true;
			}
			break;
		}
	}

	return false;
}

bool CNewUIQuestProgress::UpdateKeyEvent()
{
	if (g_pNewUISystem->IsVisible(SEASON3B::INTERFACE_QUEST_PROGRESS))
	{
		if(SEASON3B::IsPress(VK_ESCAPE))
		{
			g_pNewUISystem->Hide(SEASON3B::INTERFACE_QUEST_PROGRESS);
			return false;
		}
	}

	return true;
}

bool CNewUIQuestProgress::Update()
{
	return true;
}

bool CNewUIQuestProgress::Render()
{
	::EnableAlphaTest();

	::glColor4f(1.0f, 1.0f, 1.0f, 1.0f);

	RenderBackImage();
	RenderSelTextBlock();

	RenderText();

	if (!m_btnProgressL.IsLock())
		m_btnProgressL.Render();
	if (!m_btnProgressR.IsLock())
		m_btnProgressR.Render();

	if (REQUEST_REWARD_MODE == m_eLowerView)
	{
		m_btnComplete.Render();
		m_RequestRewardListBox.Render();
		::EnableAlphaTest();
	}

	m_btnClose.Render();

	::DisableAlphaBlend();
	
	return true;
}

void CNewUIQuestProgress::RenderBackImage()
{
	RenderImage(IMAGE_QP_BACK, m_Pos.x, m_Pos.y, float(QP_WIDTH), float(QP_HEIGHT));
	RenderImage(IMAGE_QP_TOP, m_Pos.x, m_Pos.y, float(QP_WIDTH), 64.f);
	RenderImage(IMAGE_QP_LEFT, m_Pos.x, m_Pos.y+64, 21.f, 320.f);
	RenderImage(IMAGE_QP_RIGHT, m_Pos.x+QP_WIDTH-21, m_Pos.y+64, 21.f, 320.f);
	RenderImage(IMAGE_QP_BOTTOM, m_Pos.x, m_Pos.y+QP_HEIGHT-45, float(QP_WIDTH), 45.f);

#ifdef ASG_MOD_3D_CHAR_EXCLUSION_UI
	RenderImage(IMAGE_QP_LINE, m_Pos.x+1, m_Pos.y+181, 188.f, 21.f);
#else	// ASG_MOD_3D_CHAR_EXCLUSION_UI
	RenderImage(IMAGE_QP_LINE, m_Pos.x, m_Pos.y+211, float(QP_WIDTH), 21.f);
	RenderImage(IMAGE_QP_BACK_NPC, m_Pos.x+6, m_Pos.y+47, 256.f, 168.f);
	RenderImage(IMAGE_QP_BOX_NPC, m_Pos.x+12, m_Pos.y+56, 86.f, 96.f);
	if (REQUEST_REWARD_MODE != m_eLowerView)
		RenderImage(IMAGE_QP_BOX_PLAYER, m_Pos.x+12, m_Pos.y+232, 86.f, 96.f);
#endif	// ASG_MOD_3D_CHAR_EXCLUSION_UI
}

void CNewUIQuestProgress::RenderSelTextBlock()
{
	if (PLAYER_WORDS_MODE != m_eLowerView)
		return;

	if (0 == m_nSelAnswer)
		return;

#ifdef ASG_MOD_3D_CHAR_EXCLUSION_UI
	int nBlockPosY = m_Pos.y+251;
#else	// ASG_MOD_3D_CHAR_EXCLUSION_UI
	int nBlockPosY = m_Pos.y+286;
#endif	// ASG_MOD_3D_CHAR_EXCLUSION_UI
	int i;
	for (i = 0; i < m_nSelAnswer - 1; ++i)
		nBlockPosY += QP_TEXT_GAP * m_anAnswerLine[i];

	::glColor4f(0.5f, 0.7f, 0.3f, 0.5f);
#ifdef ASG_MOD_3D_CHAR_EXCLUSION_UI
	::RenderColor(m_Pos.x+11, nBlockPosY, 168.f, QP_TEXT_GAP * m_anAnswerLine[m_nSelAnswer - 1]);
#else	// ASG_MOD_3D_CHAR_EXCLUSION_UI
	::RenderColor(m_Pos.x+100, nBlockPosY, 154.f, QP_TEXT_GAP * m_anAnswerLine[m_nSelAnswer - 1]);
#endif	// ASG_MOD_3D_CHAR_EXCLUSION_UI
	::EndRenderColor();
}

void CNewUIQuestProgress::RenderText()
{
	g_pRenderText->SetFont(g_hFontBold);
	g_pRenderText->SetBgColor(0);
	g_pRenderText->SetTextColor(230, 230, 230, 255);
	g_pRenderText->RenderText(m_Pos.x, m_Pos.y+12, "Quest",	QP_WIDTH, 0, RT3_SORT_CENTER);
	g_pRenderText->SetTextColor(36, 242, 252, 255);
	g_pRenderText->RenderText(m_Pos.x, m_Pos.y+27,		g_QuestMng.GetSubject(m_dwCurQuestIndex), QP_WIDTH, 0, RT3_SORT_CENTER);

	g_pRenderText->SetTextColor(255, 255, 10, 255);
#ifdef ASG_MOD_3D_CHAR_EXCLUSION_UI
	g_pRenderText->RenderText(m_Pos.x+13, m_Pos.y+51, g_QuestMng.GetNPCName(),
#else	// ASG_MOD_3D_CHAR_EXCLUSION_UI
	g_pRenderText->RenderText(m_Pos.x+102, m_Pos.y+60, g_QuestMng.GetNPCName(),
#endif	// ASG_MOD_3D_CHAR_EXCLUSION_UI
		0, 0, RT3_SORT_LEFT);

	if (REQUEST_REWARD_MODE != m_eLowerView)
	{
		g_pRenderText->SetTextColor(255, 185, 10, 255);
#ifdef ASG_MOD_3D_CHAR_EXCLUSION_UI
		g_pRenderText->RenderText(m_Pos.x+13, m_Pos.y+207, CharacterAttribute->Name,
#else	// ASG_MOD_3D_CHAR_EXCLUSION_UI
		g_pRenderText->RenderText(m_Pos.x+102, m_Pos.y+237, CharacterAttribute->Name,
#endif	// ASG_MOD_3D_CHAR_EXCLUSION_UI
			0, 0, RT3_SORT_LEFT);
	}

	g_pRenderText->SetFont(g_hFont);
// NPC ���.
#ifdef ASG_MOD_3D_CHAR_EXCLUSION_UI
	g_pRenderText->SetTextColor(255, 230, 210, 255);
#else	// ASG_MOD_3D_CHAR_EXCLUSION_UI
	g_pRenderText->SetTextColor(0, 0, 0, 255);
#endif	// ASG_MOD_3D_CHAR_EXCLUSION_UI
	int i;
	for (i = 0; i < QP_NPC_MAX_LINE_PER_PAGE; ++i)
#ifdef ASG_MOD_3D_CHAR_EXCLUSION_UI
		g_pRenderText->RenderText(m_Pos.x+13, m_Pos.y+66+(QP_TEXT_GAP*i),
#else	// ASG_MOD_3D_CHAR_EXCLUSION_UI
		g_pRenderText->RenderText(m_Pos.x+102, m_Pos.y+80+(QP_TEXT_GAP*i),
#endif	// ASG_MOD_3D_CHAR_EXCLUSION_UI
			m_aszNPCWords[i + QP_NPC_MAX_LINE_PER_PAGE * m_nSelNPCPage],
			0, 0, RT3_SORT_LEFT);

	if (PLAYER_WORDS_MODE == m_eLowerView)
	{
		g_pRenderText->SetTextColor(255, 230, 210, 255);
		for (i = 0; i < 2; ++i)
#ifdef ASG_MOD_3D_CHAR_EXCLUSION_UI
			g_pRenderText->RenderText(m_Pos.x+13, m_Pos.y+222+(QP_TEXT_GAP*i),
#else	// ASG_MOD_3D_CHAR_EXCLUSION_UI
			g_pRenderText->RenderText(m_Pos.x+102, m_Pos.y+257+(QP_TEXT_GAP*i),
#endif	// ASG_MOD_3D_CHAR_EXCLUSION_UI
				m_aszPlayerWords[i], 0, 0, RT3_SORT_LEFT);
		for (; i < QP_PLAYER_LINE_MAX; ++i)
#ifdef ASG_MOD_3D_CHAR_EXCLUSION_UI
			g_pRenderText->RenderText(m_Pos.x+13, m_Pos.y+225+(QP_TEXT_GAP*i),
#else	// ASG_MOD_3D_CHAR_EXCLUSION_UI
			g_pRenderText->RenderText(m_Pos.x+102, m_Pos.y+260+(QP_TEXT_GAP*i),
#endif	// ASG_MOD_3D_CHAR_EXCLUSION_UI
				m_aszPlayerWords[i], 0, 0, RT3_SORT_LEFT);
	}
}

#ifndef ASG_MOD_3D_CHAR_EXCLUSION_UI
void CNewUIQuestProgress::Render3D()
{
//	RenderItem3D();
}
#endif	// ASG_MOD_3D_CHAR_EXCLUSION_UI

bool CNewUIQuestProgress::IsVisible() const
{ 
	return CNewUIObj::IsVisible(); 
}


float CNewUIQuestProgress::GetLayerDepth()
{
	return 3.1f;
}

void CNewUIQuestProgress::LoadImages()
{
#ifdef ASG_MOD_3D_CHAR_EXCLUSION_UI
	LoadBitmap("Interface\\newui_msgbox_back.jpg", IMAGE_QP_BACK, GL_LINEAR);
	LoadBitmap("Interface\\newui_item_back04.tga", IMAGE_QP_TOP, GL_LINEAR);
	LoadBitmap("Interface\\newui_item_back02-L.tga", IMAGE_QP_LEFT, GL_LINEAR);
	LoadBitmap("Interface\\newui_item_back02-R.tga", IMAGE_QP_RIGHT, GL_LINEAR);
	LoadBitmap("Interface\\newui_item_back03.tga", IMAGE_QP_BOTTOM, GL_LINEAR);

	LoadBitmap("Interface\\newui_myquest_Line.tga", IMAGE_QP_LINE, GL_LINEAR);
#else	// ASG_MOD_3D_CHAR_EXCLUSION_UI
	LoadBitmap("Interface\\Quest_backimg.jpg", IMAGE_QP_BACK, GL_LINEAR);
	LoadBitmap("Interface\\Quest_table01.tga", IMAGE_QP_TOP, GL_LINEAR);
	LoadBitmap("Interface\\newui_item_back02-L.tga", IMAGE_QP_LEFT, GL_LINEAR);
	LoadBitmap("Interface\\newui_item_back02-R.tga", IMAGE_QP_RIGHT, GL_LINEAR);
	LoadBitmap("Interface\\Quest_table04.tga", IMAGE_QP_BOTTOM, GL_LINEAR);

	LoadBitmap("Interface\\Quest_line.tga", IMAGE_QP_LINE, GL_LINEAR);
	LoadBitmap("Interface\\Quest_back_npc.tga", IMAGE_QP_BACK_NPC, GL_LINEAR);
	LoadBitmap("Interface\\Quest_box_npc.tga", IMAGE_QP_BOX_NPC, GL_LINEAR);
	LoadBitmap("Interface\\Quest_box_user.tga", IMAGE_QP_BOX_PLAYER, GL_LINEAR);
#endif	// ASG_MOD_3D_CHAR_EXCLUSION_UI
	LoadBitmap("Interface\\Quest_bt_L.tga", IMAGE_QP_BTN_L, GL_LINEAR);
	LoadBitmap("Interface\\Quest_bt_R.tga", IMAGE_QP_BTN_R, GL_LINEAR);
	LoadBitmap("Interface\\newui_btn_empty.tga", IMAGE_QP_BTN_COMPLETE, GL_LINEAR);
	LoadBitmap("Interface\\newui_exit_00.tga", IMAGE_QP_BTN_CLOSE, GL_LINEAR);
}

void CNewUIQuestProgress::UnloadImages()
{
	DeleteBitmap(IMAGE_QP_BTN_CLOSE);
	DeleteBitmap(IMAGE_QP_BTN_COMPLETE);
	DeleteBitmap(IMAGE_QP_BTN_R);
	DeleteBitmap(IMAGE_QP_BTN_L);
#ifndef ASG_MOD_3D_CHAR_EXCLUSION_UI
	DeleteBitmap(IMAGE_QP_BOX_PLAYER);
	DeleteBitmap(IMAGE_QP_BOX_NPC);
	DeleteBitmap(IMAGE_QP_BACK_NPC);
#endif	// ASG_MOD_3D_CHAR_EXCLUSION_UI
	DeleteBitmap(IMAGE_QP_LINE);

	DeleteBitmap(IMAGE_QP_BOTTOM);
	DeleteBitmap(IMAGE_QP_RIGHT);
	DeleteBitmap(IMAGE_QP_LEFT);
	DeleteBitmap(IMAGE_QP_TOP);
	DeleteBitmap(IMAGE_QP_BACK);
}

void CNewUIQuestProgress::ProcessOpening()
{
	::PlayBuffer(SOUND_INTERFACE01);
}

bool CNewUIQuestProgress::ProcessClosing()
{
	m_dwCurQuestIndex = 0;
	SendExitInventory();
	::PlayBuffer(SOUND_CLICK01);
	return true;
}

void CNewUIQuestProgress::SetContents(DWORD dwQuestIndex)
{
	if (0 == dwQuestIndex)
		return;

	m_dwCurQuestIndex = dwQuestIndex;

	SetCurNPCWords();
	m_bCanClick = true;

	m_btnProgressL.Lock();

	if (NULL != g_QuestMng.GetAnswer(m_dwCurQuestIndex, 0))
	{
		SetCurPlayerWords();
		m_eLowerView = NON_PLAYER_WORDS_MODE;
		m_nSelAnswer = 0;

		m_btnProgressR.UnLock();
	}
	else
	{
		SetCurRequestReward();
		m_eLowerView = REQUEST_REWARD_MODE;

		if (0 == m_nMaxNPCPage)
			m_btnProgressR.Lock();
		else
			m_btnProgressR.UnLock();
	}
}

void CNewUIQuestProgress::SetCurNPCWords()
{
	if (0 == m_dwCurQuestIndex)
		return;

	::memset(m_aszNPCWords[0], 0, sizeof(char) * QP_NPC_LINE_MAX * QP_WORDS_ROW_MAX);

	g_pRenderText->SetFont(g_hFont);
	int nLine = ::DivideStringByPixel(&m_aszNPCWords[0][0],
#ifdef ASG_MOD_3D_CHAR_EXCLUSION_UI
		QP_NPC_LINE_MAX, QP_WORDS_ROW_MAX, g_QuestMng.GetNPCWords(m_dwCurQuestIndex), 160);
#else	// ASG_MOD_3D_CHAR_EXCLUSION_UI
		QP_NPC_LINE_MAX, QP_WORDS_ROW_MAX, g_QuestMng.GetNPCWords(m_dwCurQuestIndex), 144);
#endif	// ASG_MOD_3D_CHAR_EXCLUSION_UI

	if (1 > nLine)
		return;

	m_nMaxNPCPage = (nLine - 1) / QP_NPC_MAX_LINE_PER_PAGE;
	m_nSelNPCPage = 0;
}

void CNewUIQuestProgress::SetCurPlayerWords()
{
	if (0 == m_dwCurQuestIndex)
		return;

	::memset(m_aszPlayerWords[0], 0, sizeof(char) * QP_PLAYER_LINE_MAX * QP_WORDS_ROW_MAX);
	::memset(m_anAnswerLine, 0, sizeof(int) * QM_MAX_ANSWER);

	g_pRenderText->SetFont(g_hFont);

	::DivideStringByPixel(&m_aszPlayerWords[0][0], 2, QP_WORDS_ROW_MAX,	g_QuestMng.GetPlayerWords(m_dwCurQuestIndex), 160);

	char szAnswer[2 * QP_WORDS_ROW_MAX];
	const char* pszAnswer;
	int nPlayerWordsRow = 2;
	int i;
	for (i = 0; i < QM_MAX_ANSWER; ++i)
	{
		::sprintf(szAnswer, "%d.", i + 1);
		pszAnswer = g_QuestMng.GetAnswer(m_dwCurQuestIndex, i);
		if (NULL == pszAnswer)
			break;
		::strcat(szAnswer, pszAnswer);

		m_anAnswerLine[i] = ::DivideStringByPixel(&m_aszPlayerWords[nPlayerWordsRow][0],2, QP_WORDS_ROW_MAX, szAnswer, 160, false);

		nPlayerWordsRow += m_anAnswerLine[i];

		if (QP_PLAYER_LINE_MAX <= nPlayerWordsRow)
			break;
	}
}

void CNewUIQuestProgress::SetCurRequestReward()
{
	if (0 == m_dwCurQuestIndex)
		return;

	const SQuestRequestReward* pQuestRequestReward
		= g_QuestMng.GetRequestReward(m_dwCurQuestIndex);
	if (NULL == pQuestRequestReward)
		return;
	
	m_RequestRewardListBox.Clear();
	
#ifdef ASG_ADD_QUEST_REQUEST_REWARD_TYPE
	SRequestRewardText aRequestRewardText[13];
	m_bRequestComplete
		= g_QuestMng.GetRequestRewardText(aRequestRewardText, 13, m_dwCurQuestIndex);
#else	// ASG_ADD_QUEST_REQUEST_REWARD_TYPE
	SRequestRewardText aRequestRewardText[12];
	m_bRequestComplete
		= g_QuestMng.GetRequestRewardText(aRequestRewardText, 12, m_dwCurQuestIndex);
#endif	// ASG_ADD_QUEST_REQUEST_REWARD_TYPE
	
	int i = 0;
	int j, nLoop;
#ifdef ASG_ADD_QUEST_REQUEST_REWARD_TYPE
	for (j = 0; j < 3; ++j)
	{
		if (0 == j)
		{
			nLoop = 1 + pQuestRequestReward->m_byRequestCount;
		}
		else if (1 == j && pQuestRequestReward->m_byGeneralRewardCount)
		{
			m_RequestRewardListBox.AddText(g_hFont, 0xffffffff, RT3_SORT_LEFT, " ");
			nLoop = 1 + pQuestRequestReward->m_byGeneralRewardCount + i;
		}
		else if (2 == j && pQuestRequestReward->m_byRandRewardCount)
		{
			m_RequestRewardListBox.AddText(g_hFont, 0xffffffff, RT3_SORT_LEFT, " ");
			nLoop = 1 + pQuestRequestReward->m_byRandRewardCount + i;
		}
		else
			nLoop = 0;
#else	// ASG_ADD_QUEST_REQUEST_REWARD_TYPE
	for (j = 0; j < 2; ++j)
	{
		if (0 == j)	// �䱸����
		{
			nLoop = 1 + pQuestRequestReward->m_byRequestCount;
		}
		else		// ����
		{
			m_RequestRewardListBox.AddText(g_hFont, 0xffffffff, RT3_SORT_LEFT, " ");
			nLoop = 1 + pQuestRequestReward->m_byRewardCount + i;
		}
#endif	// ASG_ADD_QUEST_REQUEST_REWARD_TYPE

		for (; i < nLoop; ++i)
			m_RequestRewardListBox.AddText(&aRequestRewardText[i], RT3_SORT_CENTER);
	}

#ifdef ASG_MOD_QUEST_OK_BTN_DISABLE
	EnableCompleteBtn(m_bRequestComplete);
#else	// ASG_MOD_QUEST_OK_BTN_DISABLE
	if (m_bRequestComplete)
	{
		m_btnComplete.UnLock();
		m_btnComplete.ChangeImgColor(BUTTON_STATE_UP, RGBA(255, 255, 255, 255));
		m_btnComplete.ChangeTextColor(RGBA(255, 230, 210, 255));
	}
	else
	{
		m_btnComplete.Lock();
		m_btnComplete.ChangeImgColor(BUTTON_STATE_UP, RGBA(100, 100, 100, 255));
		m_btnComplete.ChangeTextColor(RGBA(170, 170, 170, 255));
	}
#endif	// ASG_MOD_QUEST_OK_BTN_DISABLE
}

#ifdef ASG_MOD_QUEST_OK_BTN_DISABLE
void CNewUIQuestProgress::EnableCompleteBtn(bool bEnable)
{
	if (bEnable)
	{
		m_btnComplete.UnLock();
		m_btnComplete.ChangeImgColor(BUTTON_STATE_UP, RGBA(255, 255, 255, 255));
		m_btnComplete.ChangeTextColor(RGBA(255, 230, 210, 255));
	}
	else
	{
		m_btnComplete.Lock();
		m_btnComplete.ChangeImgColor(BUTTON_STATE_UP, RGBA(100, 100, 100, 255));
		m_btnComplete.ChangeTextColor(RGBA(170, 170, 170, 255));
	}
}
#endif	// ASG_MOD_QUEST_OK_BTN_DISABLE

#endif	// ASG_ADD_UI_QUEST_PROGRESS