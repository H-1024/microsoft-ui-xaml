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

#include "BlockCollection.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::BlockCollectionGenerated::BlockCollectionGenerated()
{
}

DirectUI::BlockCollectionGenerated::~BlockCollectionGenerated()
{
}

HRESULT DirectUI::BlockCollectionGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::BlockCollection)))
    {
        *ppObject = static_cast<DirectUI::BlockCollection*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Xaml::Documents::Block*>)))
    {
        *ppObject = static_cast<ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Xaml::Documents::Block*>*>(this);
    }
    else
    {
        RRETURN(DirectUI::TextElementCollection<ABI::Microsoft::UI::Xaml::Documents::Block*>::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.

// Events.

// Methods.


namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_BlockCollection()
    {
        RRETURN(ctl::BetterActivationFactoryCreator::GetForDO(KnownTypeIndex::BlockCollection));
    }
}
