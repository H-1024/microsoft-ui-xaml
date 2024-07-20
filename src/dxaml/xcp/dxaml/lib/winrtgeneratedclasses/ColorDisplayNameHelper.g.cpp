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

#include "ColorDisplayNameHelper.g.h"
#include "XamlTelemetry.h"


HRESULT DirectUI::ColorDisplayNameHelperFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::IColorDisplayNameHelperStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::IColorDisplayNameHelperStatics*>(this);
    }
    else
    {
        RRETURN(ctl::AbstractActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.

// Dependency properties.

// Attached properties.

// Static properties.

// Static methods.
IFACEMETHODIMP DirectUI::ColorDisplayNameHelperFactory::ToDisplayName(_In_ ABI::Windows::UI::Color color, _Out_ HSTRING* pResult)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, 0, "ColorDisplayNameHelper_ToDisplayName", 0);
    }
    ARG_VALIDRETURNPOINTER(pResult);
    
    IFC(ToDisplayNameImpl(color, pResult));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, 0, "ColorDisplayNameHelper_ToDisplayName", hr);
    }
    RRETURN(hr);
}

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_ColorDisplayNameHelper()
    {
        RRETURN(ctl::ActivationFactoryCreator<ColorDisplayNameHelperFactory>::CreateActivationFactory());
    }
}
