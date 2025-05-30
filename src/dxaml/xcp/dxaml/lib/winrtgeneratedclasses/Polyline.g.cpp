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

#include "Polyline.g.h"
#include "PointCollection.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::Polyline::Polyline()
{
}

DirectUI::Polyline::~Polyline()
{
}

HRESULT DirectUI::Polyline::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::Polyline)))
    {
        *ppObject = static_cast<DirectUI::Polyline*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Shapes::IPolyline)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Shapes::IPolyline*>(this);
    }
    else
    {
        RRETURN(DirectUI::Shape::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::Polyline::get_FillRule(_Out_ ABI::Microsoft::UI::Xaml::Media::FillRule* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Polyline_FillRule, pValue));
}
IFACEMETHODIMP DirectUI::Polyline::put_FillRule(ABI::Microsoft::UI::Xaml::Media::FillRule value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Polyline_FillRule, value));
}
IFACEMETHODIMP DirectUI::Polyline::get_Points(_Outptr_result_maybenull_ ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Foundation::Point>** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::Polyline_Points, ppValue));
}
IFACEMETHODIMP DirectUI::Polyline::put_Points(_In_opt_ ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Foundation::Point>* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::Polyline_Points, pValue));
}

// Events.

// Methods.

HRESULT DirectUI::PolylineFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Shapes::IPolylineStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Shapes::IPolylineStatics*>(this);
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
IFACEMETHODIMP DirectUI::PolylineFactory::get_FillRuleProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::Polyline_FillRule, ppValue));
}
IFACEMETHODIMP DirectUI::PolylineFactory::get_PointsProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::Polyline_Points, ppValue));
}

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_Polyline()
    {
        RRETURN(ctl::ActivationFactoryCreator<PolylineFactory>::CreateActivationFactory());
    }
}
