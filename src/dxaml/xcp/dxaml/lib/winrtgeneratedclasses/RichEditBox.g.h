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

#pragma once

#include "Control.g.h"
#include <FeatureFlags.h>
#if WI_IS_FEATURE_PRESENT(Feature_HeaderPlacement) 
#define FEATURE_HEADERPLACEMENT_OVERRIDE override
#else
#define FEATURE_HEADERPLACEMENT_OVERRIDE
#endif
#define __RichEditBox_GUID "a2752cbb-f8d0-46f1-96d1-9c900da05b12"

namespace DirectUI
{
    class RichEditBox;
    class DataTemplate;
    class FlyoutBase;
    class InputScope;
    class SolidColorBrush;

    class __declspec(novtable) RichEditBoxGenerated:
        public DirectUI::Control
        , public ABI::Microsoft::UI::Xaml::Controls::IRichEditBox
        , public ABI::Microsoft::UI::Xaml::Controls::ITelemetryCollectionPriv
#if WI_IS_FEATURE_PRESENT(Feature_HeaderPlacement)
        , public ABI::Microsoft::UI::Xaml::Controls::IRichEditBoxFeature_HeaderPlacement
#endif
    {
        friend class DirectUI::RichEditBox;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Controls.RichEditBox");

        BEGIN_INTERFACE_MAP(RichEditBoxGenerated, DirectUI::Control)
            INTERFACE_ENTRY(RichEditBoxGenerated, ABI::Microsoft::UI::Xaml::Controls::IRichEditBox)
            INTERFACE_ENTRY(RichEditBoxGenerated, ABI::Microsoft::UI::Xaml::Controls::ITelemetryCollectionPriv)
#if WI_IS_FEATURE_PRESENT(Feature_HeaderPlacement)
            INTERFACE_ENTRY(RichEditBoxGenerated, ABI::Microsoft::UI::Xaml::Controls::IRichEditBoxFeature_HeaderPlacement)
#endif
        END_INTERFACE_MAP(RichEditBoxGenerated, DirectUI::Control)

    public:
        RichEditBoxGenerated();
        ~RichEditBoxGenerated() override;

        // Event source typedefs.
        typedef CRoutedEventSource<ABI::Microsoft::UI::Xaml::IRoutedEventHandler, IInspectable, ABI::Microsoft::UI::Xaml::IRoutedEventArgs> TextChangedEventSourceType;
        typedef CRoutedEventSource<ABI::Microsoft::UI::Xaml::IRoutedEventHandler, IInspectable, ABI::Microsoft::UI::Xaml::IRoutedEventArgs> SelectionChangedEventSourceType;
        typedef CRoutedEventSource<ABI::Microsoft::UI::Xaml::Controls::IContextMenuOpeningEventHandler, IInspectable, ABI::Microsoft::UI::Xaml::Controls::IContextMenuEventArgs> ContextMenuOpeningEventSourceType;
        typedef CEventSource<ABI::Microsoft::UI::Xaml::Controls::ITextControlPasteEventHandler, IInspectable, ABI::Microsoft::UI::Xaml::Controls::ITextControlPasteEventArgs> PasteEventSourceType;
        typedef CEventSource<ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::RichEditBox*, ABI::Microsoft::UI::Xaml::Controls::CandidateWindowBoundsChangedEventArgs*>, ABI::Microsoft::UI::Xaml::Controls::IRichEditBox, ABI::Microsoft::UI::Xaml::Controls::ICandidateWindowBoundsChangedEventArgs> CandidateWindowBoundsChangedEventSourceType;
        typedef CEventSource<ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::RichEditBox*, ABI::Microsoft::UI::Xaml::Controls::RichEditBoxTextChangingEventArgs*>, ABI::Microsoft::UI::Xaml::Controls::IRichEditBox, ABI::Microsoft::UI::Xaml::Controls::IRichEditBoxTextChangingEventArgs> TextChangingEventSourceType;
        typedef CEventSource<ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::RichEditBox*, ABI::Microsoft::UI::Xaml::Controls::TextCompositionStartedEventArgs*>, ABI::Microsoft::UI::Xaml::Controls::IRichEditBox, ABI::Microsoft::UI::Xaml::Controls::ITextCompositionStartedEventArgs> TextCompositionStartedEventSourceType;
        typedef CEventSource<ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::RichEditBox*, ABI::Microsoft::UI::Xaml::Controls::TextCompositionChangedEventArgs*>, ABI::Microsoft::UI::Xaml::Controls::IRichEditBox, ABI::Microsoft::UI::Xaml::Controls::ITextCompositionChangedEventArgs> TextCompositionChangedEventSourceType;
        typedef CEventSource<ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::RichEditBox*, ABI::Microsoft::UI::Xaml::Controls::TextCompositionEndedEventArgs*>, ABI::Microsoft::UI::Xaml::Controls::IRichEditBox, ABI::Microsoft::UI::Xaml::Controls::ITextCompositionEndedEventArgs> TextCompositionEndedEventSourceType;
        typedef CEventSource<ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::RichEditBox*, ABI::Microsoft::UI::Xaml::Controls::TextControlCopyingToClipboardEventArgs*>, ABI::Microsoft::UI::Xaml::Controls::IRichEditBox, ABI::Microsoft::UI::Xaml::Controls::ITextControlCopyingToClipboardEventArgs> CopyingToClipboardEventSourceType;
        typedef CEventSource<ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::RichEditBox*, ABI::Microsoft::UI::Xaml::Controls::TextControlCuttingToClipboardEventArgs*>, ABI::Microsoft::UI::Xaml::Controls::IRichEditBox, ABI::Microsoft::UI::Xaml::Controls::ITextControlCuttingToClipboardEventArgs> CuttingToClipboardEventSourceType;
        typedef CEventSource<ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::RichEditBox*, ABI::Microsoft::UI::Xaml::Controls::RichEditBoxSelectionChangingEventArgs*>, ABI::Microsoft::UI::Xaml::Controls::IRichEditBox, ABI::Microsoft::UI::Xaml::Controls::IRichEditBoxSelectionChangingEventArgs> SelectionChangingEventSourceType;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::RichEditBox;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::RichEditBox;
        }

        // Properties.
        IFACEMETHOD(get_AcceptsReturn)(_Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(put_AcceptsReturn)(_In_ BOOLEAN value) override;
        IFACEMETHOD(get_CharacterCasing)(_Out_ ABI::Microsoft::UI::Xaml::Controls::CharacterCasing* pValue) override;
        IFACEMETHOD(put_CharacterCasing)(_In_ ABI::Microsoft::UI::Xaml::Controls::CharacterCasing value) override;
        IFACEMETHOD(get_ClipboardCopyFormat)(_Out_ ABI::Microsoft::UI::Xaml::Controls::RichEditClipboardFormat* pValue) override;
        IFACEMETHOD(put_ClipboardCopyFormat)(_In_ ABI::Microsoft::UI::Xaml::Controls::RichEditClipboardFormat value) override;
        IFACEMETHOD(get_Description)(_Outptr_result_maybenull_ IInspectable** ppValue) override;
        IFACEMETHOD(put_Description)(_In_opt_ IInspectable* pValue) override;
        IFACEMETHOD(get_DesiredCandidateWindowAlignment)(_Out_ ABI::Microsoft::UI::Xaml::Controls::CandidateWindowAlignment* pValue) override;
        IFACEMETHOD(put_DesiredCandidateWindowAlignment)(_In_ ABI::Microsoft::UI::Xaml::Controls::CandidateWindowAlignment value) override;
        IFACEMETHOD(get_DisabledFormattingAccelerators)(_Out_ ABI::Microsoft::UI::Xaml::Controls::DisabledFormattingAccelerators* pValue) override;
        IFACEMETHOD(put_DisabledFormattingAccelerators)(_In_ ABI::Microsoft::UI::Xaml::Controls::DisabledFormattingAccelerators value) override;
        IFACEMETHOD(get_Document)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Text::ITextDocument** ppValue) override;
        IFACEMETHOD(get_Header)(_Outptr_result_maybenull_ IInspectable** ppValue) override;
        IFACEMETHOD(put_Header)(_In_opt_ IInspectable* pValue) override;
        IFACEMETHOD(get_HeaderPlacement)(_Out_ ABI::Microsoft::UI::Xaml::Controls::ControlHeaderPlacement* pValue) FEATURE_HEADERPLACEMENT_OVERRIDE;
        IFACEMETHOD(put_HeaderPlacement)(_In_ ABI::Microsoft::UI::Xaml::Controls::ControlHeaderPlacement value) FEATURE_HEADERPLACEMENT_OVERRIDE;
        IFACEMETHOD(get_HeaderTemplate)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IDataTemplate** ppValue) override;
        IFACEMETHOD(put_HeaderTemplate)(_In_opt_ ABI::Microsoft::UI::Xaml::IDataTemplate* pValue) override;
        IFACEMETHOD(get_HorizontalTextAlignment)(_Out_ ABI::Microsoft::UI::Xaml::TextAlignment* pValue) override;
        IFACEMETHOD(put_HorizontalTextAlignment)(_In_ ABI::Microsoft::UI::Xaml::TextAlignment value) override;
        IFACEMETHOD(get_InputScope)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Input::IInputScope** ppValue) override;
        IFACEMETHOD(put_InputScope)(_In_opt_ ABI::Microsoft::UI::Xaml::Input::IInputScope* pValue) override;
        IFACEMETHOD(get_IsColorFontEnabled)(_Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(put_IsColorFontEnabled)(_In_ BOOLEAN value) override;
        IFACEMETHOD(get_IsReadOnly)(_Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(put_IsReadOnly)(_In_ BOOLEAN value) override;
        IFACEMETHOD(get_IsSpellCheckEnabled)(_Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(put_IsSpellCheckEnabled)(_In_ BOOLEAN value) override;
        IFACEMETHOD(get_IsTelemetryCollectionEnabled)(_Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(put_IsTelemetryCollectionEnabled)(_In_ BOOLEAN value) override;
        IFACEMETHOD(get_IsTextPredictionEnabled)(_Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(put_IsTextPredictionEnabled)(_In_ BOOLEAN value) override;
        IFACEMETHOD(get_MaxLength)(_Out_ INT* pValue) override;
        IFACEMETHOD(put_MaxLength)(_In_ INT value) override;
        IFACEMETHOD(get_PlaceholderText)(_Out_ HSTRING* pValue) override;
        IFACEMETHOD(put_PlaceholderText)(_In_opt_ HSTRING value) override;
        IFACEMETHOD(get_PreventKeyboardDisplayOnProgrammaticFocus)(_Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(put_PreventKeyboardDisplayOnProgrammaticFocus)(_In_ BOOLEAN value) override;
        IFACEMETHOD(get_ProofingMenuFlyout)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::Primitives::IFlyoutBase** ppValue) override;
        IFACEMETHOD(get_SelectionFlyout)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::Primitives::IFlyoutBase** ppValue) override;
        IFACEMETHOD(put_SelectionFlyout)(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::Primitives::IFlyoutBase* pValue) override;
        IFACEMETHOD(get_SelectionHighlightColor)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Media::ISolidColorBrush** ppValue) override;
        IFACEMETHOD(put_SelectionHighlightColor)(_In_opt_ ABI::Microsoft::UI::Xaml::Media::ISolidColorBrush* pValue) override;
        IFACEMETHOD(get_SelectionHighlightColorWhenNotFocused)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Media::ISolidColorBrush** ppValue) override;
        IFACEMETHOD(put_SelectionHighlightColorWhenNotFocused)(_In_opt_ ABI::Microsoft::UI::Xaml::Media::ISolidColorBrush* pValue) override;
        IFACEMETHOD(get_TextAlignment)(_Out_ ABI::Microsoft::UI::Xaml::TextAlignment* pValue) override;
        IFACEMETHOD(put_TextAlignment)(_In_ ABI::Microsoft::UI::Xaml::TextAlignment value) override;
        IFACEMETHOD(get_TextDocument)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Text::ITextDocument** ppValue) override;
        IFACEMETHOD(get_TextReadingOrder)(_Out_ ABI::Microsoft::UI::Xaml::TextReadingOrder* pValue) override;
        IFACEMETHOD(put_TextReadingOrder)(_In_ ABI::Microsoft::UI::Xaml::TextReadingOrder value) override;
        IFACEMETHOD(get_TextWrapping)(_Out_ ABI::Microsoft::UI::Xaml::TextWrapping* pValue) override;
        IFACEMETHOD(put_TextWrapping)(_In_ ABI::Microsoft::UI::Xaml::TextWrapping value) override;

        // Events.
        _Check_return_ HRESULT GetCandidateWindowBoundsChangedEventSourceNoRef(_Outptr_ CandidateWindowBoundsChangedEventSourceType** ppEventSource);
        IFACEMETHOD(add_CandidateWindowBoundsChanged)(_In_ ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::RichEditBox*, ABI::Microsoft::UI::Xaml::Controls::CandidateWindowBoundsChangedEventArgs*>* pValue, _Out_ EventRegistrationToken* pToken) override;
        IFACEMETHOD(remove_CandidateWindowBoundsChanged)(_In_ EventRegistrationToken token) override;
        _Check_return_ HRESULT GetContextMenuOpeningEventSourceNoRef(_Outptr_ ContextMenuOpeningEventSourceType** ppEventSource);
        IFACEMETHOD(add_ContextMenuOpening)(_In_ ABI::Microsoft::UI::Xaml::Controls::IContextMenuOpeningEventHandler* pValue, _Out_ EventRegistrationToken* pToken) override;
        IFACEMETHOD(remove_ContextMenuOpening)(_In_ EventRegistrationToken token) override;
        _Check_return_ HRESULT GetCopyingToClipboardEventSourceNoRef(_Outptr_ CopyingToClipboardEventSourceType** ppEventSource);
        IFACEMETHOD(add_CopyingToClipboard)(_In_ ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::RichEditBox*, ABI::Microsoft::UI::Xaml::Controls::TextControlCopyingToClipboardEventArgs*>* pValue, _Out_ EventRegistrationToken* pToken) override;
        IFACEMETHOD(remove_CopyingToClipboard)(_In_ EventRegistrationToken token) override;
        _Check_return_ HRESULT GetCuttingToClipboardEventSourceNoRef(_Outptr_ CuttingToClipboardEventSourceType** ppEventSource);
        IFACEMETHOD(add_CuttingToClipboard)(_In_ ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::RichEditBox*, ABI::Microsoft::UI::Xaml::Controls::TextControlCuttingToClipboardEventArgs*>* pValue, _Out_ EventRegistrationToken* pToken) override;
        IFACEMETHOD(remove_CuttingToClipboard)(_In_ EventRegistrationToken token) override;
        _Check_return_ HRESULT GetPasteEventSourceNoRef(_Outptr_ PasteEventSourceType** ppEventSource);
        IFACEMETHOD(add_Paste)(_In_ ABI::Microsoft::UI::Xaml::Controls::ITextControlPasteEventHandler* pValue, _Out_ EventRegistrationToken* pToken) override;
        IFACEMETHOD(remove_Paste)(_In_ EventRegistrationToken token) override;
        _Check_return_ HRESULT GetSelectionChangedEventSourceNoRef(_Outptr_ SelectionChangedEventSourceType** ppEventSource);
        IFACEMETHOD(add_SelectionChanged)(_In_ ABI::Microsoft::UI::Xaml::IRoutedEventHandler* pValue, _Out_ EventRegistrationToken* pToken) override;
        IFACEMETHOD(remove_SelectionChanged)(_In_ EventRegistrationToken token) override;
        _Check_return_ HRESULT GetSelectionChangingEventSourceNoRef(_Outptr_ SelectionChangingEventSourceType** ppEventSource);
        IFACEMETHOD(add_SelectionChanging)(_In_ ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::RichEditBox*, ABI::Microsoft::UI::Xaml::Controls::RichEditBoxSelectionChangingEventArgs*>* pValue, _Out_ EventRegistrationToken* pToken) override;
        IFACEMETHOD(remove_SelectionChanging)(_In_ EventRegistrationToken token) override;
        _Check_return_ HRESULT GetTextChangedEventSourceNoRef(_Outptr_ TextChangedEventSourceType** ppEventSource);
        IFACEMETHOD(add_TextChanged)(_In_ ABI::Microsoft::UI::Xaml::IRoutedEventHandler* pValue, _Out_ EventRegistrationToken* pToken) override;
        IFACEMETHOD(remove_TextChanged)(_In_ EventRegistrationToken token) override;
        _Check_return_ HRESULT GetTextChangingEventSourceNoRef(_Outptr_ TextChangingEventSourceType** ppEventSource);
        IFACEMETHOD(add_TextChanging)(_In_ ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::RichEditBox*, ABI::Microsoft::UI::Xaml::Controls::RichEditBoxTextChangingEventArgs*>* pValue, _Out_ EventRegistrationToken* pToken) override;
        IFACEMETHOD(remove_TextChanging)(_In_ EventRegistrationToken token) override;
        _Check_return_ HRESULT GetTextCompositionChangedEventSourceNoRef(_Outptr_ TextCompositionChangedEventSourceType** ppEventSource);
        IFACEMETHOD(add_TextCompositionChanged)(_In_ ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::RichEditBox*, ABI::Microsoft::UI::Xaml::Controls::TextCompositionChangedEventArgs*>* pValue, _Out_ EventRegistrationToken* pToken) override;
        IFACEMETHOD(remove_TextCompositionChanged)(_In_ EventRegistrationToken token) override;
        _Check_return_ HRESULT GetTextCompositionEndedEventSourceNoRef(_Outptr_ TextCompositionEndedEventSourceType** ppEventSource);
        IFACEMETHOD(add_TextCompositionEnded)(_In_ ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::RichEditBox*, ABI::Microsoft::UI::Xaml::Controls::TextCompositionEndedEventArgs*>* pValue, _Out_ EventRegistrationToken* pToken) override;
        IFACEMETHOD(remove_TextCompositionEnded)(_In_ EventRegistrationToken token) override;
        _Check_return_ HRESULT GetTextCompositionStartedEventSourceNoRef(_Outptr_ TextCompositionStartedEventSourceType** ppEventSource);
        IFACEMETHOD(add_TextCompositionStarted)(_In_ ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::RichEditBox*, ABI::Microsoft::UI::Xaml::Controls::TextCompositionStartedEventArgs*>* pValue, _Out_ EventRegistrationToken* pToken) override;
        IFACEMETHOD(remove_TextCompositionStarted)(_In_ EventRegistrationToken token) override;

        // Methods.
        IFACEMETHOD(GetLinguisticAlternativesAsync)(_Outptr_ ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<HSTRING>*>** ppReturnValue) override;


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;
        _Check_return_ HRESULT EventAddHandlerByIndex(_In_ KnownEventIndex nEventIndex, _In_ IInspectable* pHandler, _In_ BOOLEAN handledEventsToo) override;
        _Check_return_ HRESULT EventRemoveHandlerByIndex(_In_ KnownEventIndex nEventIndex, _In_ IInspectable* pHandler) override;

    private:

        // Fields.
    };
}

#include "RichEditBox_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) RichEditBoxFactory:
       public ctl::BetterAggregableCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Controls::IRichEditBoxFactory
        , public ABI::Microsoft::UI::Xaml::Controls::IRichEditBoxStatics
#if WI_IS_FEATURE_PRESENT(Feature_HeaderPlacement)
        , public ABI::Microsoft::UI::Xaml::Controls::IRichEditBoxStaticsFeature_HeaderPlacement
#endif
    {
        BEGIN_INTERFACE_MAP(RichEditBoxFactory, ctl::BetterAggregableCoreObjectActivationFactory)
            INTERFACE_ENTRY(RichEditBoxFactory, ABI::Microsoft::UI::Xaml::Controls::IRichEditBoxFactory)
            INTERFACE_ENTRY(RichEditBoxFactory, ABI::Microsoft::UI::Xaml::Controls::IRichEditBoxStatics)
#if WI_IS_FEATURE_PRESENT(Feature_HeaderPlacement)
            INTERFACE_ENTRY(RichEditBoxFactory, ABI::Microsoft::UI::Xaml::Controls::IRichEditBoxStaticsFeature_HeaderPlacement)
#endif
        END_INTERFACE_MAP(RichEditBoxFactory, ctl::BetterAggregableCoreObjectActivationFactory)

    public:
        // Factory methods.
        IFACEMETHOD(CreateInstance)(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Controls::IRichEditBox** ppInstance);

        // Static properties.

        // Dependency properties.
        IFACEMETHOD(get_IsReadOnlyProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_AcceptsReturnProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_TextAlignmentProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_TextWrappingProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_IsSpellCheckEnabledProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_IsTextPredictionEnabledProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_InputScopeProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_HeaderProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_HeaderTemplateProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_PlaceholderTextProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_SelectionHighlightColorProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_PreventKeyboardDisplayOnProgrammaticFocusProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_IsColorFontEnabledProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_DesiredCandidateWindowAlignmentProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_TextReadingOrderProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_ClipboardCopyFormatProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_SelectionHighlightColorWhenNotFocusedProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_MaxLengthProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_HorizontalTextAlignmentProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_CharacterCasingProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_DisabledFormattingAcceleratorsProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_SelectionFlyoutProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_ProofingMenuFlyoutProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_DescriptionProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_HeaderPlacementProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) FEATURE_HEADERPLACEMENT_OVERRIDE;
        

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::RichEditBox;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}
