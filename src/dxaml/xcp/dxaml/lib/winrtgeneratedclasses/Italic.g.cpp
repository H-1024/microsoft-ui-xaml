// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.
//------------------------------------------------------------------------
//
//  Abstract:
//
//      XAML types.
//      NOTE: This file was generated by a tool.
//
//------------------------------------------------------------------------

#include "Italic.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::Italic::Italic()
{
}

DirectUI::Italic::~Italic()
{
}

HRESULT DirectUI::Italic::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::Italic)))
    {
        *ppObject = static_cast<DirectUI::Italic*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Documents::IItalic)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Documents::IItalic*>(this);
    }
    else
    {
        RRETURN(DirectUI::Span::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.

// Events.

// Methods.


namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_Italic()
    {
        RRETURN(ctl::BetterActivationFactoryCreator::GetForDO(KnownTypeIndex::Italic));
    }
}
