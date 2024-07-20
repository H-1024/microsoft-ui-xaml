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

#include "RichTextBlock.g.h"
#include "BlockCollection.g.h"
#include "Brush.g.h"
#include "FlyoutBase.g.h"
#include "FontFamily.g.h"
#include "RichTextBlockOverflow.g.h"
#include "SolidColorBrush.g.h"
#include "TextPointer.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::RichTextBlockGenerated::RichTextBlockGenerated()
{
}

DirectUI::RichTextBlockGenerated::~RichTextBlockGenerated()
{
}

HRESULT DirectUI::RichTextBlockGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::RichTextBlock)))
    {
        *ppObject = static_cast<DirectUI::RichTextBlock*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IRichTextBlock)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IRichTextBlock*>(this);
    }
    else
    {
        RRETURN(DirectUI::FrameworkElement::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::get_BaselineOffset(_Out_ DOUBLE* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    IFC(CheckThread());
    IFC(static_cast<RichTextBlock*>(this)->get_BaselineOffsetImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::get_Blocks(_Outptr_result_maybenull_ ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Xaml::Documents::Block*>** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_Blocks, ppValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::get_CharacterSpacing(_Out_ INT* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_CharacterSpacing, pValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::put_CharacterSpacing(_In_ INT value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_CharacterSpacing, value));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::get_ContentEnd(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Documents::ITextPointer** ppValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(ppValue);
    IFC(CheckThread());
    IFC(static_cast<RichTextBlock*>(this)->get_ContentEndImpl(ppValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::get_ContentStart(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Documents::ITextPointer** ppValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(ppValue);
    IFC(CheckThread());
    IFC(static_cast<RichTextBlock*>(this)->get_ContentStartImpl(ppValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::get_FontFamily(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Media::IFontFamily** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_FontFamily, ppValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::put_FontFamily(_In_opt_ ABI::Microsoft::UI::Xaml::Media::IFontFamily* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_FontFamily, pValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::get_FontSize(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_FontSize, pValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::put_FontSize(_In_ DOUBLE value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_FontSize, value));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::get_FontStretch(_Out_ ABI::Windows::UI::Text::FontStretch* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_FontStretch, pValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::put_FontStretch(_In_ ABI::Windows::UI::Text::FontStretch value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_FontStretch, value));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::get_FontStyle(_Out_ ABI::Windows::UI::Text::FontStyle* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_FontStyle, pValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::put_FontStyle(_In_ ABI::Windows::UI::Text::FontStyle value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_FontStyle, value));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::get_FontWeight(_Out_ ABI::Windows::UI::Text::FontWeight* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_FontWeight, pValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::put_FontWeight(_In_ ABI::Windows::UI::Text::FontWeight value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_FontWeight, value));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::get_Foreground(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Media::IBrush** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_Foreground, ppValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::put_Foreground(_In_opt_ ABI::Microsoft::UI::Xaml::Media::IBrush* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_Foreground, pValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::get_HasOverflowContent(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_HasOverflowContent, pValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::get_HorizontalTextAlignment(_Out_ ABI::Microsoft::UI::Xaml::TextAlignment* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_HorizontalTextAlignment, pValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::put_HorizontalTextAlignment(_In_ ABI::Microsoft::UI::Xaml::TextAlignment value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_HorizontalTextAlignment, value));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::get_IsColorFontEnabled(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_IsColorFontEnabled, pValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::put_IsColorFontEnabled(_In_ BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_IsColorFontEnabled, value));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::get_IsTextScaleFactorEnabled(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_IsTextScaleFactorEnabled, pValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::put_IsTextScaleFactorEnabled(_In_ BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_IsTextScaleFactorEnabled, value));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::get_IsTextSelectionEnabled(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_IsTextSelectionEnabled, pValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::put_IsTextSelectionEnabled(_In_ BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_IsTextSelectionEnabled, value));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::get_IsTextTrimmed(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_IsTextTrimmed, pValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::get_LineHeight(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_LineHeight, pValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::put_LineHeight(_In_ DOUBLE value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_LineHeight, value));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::get_LineStackingStrategy(_Out_ ABI::Microsoft::UI::Xaml::LineStackingStrategy* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_LineStackingStrategy, pValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::put_LineStackingStrategy(_In_ ABI::Microsoft::UI::Xaml::LineStackingStrategy value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_LineStackingStrategy, value));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::get_MaxLines(_Out_ INT* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_MaxLines, pValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::put_MaxLines(_In_ INT value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_MaxLines, value));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::get_OpticalMarginAlignment(_Out_ ABI::Microsoft::UI::Xaml::OpticalMarginAlignment* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_OpticalMarginAlignment, pValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::put_OpticalMarginAlignment(_In_ ABI::Microsoft::UI::Xaml::OpticalMarginAlignment value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_OpticalMarginAlignment, value));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::get_OverflowContentTarget(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::IRichTextBlockOverflow** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_OverflowContentTarget, ppValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::put_OverflowContentTarget(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::IRichTextBlockOverflow* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_OverflowContentTarget, pValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::get_Padding(_Out_ ABI::Microsoft::UI::Xaml::Thickness* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_Padding, pValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::put_Padding(_In_ ABI::Microsoft::UI::Xaml::Thickness value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_Padding, value));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::get_SelectedText(_Out_ HSTRING* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_SelectedText, pValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::get_SelectionEnd(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Documents::ITextPointer** ppValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(ppValue);
    IFC(CheckThread());
    IFC(static_cast<RichTextBlock*>(this)->get_SelectionEndImpl(ppValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::get_SelectionFlyout(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::Primitives::IFlyoutBase** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_SelectionFlyout, ppValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::put_SelectionFlyout(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::Primitives::IFlyoutBase* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_SelectionFlyout, pValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::get_SelectionHighlightColor(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Media::ISolidColorBrush** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_SelectionHighlightColor, ppValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::put_SelectionHighlightColor(_In_opt_ ABI::Microsoft::UI::Xaml::Media::ISolidColorBrush* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_SelectionHighlightColor, pValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::get_SelectionStart(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Documents::ITextPointer** ppValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(ppValue);
    IFC(CheckThread());
    IFC(static_cast<RichTextBlock*>(this)->get_SelectionStartImpl(ppValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::get_TextAlignment(_Out_ ABI::Microsoft::UI::Xaml::TextAlignment* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_TextAlignment, pValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::put_TextAlignment(_In_ ABI::Microsoft::UI::Xaml::TextAlignment value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_TextAlignment, value));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::get_TextDecorations(_Out_ ABI::Windows::UI::Text::TextDecorations* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_TextDecorations, pValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::put_TextDecorations(_In_ ABI::Windows::UI::Text::TextDecorations value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_TextDecorations, value));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::get_TextHighlighters(_Outptr_result_maybenull_ ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Xaml::Documents::TextHighlighter*>** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_TextHighlighters, ppValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::get_TextIndent(_Out_ DOUBLE* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_TextIndent, pValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::put_TextIndent(_In_ DOUBLE value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_TextIndent, value));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::get_TextLineBounds(_Out_ ABI::Microsoft::UI::Xaml::TextLineBounds* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_TextLineBounds, pValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::put_TextLineBounds(_In_ ABI::Microsoft::UI::Xaml::TextLineBounds value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_TextLineBounds, value));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::get_TextReadingOrder(_Out_ ABI::Microsoft::UI::Xaml::TextReadingOrder* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_TextReadingOrder, pValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::put_TextReadingOrder(_In_ ABI::Microsoft::UI::Xaml::TextReadingOrder value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_TextReadingOrder, value));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::get_TextTrimming(_Out_ ABI::Microsoft::UI::Xaml::TextTrimming* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_TextTrimming, pValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::put_TextTrimming(_In_ ABI::Microsoft::UI::Xaml::TextTrimming value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_TextTrimming, value));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::get_TextWrapping(_Out_ ABI::Microsoft::UI::Xaml::TextWrapping* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_TextWrapping, pValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::put_TextWrapping(_In_ ABI::Microsoft::UI::Xaml::TextWrapping value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::RichTextBlock_TextWrapping, value));
}

// Events.
_Check_return_ HRESULT DirectUI::RichTextBlockGenerated::GetContextMenuOpeningEventSourceNoRef(_Outptr_ ContextMenuOpeningEventSourceType** ppEventSource)
{
    HRESULT hr = S_OK;

    IFC(GetEventSourceNoRefWithArgumentValidation(KnownEventIndex::RichTextBlock_ContextMenuOpening, reinterpret_cast<IUntypedEventSource**>(ppEventSource)));

    if (*ppEventSource == nullptr)
    {
        IFC(ctl::ComObject<ContextMenuOpeningEventSourceType>::CreateInstance(ppEventSource, TRUE /* fDisableLeakChecks */));
        (*ppEventSource)->Initialize(KnownEventIndex::RichTextBlock_ContextMenuOpening, this, /* bUseEventManager */ true);
        IFC(StoreEventSource(KnownEventIndex::RichTextBlock_ContextMenuOpening, *ppEventSource));

        // The caller doesn't expect a ref, this function ends in "NoRef".  The ref is now owned by the map (inside StoreEventSource)
        ReleaseInterfaceNoNULL(ctl::iunknown_cast(*ppEventSource));
    }

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::RichTextBlockGenerated::add_ContextMenuOpening(_In_ ABI::Microsoft::UI::Xaml::Controls::IContextMenuOpeningEventHandler* pValue, _Out_ EventRegistrationToken* ptToken)
{
    HRESULT hr = S_OK;
    ContextMenuOpeningEventSourceType* pEventSource = nullptr;

    IFC(EventAddPreValidation(pValue, ptToken));
    IFC(DefaultStrictApiCheck(this));
    IFC(GetContextMenuOpeningEventSourceNoRef(&pEventSource));
    IFC(pEventSource->AddHandler(pValue));

    ptToken->value = (INT64)pValue;

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::RichTextBlockGenerated::remove_ContextMenuOpening(_In_ EventRegistrationToken tToken)
{
    HRESULT hr = S_OK;
    ContextMenuOpeningEventSourceType* pEventSource = nullptr;
    ABI::Microsoft::UI::Xaml::Controls::IContextMenuOpeningEventHandler* pValue = (ABI::Microsoft::UI::Xaml::Controls::IContextMenuOpeningEventHandler*)tToken.value;

    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(GetContextMenuOpeningEventSourceNoRef(&pEventSource));
    IFC(pEventSource->RemoveHandler(pValue));

    if (!pEventSource->HasHandlers())
    {
        IFC(RemoveEventSource(KnownEventIndex::RichTextBlock_ContextMenuOpening));
    }

Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT DirectUI::RichTextBlockGenerated::GetIsTextTrimmedChangedEventSourceNoRef(_Outptr_ IsTextTrimmedChangedEventSourceType** ppEventSource)
{
    HRESULT hr = S_OK;

    IFC(GetEventSourceNoRefWithArgumentValidation(KnownEventIndex::RichTextBlock_IsTextTrimmedChanged, reinterpret_cast<IUntypedEventSource**>(ppEventSource)));

    if (*ppEventSource == nullptr)
    {
        IFC(ctl::ComObject<IsTextTrimmedChangedEventSourceType>::CreateInstance(ppEventSource, TRUE /* fDisableLeakChecks */));
        (*ppEventSource)->Initialize(KnownEventIndex::RichTextBlock_IsTextTrimmedChanged, this, /* bUseEventManager */ true);
        IFC(StoreEventSource(KnownEventIndex::RichTextBlock_IsTextTrimmedChanged, *ppEventSource));

        // The caller doesn't expect a ref, this function ends in "NoRef".  The ref is now owned by the map (inside StoreEventSource)
        ReleaseInterfaceNoNULL(ctl::iunknown_cast(*ppEventSource));
    }

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::RichTextBlockGenerated::add_IsTextTrimmedChanged(_In_ ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::RichTextBlock*, ABI::Microsoft::UI::Xaml::Controls::IsTextTrimmedChangedEventArgs*>* pValue, _Out_ EventRegistrationToken* ptToken)
{
    HRESULT hr = S_OK;
    IsTextTrimmedChangedEventSourceType* pEventSource = nullptr;

    IFC(EventAddPreValidation(pValue, ptToken));
    IFC(DefaultStrictApiCheck(this));
    IFC(GetIsTextTrimmedChangedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->AddHandler(pValue));

    ptToken->value = (INT64)pValue;

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::RichTextBlockGenerated::remove_IsTextTrimmedChanged(_In_ EventRegistrationToken tToken)
{
    HRESULT hr = S_OK;
    IsTextTrimmedChangedEventSourceType* pEventSource = nullptr;
    ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::RichTextBlock*, ABI::Microsoft::UI::Xaml::Controls::IsTextTrimmedChangedEventArgs*>* pValue = (ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::RichTextBlock*, ABI::Microsoft::UI::Xaml::Controls::IsTextTrimmedChangedEventArgs*>*)tToken.value;

    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(GetIsTextTrimmedChangedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->RemoveHandler(pValue));

    if (!pEventSource->HasHandlers())
    {
        IFC(RemoveEventSource(KnownEventIndex::RichTextBlock_IsTextTrimmedChanged));
    }

Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT DirectUI::RichTextBlockGenerated::GetSelectionChangedEventSourceNoRef(_Outptr_ SelectionChangedEventSourceType** ppEventSource)
{
    HRESULT hr = S_OK;

    IFC(GetEventSourceNoRefWithArgumentValidation(KnownEventIndex::RichTextBlock_SelectionChanged, reinterpret_cast<IUntypedEventSource**>(ppEventSource)));

    if (*ppEventSource == nullptr)
    {
        IFC(ctl::ComObject<SelectionChangedEventSourceType>::CreateInstance(ppEventSource, TRUE /* fDisableLeakChecks */));
        (*ppEventSource)->Initialize(KnownEventIndex::RichTextBlock_SelectionChanged, this, /* bUseEventManager */ true);
        IFC(StoreEventSource(KnownEventIndex::RichTextBlock_SelectionChanged, *ppEventSource));

        // The caller doesn't expect a ref, this function ends in "NoRef".  The ref is now owned by the map (inside StoreEventSource)
        ReleaseInterfaceNoNULL(ctl::iunknown_cast(*ppEventSource));
    }

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::RichTextBlockGenerated::add_SelectionChanged(_In_ ABI::Microsoft::UI::Xaml::IRoutedEventHandler* pValue, _Out_ EventRegistrationToken* ptToken)
{
    HRESULT hr = S_OK;
    SelectionChangedEventSourceType* pEventSource = nullptr;

    IFC(EventAddPreValidation(pValue, ptToken));
    IFC(DefaultStrictApiCheck(this));
    IFC(GetSelectionChangedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->AddHandler(pValue));

    ptToken->value = (INT64)pValue;

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::RichTextBlockGenerated::remove_SelectionChanged(_In_ EventRegistrationToken tToken)
{
    HRESULT hr = S_OK;
    SelectionChangedEventSourceType* pEventSource = nullptr;
    ABI::Microsoft::UI::Xaml::IRoutedEventHandler* pValue = (ABI::Microsoft::UI::Xaml::IRoutedEventHandler*)tToken.value;

    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(GetSelectionChangedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->RemoveHandler(pValue));

    if (!pEventSource->HasHandlers())
    {
        IFC(RemoveEventSource(KnownEventIndex::RichTextBlock_SelectionChanged));
    }

Cleanup:
    RRETURN(hr);
}

// Methods.
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::CopySelectionToClipboard()
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "RichTextBlock_CopySelectionToClipboard", 0);
    }
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<RichTextBlock*>(this)->CopySelectionToClipboardImpl());
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "RichTextBlock_CopySelectionToClipboard", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::GetPositionFromPoint(_In_ ABI::Windows::Foundation::Point point, _Outptr_ ABI::Microsoft::UI::Xaml::Documents::ITextPointer** ppReturnValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "RichTextBlock_GetPositionFromPoint", 0);
    }
    ARG_VALIDRETURNPOINTER(ppReturnValue);
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<RichTextBlock*>(this)->GetPositionFromPointImpl(point, ppReturnValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "RichTextBlock_GetPositionFromPoint", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::Select(_In_ ABI::Microsoft::UI::Xaml::Documents::ITextPointer* pStart, _In_ ABI::Microsoft::UI::Xaml::Documents::ITextPointer* pEnd)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "RichTextBlock_Select", 0);
    }
    ARG_NOTNULL(pStart, "start");
    ARG_NOTNULL(pEnd, "end");
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<RichTextBlock*>(this)->SelectImpl(pStart, pEnd));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "RichTextBlock_Select", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::RichTextBlockGenerated::SelectAll()
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "RichTextBlock_SelectAll", 0);
    }


    

    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));

    IFC(static_cast<CRichTextBlock*>(GetHandle())->SelectAll());


Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "RichTextBlock_SelectAll", hr);
    }
    RRETURN(hr);
}

HRESULT DirectUI::RichTextBlockFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IRichTextBlockStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IRichTextBlockStatics*>(this);
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
IFACEMETHODIMP DirectUI::RichTextBlockFactory::get_FontSizeProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::RichTextBlock_FontSize, ppValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockFactory::get_FontFamilyProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::RichTextBlock_FontFamily, ppValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockFactory::get_FontWeightProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::RichTextBlock_FontWeight, ppValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockFactory::get_FontStyleProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::RichTextBlock_FontStyle, ppValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockFactory::get_FontStretchProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::RichTextBlock_FontStretch, ppValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockFactory::get_ForegroundProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::RichTextBlock_Foreground, ppValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockFactory::get_TextWrappingProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::RichTextBlock_TextWrapping, ppValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockFactory::get_TextTrimmingProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::RichTextBlock_TextTrimming, ppValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockFactory::get_TextAlignmentProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::RichTextBlock_TextAlignment, ppValue));
}

IFACEMETHODIMP DirectUI::RichTextBlockFactory::get_PaddingProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::RichTextBlock_Padding, ppValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockFactory::get_LineHeightProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::RichTextBlock_LineHeight, ppValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockFactory::get_LineStackingStrategyProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::RichTextBlock_LineStackingStrategy, ppValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockFactory::get_CharacterSpacingProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::RichTextBlock_CharacterSpacing, ppValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockFactory::get_OverflowContentTargetProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::RichTextBlock_OverflowContentTarget, ppValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockFactory::get_IsTextSelectionEnabledProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::RichTextBlock_IsTextSelectionEnabled, ppValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockFactory::get_HasOverflowContentProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::RichTextBlock_HasOverflowContent, ppValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockFactory::get_SelectedTextProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::RichTextBlock_SelectedText, ppValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockFactory::get_TextIndentProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::RichTextBlock_TextIndent, ppValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockFactory::get_MaxLinesProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::RichTextBlock_MaxLines, ppValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockFactory::get_TextLineBoundsProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::RichTextBlock_TextLineBounds, ppValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockFactory::get_SelectionHighlightColorProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::RichTextBlock_SelectionHighlightColor, ppValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockFactory::get_OpticalMarginAlignmentProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::RichTextBlock_OpticalMarginAlignment, ppValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockFactory::get_IsColorFontEnabledProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::RichTextBlock_IsColorFontEnabled, ppValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockFactory::get_TextReadingOrderProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::RichTextBlock_TextReadingOrder, ppValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockFactory::get_IsTextScaleFactorEnabledProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::RichTextBlock_IsTextScaleFactorEnabled, ppValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockFactory::get_TextDecorationsProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::RichTextBlock_TextDecorations, ppValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockFactory::get_IsTextTrimmedProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::RichTextBlock_IsTextTrimmed, ppValue));
}
IFACEMETHODIMP DirectUI::RichTextBlockFactory::get_HorizontalTextAlignmentProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::RichTextBlock_HorizontalTextAlignment, ppValue));
}

IFACEMETHODIMP DirectUI::RichTextBlockFactory::get_SelectionFlyoutProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::RichTextBlock_SelectionFlyout, ppValue));
}

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_RichTextBlock()
    {
        RRETURN(ctl::ActivationFactoryCreator<RichTextBlockFactory>::CreateActivationFactory());
    }
}
