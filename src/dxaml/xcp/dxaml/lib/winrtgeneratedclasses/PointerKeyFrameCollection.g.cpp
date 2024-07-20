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

#include "PointerKeyFrameCollection.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::PointerKeyFrameCollection::PointerKeyFrameCollection()
{
}

DirectUI::PointerKeyFrameCollection::~PointerKeyFrameCollection()
{
}

HRESULT DirectUI::PointerKeyFrameCollection::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::PointerKeyFrameCollection)))
    {
        *ppObject = static_cast<DirectUI::PointerKeyFrameCollection*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Windows::Foundation::Collections::IVector<DirectUI::PointerKeyFrame*>)))
    {
        *ppObject = static_cast<ABI::Windows::Foundation::Collections::IVector<DirectUI::PointerKeyFrame*>*>(this);
    }
    else
    {
        RRETURN(DirectUI::PresentationFrameworkCollection<DirectUI::PointerKeyFrame*>::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.

// Events.

// Methods.


namespace DirectUI
{
}
