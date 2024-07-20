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
#define __CalendarDatePicker_GUID "21fc60de-a985-4a7d-a422-cbe43b1627ec"

namespace DirectUI
{
    class CalendarDatePicker;
    class DataTemplate;
    class Style;

    class __declspec(novtable) CalendarDatePickerGenerated:
        public DirectUI::Control
        , public ABI::Microsoft::UI::Xaml::Controls::ICalendarDatePicker
#if WI_IS_FEATURE_PRESENT(Feature_HeaderPlacement)
        , public ABI::Microsoft::UI::Xaml::Controls::ICalendarDatePickerFeature_HeaderPlacement
#endif
    {
        friend class DirectUI::CalendarDatePicker;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Controls.CalendarDatePicker");

        BEGIN_INTERFACE_MAP(CalendarDatePickerGenerated, DirectUI::Control)
            INTERFACE_ENTRY(CalendarDatePickerGenerated, ABI::Microsoft::UI::Xaml::Controls::ICalendarDatePicker)
#if WI_IS_FEATURE_PRESENT(Feature_HeaderPlacement)
            INTERFACE_ENTRY(CalendarDatePickerGenerated, ABI::Microsoft::UI::Xaml::Controls::ICalendarDatePickerFeature_HeaderPlacement)
#endif
        END_INTERFACE_MAP(CalendarDatePickerGenerated, DirectUI::Control)

    public:
        CalendarDatePickerGenerated();
        ~CalendarDatePickerGenerated() override;

        // Event source typedefs.
        typedef CEventSource<ABI::Microsoft::UI::Xaml::Controls::ICalendarViewDayItemChangingEventHandler, ABI::Microsoft::UI::Xaml::Controls::ICalendarView, ABI::Microsoft::UI::Xaml::Controls::ICalendarViewDayItemChangingEventArgs> CalendarViewDayItemChangingEventSourceType;
        typedef CEventSource<ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::CalendarDatePicker*, ABI::Microsoft::UI::Xaml::Controls::CalendarDatePickerDateChangedEventArgs*>, ABI::Microsoft::UI::Xaml::Controls::ICalendarDatePicker, ABI::Microsoft::UI::Xaml::Controls::ICalendarDatePickerDateChangedEventArgs> DateChangedEventSourceType;
        typedef CEventSource<ABI::Windows::Foundation::IEventHandler<IInspectable*>, IInspectable, IInspectable> OpenedEventSourceType;
        typedef CEventSource<ABI::Windows::Foundation::IEventHandler<IInspectable*>, IInspectable, IInspectable> ClosedEventSourceType;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::CalendarDatePicker;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::CalendarDatePicker;
        }

        // Properties.
        IFACEMETHOD(get_CalendarIdentifier)(_Out_ HSTRING* pValue) override;
        IFACEMETHOD(put_CalendarIdentifier)(_In_opt_ HSTRING value) override;
        IFACEMETHOD(get_CalendarViewStyle)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IStyle** ppValue) override;
        IFACEMETHOD(put_CalendarViewStyle)(_In_opt_ ABI::Microsoft::UI::Xaml::IStyle* pValue) override;
        IFACEMETHOD(get_Date)(_Out_ ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::DateTime>** ppValue) override;
        IFACEMETHOD(put_Date)(_In_ ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::DateTime>* pValue) override;
        IFACEMETHOD(get_DateFormat)(_Out_ HSTRING* pValue) override;
        IFACEMETHOD(put_DateFormat)(_In_opt_ HSTRING value) override;
        IFACEMETHOD(get_DayOfWeekFormat)(_Out_ HSTRING* pValue) override;
        IFACEMETHOD(put_DayOfWeekFormat)(_In_opt_ HSTRING value) override;
        IFACEMETHOD(get_Description)(_Outptr_result_maybenull_ IInspectable** ppValue) override;
        IFACEMETHOD(put_Description)(_In_opt_ IInspectable* pValue) override;
        IFACEMETHOD(get_DisplayMode)(_Out_ ABI::Microsoft::UI::Xaml::Controls::CalendarViewDisplayMode* pValue) override;
        IFACEMETHOD(put_DisplayMode)(_In_ ABI::Microsoft::UI::Xaml::Controls::CalendarViewDisplayMode value) override;
        IFACEMETHOD(get_FirstDayOfWeek)(_Out_ ABI::Windows::Globalization::DayOfWeek* pValue) override;
        IFACEMETHOD(put_FirstDayOfWeek)(_In_ ABI::Windows::Globalization::DayOfWeek value) override;
        IFACEMETHOD(get_Header)(_Outptr_result_maybenull_ IInspectable** ppValue) override;
        IFACEMETHOD(put_Header)(_In_opt_ IInspectable* pValue) override;
        IFACEMETHOD(get_HeaderPlacement)(_Out_ ABI::Microsoft::UI::Xaml::Controls::ControlHeaderPlacement* pValue) FEATURE_HEADERPLACEMENT_OVERRIDE;
        IFACEMETHOD(put_HeaderPlacement)(_In_ ABI::Microsoft::UI::Xaml::Controls::ControlHeaderPlacement value) FEATURE_HEADERPLACEMENT_OVERRIDE;
        IFACEMETHOD(get_HeaderTemplate)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IDataTemplate** ppValue) override;
        IFACEMETHOD(put_HeaderTemplate)(_In_opt_ ABI::Microsoft::UI::Xaml::IDataTemplate* pValue) override;
        IFACEMETHOD(get_IsCalendarOpen)(_Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(put_IsCalendarOpen)(_In_ BOOLEAN value) override;
        IFACEMETHOD(get_IsGroupLabelVisible)(_Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(put_IsGroupLabelVisible)(_In_ BOOLEAN value) override;
        IFACEMETHOD(get_IsOutOfScopeEnabled)(_Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(put_IsOutOfScopeEnabled)(_In_ BOOLEAN value) override;
        IFACEMETHOD(get_IsTodayHighlighted)(_Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(put_IsTodayHighlighted)(_In_ BOOLEAN value) override;
        IFACEMETHOD(get_LightDismissOverlayMode)(_Out_ ABI::Microsoft::UI::Xaml::Controls::LightDismissOverlayMode* pValue) override;
        IFACEMETHOD(put_LightDismissOverlayMode)(_In_ ABI::Microsoft::UI::Xaml::Controls::LightDismissOverlayMode value) override;
        IFACEMETHOD(get_MaxDate)(_Out_ ABI::Windows::Foundation::DateTime* pValue) override;
        IFACEMETHOD(put_MaxDate)(_In_ ABI::Windows::Foundation::DateTime value) override;
        IFACEMETHOD(get_MinDate)(_Out_ ABI::Windows::Foundation::DateTime* pValue) override;
        IFACEMETHOD(put_MinDate)(_In_ ABI::Windows::Foundation::DateTime value) override;
        IFACEMETHOD(get_PlaceholderText)(_Out_ HSTRING* pValue) override;
        IFACEMETHOD(put_PlaceholderText)(_In_opt_ HSTRING value) override;

        // Events.
        _Check_return_ HRESULT GetCalendarViewDayItemChangingEventSourceNoRef(_Outptr_ CalendarViewDayItemChangingEventSourceType** ppEventSource);
        IFACEMETHOD(add_CalendarViewDayItemChanging)(_In_ ABI::Microsoft::UI::Xaml::Controls::ICalendarViewDayItemChangingEventHandler* pValue, _Out_ EventRegistrationToken* pToken) override;
        IFACEMETHOD(remove_CalendarViewDayItemChanging)(_In_ EventRegistrationToken token) override;
        _Check_return_ HRESULT GetClosedEventSourceNoRef(_Outptr_ ClosedEventSourceType** ppEventSource);
        IFACEMETHOD(add_Closed)(_In_ ABI::Windows::Foundation::IEventHandler<IInspectable*>* pValue, _Out_ EventRegistrationToken* pToken) override;
        IFACEMETHOD(remove_Closed)(_In_ EventRegistrationToken token) override;
        _Check_return_ HRESULT GetDateChangedEventSourceNoRef(_Outptr_ DateChangedEventSourceType** ppEventSource);
        IFACEMETHOD(add_DateChanged)(_In_ ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::CalendarDatePicker*, ABI::Microsoft::UI::Xaml::Controls::CalendarDatePickerDateChangedEventArgs*>* pValue, _Out_ EventRegistrationToken* pToken) override;
        IFACEMETHOD(remove_DateChanged)(_In_ EventRegistrationToken token) override;
        _Check_return_ HRESULT GetOpenedEventSourceNoRef(_Outptr_ OpenedEventSourceType** ppEventSource);
        IFACEMETHOD(add_Opened)(_In_ ABI::Windows::Foundation::IEventHandler<IInspectable*>* pValue, _Out_ EventRegistrationToken* pToken) override;
        IFACEMETHOD(remove_Opened)(_In_ EventRegistrationToken token) override;

        // Methods.
        IFACEMETHOD(SetDisplayDate)(_In_ ABI::Windows::Foundation::DateTime date) override;
        IFACEMETHOD(SetYearDecadeDisplayDimensions)(_In_ INT columns, _In_ INT rows) override;


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;
        _Check_return_ HRESULT EventAddHandlerByIndex(_In_ KnownEventIndex nEventIndex, _In_ IInspectable* pHandler, _In_ BOOLEAN handledEventsToo) override;
        _Check_return_ HRESULT EventRemoveHandlerByIndex(_In_ KnownEventIndex nEventIndex, _In_ IInspectable* pHandler) override;

    private:

        // Fields.
    };
}

#include "CalendarDatePicker_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) CalendarDatePickerFactory:
       public ctl::BetterAggregableCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Controls::ICalendarDatePickerFactory
        , public ABI::Microsoft::UI::Xaml::Controls::ICalendarDatePickerStatics
#if WI_IS_FEATURE_PRESENT(Feature_HeaderPlacement)
        , public ABI::Microsoft::UI::Xaml::Controls::ICalendarDatePickerStaticsFeature_HeaderPlacement
#endif
    {
        BEGIN_INTERFACE_MAP(CalendarDatePickerFactory, ctl::BetterAggregableCoreObjectActivationFactory)
            INTERFACE_ENTRY(CalendarDatePickerFactory, ABI::Microsoft::UI::Xaml::Controls::ICalendarDatePickerFactory)
            INTERFACE_ENTRY(CalendarDatePickerFactory, ABI::Microsoft::UI::Xaml::Controls::ICalendarDatePickerStatics)
#if WI_IS_FEATURE_PRESENT(Feature_HeaderPlacement)
            INTERFACE_ENTRY(CalendarDatePickerFactory, ABI::Microsoft::UI::Xaml::Controls::ICalendarDatePickerStaticsFeature_HeaderPlacement)
#endif
        END_INTERFACE_MAP(CalendarDatePickerFactory, ctl::BetterAggregableCoreObjectActivationFactory)

    public:
        // Factory methods.
        IFACEMETHOD(CreateInstance)(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Controls::ICalendarDatePicker** ppInstance);

        // Static properties.

        // Dependency properties.
        IFACEMETHOD(get_DateProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_IsCalendarOpenProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_DateFormatProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_PlaceholderTextProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_HeaderPlacementProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) FEATURE_HEADERPLACEMENT_OVERRIDE;
        IFACEMETHOD(get_HeaderProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_HeaderTemplateProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_CalendarViewStyleProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_LightDismissOverlayModeProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_DescriptionProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_MinDateProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_MaxDateProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_IsTodayHighlightedProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_DisplayModeProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_FirstDayOfWeekProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_DayOfWeekFormatProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_CalendarIdentifierProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_IsOutOfScopeEnabledProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_IsGroupLabelVisibleProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::CalendarDatePicker;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}
