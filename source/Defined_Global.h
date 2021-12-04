
#define PBG_FIX_DROPBAN_GENS

#define KJW_FIX_ITEMNAME_ORB_OF_SUMMONING
#define KJW_FIX_ITEMNAME_CRITICAL_SCROLL
#define KJW_FIX_MYSHOP

#define KJW_FIX_CHAOSCASTLE_MESSAGE
#define KJW_FIX_QUEST_INFO_DUPLICATE
#define KJW_FIX_GENS_WINDOW_OPEN

#define KJW_ADD_NEWUI_SCROLLBAR
#define KJW_ADD_NEWUI_TEXTBOX
#define KJW_ADD_NEWUI_GROUP

#define KWAK_ADD_TRACE_FUNC
#ifdef _DEBUG
	#define KWAK_FIX_ALT_KEYDOWN_MENU_BLOCK
#endif // _DEBUG


#define KJW_FIX_SLEEPUP_SKILL_INFO
#define KJW_FIX_LOGIN_ID_BLACK_SPACE
#define KJW_FIX_SLIDE_MOVE

//----------------------------------------------------------------------------------------------
// << Season 5-4 >>

#define SEASON5_4
#ifdef  SEASON5_4

	//-----------------------------------------------------------------------------
	// [ Season 5 - Part 4 ]
	#define PJH_ADD_MASTERSKILL
		#ifdef PJH_ADD_MASTERSKILL								
		#undef KJH_FIX_WOPS_K22193_SUMMONER_MASTERSKILL_UI_ABNORMAL_TEXT	//�ؿܿ� ��ȯ���� �����ͽ�ų �߰�(10.05.28)
	#endif //PJH_ADD_MASTERSKILL								

	#define ASG_ADD_STRIFE_KANTURU_RUIN_ISLAND				// ĭ���� ����3 ��������ȭ.(10.04.13)

	#define KJH_FIX_POTION_PRICE							// ���� ���డ�� ���׼��� (10.04.16)
	#define KJH_FIX_INIT_EVENT_MAP_AT_ABNORMAL_EXIT			// ������������ ����� �̺�Ʈ�� �ʱ�ȭ (10.04.20)
	#define LDK_LDS_EXTENSIONMAP_HUNTERZONE					// ����� Ȯ�� �� (���� �� ������ �� ����, ������ ���� �߰�.). (10.02.18)

	#ifdef LDK_LDS_EXTENSIONMAP_HUNTERZONE						
		#define LDS_EXTENSIONMAP_MONSTERS_RAKLION				// Ȯ�� �ʳ��� �Ϲ� ����. ��Ŭ���� (10.02.18)
		#define LDS_EXTENSIONMAP_MONSTERS_AIDA					// Ȯ�� �ʳ��� �Ϲ� ����. ���̴ (10.02.26)
		#define LDS_EXTENSIONMAP_MONSTERS_KANTUR				// Ȯ�� �ʳ��� �Ϲ� ����. ĭ���� (10.03.02)
		#define LDS_EXTENSIONMAP_MONSTERS_SWAMPOFQUIET			// Ȯ�� �ʳ��� �Ϲ� ����. ����Ǵ� (10.03.02)
		#define LDS_MOD_EXTEND_MAXMODELLIMITS_200TO400			// ���� ���͸� ���� ���� (MAX_MODEL_MONSTER=200)���� �ʰ��Ͽ� ��� �߻����� (MAX_MODEL_MONSTER=400)����. (10.03.15)
		#define LDK_ADD_EXTENSIONMAP_BOSS_MEDUSA				// ����Ǵ� ���� ���� �޵�� (10.02.19)
		#define LDK_ADD_EXTENSIONMAP_BOSS_MEDUSA_EYE_EFFECT		// ����Ǵ� ���� ���� �޵�� �� �ܻ� ����Ʈ(10.03.03)
		#define LDK_ADD_EXTENSIONMAP_BOSS_MEDUSA_WAND_EFFECT	// ����Ǵ� ���� ���� �޵�� ������ ����Ʈ(10.03.04)
		#define LDK_MOD_EVERY_USE_SKILL_CAOTIC					// ī��ƽ ���̾� ���� ��� �����ϵ��� ����(10.03.08)
		#define LDK_FIX_AIDA_OBJ41_UV_FIX						// ���̴�� 41�� obj(��) uv �� ����(10.03.16)
		#define LDK_ADD_AIDA_OBJ77_OBJ78						// ���̴�� 77,78�� obj uv�帧 �߰�(10.03.18)
	#endif // LDK_LDS_EXTENSIONMAP_HUNTERZONE

	#define LJH_ADD_SUPPORTING_MULTI_LANGUAGE					// ��������� (10.05.19)
	#ifdef LJH_ADD_SUPPORTING_MULTI_LANGUAGE
		#define LJH_ADD_RESTRICTION_ON_ID						// ID, ����̸�, ĳ���͸��� ����, ����, Ư����ȣ�� ����Ҽ� �ְ� ����(10.09.17)
	#endif //LJH_ADD_SUPPORTING_MULTI_LANGUAGE
	#define YDG_ADD_MOVE_COMMAND_PROTOCOL						// �̵���� �������� �߰�(/�̵� ����) (2009.04.01) [2009.04.22 �׼�]

	//-----------------------------------------------------------------------------
	// [ Season 5 - Part 4]
	#define LDK_MOD_GUARDIAN_DROP_RESIZE					// ���� ��ȣ���� ��ڿ� �������� ������ ����(10.03.04)
	#define PBG_FIX_SATAN_VALUEINCREASE						// ��ź ����� ��ġ ���� ���� ����(10.04.07)
	#define PBG_MOD_GUARDCHARMTEXT							// ��ȣ�Ǻ������� ��������(10.04.14)
	#define LJH_FIX_REARRANGE_INVISIBLE_CLOAK_LEVEL_FOR_CHECKING_REMAINING_TIME	// �������(lv1~8)�� ����ĳ��(lv0~7)�� ���̶����� 8���� ������� ��Ŭ�� �� �� �ð��� �̻��ϰ� ������ ���� ����(10.07.07) 
	#define ASG_FIX_MONSTER_MAX_COUNT_1024					// #define MAX_MONSTER 512 -> 1024�� ����(10.06.29)
	#define LJH_FIX_GETTING_ZEN_WITH_PET_OF_OTHER_PLAYER	// ��� �÷��̾��� ���� ���� �Ծ��ִ� ���� ����(10.05.10)
	#define LJH_FIX_BUG_DISPLAYING_NULL_TITLED_QUEST_LIST			// �������� ���� Ľ�Ʈ �ε����� �������� �ʾ� (null)�� ǥ�õǴ� �׸��� Ľ�Ʈ ����� ���鶧 ���� �ʵ��� ����(10.04.14)
	#define LJH_FIX_BUG_SELLING_ITEM_CAUSING_OVER_LIMIT_OF_ZEN		// �����ѵ����� �ʰ��ϴ� �Ǹž��� �������� ���� ���ϰ� ������ �޼����� ������ �ʵ��� ����(10.04.15)				
	#define PBG_FIX_CHARACTERSELECTINDEX					// ĳ���� �ε��� ���׼���(10.07.05)
#endif //SEASON5_4
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define KJH_FIX_INGAMESHOP_SENDGIFT_ELIXIROFCONTROL		// �ΰ��Ӽ� �����ϱ⿡�� �ũ�ε尡 �ƴ� Ŭ������ �����ϱ� ������ �ִ¹��� ���� (10.06.23)
#define KJH_FIX_SELL_EXPIRED_UNICON_PET					// �Ⱓ���� �������� �����Ǹ� �����ϰ� ���� (10.06.08)
#define KJH_FIX_SELL_EXPIRED_CRITICAL_WIZARD_RING		// �Ⱓ���� ġ������ �������� ���� �����Ǹ� �����ϰ� ���� (10.06.08)


//----------------------------------------------------------------------------------------------
// << Season 5 - Part 1 

#define UPDATE_100527
#ifdef UPDATE_100527

	//-----------------------------------------------------------------------------
	// [ Season 5 - Part 3]
	#define KJH_FIX_BTS158_TEXT_CUT_ROUTINE							// UI�� �°� Text�� �ڸ��� �̻����� ���� (10.05.07)
	#define KJH_FIX_BTS179_INGAMESHOP_STORAGE_UPDATE_WHEN_ITEM_BUY	// �ΰ��Ӽ� ������ ���Խ� ������ �ǿ��� ������ �������� ���ŵǴ� ���׼��� (10.05.13)
	#define KJH_FIX_MINIMAP_NAME									// �̴ϸʿ��� NPC/Portal Name �� ©���� ���� ���� (10.05.14) - minimap ��ũ��Ʈ ��� ��������
	#define KJH_MOD_BTS184_REQUIRE_STAT_WHEN_SPELL_SKILL			// ��ų ������ ���� �䱸ġ�� ���� ��ų ��� ���� (10.05.17)
	#define KJH_FIX_EMPIREGUARDIAN_ENTER_UI_RENDER_TEXT_ONLY_GLOBAL	// ������ȣ�� ���� UI(����ƮNPC) Text ���� (10.05.17) - �۷ι� ����
	#define KJH_FIX_DOPPELGANGER_ENTER_UI_RENDER_TEXT_ONLY_GLOBAL	// ���簻�� ���� UI(�簡��NPC) Text ���� (10.05.19) - �۷ι� ����
	#define KJH_FIX_BTS167_MOVE_NPC_IN_VIEWPORT						// ����Ʈ�ȿ� NPC�� ������ NPC�� ���ڱ� �̵��ϴ� ���׼��� (10.05.17)
	#define KJH_FIX_BTS204_INGAMESHOP_ITEM_STORAGE_SELECT_LINE		// �ΰ��Ӽ� �����Կ��� 1��° ������ ����, ��Ŀ���� 3��° ���������� ���õǴ� ���׼��� (10.05.18)
	#define	KJH_FIX_BTS206_INGAMESHOP_SEND_GIFT_MSGBOX_BLANK_ID		// �ΰ��Ӽ� �����ϱ� �޼���â���� ID�Է����� �ʰ� Ȯ�� ��ư Ŭ����, ����Ȯ�� �޼���â�� �ߴ� ���� (10.05.18)
	#define KJH_MOD_COMMON_MSG_BOX_BTN_DISABLE_TEXT_COLOR			// ���� �޼����ڽ� ��ư Disable�� ���ڻ� ���� (10.05.18)
	#define	KJH_MOD_BTS208_CANNOT_MOVE_TO_VULCANUS_IN_NONPVP_SERVER	// nonPVP �����ϴ� ��ī������ �̵��Ұ� (10.05.18)
	#define KJH_FIX_BTS207_INGAMESHOP_SEND_GIFT_ERRORMSG_INCORRECT_ID	// �ΰ��Ӽ� �����ϱ⿡�� ���� ���̵� Ʋ������ ���� �޼��� (10.05.19)
	#define KJH_FIX_BTS251_ELITE_SD_POTION_TOOLTIP					// ����Ʈ SD���� ������ �ȳ����� ���� ���� (10.05.24)
	#define KJH_FIX_BTS260_PERIOD_ITEM_INFO_TOOLTIP					// �Ⱓ�������� �Ⱓ�� ���� ���� ���� ���� (10.05.24)
	#define KJH_FIX_BTS295_DONT_EXPIRED_WIZARD_RING_RENDER_SELL_PRICE	// �Ⱓ�� ����������� �Ⱓ�� ������� �ʾҴµ� �ǸŰ����� ������ ���� ���� (10.05.25)
	#define KJH_MOD_INGAMESHOP_GIFT_FLAG							// �ΰ��Ӽ� �����ϱ� Flag�� �����ϱ� ��ư On/Off (10.05.25)
	#define ASG_FIX_QUEST_GIVE_UP									// Ľ�Ʈ ���� ���� ����. Ľ�Ʈ ����(QS) 0xfe������.(10.05.26)

	//-----------------------------------------------------------------------------
	// [ Season 5 - Part 3]
	#define KJH_MOD_INGAMESHOP_UNITTTYPE_FILED_OF_PRODUCT_SCRIPT	// Product ���Ӽ� ��ũ��Ʈ�� UnitType�ʵ�� ������ ���� (10.04.22) - 10.03.29���� �ΰ��Ӽ� ���̺귯�� ����

	//-----------------------------------------------------------------------------
	// [ Season 5 - Part 3]
	#define KJH_FIX_INIT_EVENT_MAP_AT_ABNORMAL_EXIT			// ������������ ����� �̺�Ʈ�� �ʱ�ȭ (10.04.20)

	#define LDS_ADD_OUTPUTERRORLOG_WHEN_RECEIVEREFRESHPERSONALSHOPITEM	// �η� ���� �����κ��� ���λ��� �������� ReceiveRefreshPersonalShopItem ���� �� Error Log ������ �� �ڼ��� ��� (10.03.30)
	#define LDS_FIX_MEMORYLEAK_WHERE_NEWUI_DEINITIALIZE		// �η����� DEAD���� : NewUI �� ��� ó�� �޸� �̹�ȯ���� ���� �޸� ���� �۾� (10.03.23)
	#define ASG_MOD_GM_VIEW_NAME_IN_GENS_STRIFE_MAP			// �ս� ������������ GM�� Ÿ���� ĳ���� �̸� ���̰�(10.02.26)
	//^#define KJH_FIX_MOVE_MAP_GENERATE_KEY				// �� �̵�(&���̽�ų ��������)�� �����Ǵ� Ű�� ����

	#define ASG_FIX_GENS_STRIFE_FRIEND_NAME_BLOCK			// �ս� ������������ ģ�� �̸� �ڵ��Է� ����(2010.02.03)
	#define ASG_MOD_GENS_STRIFE_ADD_PARTY_MSG				// �ս� �������� ���� ��Ƽ �޽��� �߰�.(2010.02.03)
	#define PBG_MOD_STRIFE_GENSMARKRENDER					// ������������ǥ�� ����(10.02.18)
	#define YDG_FIX_MOVE_ICARUS_EQUIPED_SKELETON_CHANGE_RING	// ���̷��溯�Ź��� ������ ��ī�罺�� �̵��� �� ���� ���� (10.02.16)
	#define ASG_ADD_LEAP_OF_CONTROL_TOOLTIP_TEXT			// ����� ��� ���� �ؽ�Ʈ �߰�(2010.01.28)
	#define PBG_FIX_GAMECENSORSHIP_1215							// 12/15�� �̿밡�� ��ũ ���� ���׼���(10.02.09)
	#define LDS_FIX_DISABLE_INPUTJUNKKEY_WHEN_LORENMARKT		// ���ս��� �̵� �ÿ� ������� Ű �� ���콺 ��ǲ �Է��� ���� �ʾ� ����� ������ �ϰ� Skip ó��. (10.02.02) 
	//^#define PBG_MOD_GAMECENSORSHIP_RED						// ������ ��쵵 18�̻󰡴ɰ��� ����(09.01.26)[10.02.04������ġ�� �׼�/���� ��� ���� ����]
	#define LDS_FIX_DISABLEALLKEYEVENT_WHENMAPLOADING			// ���̵� ��û���� �����κ��� ���̵� ����� ���������� ��� Ű�Է��� �����ϴ. (�η�����, ���� ���� �̵� ��û�ÿ� esc�� �ɼ�â "��������"ȣ������ ��� Ű�Է��� �ȵǴ� ���� ). (10.01.28)
	#define PBG_FIX_GENSREWARDNOTREG							// �ս� �̰����ڰ� ��������� ���� ����(10.01.28)

	#define LJH_ADD_SAVEOPTION_WHILE_MOVING_FROM_OR_TO_DIFF_SERVER	// (JP_622, JP_624)(��������)��� ����(���� ��������, �η�����)�������� �Ǵ� ��� ������ �̵��� �� �ɼ��� ���� ���� �ʴ� ���� ����(10.04.16)
	#define LJH_FIX_DIVIDE_LINE_BY_PIXEL_FOR_GENS_RANK	// �ս����� ��ũ�̸��� �ʹ� ��� ����� � ������ �ʾ� nPixelPerLine = 240���� ���� _ �Ϻ� ����(10.03.10)
	#define LJH_FIX_UNABLE_TO_TRADE_OR_PURCHASE_IN_TROUBLED_AREAS	// ������������ /�ŷ�, /���� ��ɾ� ���� (10.03.31)
	#define LJH_FIX_NO_EFFECT_ON_WEAPONS_IN_SAFE_ZONE_OF_CURSED_TEMPLE	// ȯ������� ������������ 15���� ������ ����Ʈ ������ �ʴ� ���� ����(10.04.16)


	//-----------------------------------------------------------------------------
	// [ Season 5 - Part 3]
	#define SEASON5_PART3
	#ifdef SEASON5_PART3
		//------------------------------------------------
		// 1. �η�����
		// - �̵���
		#define LDS_ADD_MAP_UNITEDMARKETPLACE					// ���� ���� ���� (�η� ����) �߰� (09.12.04)
		#ifdef LDS_ADD_MAP_UNITEDMARKETPLACE
			#define LDS_ADD_NPC_UNITEDMARKETPLACE					// NPC �η����� 1.����� ���� �� ��ü ���, 2.���� ���� �����, 3.���� �� ��Ÿ ��ȭ ������ ���� ũ����ƾ (09.12.15)
			#define LDS_ADD_UI_UNITEDMARKETPLACE					// UI �η����� �޼��� ó�� 1.ī�����ɽ� ���� �Ұ� 2.������û�Ұ� 3.��Ƽ��û �Ұ� 4.
			#define LDS_ADD_SERVERPROCESSING_UNITEDMARKETPLACE		// �������� ���� ó�� 1.���ս�������� �̵� 2. (09.12.23)
			#define LDS_ADD_SOUND_UNITEDMARKETPLACE					// ���ս��� ȯ����, ����� ó��. (10.01.12)
			//#define LDS_ADD_MOVEMAP_UNITEDMARKETPLACE				// ���̵� �����쿡 "���� ����" �߰�. (10.01.12)
			#define LDS_ADD_EFFECT_UNITEDMARKETPLACE				// ���ս��� NPC � �߰� EFFECT. (10.01.14)
		#endif // LDS_ADD_MAP_UNITEDMARKETPLACE

		#define PBG_ADD_GENSRANKING
		#define KJH_ADD_SKILLICON_RENEWAL
		#define PBG_MOD_PREMIUMITEM_TRADE_0118						// ī���� ī��,����,����Ǻ��� ������ �ŷ��������� ��ȹ����(10.01.18)
		#define KJH_FIX_INGAMESHOP_SCRIPTDOWN_BUG2				// �ΰ��Ӽ� ��ũ��Ʈ ���ε� ���׼��� 2 (10.01.14)
		#define ASG_ADD_QUEST_REQUEST_REWARD_TYPE				// Ľ�Ʈ �䱸����, ���� �߰�(2009.12.15)
		#define YDG_MOD_SKELETON_NOTSELLING						// ���̷��� �� ���� ���ȸ��� ����(2010.01.20)
		#define YDG_FIX_CHANGERING_STATUS_EXPIRE_CHECK			// ���Ź��� ���ȿø��� ���� üũ (2010.01.25)
		#define YDG_FIX_SKELETON_PET_CREATE_POSITION			// ���̷��� �� ���� ��ġ ���� (2010.01.26)
	#endif // SEASON5_PART3

	//-----------------------------------------------------------------------------
	// [ Season 5 - Part 2]

	#define PBG_MOD_PANDAPETRING_NOTSELLING						// ��� �� ���� ���ȸ��� ����(10.01.11)
	#define LJH_FIX_EXTENDING_OVER_MAX_TIME_4S_To_10S			// �ؿܻ���ڵ� �Ϻ� ����ڿ��� ĳ�ü��� ������ �ʾ� Max Time�� ���� 4�ʿ��� 10�ʷ� ����(09.12.17)
	#define KJH_FIX_INGAMESHOP_SCRIPTDOWN_BUG					// �ΰ��Ӽ� ��ũ��Ʈ ���ε� ���� (09.12.28)
	#define LDK_FIX_EXPIREDPERIOD_ITEM_EQUIP_WARNING			// ����� ������ �ۿ�Ұ� �� ��� 
	#define LDK_FIX_EQUIPED_EXPIREDPERIOD_RING_EXCEPTION		// �������� ����� ���� �ɷ�ġ ��� ����ó��(09.12.11)
	#define LDK_FIX_EQUIPED_EXPIREDPERIOD_AMULET_EXCEPTION		// �������� ����� ����� �ɷ�ġ ��� ����ó��(09.12.11)
	#define LDS_FIX_VISUALRENDER_PERIODITEM_EXPIRED_RE			// �ΰ��Ә� �����۵��� �����, �����鿡 ���� �Ⱓ�� ���� ���� ��� �Ҵ� ó�� (�κ��丮�󿡼� ���־� ó����.) (09.12.10)
	#define KJH_FIX_SOURCE_CODE_REPEATED						// ���� �ҽ��ڵ� �ߺ��Ȱ� ���� (09.10.12)
	#define ASG_MOD_QUEST_OK_BTN_DISABLE						// Ľ�Ʈ ���� Ȯ�� ��ư ��Ȱ��ȭ ���� �߰�(2009.11.23)
	#define KJH_FIX_MOVE_ICARUS_EQUIPED_PANDA_CHANGE_RING		// �Ҵ����Ź��� ������ ��ī�罺�� �̵��� �� ���� ���� (09.11.30)
	#define ASG_MOD_GUILD_RESULT_GENS_MSG						// ��� ���Խ� �ս� ���� �޽���.(2009.11.23)
	#define LDK_MOD_BUFFTIMERTYPE_SCRIPT						// ����Ÿ�̸� Ÿ�԰��� buffEffect.txt�� Viewport�� �޾Ƽ� ����(09.11.10) - enum.h : Ÿ�̸� �ʿ��� ���� ��Ͻ� eBuffTimeType�� ��Ͼ��ص� ��
	#define ASG_FIX_GENS_JOINING_ERR_CODE_ADD					// �ս� ���� ���� �ڵ� �߰�.(���ձ���� ����)(2009.11.12)
	#define KJH_FIX_INGAMESHOP_INIT_BANNER						// �ΰ��Ӽ� ��� ���ε� �� �ʱ�ȭ���� �ʾ� Render�� �ȵŴ� ���� (09.11.10)
	#define LDK_MOD_PC4_GUARDIAN_EXPIREDPERIOD_NOTPRINT_INFO	// ĳ��������â���� ����� ����, ��ȣ���� ��ġ ǥ�� ����(09.11.12)
	#define LDK_MOD_ITEM_DROP_TRADE_SHOP_EXCEPTION				// ī��������,ī����ī��,����,��ȣ����,�Ҵ���,�Ҵ����Ź���,�������ǹ��� �Ϲݾ����۽� ������,���λ���,���ΰŷ� �����ϵ��� ó��(09.11.16)
	#define YDG_ADD_GM_DISCHARGE_STAMINA_DEBUFF					// GM�� �Ŵ� ���¹̳� ���� ����� (2009.11.13)
	#define PBG_FIX_MSGBUFFERSIZE								// �޽����ڽ��� ���� �߸��� ���׼���(09.11.13)
	#define PBG_FIX_MSGTITLENUM									// �޽����ڽ� title���� �߸������� ���� ����(09.11.13)
	#define LDS_MOD_MODIFYTEXT_TOPAZRING_SAPIRERING				// �����̾�� ������ ���� �ؽ�Ʈ ���� (09.11.06)
	#define LDK_MOD_TRADEBAN_ITEMLOCK_AGAIN						// �Ϻ� ���� �������� Ʈ���̵� ���� �Ұ��� ����(NOT DEFINE ó��)(09.10.29) (��ȹ���� ���÷� ��� ��.��+)
	#define LDK_FIX_PERIODITEM_SELL_CHECK						// �ǸŽ� �Ⱓ�� ������ Ȯ�� �߰�(09.11.09)
	#define KJH_MOD_SHOP_SCRIPT_DOWNLOAD						// �� ��ũ��Ʈ ���ε� ��� ���� (09.11.09)
	#define KJH_FIX_SHOP_EVENT_CATEGORY_PAGE					// �� �̺�Ʈ ī�װ� ������ ���� ���� (09.11.09)
	#define KJH_FIX_EXPIRED_PERIODITEM_TOOLTIP					// �Ⱓ����� �Ⱓ�� �������� ����Render�� �ȵŴ� ���� ���� (09.11.09)
	#define LDS_MOD_INGAMESHOPITEM_RING_AMULET_CHARACTERATTR	// �ΰ��Ә� �����۵��� ����, ����� �ø����� STATUS ��ġ �ݿ�.
	#define KJH_MOD_RENDER_INGAMESHOP_KEEPBOX_ITEM				// ���Ӽ� ������ �������� ������ 1���϶� Render ���� (2009.11.03)
	#define LDK_MOD_INGAMESHOP_ITEM_CHANGE_VALUE				// ȥ������ȭ ������ ���� ����(09.10.29)
	#define KJH_MOD_INGAMESHOP_PATCH_091028						// �ΰ��Ӽ� ���� - �̺�Ʈ ī�װ�, �ΰ��Ӽ� ���̺귯�� ������Ʈ (09.10.28)

	#define SEASON5_PART2
	#ifdef SEASON5_PART2
		#define KJH_PBG_ADD_INGAMESHOP_SYSTEM
		#ifdef KJH_PBG_ADD_INGAMESHOP_SYSTEM
			#define PBG_ADD_INGAMESHOP_UI_MAINFRAME
			#define PBG_ADD_INGAMESHOP_UI_ITEMSHOP
			#define PBG_ADD_NAMETOPMSGBOX
			#define KJH_ADD_INGAMESHOP_UI_SYSTEM
			#define KJH_ADD_PERIOD_ITEM_SYSTEM
			#define PBG_ADD_INGAMESHOPMSGBOX
			#define PBG_ADD_MSGBACKOPACITY
			#define PBG_ADD_ITEMRESIZE
			#define PBG_FIX_ITEMANGLE
			#define PBG_ADD_MU_LOGO
			//^#define PBG_ADD_CHARACTERSLOT
			#define PBG_ADD_CHARACTERCARD
			//^#define LDK_ADD_INGAMESHOP_LIMIT_MOVE_WINDOW
		#endif //KJH_PBG_ADD_INGAMESHOP_SYSTEM

		#define ASG_ADD_GENS_SYSTEM
		#ifdef ASG_ADD_GENS_SYSTEM
			#define ASG_ADD_UI_NPC_DIALOGUE						// NPC ��ȭâ(2009.09.14)
			#define ASG_ADD_INFLUENCE_GROUND_EFFECT				// �ս� ���� ���� ��� ����Ʈ(2009.10.07)
			#define ASG_ADD_GENS_MARK							// �ս� ��ũ ǥ��(2009.10.09)
			#define ASG_ADD_GENS_NPC							// �ս� NPC �߰�(2009.10.12)
			#define ASG_ADD_GATE_TEXT_MAX_LEVEL					// Gate.txt �ִ� ���� �߰�.(2009.10.16)	[����] ���ҽ� ������ ���ο� �ҽ��� ������ �� ��.
			#define ASG_ADD_MOVEREQ_TEXT_MAX_LEVEL				// Movereq.txt �ִ� ���� �߰�.(2009.10.16)	[����] ���ҽ� ������ ���ο� �ҽ��� ������ �� ��.
		#endif	// ASG_ADD_GENS_SYSTEM

		#define INGAMESHOP_ITEM01							// �ؿܿ��� ��ϵǾ��ְų� ���� ������ ������ ������ �߰�(2009.09.08)
		#ifdef	INGAMESHOP_ITEM01
			#define LDK_MOD_PREMIUMITEM_DROP					// �����̾������� ��������������(09.09.16)
			#define LDK_MOD_PREMIUMITEM_SELL					// �����̾������� �Ǹ���������(09.09.25)
			#define LDK_ADD_INGAMESHOP_GOBLIN_GOLD				// �����ȭ
			#define LDK_ADD_INGAMESHOP_LOCKED_GOLD_CHEST		// ���ε� �ݻ�����
			#define LDK_ADD_INGAMESHOP_LOCKED_SILVER_CHEST		// ���ε� ��������
			#define LDK_ADD_INGAMESHOP_GOLD_CHEST				// �ݻ�����
			#define LDK_ADD_INGAMESHOP_SILVER_CHEST				// ��������
			#define LDK_ADD_INGAMESHOP_PACKAGE_BOX				// ��Ű�� ����A-F
			#define LDK_ADD_INGAMESHOP_SMALL_WING				// �Ⱓ�� ���� ����(����, �糯, �䳯, õ��, �糯)
			#define LDK_ADD_INGAMESHOP_NEW_WEALTH_SEAL			// �ű� ǳ���� ����

			#define LDS_ADD_NOTICEBOX_STATECOMMAND_ONLYUSEDARKLORD	// �ΰ��Ә� ������ // ���¿���5�� // ��ָ��¿��Ŵ� �ũ�ε常 ��밡���� �޼��� ���.
			#define LDS_ADD_INGAMESHOP_ITEM_RINGSAPPHIRE		// �ΰ��Ә� ������ // �ű� �����̾�(Ǫ����)��	// MODEL_HELPER+109
			#define LDS_ADD_INGAMESHOP_ITEM_RINGRUBY			// �ΰ��Ә� ������ // �ű� ���(������)��		// MODEL_HELPER+110
			#define LDS_ADD_INGAMESHOP_ITEM_RINGTOPAZ			// �ΰ��Ә� ������ // �ű� ������(��Ȳ)��		// MODEL_HELPER+111
			#define LDS_ADD_INGAMESHOP_ITEM_RINGAMETHYST		// �ΰ��Ә� ������ // �ű� �ڼ���(�����)��		// MODEL_HELPER+112
			#define LDS_ADD_INGAMESHOP_ITEM_AMULETRUBY			// �ΰ��Ә� ������ // �ű� ���(������) �����	// MODEL_HELPER+113
			#define LDS_ADD_INGAMESHOP_ITEM_AMULETEMERALD		// �ΰ��Ә� ������ // �ű� ���޶���(Ǫ��) �����// MODEL_HELPER+114
			#define LDS_ADD_INGAMESHOP_ITEM_AMULETSAPPHIRE		// �ΰ��Ә� ������ // �ű� �����̾�(���) �����// MODEL_HELPER+115
			#define LDS_ADD_INGAMESHOP_ITEM_KEYSILVER			// �ΰ��Ә� ������ // �ű� Ű(�ǹ�)				// MODEL_POTION+112
			#define LDS_ADD_INGAMESHOP_ITEM_KEYGOLD				// �ΰ��Ә� ������ // �ű� Ű(���)				// MODEL_POTION+113
			#define LDS_ADD_INGAMESHOP_ITEM_PASSCHAOSCASTLE		// �ΰ��Ә� ������ // ī�����ɽ� ���������		// MODEL_HELPER+121
			#define LDS_ADD_INGAMESHOP_ITEM_PRIMIUMSERVICE6		// �ΰ��Ә� ������ // �����̾�����6��			// MODEL_POTION+114~119
			#define LDS_ADD_INGAMESHOP_ITEM_COMMUTERTICKET4		// �ΰ��Ә� ������ // ���ױ�4��					// MODEL_POTION+126~129
			#define LDS_ADD_INGAMESHOP_ITEM_SIZECOMMUTERTICKET3	// �ΰ��Ә� ������ // ������3��					// MODEL_POTION+130~132
		#endif	//INGAMESHOP_ITEM01

	#endif // SEASON5_PART2

	#define ADD_TOTAL_CHARGE_8TH
	#ifdef  ADD_TOTAL_CHARGE_8TH
		#define YDG_ADD_HEALING_SCROLL						// ġ���� ��ũ�� (2009.12.03)

		#define LJH_ADD_RARE_ITEM_TICKET_FROM_7_TO_12		// ��;����� Ƽ�� 7-12 �߰� (2010.02.12)
		#define LJH_ADD_FREE_TICKET_FOR_DOPPELGANGGER_BARCA_BARCA_7TH	//���ð���, ���ī, ���ī �� 7�� ��������� �߰�(2010.02.17)

		#define YDG_ADD_SKELETON_CHANGE_RING				// ���̷��� ���Ź��� (2009.12.03)
		#define ADD_SKELETON_PET							// ���̷��� �� (2009.12.03)
		#ifdef  ADD_SKELETON_PET
			#define YDG_ADD_SKELETON_PET					// ���̷��� �� 
			#define YDG_FIX_SKELETON_PET_CREATE_POSITION	// ���̷��� �� ���� ��ġ ���� (2010.01.26)
			#ifndef KJH_ADD_PERIOD_ITEM_SYSTEM					// #ifndef
				#define LJH_FIX_IGNORING_EXPIRATION_PERIOD		// �Ϻ����� ���� �Ⱓ���� ������� �����Ƿ� bExpiredPeriod�� ������� �ʵ��� ����(2010.02.11) - �Ⱓ�� �ý��� ���� �� ����
			#endif // KJH_ADD_PERIOD_ITEM_SYSTEM
			#define YDG_FIX_CHANGERING_STATUS_EXPIRE_CHECK	// ���Ź��� ���ȿø��� ���� üũ (2010.01.25)
			#define LDK_FIX_PC4_GUARDIAN_DEMON_INFO			// ���� ĳ��������â�� ���ݷ�,����,���ַ� �߰� ������ ����(09.10.15) - ĳ��������â�� �� ����� ���� ���ַ� �߰� �������� ���� ��Ű�� ���� �߰�
			#define LJH_FIX_NOT_POP_UP_HIGHVALUE_MSGBOX_FOR_BANNED_TO_TRADE	//NPC���� �Ǹ� ������ �������� �Ǹ��Ϸ��� �Ҷ� ���� �������̶�� ������ �޼��� â�� �ȳ����� ����(10.02.19)
		#endif  //ADD_SKELETON_PET

		#define YDG_MOD_CHANGE_RING_EQUIPMENT_LIMIT			// ���Ź��� ������� ����ϵ��� ���� (2009.12.28)
	#endif  //ADD_TOTAL_CHARGE_8TH

	//-----------------------------------------------------------------------------
	// [ Seaso 5 - Part 1]

	#define LDS_ADD_SET_BMDMODELSEQUENCE_					// BMD Ŭ������ ������ �ʴ� ������ BmdSequenceID�� BMDSequence ����. (09.08.05)
	#define LDS_FIX_MEMORYLEAK_BMDWHICHBONECOUNTZERO		// BoneCount==0 �� BMD�鿡 ���� BMD Destruct ������ �߻��ϴ� �޸� �� FIX. (09.08.13)
	#define LDS_ADD_EG_ADDMONSTER_ACTION_GUARDIANDEFENDER	// ���� ��ȣ�� ���к��� �����κ����� ���� ��ų==>Action ���� �۾�. (09.08.18)
	#define LDS_ADD_EG_ADDMONSTER_ACTION_GUARDIANDEFENDER_EX	// ���к��� 1�� ��ų(44)������ ������İ� ��� ����� ���ϸ��̼� ȣ�� �� ���� (09.08.21)
	#define LDS_FIX_EG_COLOR_CHANDELIER							// release ��弭�� ���� ��ȣ�� �ָ��� ���鸮�� ���� �� ��� ���� ���� (09.08.21)
	#define LDS_ADD_EG_ADDMONSTER_ACTION_GUARDIANDEFENDER_EX2	// ���к� 44�� ���и��� ��ų�� ��Ȥ �������� ��󺸴� ���� ���� (09.08.24)
	#define LDS_FIX_SKILLKEY_DISABLE_WHERE_EG_ALLTELESKILL	// ���� �ڷ��迭(�ڷ�Ű�׽ý�,�����̵�) ��ų���� ������ȣ�� �������� ��� ���ϵ��� ����(09.08.28)
	#define LDS_FIX_EG_JERINT_ATTK1_ATTK2_SPEED				// ������ȣ�� ����Ʈ ����1, ����2 �ӵ� �߸��� ��ġ�� FIX �۾� (09.09.04)
	#define LDS_MOD_ANIMATIONTRANSFORM_WITHHIGHMODEL			// AnimationTransformWithAttachHighModel�Լ����� ���� arrayBone�� �ʿ��� ���� Transform���� Bone�� Vertices�� ������ �ʵ��� ����. (2009.09.09)
	#define LDS_ADD_ANIMATIONTRANSFORMWITHMODEL_USINGGLOBALTM	// AnimationTransformWithAttachHighModel�Լ��� TMArray�� Local�� ������ ���� ���꿡 TM�� Point�� �Ҿ������ �������� TM�� Global ���� ����. (09.09.07)
	#define LDS_FIX_EG_JERINT_ANIMATION_AND_SWORDFORCE_SPEED	// ����Ʈ�� ���� �ӵ� �� �˱� �ð� ���� ���۾� (09.09.08) 

	#define YDG_FIX_DOPPELGANGER_BUTTON_COLOR				// ���ð��� UI ��ư ��۶� �� �̻��� ���� (2009.08.14)
	#define YDG_MOD_DOPPELGANGER_END_SOUND					// ���ð��� ���� ���� �߰� (2009.08.20)
	#define YDG_MOD_TOURMODE_MAXSPEED						// ������ �ְ�ӵ� �ø� (2009.07.10)

	#define ASG_FIX_QUEST_PROTOCOL_ADD						// �ű� Ľ�Ʈ �������� �߰�.(2009.09.07)

	#define PBG_ADD_NEWLOGO_IMAGECHANGE						// �εȭ�� �̹��� ����(09.08.12)

	#define PJH_NEW_SERVER_SELECT_MAP						// ���� ����ȭ�� ����(09.08.17)


	//-----------------------------------------------------------------------------
	// [ Season 5 - Part 1] (09.09.11)
	#define SEASON5										
	#ifdef SEASON5
		#define YDG_ADD_DOPPELGANGER_EVENT
		#ifdef YDG_ADD_DOPPELGANGER_EVENT
			#define YDG_ADD_MAP_DOPPELGANGER1					// ���ð��� ��1 (��Ŭ���º��̽�) (2009.03.22)
			#define YDG_ADD_MAP_DOPPELGANGER2					// ���ð��� ��2 (��ī�������̽�) (2009.03.22)
			#define YDG_ADD_MAP_DOPPELGANGER3					// ���ð��� ��3 (��Ʋ�������̽�) (2009.03.22)
			#define YDG_ADD_MAP_DOPPELGANGER4					// ���ð��� ��4 (ĭ����1�����̽�) (2009.03.22)
			#define YDG_ADD_DOPPELGANGER_MONSTER				// ���ð��� ���� �߰� (2009.05.20)
			#define YDG_ADD_DOPPELGANGER_NPC					// ���ð��� NPC �簡�� �߰� (2009.05.20)
			#define YDG_ADD_DOPPELGANGER_ITEM					// ���ð��� ������ �߰� (2009.05.20)
			#define YDG_ADD_DOPPELGANGER_UI						// ���ð��� UI �߰� (2009.05.20)
			#define YDG_ADD_DOPPELGANGER_PROTOCOLS				// ���ð��� �������� �߰� (2009.06.23)
			#define YDG_ADD_DOPPELGANGER_PORTAL					// ���ð��� �� ��Ż �߰� (2009.07.30)
			#define YDG_ADD_DOPPELGANGER_SOUND					// ���ð��� ���� �߰� (2009.08.04)
		#endif	// YDG_ADD_DOPPELGANGER_EVENT

		#define LDS_ADD_EMPIRE_GUARDIAN
		#ifdef LDS_ADD_EMPIRE_GUARDIAN
			#define LDS_ADD_MAP_EMPIREGUARDIAN2					// ���� ��ȣ�� �� 2   (ȭ,  ��)
			#define LDS_ADD_MAP_EMPIREGUARDIAN4					// ���� ��ȣ�� �� 2   (��	  )
			#define LDS_ADD_EG_4_MONSTER_WORLDBOSS_GAIONKALEIN	// ���� ��ȣ�� �� 4   (��	  )���� ��� ���� ���̿� ī����	(504/164)
			#define LDS_ADD_EG_4_MONSTER_JELINT					// ���� ��ȣ�� �� 4   (��	  )���� ���̿� ���°� ����Ʈ		(505/165)
			#define LDS_ADD_EG_3_4_MONSTER_RAYMOND				// ���� ��ȣ�� �� 3,4 (����,��)���� �λ�ɰ� ���̸��			(506/166)
			#define LDS_ADD_EG_2_4_MONSTER_ERCANNE				// ���� ��ȣ�� �� 2,4 (ȭ��,��)���� ���ְ� ����ĭ��			(507/167)
			#define LDS_ADD_EG_2_MONSTER_2NDCORP_VERMONT		// ���� ��ȣ�� �� 2   (ȭ,  ��)���� 2������ ����Ʈ			(509/169)
			#define LDS_ADD_EG_2_MONSTER_ARTICLECAPTAIN			// ���� ��ȣ�� �� 2   (ȭ,  ��)���� ������					(514/174)
			#define LDS_ADD_EG_2_MONSTER_GRANDWIZARD			// ���� ��ȣ�� �� 2   (ȭ,  ��)���� �븶����					(515/176)

			#define LDK_ADD_EG_MONSTER_DEASULER					// ���� ��ȣ�� 1������ ������									(508/168)
			#define LDK_ADD_EG_MONSTER_DRILLMASTER				// ���� ��ȣ�� ������ȣ����������
			#define LDK_ADD_EG_MONSTER_QUARTERMASTER			// ���� ��ȣ�� �����屳
			#define LDK_ADD_EG_MONSTER_CATO						// ���� ��ȣ�� 2������ ī��
			#define LDK_ADD_EG_MONSTER_ASSASSINMASTER			// ���� ��ȣ�� �ϻ��屳
			#define LDK_ADD_EG_MONSTER_RIDERMASTER				// ���� ��ȣ�� �⸶����
			#define LDK_ADD_EG_MONSTER_GALLIA					// ���� ��ȣ�� 4������ ������

			#define LDK_FIX_EG_DOOR_ROTATION_FIXED				// ���� ��ȣ�� ���� �Ƿɿ� ���� ȸ������(2009.07.21)
			#define LDK_ADD_EG_DOOR_EFFECT						// ���� ��ȣ�� �� ���� �ı� ����Ʈ
			#define LDK_ADD_EG_STATUE_EFFECT					// ���� ��ȣ�� �� ���� �ı� ����Ʈ

			#define	LDK_ADD_EG_MONSTER_RAYMOND					// ���� ��ȣ�� �λ�ɰ� ���̸�� (��, ��)
			#define LDK_ADD_EG_MONSTER_KNIGHTS					// ���� ��ȣ�� ����	Imperial Guardian Knights	520 - 181	
			#define LDK_ADD_EG_MONSTER_GUARD					// ���� ��ȣ�� ȣ����	Imperial Guardian guard		521 - 182
			#define ASG_ADD_EG_MONSTER_GUARD_EFFECT				// ���� ��ȣ�� ȣ���� (�˱� ����Ʈ)
			#define LDS_ADD_EG_MONSTER_GUARDIANDEFENDER			// ���� ��ȣ�� �� 1234(������)���� ��ȣ�� ���к�			(518/178)
			#define LDS_ADD_EG_MONSTER_GUARDIANPRIEST			// ���� ��ȣ�� �� 1234(������)���� ��ȣ�� ġ����			(519/179)

			#define LDK_ADD_MAPPROCESS_RENDERBASESMOKE_FUNC		// MapProcess�� RenderBaseSmoke ó�� �Լ� �߰�(09.07.31)
			#define	LDK_ADD_MAP_EMPIREGUARDIAN1					// ���� ��ȣ�� �� 1 (�, ��)
			#define	LDK_ADD_MAP_EMPIREGUARDIAN3					// ���� ��ȣ�� �� 3 (��, ��)

			#define LDK_ADD_EMPIRE_GUARDIAN_DOOR_ATTACK			// ���� ��ȣ�� ������ �ʼӼ������ϰ� ���ݰ����ϵ����� (09.08.06)

			#define LDK_ADD_EMPIREGUARDIAN_UI					// ���� ��ȣ�� ui
			#define LDK_ADD_EMPIREGUARDIAN_PROTOCOLS			// ���� ��ȣ�� ��������
			#define LDK_ADD_EMPIREGUARDIAN_ITEM					// ���� ��ȣ�� ������(4��:��ɼ�, ��������, ��ũ�ι���, ����)

			#define LDS_ADD_RESOURCE_FLARERED					// FLARE_RED.jpg ȿ�� �߰�

			#define LDS_ADD_MODEL_ATTACH_SPECIFIC_NODE_			// Ư�� ���� Ư�� ��忡 ��� Ư�� ���� ATTACH �ϴ� �Լ��� �߰��մϴ. (09.06.12)
			#define LDS_ADD_INTERPOLATION_VECTOR3				// vec3_t�� ���� �Լ��� zzzmathlib.h�� �߰�. (09.06.24)
			#define LDS_ADD_EFFECT_FIRESCREAM_FOR_MONSTER		// �ũ�ε��� ���̾ũ�� ��ų�� Ư�� ����(����ĭ��)�� ���̾ũ���� �߰��մϴ. (09.07.07)
			#define LDS_MOD_EFFECTBLURSPARK_FORCEOFSWORD		// EffectBlurSpark �� �˱���� ���� ���ѿ� ������ �˱Ⱑ ��Ȥ ������ �������� �κ� ����. (09.07.28)
			#define LDS_ADD_MAP_EMPIREGUARDIAN4_MAPEFFECT		// �ָ����� �� Effect�� �߰��Ǵ� ��ƼŬ, EFFECT��.. 
			#define LDS_FIX_MEMORYLEAK_DESTRUCTORFORBMD			// BMD�� �Ҹ��ڷ� ���� ���� BMD���� �߻��� memoryleak FIXED.. (2009.08.13)

			#define PBG_ADD_RAYMOND_GUARDIANPRIEST_MONSTER_EFFECT	// (���̸��)(ġ����)���� ����Ʈ �۾�(09.07.02)

			#define KJH_ADD_EG_MONSTER_KATO_EFFECT					// 3������ ī�� ����Ʈ (09.07.20)
			#define KJH_ADD_EG_MONSTER_GUARDIANDEFENDER_EFFECT		// ��ȣ�� ���к� ����Ʈ (09.07.31)
		#endif //LDS_ADD_EMPIRE_GUARDIAN

		#define ASG_ADD_NEW_QUEST_SYSTEM						// �� Ľ�Ʈ �ý���(2009.05.20)
		#ifdef ASG_ADD_NEW_QUEST_SYSTEM
			#define ASG_ADD_UI_QUEST_PROGRESS					// Ľ�Ʈ ���� â(NPC��)(2009.05.27)
		#ifndef ASG_ADD_UI_NPC_DIALOGUE								// #ifndef ������ ASG_ADD_UI_NPC_MENU ������ ��� ����.
			#define ASG_ADD_UI_NPC_MENU							// NPC �޴�â(2009.06.17)
		#endif	// ASG_ADD_UI_NPC_DIALOGUE
			#define ASG_ADD_UI_QUEST_PROGRESS_ETC				// Ľ�Ʈ ���� â(��Ÿ��)(2009.06.24)
			#define ASG_MOD_UI_QUEST_INFO						// Ľ�Ʈ ���� â(2009.07.06)
			#define ASG_MOD_3D_CHAR_EXCLUSION_UI				// 3D ĳ���� ǥ���� ���� UI�� ���.(2009.08.03)
		#endif	// ASG_ADD_NEW_QUEST_SYSTEM


		// Season 5					
		#define KJH_PBG_ADD_SEVEN_EVENT_2008					// ���� ���ȭ 7�ֳ� �̺�Ʈ	(���䳢)(2008.10.30) 
		#define LJH_MOD_POSITION_OF_REGISTERED_LUCKY_COIN		// ����� ���� ��� ���� ���� 2^31�� �ʿ� ���� �����̹����� ��ġ�� ���� �������� ����(2010.02.16)							
		#define YDG_MOD_SEPARATE_EFFECT_SKILLS					// ��ų �˻��ϴ� ����Ʈ �и� (���� ���� ��) (2009.08.10)
		#define ASG_ADD_NEW_DIVIDE_STRING						// ���ο� ���� ������ ���.(2009.06.08)
		#define PBG_ADD_DISABLERENDER_BUFF						// �������� ���� �̹��� ó��(09.08.10)

	#endif	// SEASON5


	#define ADD_TOTAL_CHARGE_7TH
	#ifdef ADD_TOTAL_CHARGE_7TH
		// - ���
		#define YDG_ADD_CS7_CRITICAL_MAGIC_RING		// ġ��������
		#define YDG_ADD_CS7_MAX_AG_AURA				// AG���� ����
		#define YDG_ADD_CS7_MAX_SD_AURA				// SD���� ����
		#define YDG_ADD_CS7_PARTY_EXP_BONUS_ITEM	// ��Ƽ ����ġ ���� ������
		#define YDG_ADD_CS7_ELITE_SD_POTION			// ����Ʈ SDȸ�� ����
		#define YDG_MOD_AURA_ITEM_EXCLUSIVELY_BUY	// ���� �ߺ� ���� ���� (09.11.02)

		// - �̵��
		#define LDK_MOD_PETPROCESS_SYSTEM			// �����μ��� ������Ʈ ���� ����(�ִϸ��̼� �ӵ� ���� ���� ����)(2009.09.11)
		#define LDK_ADD_CS7_UNICORN_PET				// ������ �� 
		#define LDK_FIX_CS7_UNICORN_PET_INFO		// ������ �� ĳ���� ����â ���� �߰�

		// - �ں��
		#define PBG_ADD_AURA_EFFECT					// AG SD ���� ���� ����Ʈ
	#endif //ADD_TOTAL_CHARGE_7TH

	#define KJH_FIX_GET_ZEN_SYSTEM_TEXT						// �׺�������� �����۱��Խ� ������ �޼����� ������ ����. (09.03.18) [09.03.19 �׼�]
	#define KJH_FIX_WOPS_K33695_EQUIPABLE_DARKLOAD_PET_ITEM	// �ũ�ε尡 �κ��� ���� �����ϰ� ������, ������ ����Ұ��� ������ ���׼��� (09.04.27)
	#define KJH_FIX_WOPS_K33479_SELECT_CHARACTER_TO_HEAL	// ĳ���Ϳ��� �ѷ��׿�����, ������ ġ�ὺų��ȭ���� ĳ���� ������ �� �ȵǾ����� ���׼��� (09.04.27)
	#define KJH_FIX_CHAOTIC_ANIMATION_ON_RIDE_PET			// ����Ÿ�� �ũ�ε� ī��ƽ���̾� ��ų�� �ִϸ��̼Ǽ��� (08.12.18)

	#define CSK_FIX_UI_FUNCTIONNAME							// UI���� �Լ��� ����(2009.01.22) [2009.03.26 �׼�]
	#define CSK_FIX_ANIMATION_BLENDING						// �ִϸ��̼� ����� ���� �ȵǰ� �ɼ� �ְ� ����(2009.01.29) [2009.03.26 �׼�]
	#define CSK_FIX_ADD_EXEPTION							// dmp���� �м��غ��� getTargetCharacterKey �Լ����� ƨ��°ɷ� �����Ǽ� ����ó�� �߰�(2009.01.29) [2009.03.26 �׼�]

	#define PBG_FIX_PKFIELD_ATTACK							// PKFIELD���� �������� ���ݵǴ� ����(09.04.02) [2009.04.06 �׼�]
	#define PBG_FIX_PKFIELD_CAOTIC							// ī��ƽ ���̾� Ż �Ϳ��� ���� ����(09.04.07) [2009.04.13 �׼�]
	#define PBG_FIX_GUILDWAR_PK								// PKFIELD���� ���� �߿� �Ϲ��� ���ݾȹ޴� ���� ����(09.04.07) [2009.04.13 �׼�]
	#define PBG_FIX_CHAOTIC_ANIMATION						// ī��ƽ ���̾� �ִϸ��̼� ����(09.06.11)
	#define PBG_FIX_DARK_FIRESCREAM_HACKCHECK				// �ũ ���̾ũ�� (����)�üũ���� ���� ����(09.06.22)
	#define PBG_MOD_INVENTORY_REPAIR_COST					// �ڵ������ݾ� ��������(09.06.08)
	#define PBG_MOD_LUCKYCOINEVENT							// ����ǵ��� 255�� �̻� ��ϵ��� �ʵ��� �̺�Ʈ ����(09.07.15)(���UI���ǹ���,�����̵�����)

	#define LDK_FIX_INVENTORY_SPEAR_SCALE					// �κ��丮 ����-spear ũ�� ó�� if�� ���� [09.03.19 �׼�]

	#define YDG_FIX_INVALID_TERRAIN_LIGHT					// �޸� ħ�� ���� ����(���� ����) (2009.03.30) [2009.04.13 �׼�]
	#define YDG_FIX_MEMORY_LEAK_0905						// �޸� ���� ���� (2009.05.11)
	#define YDG_FIX_INVALID_SET_DEFENCE_RATE_BONUS			// ����Ʈ �߰� ����ǥ�� ������ 10%�� �ƴ϶� ������� 10%�� (2009.04.15) [��ġ�ȵ�] wops_32937
	#define YDG_FIX_STAFF_FLAMESTRIKE_IN_CHAOSCASLE			// ī����ĳ������ ���˻� ������ ����� �÷��ӽ�Ʈ����ũ�� ������� �����ܻ� ���� (2009.04.15) [��ġ�ȵ�] wops_34747
	#define YDG_FIX_LEFTHAND_MAGICDAMAGE					// ���˻簡 �����̳� �鹽�Ÿ�带 �޼տ� á���� ������ �ö󰡴� ���� (2009.04.15) [��ġ�ȵ�] wops_32641
	#define YDG_FIX_BLOCK_STAFF_WHEEL						// ���˻� ������, �Ǽ� ȸ�������� ���� (2009.05.18)
	#define YDG_FIX_MEMORY_LEAK_0905_2ND					// �޸� ���� ���� 2�� (2009.05.19)
	#define YDG_FIX_CLIENT_SKILL_EFFECT_SIZE				// ����Ʈ ������ ������õ� Ŭ��ų �ȸԴ� ���� (2009.07.13)

	#define ASG_FIX_PICK_ITEM_FROM_INVEN					// �κ�â Ư�� ĭ���� �������� �������� �� ĳ������â���� �ɷ�ġ�� �����Ǵ� ����(2009.04.15) wops_33567
	#define ASG_FIX_MOVE_WIN_MURDERER1_BUG					// ������(ī��) ����1�� �� �� �̵�â ǥ�� ����.(2009.04.20) wops_34498

	#define PJH_FIX_4_BUGFIX_33								// wops_34066

	#define LDS_FIX_MASTERSKILLKEY_DISABLE_OVER_LIMIT_MAGICIAN		// ������ ��ų ��ȭ �� ��ų�鿡 ���� �䱸ġ �̴޽ÿ� �̿� �Ұ�. (09.04.22) no_wops
	#define LDS_FIX_SETITEM_WRONG_CALCULATION_IMPROVEATTACKVALUE	// ��Ʈ���������� ���� ����� ������ ������, �ɸ��� ����â�� ������ ���ȼ�ġ�� �������. (09.04.23) wops_35131
	#define LDS_FIX_MEMORYLEAK_PHYSICSMANAGER_RELEASE				// �޸� ���� ����, Physicsmanager ������ �޸� ��ȯ ó��. (�ũ�ε� �ɸ� �ε���� ���� �� �� �߻�)(09.05.25)
#endif // UPDATE_100527

#define KJH_ADD_SERVER_LIST_SYSTEM						// ��������Ʈ �ý��� ���� (09.10.19) - ������ ������ �̸� ��� ���.
#define ASG_ADD_SERVER_LIST_SCRIPTS						// ServerList.txt ��ũ��Ʈ �߰�.(2009.10.29) - ������ ������ �̸� ��� ���.
#ifdef ASG_ADD_SERVER_LIST_SCRIPTS
	#define ASG_ADD_SERVER_LIST_SCRIPTS_GLOBAL_TEMP		// �̸� ASG_ADD_SERVER_LIST_SCRIPTS �߰��� ���� ���� ����.(10.03.02) 
															//Season5 ���� �����ص� ��.(BuxConvert() �Լ� ��ġ ����) // Season5 ������Ʈ�ÿ� �����ص� �Ǵ°����� Ȯ�� ��� �Ұ�.
	#define ASG_MOD_SERVER_LIST_ADD_CHARGED_CHANNEL		// ��������Ʈ�� ���� ä�� �߰�.(10.02.26) - ���� �۷ι��� ����.
#endif	//ASG_ADD_SERVER_LIST_SCRIPTS


//-----------------------------------------------------------------------------
// [ Season 4.5 ] 
#define SEASON4_5										
#ifdef SEASON4_5

	#define KJH_ADD_09SUMMER_EVENT					// 09�� �����̺�Ʈ		(09.06.23)

	#define YDG_ADD_NEW_DUEL_SYSTEM					// ���ο� ���� �ý��� (2009.01.05) [09.03.19 �׼�]
	#ifdef YDG_ADD_NEW_DUEL_SYSTEM
		#define YDG_ADD_NEW_DUEL_UI					// ���ο� ���� ���� UI �߰� (2009.01.05) [09.03.19 �׼�]
		#define YDG_ADD_NEW_DUEL_PROTOCOL			// ���ο� ���� ���� �������� �߰� (2009.01.08) [09.03.19 �׼�]
		#define YDG_ADD_NEW_DUEL_NPC				// ���ο� ���� ���� NPC Ÿ������ �߰� (2009.01.19) [09.03.19 �׼�]
		#define YDG_ADD_NEW_DUEL_WATCH_BUFF			// ���ο� ���� ���� ���� �߰� (2009.01.20) [09.03.19 �׼�]
		#define YDG_ADD_MAP_DUEL_ARENA				// ���ο� ������ �� �߰� (2009.02.04) [09.03.19 �׼�]
	#endif	// YDG_ADD_PVP_SYSTEM

	#define PBG_ADD_PKFIELD							// PK�ʵ� �߰�(2008.12.29) [09.03.19 �׼�]
	#define PBG_ADD_HONOROFGLADIATORBUFFTIME		// �������� �� ���� �ð� ���� �߰�(2009.03.19) [09.03.19 �׼�]

	#define LDK_ADD_GAMBLE_SYSTEM					// ���Ҹ� ���� �̱� ���� (09.01.05) [09.03.19 �׼�]
	#ifdef LDK_ADD_GAMBLE_SYSTEM
		#define LDK_ADD_GAMBLE_NPC_MOSS				// �׺� ���� �� [09.03.19 �׼�]
		#define LDK_ADD_GAMBLE_RANDOM_ICON			// �׺�� �������� ������ [09.03.19 �׼�]
		#define LDK_ADD_GAMBLERS_WEAPONS			// �׺����� ���� ����� [09.03.19 �׼�]
	#endif //LDK_ADD_GAMBLE_SYSTEM

	#define PJH_ADD_PANDA_PET
	#define PJH_ADD_PANDA_CHANGERING

#endif // SEASON4_5


#define ASG_FIX_LENA_REGISTRATION

#define ASG_ADD_CHARGED_CHANNEL_TICKET					// ���� ä�� �����.(2010.02.05) - �۷ι�����

#define ADD_TOTAL_CHARGE_6TH
#ifdef ADD_TOTAL_CHARGE_6TH

	#define ADD_CASH_SHOP_6TH
		#ifdef ADD_CASH_SHOP_6TH
		#define ASG_ADD_CS6_GUARD_CHARM				// ��ȣ�Ǻ���(2009.02.09)
		#define ASG_ADD_CS6_ITEM_GUARD_CHARM		// �����ۺ�ȣ����(2009.02.09)
		#define ASG_ADD_CS6_ASCENSION_SEAL_MASTER 	// ��������帶����(2009.02.24)
		#define ASG_ADD_CS6_WEALTH_SEAL_MASTER 		// ǳ�������帶����(2009.02.24)
		#define LDS_ADD_CS6_CHARM_MIX_ITEM_WING
	#endif	// ADD_CASH_SHOP_6TH

	#define CSK_ADD_GOLDCORPS_EVENT					// Ȳ�ݱ����̺�Ʈ(2009.03.13)
	#define LDS_ADD_GOLDCORPS_EVENT_MOD_GREATDRAGON // Ȳ�� �׷���Ʈ �巹�� ���־� ���۾�. ���־� ����Ʈ �߰�. ���� ������ �� ����. (2009.04.06) (BITMAP_FIRE_HIK3_MONO ȿ�� ����.)
#endif // ADD_TOTAL_CHARGE_6TH


#define PBG_MOD_NONPVPSERVER
#define LDS_FIX_PETDESTRUCTOR_TERMINATE_EFFECTOWNER_ADD_TYPE
#define LDS_FIX_AFTER_PETDESTRUCTOR_ATTHESAMETIME_TERMINATE_EFFECTOWNER

// (2009.04.23)
#define PJH_CHARACTER_RENAME
#define LDK_MOD_GLOBAL_PORTAL_LOGO

//#define LDK_MOD_GLOBAL_PORTAL_CASHSHOP_BUTTON_DENY	// (09.04.07)
#define LDK_FIX_MOVEWINDOW_SCROLL_BUG				// (2009.04.22)
#define LDK_MOD_PASSWORD_LENGTH_20					// (2009.04.24)
#define LDK_MOD_GLOBAL_STORAGELOCK_CHANGE			// (2009.04.27)

#define ADD_CASH_SHOP_5TH

#ifdef ADD_CASH_SHOP_5TH
	#define LDK_FIX_CS5_HIDE_SEEDLEVEL
	#define YDG_ADD_CS5_REVIVAL_CHARM
	#define YDG_ADD_CS5_PORTAL_CHARM
#endif	// YDG_ADD_CASH_SHOP_5TH

#define PBG_WOPS_CURSEDTEMPLEBASKET_MOVING			//(2008.12.18)

#define PSW_PARTCHARGE_ITEM4

#ifdef PSW_PARTCHARGE_ITEM4
	#define PSW_ADD_PC4_SEALITEM
	#define PSW_ADD_PC4_SCROLLITEM
	#define PSW_ADD_PC4_CHAOSCHARMITEM
	#define LDK_ADD_PC4_GUARDIAN
	#define	LDK_FIX_GUARDIAN_CHANGE_LIFEWORD			//(2009.01.14)
	#define LDK_ADD_PC4_GUARDIAN_EFFECT_IMAGE
#endif //PSW_PARTCHARGE_ITEM4


#define PSW_ADD_FOREIGN_HELPWINDOW

#define PSW_PARTCHARGE_ITEM3

#ifdef PSW_PARTCHARGE_ITEM3
	#define PSW_NEW_CHAOS_CARD
	#define PSW_NEW_ELITE_ITEM
#endif //PSW_PARTCHARGE_ITEM3


#define PSW_PARTCHARGE_ITEM2

#ifdef PSW_PARTCHARGE_ITEM2
	#define PSW_ELITE_ITEM
	#define PSW_SCROLL_ITEM
	#define PSW_SEAL_ITEM
	#define PSW_FRUIT_ITEM
	#define PSW_SECRET_ITEM
	#define PSW_INDULGENCE_ITEM
	#define PSW_RARE_ITEM
	#define PSW_CURSEDTEMPLE_FREE_TICKET
#endif //PSW_PARTCHARGE_ITEM2


#define PSW_PARTCHARGE_ITEM1
				
#ifdef PSW_PARTCHARGE_ITEM1
	#define CSK_FREE_TICKET						// (2007.02.06)
	#define CSK_CHAOS_CARD						// (2007.02.07)
	#define CSK_RARE_ITEM						// (2006.02.15)
	#define CSK_LUCKY_CHARM						// ( 2007.02.22 )
	#define CSK_LUCKY_SEAL						// ( 2007.02.22 )	
#endif //PSW_PARTCHARGE_ITEM1

#define LEM_ADD_SEASON5_PART5_MINIUPDATE_JEWELMIX


