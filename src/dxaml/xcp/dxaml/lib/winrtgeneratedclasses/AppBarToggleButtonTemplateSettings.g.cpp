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

#include "AppBarToggleButtonTemplateSettings.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::AppBarToggleButtonTemplateSettings::AppBarToggleButtonTemplateSettings()
{
}

DirectUI::AppBarToggleButtonTemplateSettings::~AppBarToggleButtonTemplateSettings()
{
}

HRESULT DirectUI::AppBarToggleButtonTemplateSettings::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::AppBarToggleButtonTemplateSettings)))
    {
        *ppObject = static_cast<DirectUI::AppBarToggleButtonTemplateSettings*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::Primitives::IAppBarToggleButtonTemplateSettings)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::Primitives::IAppBarToggleButtonTemplateSettings*>(this);
    }
    else
    {
        RRETURN(DirectUI::DependencyObject::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::AppBarToggleButtonTemplateSettings::get_KeyboardAcceleratorTextMinWidth(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::AppBarToggleButtonTemplateSettings_KeyboardAcceleratorTextMinWidth, pValue));
}
_Check_return_ HRESULT DirectUI::AppBarToggleButtonTemplateSettings::put_KeyboardAcceleratorTextMinWidth(_In_ DOUBLE value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::AppBarToggleButtonTemplateSettings_KeyboardAcceleratorTextMinWidth, value));
}

// Events.

// Methods.

// Factory methods.

// Dependency properties.


// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_AppBarToggleButtonTemplateSettings()
    {
        RRETURN(ctl::ActivationFactoryCreator<AppBarToggleButtonTemplateSettingsFactory>::CreateActivationFactory());
    }
}
