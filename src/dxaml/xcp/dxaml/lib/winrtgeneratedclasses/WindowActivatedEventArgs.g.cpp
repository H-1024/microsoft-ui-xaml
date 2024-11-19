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

#include "WindowActivatedEventArgs.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::WindowActivatedEventArgs::WindowActivatedEventArgs(): m_handled(), m_windowActivationState()
{
}

DirectUI::WindowActivatedEventArgs::~WindowActivatedEventArgs()
{
}

HRESULT DirectUI::WindowActivatedEventArgs::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::WindowActivatedEventArgs)))
    {
        *ppObject = static_cast<DirectUI::WindowActivatedEventArgs*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::IWindowActivatedEventArgs)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::IWindowActivatedEventArgs*>(this);
    }
    else
    {
        RRETURN(ctl::WeakReferenceSource::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::WindowActivatedEventArgs::get_Handled(_Out_ BOOLEAN* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    IFC(CheckThread());
    IFC(CValueBoxer::CopyValue(m_handled, pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::WindowActivatedEventArgs::put_Handled(_In_ BOOLEAN value)
{
    HRESULT hr = S_OK;
    IFC(CheckThread());
    IFC(CValueBoxer::CopyValue(value, &m_handled));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::WindowActivatedEventArgs::get_WindowActivationState(_Out_ ABI::Microsoft::UI::Xaml::WindowActivationState* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    IFC(CheckThread());
    IFC(CValueBoxer::CopyValue(m_windowActivationState, pValue));
Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT DirectUI::WindowActivatedEventArgs::put_WindowActivationState(_In_ ABI::Microsoft::UI::Xaml::WindowActivationState value)
{
    HRESULT hr = S_OK;
    IFC(CheckThread());
    IFC(CValueBoxer::CopyValue(value, &m_windowActivationState));
Cleanup:
    RRETURN(hr);
}

// Events.

// Methods.


namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_WindowActivatedEventArgs()
    {
        RRETURN(ctl::ActivationFactoryCreator<ctl::AbstractActivationFactory>::CreateActivationFactory());
    }
}