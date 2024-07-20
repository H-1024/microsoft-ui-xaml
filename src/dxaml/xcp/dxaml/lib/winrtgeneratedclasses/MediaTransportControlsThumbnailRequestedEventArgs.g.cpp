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
#include "MediaTransportControlsThumbnailRequestedEventArgs.g.h"
#include "CoreEventArgsGroup.h"

using namespace DirectUI;

// Constructors/destructors.
DirectUI::MediaTransportControlsThumbnailRequestedEventArgsGenerated::MediaTransportControlsThumbnailRequestedEventArgsGenerated()
{
}

DirectUI::MediaTransportControlsThumbnailRequestedEventArgsGenerated::~MediaTransportControlsThumbnailRequestedEventArgsGenerated()
{
}

HRESULT DirectUI::MediaTransportControlsThumbnailRequestedEventArgsGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::MediaTransportControlsThumbnailRequestedEventArgs)))
    {
        *ppObject = static_cast<DirectUI::MediaTransportControlsThumbnailRequestedEventArgs*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::IMediaTransportControlsThumbnailRequestedEventArgs)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::IMediaTransportControlsThumbnailRequestedEventArgs*>(this);
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
IFACEMETHODIMP DirectUI::MediaTransportControlsThumbnailRequestedEventArgsGenerated::SetThumbnailImage(_In_ ABI::Windows::Storage::Streams::IInputStream* pSource)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "MediaTransportControlsThumbnailRequestedEventArgs_SetThumbnailImage", 0);
    }
    ARG_NOTNULL(pSource, "source");
    IFC(CheckThread());
    IFC(static_cast<MediaTransportControlsThumbnailRequestedEventArgs*>(this)->SetThumbnailImageImpl(pSource));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "MediaTransportControlsThumbnailRequestedEventArgs_SetThumbnailImage", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::MediaTransportControlsThumbnailRequestedEventArgsGenerated::GetDeferral(_Outptr_ ABI::Windows::Foundation::IDeferral** ppResult)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "MediaTransportControlsThumbnailRequestedEventArgs_GetDeferral", 0);
    }
    ARG_VALIDRETURNPOINTER(ppResult);
    IFC(CheckThread());
    IFC(static_cast<MediaTransportControlsThumbnailRequestedEventArgs*>(this)->GetDeferralImpl(ppResult));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "MediaTransportControlsThumbnailRequestedEventArgs_GetDeferral", hr);
    }
    RRETURN(hr);
}


namespace DirectUI
{
    _Check_return_ HRESULT OnFrameworkCreateMediaTransportControlsThumbnailRequestedEventArgs(_In_ CEventArgs* pCoreObject, _Out_ IInspectable** ppNewInstance)
    {
        HRESULT hr = S_OK;
        ctl::ComPtr<DirectUI::MediaTransportControlsThumbnailRequestedEventArgs> spInstance;
        *ppNewInstance = nullptr;
        IFC(ctl::make(pCoreObject, &spInstance));
        *ppNewInstance = ctl::iinspectable_cast(spInstance.Detach());
    Cleanup:
        RRETURN(hr);
    }
    _Check_return_ IActivationFactory* CreateActivationFactory_MediaTransportControlsThumbnailRequestedEventArgs()
    {
        RRETURN(ctl::ActivationFactoryCreator<ctl::AbstractActivationFactory>::CreateActivationFactory());
    }
}
