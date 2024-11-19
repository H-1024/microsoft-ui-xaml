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
#include "ManipulationStartingRoutedEventArgs.g.h"
#include "CoreEventArgsGroup.h"

using namespace DirectUI;

// Constructors/destructors.
DirectUI::ManipulationStartingRoutedEventArgs::ManipulationStartingRoutedEventArgs()
{
}

DirectUI::ManipulationStartingRoutedEventArgs::~ManipulationStartingRoutedEventArgs()
{
}

HRESULT DirectUI::ManipulationStartingRoutedEventArgs::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::ManipulationStartingRoutedEventArgs)))
    {
        *ppObject = static_cast<DirectUI::ManipulationStartingRoutedEventArgs*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Input::IManipulationStartingRoutedEventArgs)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Input::IManipulationStartingRoutedEventArgs*>(this);
    }
    else
    {
        RRETURN(DirectUI::RoutedEventArgs::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

CEventArgs* DirectUI::ManipulationStartingRoutedEventArgs::CreateCorePeer()
{
    return new CManipulationStartingEventArgs(DXamlCore::GetCurrent()->GetHandle());
}

// Properties.
IFACEMETHODIMP DirectUI::ManipulationStartingRoutedEventArgs::get_Mode(_Out_ ABI::Microsoft::UI::Xaml::Input::ManipulationModes* pValue)
{
    HRESULT hr = S_OK;
    CEventArgs* pCoreEventArgsNoRef = nullptr;

    DirectUI::ManipulationModes valueCore;

    ARG_VALIDRETURNPOINTER(pValue);
    *pValue={};

    IFC(GetCorePeerNoRefWithValidation(&pCoreEventArgsNoRef));
    IFC(static_cast<CManipulationStartingEventArgs*>(pCoreEventArgsNoRef)->get_Mode(&valueCore));

    IFC(CValueBoxer::ConvertToFramework(valueCore, pValue, /* fReleaseCoreValue */ TRUE));

Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ManipulationStartingRoutedEventArgs::put_Mode(_In_ ABI::Microsoft::UI::Xaml::Input::ManipulationModes value)
{
    HRESULT hr = S_OK;
    CEventArgs* pCoreEventArgsNoRef = nullptr;

    DirectUI::ManipulationModes valueCore = static_cast<DirectUI::ManipulationModes>(value);

    

    IFC(GetCorePeerNoRefWithValidation(&pCoreEventArgsNoRef));
    IFC(static_cast<CManipulationStartingEventArgs*>(pCoreEventArgsNoRef)->put_Mode(valueCore));


Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ManipulationStartingRoutedEventArgs::get_Container(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IUIElement** ppValue)
{
    HRESULT hr = S_OK;
    CEventArgs* pCoreEventArgsNoRef = nullptr;

    CUIElement* pValueCore = nullptr;

    ARG_VALIDRETURNPOINTER(ppValue);
    *ppValue={};

    IFC(GetCorePeerNoRefWithValidation(&pCoreEventArgsNoRef));
    IFC(static_cast<CManipulationStartingEventArgs*>(pCoreEventArgsNoRef)->get_Container(&pValueCore));

    IFC(CValueBoxer::ConvertToFramework(pValueCore, ppValue, /* fReleaseCoreValue */ TRUE));

Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ManipulationStartingRoutedEventArgs::put_Container(_In_opt_ ABI::Microsoft::UI::Xaml::IUIElement* pValue)
{
    HRESULT hr = S_OK;
    CEventArgs* pCoreEventArgsNoRef = nullptr;

    CUIElement* pValueCore = static_cast<CUIElement*>(pValue ? static_cast<DirectUI::UIElement*>(pValue)->GetHandle() : nullptr);

    

    IFC(GetCorePeerNoRefWithValidation(&pCoreEventArgsNoRef));
    IFC(static_cast<CManipulationStartingEventArgs*>(pCoreEventArgsNoRef)->put_Container(pValueCore));


Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ManipulationStartingRoutedEventArgs::get_Pivot(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Input::IManipulationPivot** ppValue)
{
    HRESULT hr = S_OK;
    CEventArgs* pCoreEventArgsNoRef = nullptr;

    CManipulationPivot* pValueCore = nullptr;

    ARG_VALIDRETURNPOINTER(ppValue);
    *ppValue={};

    IFC(GetCorePeerNoRefWithValidation(&pCoreEventArgsNoRef));
    IFC(static_cast<CManipulationStartingEventArgs*>(pCoreEventArgsNoRef)->get_Pivot(&pValueCore));

    IFC(CValueBoxer::ConvertToFramework(pValueCore, ppValue, /* fReleaseCoreValue */ TRUE));

Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ManipulationStartingRoutedEventArgs::put_Pivot(_In_opt_ ABI::Microsoft::UI::Xaml::Input::IManipulationPivot* pValue)
{
    HRESULT hr = S_OK;
    CEventArgs* pCoreEventArgsNoRef = nullptr;

    CManipulationPivot* pValueCore = static_cast<CManipulationPivot*>(pValue ? static_cast<DirectUI::ManipulationPivot*>(pValue)->GetHandle() : nullptr);

    

    IFC(GetCorePeerNoRefWithValidation(&pCoreEventArgsNoRef));
    IFC(static_cast<CManipulationStartingEventArgs*>(pCoreEventArgsNoRef)->put_Pivot(pValueCore));


Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ManipulationStartingRoutedEventArgs::get_Handled(_Out_ BOOLEAN* pValue)
{
    HRESULT hr = S_OK;
    CEventArgs* pCoreEventArgsNoRef = nullptr;

    BOOLEAN valueCore;

    ARG_VALIDRETURNPOINTER(pValue);
    *pValue={};

    IFC(GetCorePeerNoRefWithValidation(&pCoreEventArgsNoRef));
    IFC(static_cast<CManipulationStartingEventArgs*>(pCoreEventArgsNoRef)->get_Handled(&valueCore));

    IFC(CValueBoxer::ConvertToFramework(valueCore, pValue, /* fReleaseCoreValue */ TRUE));

Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ManipulationStartingRoutedEventArgs::put_Handled(_In_ BOOLEAN value)
{
    HRESULT hr = S_OK;
    CEventArgs* pCoreEventArgsNoRef = nullptr;

    BOOLEAN valueCore = value;

    

    IFC(GetCorePeerNoRefWithValidation(&pCoreEventArgsNoRef));
    IFC(static_cast<CManipulationStartingEventArgs*>(pCoreEventArgsNoRef)->put_Handled(valueCore));


Cleanup:
    RRETURN(hr);
}

// Methods.


namespace DirectUI
{
    _Check_return_ HRESULT OnFrameworkCreateManipulationStartingRoutedEventArgs(_In_ CEventArgs* pCoreObject, _Out_ IInspectable** ppNewInstance)
    {
        HRESULT hr = S_OK;
        ctl::ComPtr<DirectUI::ManipulationStartingRoutedEventArgs> spInstance;
        *ppNewInstance = nullptr;
        IFC(ctl::make(pCoreObject, &spInstance));
        *ppNewInstance = ctl::iinspectable_cast(spInstance.Detach());
    Cleanup:
        RRETURN(hr);
    }
    _Check_return_ IActivationFactory* CreateActivationFactory_ManipulationStartingRoutedEventArgs()
    {
        RRETURN(ctl::ActivationFactoryCreator<ctl::ActivationFactory<DirectUI::ManipulationStartingRoutedEventArgs>>::CreateActivationFactory());
    }
}