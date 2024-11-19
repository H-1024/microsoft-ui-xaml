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

#include "ElementCompositionPreview.g.h"
#include "ScrollViewer.g.h"
#include "UIElement.g.h"
#include "XamlTelemetry.h"


HRESULT DirectUI::ElementCompositionPreviewFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Hosting::IElementCompositionPreviewStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Hosting::IElementCompositionPreviewStatics*>(this);
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
IFACEMETHODIMP DirectUI::ElementCompositionPreviewFactory::GetElementVisual(_In_ ABI::Microsoft::UI::Xaml::IUIElement* pElement, _Outptr_ ABI::Microsoft::UI::Composition::IVisual** ppResult)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, 0, "ElementCompositionPreview_GetElementVisual", 0);
    }
    ARG_NOTNULL(pElement, "element");
    ARG_VALIDRETURNPOINTER(ppResult);
    *ppResult={};
    IFC(CheckActivationAllowed());
    IFC(GetElementVisualImpl(pElement, ppResult));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, 0, "ElementCompositionPreview_GetElementVisual", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ElementCompositionPreviewFactory::GetElementChildVisual(_In_ ABI::Microsoft::UI::Xaml::IUIElement* pElement, _Outptr_ ABI::Microsoft::UI::Composition::IVisual** ppResult)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, 0, "ElementCompositionPreview_GetElementChildVisual", 0);
    }
    ARG_NOTNULL(pElement, "element");
    ARG_VALIDRETURNPOINTER(ppResult);
    *ppResult={};
    IFC(CheckActivationAllowed());
    IFC(GetElementChildVisualImpl(pElement, ppResult));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, 0, "ElementCompositionPreview_GetElementChildVisual", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ElementCompositionPreviewFactory::SetElementChildVisual(_In_ ABI::Microsoft::UI::Xaml::IUIElement* pElement, _In_opt_ ABI::Microsoft::UI::Composition::IVisual* pVisual)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, 0, "ElementCompositionPreview_SetElementChildVisual", 0);
    }
    ARG_NOTNULL(pElement, "element");
    IFC(CheckActivationAllowed());
    IFC(SetElementChildVisualImpl(pElement, pVisual));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, 0, "ElementCompositionPreview_SetElementChildVisual", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ElementCompositionPreviewFactory::GetScrollViewerManipulationPropertySet(_In_ ABI::Microsoft::UI::Xaml::Controls::IScrollViewer* pScrollViewer, _Outptr_ ABI::Microsoft::UI::Composition::ICompositionPropertySet** ppResult)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, 0, "ElementCompositionPreview_GetScrollViewerManipulationPropertySet", 0);
    }
    ARG_NOTNULL(pScrollViewer, "scrollViewer");
    ARG_VALIDRETURNPOINTER(ppResult);
    *ppResult={};
    IFC(CheckActivationAllowed());
    IFC(GetScrollViewerManipulationPropertySetImpl(pScrollViewer, ppResult));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, 0, "ElementCompositionPreview_GetScrollViewerManipulationPropertySet", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ElementCompositionPreviewFactory::SetImplicitShowAnimation(_In_ ABI::Microsoft::UI::Xaml::IUIElement* pElement, _In_opt_ ABI::Microsoft::UI::Composition::ICompositionAnimationBase* pAnimation)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, 0, "ElementCompositionPreview_SetImplicitShowAnimation", 0);
    }
    ARG_NOTNULL(pElement, "element");
    IFC(CheckActivationAllowed());
    IFC(SetImplicitShowAnimationImpl(pElement, pAnimation));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, 0, "ElementCompositionPreview_SetImplicitShowAnimation", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ElementCompositionPreviewFactory::SetImplicitHideAnimation(_In_ ABI::Microsoft::UI::Xaml::IUIElement* pElement, _In_opt_ ABI::Microsoft::UI::Composition::ICompositionAnimationBase* pAnimation)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, 0, "ElementCompositionPreview_SetImplicitHideAnimation", 0);
    }
    ARG_NOTNULL(pElement, "element");
    IFC(CheckActivationAllowed());
    IFC(SetImplicitHideAnimationImpl(pElement, pAnimation));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, 0, "ElementCompositionPreview_SetImplicitHideAnimation", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ElementCompositionPreviewFactory::SetIsTranslationEnabled(_In_ ABI::Microsoft::UI::Xaml::IUIElement* pElement, _In_ BOOLEAN value)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, 0, "ElementCompositionPreview_SetIsTranslationEnabled", 0);
    }
    ARG_NOTNULL(pElement, "element");
    IFC(CheckActivationAllowed());
    IFC(SetIsTranslationEnabledImpl(pElement, value));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, 0, "ElementCompositionPreview_SetIsTranslationEnabled", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ElementCompositionPreviewFactory::GetPointerPositionPropertySet(_In_ ABI::Microsoft::UI::Xaml::IUIElement* pTargetElement, _Outptr_ ABI::Microsoft::UI::Composition::ICompositionPropertySet** ppResult)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, 0, "ElementCompositionPreview_GetPointerPositionPropertySet", 0);
    }
    ARG_NOTNULL(pTargetElement, "targetElement");
    ARG_VALIDRETURNPOINTER(ppResult);
    *ppResult={};
    IFC(CheckActivationAllowed());
    IFC(GetPointerPositionPropertySetImpl(pTargetElement, ppResult));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, 0, "ElementCompositionPreview_GetPointerPositionPropertySet", hr);
    }
    RRETURN(hr);
}

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_ElementCompositionPreview()
    {
        RRETURN(ctl::ActivationFactoryCreator<ElementCompositionPreviewFactory>::CreateActivationFactory());
    }
}