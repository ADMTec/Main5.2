


#ifdef _DEBUG
	#define KWAK_FIX_ALT_KEYDOWN_MENU_BLOCK
#endif // _DEBUG

#define NEW_PROTOCOL_SYSTEM

#define PJH_NEW_SERVER_SELECT_MAP

#define ASG_ADD_GENS_SYSTEM
#ifdef ASG_ADD_GENS_SYSTEM
	#define ASG_ADD_INFLUENCE_GROUND_EFFECT
	#define ASG_ADD_GENS_MARK
	#define PBG_MOD_STRIFE_GENSMARKRENDER
	#define PBG_ADD_GENSRANKING
#endif	// ASG_ADD_GENS_SYSTEM

//----------------------------------------------------------------------------------------------
// << Season 5 - Part 1 

#define UPDATE_100527
#ifdef UPDATE_100527

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
			#define KJH_MOD_SHOP_SCRIPT_DOWNLOAD
			//^#define PBG_ADD_CHARACTERSLOT
			#define PBG_ADD_CHARACTERCARD
			//^#define LDK_ADD_INGAMESHOP_LIMIT_MOVE_WINDOW
		#endif //KJH_PBG_ADD_INGAMESHOP_SYSTEM

	#endif // SEASON5_PART2

	#define ADD_TOTAL_CHARGE_8TH
	#ifdef  ADD_TOTAL_CHARGE_8TH
		#define YDG_ADD_HEALING_SCROLL						// ġ���� ��ũ�� (2009.12.03)

		#define LJH_ADD_RARE_ITEM_TICKET_FROM_7_TO_12		// ��;����� Ƽ�� 7-12 �߰� (2010.02.12)
		#define LJH_ADD_FREE_TICKET_FOR_DOPPELGANGGER_BARCA_BARCA_7TH	//���ð���, ���ī, ���ī �� 7�� ��������� �߰�(2010.02.17)

		#define ADD_SKELETON_PET							// ���̷��� �� (2009.12.03)
		#ifdef  ADD_SKELETON_PET
			#define YDG_ADD_SKELETON_PET					// ���̷��� �� 
			#ifndef KJH_ADD_PERIOD_ITEM_SYSTEM					// #ifndef
				#define LJH_FIX_IGNORING_EXPIRATION_PERIOD		// �Ϻ����� ���� �Ⱓ���� ������� �����Ƿ� bExpiredPeriod�� ������� �ʵ��� ����(2010.02.11) - �Ⱓ�� �ý��� ���� �� ����
			#endif // KJH_ADD_PERIOD_ITEM_SYSTEM
			#define LDK_FIX_PC4_GUARDIAN_DEMON_INFO			// ���� ĳ��������â�� ���ݷ�,����,���ַ� �߰� ������ ����(09.10.15) - ĳ��������â�� �� ����� ���� ���ַ� �߰� �������� ���� ��Ű�� ���� �߰�
			#define LJH_FIX_NOT_POP_UP_HIGHVALUE_MSGBOX_FOR_BANNED_TO_TRADE	//NPC���� �Ǹ� ������ �������� �Ǹ��Ϸ��� �Ҷ� ���� �������̶�� ������ �޼��� â�� �ȳ����� ����(10.02.19)
		#endif  //ADD_SKELETON_PET

		#define YDG_MOD_CHANGE_RING_EQUIPMENT_LIMIT			// ���Ź��� ������� ����ϵ��� ���� (2009.12.28)
	#endif  //ADD_TOTAL_CHARGE_8TH


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
			#define ASG_ADD_UI_QUEST_PROGRESS_ETC				// Ľ�Ʈ ���� â(��Ÿ��)(2009.06.24)
			#define ASG_MOD_UI_QUEST_INFO						// Ľ�Ʈ ���� â(2009.07.06)
			#define ASG_MOD_3D_CHAR_EXCLUSION_UI				// 3D ĳ���� ǥ���� ���� UI�� ���.(2009.08.03)
		#endif	// ASG_ADD_NEW_QUEST_SYSTEM

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


