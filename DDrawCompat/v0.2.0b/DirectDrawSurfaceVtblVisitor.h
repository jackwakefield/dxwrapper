#pragma once

#include "DDrawVtableVisitor.h"

template <>
struct DDrawVtableForEach<IDirectDrawSurfaceVtbl>
{
	template <typename Vtable, typename Visitor>
	static void forEach(Visitor& visitor)
	{
		DDrawVtableForEach<IUnknownVtbl>::forEach<Vtable>(visitor);

		DD_VISIT(AddAttachedSurface);
		DD_VISIT(AddOverlayDirtyRect);
		DD_VISIT(Blt);
		DD_VISIT(BltBatch);
		DD_VISIT(BltFast);
		DD_VISIT(DeleteAttachedSurface);
		DD_VISIT(EnumAttachedSurfaces);
		DD_VISIT(EnumOverlayZOrders);
		DD_VISIT(Flip);
		DD_VISIT(GetAttachedSurface);
		DD_VISIT(GetBltStatus);
		DD_VISIT(GetCaps);
		DD_VISIT(GetClipper);
		DD_VISIT(GetColorKey);
		DD_VISIT(GetDC);
		DD_VISIT(GetFlipStatus);
		DD_VISIT(GetOverlayPosition);
		DD_VISIT(GetPalette);
		DD_VISIT(GetPixelFormat);
		DD_VISIT(GetSurfaceDesc);
		DD_VISIT(Initialize);
		DD_VISIT(IsLost);
		DD_VISIT(Lock);
		DD_VISIT(ReleaseDC);
		DD_VISIT(Restore);
		DD_VISIT(SetClipper);
		DD_VISIT(SetColorKey);
		DD_VISIT(SetOverlayPosition);
		DD_VISIT(SetPalette);
		DD_VISIT(Unlock);
		DD_VISIT(UpdateOverlay);
		DD_VISIT(UpdateOverlayDisplay);
		DD_VISIT(UpdateOverlayZOrder);
	}
};

template <>
struct DDrawVtableForEach<IDirectDrawSurface2Vtbl>
{
	template <typename Vtable, typename Visitor>
	static void forEach(Visitor& visitor)
	{
		DDrawVtableForEach<IDirectDrawSurfaceVtbl>::forEach<Vtable>(visitor);

		DD_VISIT(GetDDInterface);
		DD_VISIT(PageLock);
		DD_VISIT(PageUnlock);
	}
};

template <>
struct DDrawVtableForEach<IDirectDrawSurface3Vtbl>
{
	template <typename Vtable, typename Visitor>
	static void forEach(Visitor& visitor)
	{
		DDrawVtableForEach<IDirectDrawSurface2Vtbl>::forEach<Vtable>(visitor);

		DD_VISIT(SetSurfaceDesc);
	}
};

template <>
struct DDrawVtableForEach<IDirectDrawSurface4Vtbl>
{
	template <typename Vtable, typename Visitor>
	static void forEach(Visitor& visitor)
	{
		DDrawVtableForEach<IDirectDrawSurface3Vtbl>::forEach<Vtable>(visitor);

		DD_VISIT(SetPrivateData);
		DD_VISIT(GetPrivateData);
		DD_VISIT(FreePrivateData);
		DD_VISIT(GetUniquenessValue);
		DD_VISIT(ChangeUniquenessValue);
	}
};

template <>
struct DDrawVtableForEach<IDirectDrawSurface7Vtbl>
{
	template <typename Vtable, typename Visitor>
	static void forEach(Visitor& visitor)
	{
		DDrawVtableForEach<IDirectDrawSurface4Vtbl>::forEach<Vtable>(visitor);

		DD_VISIT(SetPriority);
		DD_VISIT(GetPriority);
		DD_VISIT(SetLOD);
		DD_VISIT(GetLOD);
	}
};
