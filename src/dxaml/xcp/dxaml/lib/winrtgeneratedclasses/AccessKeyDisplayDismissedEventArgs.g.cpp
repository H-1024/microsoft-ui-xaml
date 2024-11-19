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

#include "precomp.h"
#include "AccessKeyDisplayDismissedEventArgs.g.h"
#include "CoreEventArgsGroup.h"

using namespace DirectUI;

// Constructors/destructors.
DirectUI::AccessKeyDisplayDismissedEventArgs::AccessKeyDisplayDismissedEventArgs()
{
}

DirectUI::AccessKeyDisplayDismissedEventArgs::~AccessKeyDisplayDismissedEventArgs()
{
}

HRESULT DirectUI::AccessKeyDisplayDismissedEventArgs::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::AccessKeyDisplayDismissedEventArgs)))
    {
        *ppObject = static_cast<DirectUI::AccessKeyDisplayDismissedEventArgs*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Input::IAccessKeyDisplayDismissedEventArgs)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Input::IAccessKeyDisplayDismissedEventArgs*>(this);
    }
    else
    {
        RRETURN(DirectUI::EventArgs::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Properties.

// Methods.


namespace DirectUI
{
    _Check_return_ HRESULT OnFrameworkCreateAccessKeyDisplayDismissedEventArgs(_In_ CEventArgs* pCoreObject, _Out_ IInspectable** ppNewInstance)
    {
        HRESULT hr = S_OK;
        ctl::ComPtr<DirectUI::AccessKeyDisplayDismissedEventArgs> spInstance;
        *ppNewInstance = nullptr;
        IFC(ctl::make(pCoreObject, &spInstance));
        *ppNewInstance = ctl::iinspectable_cast(spInstance.Detach());
    Cleanup:
        RRETURN(hr);
    }
    _Check_return_ IActivationFactory* CreateActivationFactory_AccessKeyDisplayDismissedEventArgs()
    {
        RRETURN(ctl::ActivationFactoryCreator<ctl::ActivationFactory<DirectUI::AccessKeyDisplayDismissedEventArgs>>::CreateActivationFactory());
    }
}