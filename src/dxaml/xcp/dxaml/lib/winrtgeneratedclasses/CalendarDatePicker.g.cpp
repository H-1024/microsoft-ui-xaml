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

#include "CalendarDatePicker.g.h"
#include "DataTemplate.g.h"
#include "Style.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::CalendarDatePickerGenerated::CalendarDatePickerGenerated()
{
}

DirectUI::CalendarDatePickerGenerated::~CalendarDatePickerGenerated()
{
}

HRESULT DirectUI::CalendarDatePickerGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::CalendarDatePicker)))
    {
        *ppObject = static_cast<DirectUI::CalendarDatePicker*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::ICalendarDatePicker)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::ICalendarDatePicker*>(this);
    }
#if WI_IS_FEATURE_PRESENT(Feature_HeaderPlacement)
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::ICalendarDatePickerFeature_HeaderPlacement)) && Feature_HeaderPlacement::IsEnabled())
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::ICalendarDatePickerFeature_HeaderPlacement*>(this);
    }
#endif
    else
    {
        RRETURN(DirectUI::Control::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::CalendarDatePickerGenerated::get_CalendarIdentifier(_Out_ HSTRING* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::CalendarDatePicker_CalendarIdentifier, pValue));
}
IFACEMETHODIMP DirectUI::CalendarDatePickerGenerated::put_CalendarIdentifier(_In_opt_ HSTRING value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::CalendarDatePicker_CalendarIdentifier, value));
}
IFACEMETHODIMP DirectUI::CalendarDatePickerGenerated::get_CalendarViewStyle(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IStyle** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::CalendarDatePicker_CalendarViewStyle, ppValue));
}
IFACEMETHODIMP DirectUI::CalendarDatePickerGenerated::put_CalendarViewStyle(_In_opt_ ABI::Microsoft::UI::Xaml::IStyle* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::CalendarDatePicker_CalendarViewStyle, pValue));
}
IFACEMETHODIMP DirectUI::CalendarDatePickerGenerated::get_Date(_Out_ ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::DateTime>** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::CalendarDatePicker_Date, ppValue));
}
IFACEMETHODIMP DirectUI::CalendarDatePickerGenerated::put_Date(ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::DateTime>* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::CalendarDatePicker_Date, pValue));
}
IFACEMETHODIMP DirectUI::CalendarDatePickerGenerated::get_DateFormat(_Out_ HSTRING* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::CalendarDatePicker_DateFormat, pValue));
}
IFACEMETHODIMP DirectUI::CalendarDatePickerGenerated::put_DateFormat(_In_opt_ HSTRING value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::CalendarDatePicker_DateFormat, value));
}
IFACEMETHODIMP DirectUI::CalendarDatePickerGenerated::get_DayOfWeekFormat(_Out_ HSTRING* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::CalendarDatePicker_DayOfWeekFormat, pValue));
}
IFACEMETHODIMP DirectUI::CalendarDatePickerGenerated::put_DayOfWeekFormat(_In_opt_ HSTRING value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::CalendarDatePicker_DayOfWeekFormat, value));
}
IFACEMETHODIMP DirectUI::CalendarDatePickerGenerated::get_Description(_Outptr_result_maybenull_ IInspectable** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::CalendarDatePicker_Description, ppValue));
}
IFACEMETHODIMP DirectUI::CalendarDatePickerGenerated::put_Description(_In_opt_ IInspectable* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::CalendarDatePicker_Description, pValue));
}
IFACEMETHODIMP DirectUI::CalendarDatePickerGenerated::get_DisplayMode(_Out_ ABI::Microsoft::UI::Xaml::Controls::CalendarViewDisplayMode* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::CalendarDatePicker_DisplayMode, pValue));
}
IFACEMETHODIMP DirectUI::CalendarDatePickerGenerated::put_DisplayMode(ABI::Microsoft::UI::Xaml::Controls::CalendarViewDisplayMode value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::CalendarDatePicker_DisplayMode, value));
}
IFACEMETHODIMP DirectUI::CalendarDatePickerGenerated::get_FirstDayOfWeek(_Out_ ABI::Windows::Globalization::DayOfWeek* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::CalendarDatePicker_FirstDayOfWeek, pValue));
}
IFACEMETHODIMP DirectUI::CalendarDatePickerGenerated::put_FirstDayOfWeek(ABI::Windows::Globalization::DayOfWeek value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::CalendarDatePicker_FirstDayOfWeek, value));
}
IFACEMETHODIMP DirectUI::CalendarDatePickerGenerated::get_Header(_Outptr_result_maybenull_ IInspectable** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::CalendarDatePicker_Header, ppValue));
}
IFACEMETHODIMP DirectUI::CalendarDatePickerGenerated::put_Header(_In_opt_ IInspectable* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::CalendarDatePicker_Header, pValue));
}
IFACEMETHODIMP DirectUI::CalendarDatePickerGenerated::get_HeaderPlacement(_Out_ ABI::Microsoft::UI::Xaml::Controls::ControlHeaderPlacement* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::CalendarDatePicker_HeaderPlacement, pValue));
}
IFACEMETHODIMP DirectUI::CalendarDatePickerGenerated::put_HeaderPlacement(ABI::Microsoft::UI::Xaml::Controls::ControlHeaderPlacement value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::CalendarDatePicker_HeaderPlacement, value));
}
IFACEMETHODIMP DirectUI::CalendarDatePickerGenerated::get_HeaderTemplate(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IDataTemplate** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::CalendarDatePicker_HeaderTemplate, ppValue));
}
IFACEMETHODIMP DirectUI::CalendarDatePickerGenerated::put_HeaderTemplate(_In_opt_ ABI::Microsoft::UI::Xaml::IDataTemplate* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::CalendarDatePicker_HeaderTemplate, pValue));
}
IFACEMETHODIMP DirectUI::CalendarDatePickerGenerated::get_IsCalendarOpen(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::CalendarDatePicker_IsCalendarOpen, pValue));
}
IFACEMETHODIMP DirectUI::CalendarDatePickerGenerated::put_IsCalendarOpen(BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::CalendarDatePicker_IsCalendarOpen, value));
}
IFACEMETHODIMP DirectUI::CalendarDatePickerGenerated::get_IsGroupLabelVisible(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::CalendarDatePicker_IsGroupLabelVisible, pValue));
}
IFACEMETHODIMP DirectUI::CalendarDatePickerGenerated::put_IsGroupLabelVisible(BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::CalendarDatePicker_IsGroupLabelVisible, value));
}
IFACEMETHODIMP DirectUI::CalendarDatePickerGenerated::get_IsOutOfScopeEnabled(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::CalendarDatePicker_IsOutOfScopeEnabled, pValue));
}
IFACEMETHODIMP DirectUI::CalendarDatePickerGenerated::put_IsOutOfScopeEnabled(BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::CalendarDatePicker_IsOutOfScopeEnabled, value));
}
IFACEMETHODIMP DirectUI::CalendarDatePickerGenerated::get_IsTodayHighlighted(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::CalendarDatePicker_IsTodayHighlighted, pValue));
}
IFACEMETHODIMP DirectUI::CalendarDatePickerGenerated::put_IsTodayHighlighted(BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::CalendarDatePicker_IsTodayHighlighted, value));
}
IFACEMETHODIMP DirectUI::CalendarDatePickerGenerated::get_LightDismissOverlayMode(_Out_ ABI::Microsoft::UI::Xaml::Controls::LightDismissOverlayMode* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::CalendarDatePicker_LightDismissOverlayMode, pValue));
}
IFACEMETHODIMP DirectUI::CalendarDatePickerGenerated::put_LightDismissOverlayMode(ABI::Microsoft::UI::Xaml::Controls::LightDismissOverlayMode value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::CalendarDatePicker_LightDismissOverlayMode, value));
}
IFACEMETHODIMP DirectUI::CalendarDatePickerGenerated::get_MaxDate(_Out_ ABI::Windows::Foundation::DateTime* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::CalendarDatePicker_MaxDate, pValue));
}
IFACEMETHODIMP DirectUI::CalendarDatePickerGenerated::put_MaxDate(ABI::Windows::Foundation::DateTime value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::CalendarDatePicker_MaxDate, value));
}
IFACEMETHODIMP DirectUI::CalendarDatePickerGenerated::get_MinDate(_Out_ ABI::Windows::Foundation::DateTime* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::CalendarDatePicker_MinDate, pValue));
}
IFACEMETHODIMP DirectUI::CalendarDatePickerGenerated::put_MinDate(ABI::Windows::Foundation::DateTime value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::CalendarDatePicker_MinDate, value));
}
IFACEMETHODIMP DirectUI::CalendarDatePickerGenerated::get_PlaceholderText(_Out_ HSTRING* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::CalendarDatePicker_PlaceholderText, pValue));
}
IFACEMETHODIMP DirectUI::CalendarDatePickerGenerated::put_PlaceholderText(_In_opt_ HSTRING value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::CalendarDatePicker_PlaceholderText, value));
}

// Events.
_Check_return_ HRESULT DirectUI::CalendarDatePickerGenerated::GetCalendarViewDayItemChangingEventSourceNoRef(_Outptr_ CalendarViewDayItemChangingEventSourceType** ppEventSource)
{
    HRESULT hr = S_OK;

    IFC(GetEventSourceNoRefWithArgumentValidation(KnownEventIndex::CalendarDatePicker_CalendarViewDayItemChanging, reinterpret_cast<IUntypedEventSource**>(ppEventSource)));

    if (*ppEventSource == nullptr)
    {
        IFC(ctl::ComObject<CalendarViewDayItemChangingEventSourceType>::CreateInstance(ppEventSource, TRUE /* fDisableLeakChecks */));
        (*ppEventSource)->Initialize(KnownEventIndex::CalendarDatePicker_CalendarViewDayItemChanging, this, /* bUseEventManager */ false);
        IFC(StoreEventSource(KnownEventIndex::CalendarDatePicker_CalendarViewDayItemChanging, *ppEventSource));

        // The caller doesn't expect a ref, this function ends in "NoRef".  The ref is now owned by the map (inside StoreEventSource)
        ReleaseInterfaceNoNULL(ctl::iunknown_cast(*ppEventSource));
    }

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::CalendarDatePickerGenerated::add_CalendarViewDayItemChanging(_In_ ABI::Microsoft::UI::Xaml::Controls::ICalendarViewDayItemChangingEventHandler* pValue, _Out_ EventRegistrationToken* ptToken)
{
    HRESULT hr = S_OK;
    CalendarViewDayItemChangingEventSourceType* pEventSource = nullptr;

    IFC(EventAddPreValidation(pValue, ptToken));
    IFC(DefaultStrictApiCheck(this));
    IFC(GetCalendarViewDayItemChangingEventSourceNoRef(&pEventSource));
    IFC(pEventSource->AddHandler(pValue));

    ptToken->value = (INT64)pValue;

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::CalendarDatePickerGenerated::remove_CalendarViewDayItemChanging(EventRegistrationToken tToken)
{
    HRESULT hr = S_OK;
    CalendarViewDayItemChangingEventSourceType* pEventSource = nullptr;
    ABI::Microsoft::UI::Xaml::Controls::ICalendarViewDayItemChangingEventHandler* pValue = (ABI::Microsoft::UI::Xaml::Controls::ICalendarViewDayItemChangingEventHandler*)tToken.value;

    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(GetCalendarViewDayItemChangingEventSourceNoRef(&pEventSource));
    IFC(pEventSource->RemoveHandler(pValue));

    if (!pEventSource->HasHandlers())
    {
        IFC(RemoveEventSource(KnownEventIndex::CalendarDatePicker_CalendarViewDayItemChanging));
    }

Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT DirectUI::CalendarDatePickerGenerated::GetClosedEventSourceNoRef(_Outptr_ ClosedEventSourceType** ppEventSource)
{
    HRESULT hr = S_OK;

    IFC(GetEventSourceNoRefWithArgumentValidation(KnownEventIndex::CalendarDatePicker_Closed, reinterpret_cast<IUntypedEventSource**>(ppEventSource)));

    if (*ppEventSource == nullptr)
    {
        IFC(ctl::ComObject<ClosedEventSourceType>::CreateInstance(ppEventSource, TRUE /* fDisableLeakChecks */));
        (*ppEventSource)->Initialize(KnownEventIndex::CalendarDatePicker_Closed, this, /* bUseEventManager */ false);
        IFC(StoreEventSource(KnownEventIndex::CalendarDatePicker_Closed, *ppEventSource));

        // The caller doesn't expect a ref, this function ends in "NoRef".  The ref is now owned by the map (inside StoreEventSource)
        ReleaseInterfaceNoNULL(ctl::iunknown_cast(*ppEventSource));
    }

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::CalendarDatePickerGenerated::add_Closed(_In_ ABI::Windows::Foundation::IEventHandler<IInspectable*>* pValue, _Out_ EventRegistrationToken* ptToken)
{
    HRESULT hr = S_OK;
    ClosedEventSourceType* pEventSource = nullptr;

    IFC(EventAddPreValidation(pValue, ptToken));
    IFC(DefaultStrictApiCheck(this));
    IFC(GetClosedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->AddHandler(pValue));

    ptToken->value = (INT64)pValue;

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::CalendarDatePickerGenerated::remove_Closed(EventRegistrationToken tToken)
{
    HRESULT hr = S_OK;
    ClosedEventSourceType* pEventSource = nullptr;
    ABI::Windows::Foundation::IEventHandler<IInspectable*>* pValue = (ABI::Windows::Foundation::IEventHandler<IInspectable*>*)tToken.value;

    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(GetClosedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->RemoveHandler(pValue));

    if (!pEventSource->HasHandlers())
    {
        IFC(RemoveEventSource(KnownEventIndex::CalendarDatePicker_Closed));
    }

Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT DirectUI::CalendarDatePickerGenerated::GetDateChangedEventSourceNoRef(_Outptr_ DateChangedEventSourceType** ppEventSource)
{
    HRESULT hr = S_OK;

    IFC(GetEventSourceNoRefWithArgumentValidation(KnownEventIndex::CalendarDatePicker_DateChanged, reinterpret_cast<IUntypedEventSource**>(ppEventSource)));

    if (*ppEventSource == nullptr)
    {
        IFC(ctl::ComObject<DateChangedEventSourceType>::CreateInstance(ppEventSource, TRUE /* fDisableLeakChecks */));
        (*ppEventSource)->Initialize(KnownEventIndex::CalendarDatePicker_DateChanged, this, /* bUseEventManager */ false);
        IFC(StoreEventSource(KnownEventIndex::CalendarDatePicker_DateChanged, *ppEventSource));

        // The caller doesn't expect a ref, this function ends in "NoRef".  The ref is now owned by the map (inside StoreEventSource)
        ReleaseInterfaceNoNULL(ctl::iunknown_cast(*ppEventSource));
    }

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::CalendarDatePickerGenerated::add_DateChanged(_In_ ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::CalendarDatePicker*, ABI::Microsoft::UI::Xaml::Controls::CalendarDatePickerDateChangedEventArgs*>* pValue, _Out_ EventRegistrationToken* ptToken)
{
    HRESULT hr = S_OK;
    DateChangedEventSourceType* pEventSource = nullptr;

    IFC(EventAddPreValidation(pValue, ptToken));
    IFC(DefaultStrictApiCheck(this));
    IFC(GetDateChangedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->AddHandler(pValue));

    ptToken->value = (INT64)pValue;

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::CalendarDatePickerGenerated::remove_DateChanged(EventRegistrationToken tToken)
{
    HRESULT hr = S_OK;
    DateChangedEventSourceType* pEventSource = nullptr;
    ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::CalendarDatePicker*, ABI::Microsoft::UI::Xaml::Controls::CalendarDatePickerDateChangedEventArgs*>* pValue = (ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::CalendarDatePicker*, ABI::Microsoft::UI::Xaml::Controls::CalendarDatePickerDateChangedEventArgs*>*)tToken.value;

    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(GetDateChangedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->RemoveHandler(pValue));

    if (!pEventSource->HasHandlers())
    {
        IFC(RemoveEventSource(KnownEventIndex::CalendarDatePicker_DateChanged));
    }

Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT DirectUI::CalendarDatePickerGenerated::GetOpenedEventSourceNoRef(_Outptr_ OpenedEventSourceType** ppEventSource)
{
    HRESULT hr = S_OK;

    IFC(GetEventSourceNoRefWithArgumentValidation(KnownEventIndex::CalendarDatePicker_Opened, reinterpret_cast<IUntypedEventSource**>(ppEventSource)));

    if (*ppEventSource == nullptr)
    {
        IFC(ctl::ComObject<OpenedEventSourceType>::CreateInstance(ppEventSource, TRUE /* fDisableLeakChecks */));
        (*ppEventSource)->Initialize(KnownEventIndex::CalendarDatePicker_Opened, this, /* bUseEventManager */ false);
        IFC(StoreEventSource(KnownEventIndex::CalendarDatePicker_Opened, *ppEventSource));

        // The caller doesn't expect a ref, this function ends in "NoRef".  The ref is now owned by the map (inside StoreEventSource)
        ReleaseInterfaceNoNULL(ctl::iunknown_cast(*ppEventSource));
    }

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::CalendarDatePickerGenerated::add_Opened(_In_ ABI::Windows::Foundation::IEventHandler<IInspectable*>* pValue, _Out_ EventRegistrationToken* ptToken)
{
    HRESULT hr = S_OK;
    OpenedEventSourceType* pEventSource = nullptr;

    IFC(EventAddPreValidation(pValue, ptToken));
    IFC(DefaultStrictApiCheck(this));
    IFC(GetOpenedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->AddHandler(pValue));

    ptToken->value = (INT64)pValue;

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::CalendarDatePickerGenerated::remove_Opened(EventRegistrationToken tToken)
{
    HRESULT hr = S_OK;
    OpenedEventSourceType* pEventSource = nullptr;
    ABI::Windows::Foundation::IEventHandler<IInspectable*>* pValue = (ABI::Windows::Foundation::IEventHandler<IInspectable*>*)tToken.value;

    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(GetOpenedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->RemoveHandler(pValue));

    if (!pEventSource->HasHandlers())
    {
        IFC(RemoveEventSource(KnownEventIndex::CalendarDatePicker_Opened));
    }

Cleanup:
    RRETURN(hr);
}

// Methods.
IFACEMETHODIMP DirectUI::CalendarDatePickerGenerated::SetDisplayDate(ABI::Windows::Foundation::DateTime date)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "CalendarDatePicker_SetDisplayDate", 0);
    }
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<CalendarDatePicker*>(this)->SetDisplayDateImpl(date));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "CalendarDatePicker_SetDisplayDate", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::CalendarDatePickerGenerated::SetYearDecadeDisplayDimensions(INT columns, INT rows)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "CalendarDatePicker_SetYearDecadeDisplayDimensions", 0);
    }
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<CalendarDatePicker*>(this)->SetYearDecadeDisplayDimensionsImpl(columns, rows));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "CalendarDatePicker_SetYearDecadeDisplayDimensions", hr);
    }
    RRETURN(hr);
}

_Check_return_ HRESULT DirectUI::CalendarDatePickerGenerated::EventAddHandlerByIndex(_In_ KnownEventIndex nEventIndex, _In_ IInspectable* pHandler, _In_ BOOLEAN handledEventsToo)
{
    switch (nEventIndex)
    {
    case KnownEventIndex::CalendarDatePicker_CalendarViewDayItemChanging:
        {
            ctl::ComPtr<ABI::Microsoft::UI::Xaml::Controls::ICalendarViewDayItemChangingEventHandler> spEventHandler;
            IFC_RETURN(IValueBoxer::UnboxValue(pHandler, spEventHandler.ReleaseAndGetAddressOf()));

            if (nullptr != spEventHandler)
            {
                CalendarViewDayItemChangingEventSourceType* pEventSource = nullptr;
                IFC_RETURN(GetCalendarViewDayItemChangingEventSourceNoRef(&pEventSource));
                IFC_RETURN(pEventSource->AddHandler(spEventHandler.Get()));
            }
            else
            {
                IFC_RETURN(E_INVALIDARG);
            }
        }
        break;
    case KnownEventIndex::CalendarDatePicker_Closed:
        {
            ctl::ComPtr<ABI::Windows::Foundation::IEventHandler<IInspectable*>> spEventHandler;
            IFC_RETURN(IValueBoxer::UnboxValue(pHandler, spEventHandler.ReleaseAndGetAddressOf()));

            if (nullptr != spEventHandler)
            {
                ClosedEventSourceType* pEventSource = nullptr;
                IFC_RETURN(GetClosedEventSourceNoRef(&pEventSource));
                IFC_RETURN(pEventSource->AddHandler(spEventHandler.Get()));
            }
            else
            {
                IFC_RETURN(E_INVALIDARG);
            }
        }
        break;
    case KnownEventIndex::CalendarDatePicker_DateChanged:
        {
            ctl::ComPtr<ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::CalendarDatePicker*, ABI::Microsoft::UI::Xaml::Controls::CalendarDatePickerDateChangedEventArgs*>> spEventHandler;
            IFC_RETURN(IValueBoxer::UnboxValue(pHandler, spEventHandler.ReleaseAndGetAddressOf()));

            if (nullptr != spEventHandler)
            {
                DateChangedEventSourceType* pEventSource = nullptr;
                IFC_RETURN(GetDateChangedEventSourceNoRef(&pEventSource));
                IFC_RETURN(pEventSource->AddHandler(spEventHandler.Get()));
            }
            else
            {
                IFC_RETURN(E_INVALIDARG);
            }
        }
        break;
    case KnownEventIndex::CalendarDatePicker_Opened:
        {
            ctl::ComPtr<ABI::Windows::Foundation::IEventHandler<IInspectable*>> spEventHandler;
            IFC_RETURN(IValueBoxer::UnboxValue(pHandler, spEventHandler.ReleaseAndGetAddressOf()));

            if (nullptr != spEventHandler)
            {
                OpenedEventSourceType* pEventSource = nullptr;
                IFC_RETURN(GetOpenedEventSourceNoRef(&pEventSource));
                IFC_RETURN(pEventSource->AddHandler(spEventHandler.Get()));
            }
            else
            {
                IFC_RETURN(E_INVALIDARG);
            }
        }
        break;
    default:
        IFC_RETURN(DirectUI::ControlGenerated::EventAddHandlerByIndex(nEventIndex, pHandler, handledEventsToo));
        break;
    }

    return S_OK;
}

_Check_return_ HRESULT DirectUI::CalendarDatePickerGenerated::EventRemoveHandlerByIndex(_In_ KnownEventIndex nEventIndex, _In_ IInspectable* pHandler)
{
    switch (nEventIndex)
    {
    case KnownEventIndex::CalendarDatePicker_CalendarViewDayItemChanging:
        {
            ctl::ComPtr<ABI::Microsoft::UI::Xaml::Controls::ICalendarViewDayItemChangingEventHandler> spEventHandler;
            IFC_RETURN(IValueBoxer::UnboxValue(pHandler, spEventHandler.ReleaseAndGetAddressOf()));

            if (nullptr != spEventHandler)
            {
                CalendarViewDayItemChangingEventSourceType* pEventSource = nullptr;
                IFC_RETURN(GetCalendarViewDayItemChangingEventSourceNoRef(&pEventSource));
                IFC_RETURN(pEventSource->RemoveHandler(spEventHandler.Get()));
            }
            else
            {
                IFC_RETURN(E_INVALIDARG);
            }
        }
        break;
    case KnownEventIndex::CalendarDatePicker_Closed:
        {
            ctl::ComPtr<ABI::Windows::Foundation::IEventHandler<IInspectable*>> spEventHandler;
            IFC_RETURN(IValueBoxer::UnboxValue(pHandler, spEventHandler.ReleaseAndGetAddressOf()));

            if (nullptr != spEventHandler)
            {
                ClosedEventSourceType* pEventSource = nullptr;
                IFC_RETURN(GetClosedEventSourceNoRef(&pEventSource));
                IFC_RETURN(pEventSource->RemoveHandler(spEventHandler.Get()));
            }
            else
            {
                IFC_RETURN(E_INVALIDARG);
            }
        }
        break;
    case KnownEventIndex::CalendarDatePicker_DateChanged:
        {
            ctl::ComPtr<ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Controls::CalendarDatePicker*, ABI::Microsoft::UI::Xaml::Controls::CalendarDatePickerDateChangedEventArgs*>> spEventHandler;
            IFC_RETURN(IValueBoxer::UnboxValue(pHandler, spEventHandler.ReleaseAndGetAddressOf()));

            if (nullptr != spEventHandler)
            {
                DateChangedEventSourceType* pEventSource = nullptr;
                IFC_RETURN(GetDateChangedEventSourceNoRef(&pEventSource));
                IFC_RETURN(pEventSource->RemoveHandler(spEventHandler.Get()));
            }
            else
            {
                IFC_RETURN(E_INVALIDARG);
            }
        }
        break;
    case KnownEventIndex::CalendarDatePicker_Opened:
        {
            ctl::ComPtr<ABI::Windows::Foundation::IEventHandler<IInspectable*>> spEventHandler;
            IFC_RETURN(IValueBoxer::UnboxValue(pHandler, spEventHandler.ReleaseAndGetAddressOf()));

            if (nullptr != spEventHandler)
            {
                OpenedEventSourceType* pEventSource = nullptr;
                IFC_RETURN(GetOpenedEventSourceNoRef(&pEventSource));
                IFC_RETURN(pEventSource->RemoveHandler(spEventHandler.Get()));
            }
            else
            {
                IFC_RETURN(E_INVALIDARG);
            }
        }
        break;
    default:
        IFC_RETURN(DirectUI::ControlGenerated::EventRemoveHandlerByIndex(nEventIndex, pHandler));
        break;
    }

    return S_OK;
}

HRESULT DirectUI::CalendarDatePickerFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::ICalendarDatePickerFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::ICalendarDatePickerFactory*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::ICalendarDatePickerStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::ICalendarDatePickerStatics*>(this);
    }
#if WI_IS_FEATURE_PRESENT(Feature_HeaderPlacement)
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::ICalendarDatePickerStaticsFeature_HeaderPlacement)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::ICalendarDatePickerStaticsFeature_HeaderPlacement*>(this);
    }
#endif
    else
    {
        RRETURN(ctl::BetterAggregableCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.
IFACEMETHODIMP DirectUI::CalendarDatePickerFactory::CreateInstance(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Controls::ICalendarDatePicker** ppInstance)
{

#if DBG
    // We play some games with reinterpret_cast and assuming that the GUID type table is accurate - which is somewhat sketchy, but
    // really good for binary size.  This code is a sanity check that the games we play are ok.
    const GUID uuidofGUID = __uuidof(ABI::Microsoft::UI::Xaml::Controls::ICalendarDatePicker);
    const GUID metadataAPIGUID = MetadataAPI::GetClassInfoByIndex(GetTypeIndex())->GetGuid();
    const KnownTypeIndex typeIndex = GetTypeIndex();

    if(uuidofGUID != metadataAPIGUID)
    {
        XAML_FAIL_FAST();
    }
#endif

    // Can't just IFC(_RETURN) this because for some validate calls (those with multiple template parameters), the
    // preprocessor gets confused at the "," in the template type-list before the function's opening parenthesis.
    // So we'll use IFC_RETURN syntax with a local hr variable, kind of weirdly.
    const HRESULT hr = ctl::ValidateFactoryCreateInstanceWithBetterAggregableCoreObjectActivationFactory(pOuter, ppInner, reinterpret_cast<IUnknown**>(ppInstance), GetTypeIndex(), false /*isFreeThreaded*/);
    IFC_RETURN(hr);
    return S_OK;
}

// Dependency properties.
IFACEMETHODIMP DirectUI::CalendarDatePickerFactory::get_DateProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::CalendarDatePicker_Date, ppValue));
}
IFACEMETHODIMP DirectUI::CalendarDatePickerFactory::get_IsCalendarOpenProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::CalendarDatePicker_IsCalendarOpen, ppValue));
}
IFACEMETHODIMP DirectUI::CalendarDatePickerFactory::get_DateFormatProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::CalendarDatePicker_DateFormat, ppValue));
}
IFACEMETHODIMP DirectUI::CalendarDatePickerFactory::get_PlaceholderTextProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::CalendarDatePicker_PlaceholderText, ppValue));
}
IFACEMETHODIMP DirectUI::CalendarDatePickerFactory::get_HeaderPlacementProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::CalendarDatePicker_HeaderPlacement, ppValue));
}
IFACEMETHODIMP DirectUI::CalendarDatePickerFactory::get_HeaderProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::CalendarDatePicker_Header, ppValue));
}
IFACEMETHODIMP DirectUI::CalendarDatePickerFactory::get_HeaderTemplateProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::CalendarDatePicker_HeaderTemplate, ppValue));
}
IFACEMETHODIMP DirectUI::CalendarDatePickerFactory::get_CalendarViewStyleProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::CalendarDatePicker_CalendarViewStyle, ppValue));
}
IFACEMETHODIMP DirectUI::CalendarDatePickerFactory::get_LightDismissOverlayModeProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::CalendarDatePicker_LightDismissOverlayMode, ppValue));
}
IFACEMETHODIMP DirectUI::CalendarDatePickerFactory::get_DescriptionProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::CalendarDatePicker_Description, ppValue));
}
IFACEMETHODIMP DirectUI::CalendarDatePickerFactory::get_MinDateProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::CalendarDatePicker_MinDate, ppValue));
}
IFACEMETHODIMP DirectUI::CalendarDatePickerFactory::get_MaxDateProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::CalendarDatePicker_MaxDate, ppValue));
}
IFACEMETHODIMP DirectUI::CalendarDatePickerFactory::get_IsTodayHighlightedProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::CalendarDatePicker_IsTodayHighlighted, ppValue));
}
IFACEMETHODIMP DirectUI::CalendarDatePickerFactory::get_DisplayModeProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::CalendarDatePicker_DisplayMode, ppValue));
}
IFACEMETHODIMP DirectUI::CalendarDatePickerFactory::get_FirstDayOfWeekProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::CalendarDatePicker_FirstDayOfWeek, ppValue));
}
IFACEMETHODIMP DirectUI::CalendarDatePickerFactory::get_DayOfWeekFormatProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::CalendarDatePicker_DayOfWeekFormat, ppValue));
}
IFACEMETHODIMP DirectUI::CalendarDatePickerFactory::get_CalendarIdentifierProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::CalendarDatePicker_CalendarIdentifier, ppValue));
}
IFACEMETHODIMP DirectUI::CalendarDatePickerFactory::get_IsOutOfScopeEnabledProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::CalendarDatePicker_IsOutOfScopeEnabled, ppValue));
}
IFACEMETHODIMP DirectUI::CalendarDatePickerFactory::get_IsGroupLabelVisibleProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::CalendarDatePicker_IsGroupLabelVisible, ppValue));
}

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_CalendarDatePicker()
    {
        RRETURN(ctl::ActivationFactoryCreator<CalendarDatePickerFactory>::CreateActivationFactory());
    }
}
