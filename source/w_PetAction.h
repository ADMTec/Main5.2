// w_PetAction.h: interface for the PetAction class.
// LDK_2008/07/08
//////////////////////////////////////////////////////////////////////

#ifdef LDK_ADD_NEW_PETPROCESS

#include "ZzzBMD.h"

#if !defined(AFX_W_PETACTION_H__6A4B0CEF_7F8A_4B5D_AF6D_B62BEB89009A__INCLUDED_)
#define AFX_W_PETACTION_H__6A4B0CEF_7F8A_4B5D_AF6D_B62BEB89009A__INCLUDED_

#pragma once

class PetAction  
{
public:
	PetAction() {}
	virtual ~PetAction() {}
	virtual bool Release( OBJECT* obj, CHARACTER *Owner ) { return false; }
	
public:
	virtual bool Model( OBJECT *obj, CHARACTER *Owner, int targetKey, DWORD tick, bool bForceRender )	{ return false; }
	virtual bool Move( OBJECT *obj, CHARACTER *Owner, int targetKey, DWORD tick, bool bForceRender )	{ return false; }
	virtual bool Effect( OBJECT *obj, CHARACTER *Owner, int targetKey, DWORD tick, bool bForceRender )	{ return false; }
#ifdef LDK_ADD_NEW_PETPROCESS_ADD_SOUND
	virtual bool Sound( OBJECT *obj, CHARACTER *Owner, int targetKey, DWORD tick, bool bForceRender )	{ return false; }
#endif //LDK_ADD_NEW_PETPROCESS_ADD_SOUND

};

#endif // !defined(AFX_W_PETACTION_H__6A4B0CEF_7F8A_4B5D_AF6D_B62BEB89009A__INCLUDED_)
#endif //LDK_ADD_NEW_PETPROCESS