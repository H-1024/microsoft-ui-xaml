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

#include "PointerUpThemeAnimation.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::PointerUpThemeAnimationGenerated::PointerUpThemeAnimationGenerated()
{
}

DirectUI::PointerUpThemeAnimationGenerated::~PointerUpThemeAnimationGenerated()
{
}

HRESULT DirectUI::PointerUpThemeAnimationGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::PointerUpThemeAnimation)))
    {
        *ppObject = static_cast<DirectUI::PointerUpThemeAnimation*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::Animation::IPointerUpThemeAnimation)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::Animation::IPointerUpThemeAnimation*>(this);
    }
    else
    {
        RRETURN(DirectUI::DynamicTimeline::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::PointerUpThemeAnimationGenerated::get_TargetName(_Out_ HSTRING* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::PointerUpThemeAnimation_TargetName, pValue));
}
IFACEMETHODIMP DirectUI::PointerUpThemeAnimationGenerated::put_TargetName(_In_opt_ HSTRING value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::PointerUpThemeAnimation_TargetName, value));
}

// Events.

// Methods.

HRESULT DirectUI::PointerUpThemeAnimationFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::Animation::IPointerUpThemeAnimationStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::Animation::IPointerUpThemeAnimationStatics*>(this);
    }
    else
    {
        RRETURN(ctl::BetterCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.

// Dependency properties.
IFACEMETHODIMP DirectUI::PointerUpThemeAnimationFactory::get_TargetNameProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::PointerUpThemeAnimation_TargetName, ppValue));
}

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_PointerUpThemeAnimation()
    {
        RRETURN(ctl::ActivationFactoryCreator<PointerUpThemeAnimationFactory>::CreateActivationFactory());
    }
}
