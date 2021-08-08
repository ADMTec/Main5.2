//////////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////
//  INCLUDE.
//////////////////////////////////////////////////////////////////////////
#include "stdafx.h"
#include "UIWindows.h"
#include "ZzzOpenglUtil.h"
#include "ZzzBMD.h"
#include "zzzlodterrain.h"
#include "ZzzScene.h"
#include "MatchEvent.h"
//#include "CSEventMatch.h"
//#include "CSChaosCastle.h"
#include "MapManager.h"
#include "w_CursedTemple.h"

//////////////////////////////////////////////////////////////////////////
//  EXTERN.
//////////////////////////////////////////////////////////////////////////
extern int g_iCustomMessageBoxButton[NUM_BUTTON_CMB][NUM_PAR_BUTTON_CMB];// ok, cancel // ��뿩��, x, y, width, height

namespace   matchEvent
{
    CSBaseMatch*    g_csMatchInfo = NULL;

    void    CreateEventMatch ( int iWorld )
    {		
		DeleteEventMatch ();

        if ( gMapManager.InBloodCastle() == true )   //  ����ĳ��.
        {
			g_csMatchInfo = new SEASON3B::CNewBloodCastleSystem;
        }
        else if ( gMapManager.InChaosCastle()==true )  //  ī����ĳ��.
        {
			g_csMatchInfo = new SEASON3B::CNewChaosCastleSystem;
        }
        else if ( gMapManager.InDevilSquare() )//  ����.
        {
            g_csMatchInfo = new CSDevilSquareMatch;
        }
		else if ( gMapManager.IsCursedTemple() )
		{
			g_csMatchInfo = new CCursedTempleMatch;
		}
		else if (gMapManager.WorldActive >= WD_65DOPPLEGANGER1 && gMapManager.WorldActive <= WD_68DOPPLEGANGER4)
		{
			g_csMatchInfo = new CDoppelGangerMatch;
		}
    }


//////////////////////////////////////////////////////////////////////////
//  EventMatch�� �����Ѵ�.
//////////////////////////////////////////////////////////////////////////
    void    DeleteEventMatch ( void )
    {
        if ( g_csMatchInfo!=NULL )
        {
            delete g_csMatchInfo;
            g_csMatchInfo = NULL;
        }
    }

}
