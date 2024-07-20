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

#include "TargetPropertyPath.g.h"
#include "PropertyPath.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::TargetPropertyPath::TargetPropertyPath()
{
}

DirectUI::TargetPropertyPath::~TargetPropertyPath()
{
}

HRESULT DirectUI::TargetPropertyPath::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::TargetPropertyPath)))
    {
        *ppObject = static_cast<DirectUI::TargetPropertyPath*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::ITargetPropertyPath)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::ITargetPropertyPath*>(this);
    }
    else
    {
        RRETURN(DirectUI::DependencyObject::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
_Check_return_ HRESULT DirectUI::TargetPropertyPath::get_CachedStyleSetterProperty(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::TargetPropertyPath_CachedStyleSetterProperty, ppValue));
}
_Check_return_ HRESULT DirectUI::TargetPropertyPath::put_CachedStyleSetterProperty(_In_opt_ ABI::Microsoft::UI::Xaml::IDependencyProperty* pValue)
{
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::TargetPropertyPath_CachedStyleSetterProperty, pValue));
}
IFACEMETHODIMP DirectUI::TargetPropertyPath::get_Path(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IPropertyPath** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::TargetPropertyPath_Path, ppValue));
}
IFACEMETHODIMP DirectUI::TargetPropertyPath::put_Path(_In_opt_ ABI::Microsoft::UI::Xaml::IPropertyPath* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::TargetPropertyPath_Path, pValue));
}
IFACEMETHODIMP DirectUI::TargetPropertyPath::get_Target(_Outptr_result_maybenull_ IInspectable** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::TargetPropertyPath_Target, ppValue));
}
IFACEMETHODIMP DirectUI::TargetPropertyPath::put_Target(_In_opt_ IInspectable* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::TargetPropertyPath_Target, pValue));
}

// Events.

// Methods.

HRESULT DirectUI::TargetPropertyPathFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::ITargetPropertyPathFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::ITargetPropertyPathFactory*>(this);
    }
    else
    {
        RRETURN(ctl::BetterCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.
IFACEMETHODIMP DirectUI::TargetPropertyPathFactory::CreateInstance(_In_ ABI::Microsoft::UI::Xaml::IDependencyProperty* pTargetProperty, _Outptr_ ABI::Microsoft::UI::Xaml::ITargetPropertyPath** ppInstance)
{
    HRESULT hr = S_OK;
    ARG_NOTNULL(pTargetProperty, "targetProperty");
    ARG_VALIDRETURNPOINTER(ppInstance);
    IFC(CreateInstanceImpl(pTargetProperty, ppInstance));
Cleanup:
    return hr;
}

// Dependency properties.




// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_TargetPropertyPath()
    {
        RRETURN(ctl::ActivationFactoryCreator<TargetPropertyPathFactory>::CreateActivationFactory());
    }
}
