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

#include "MediaPlayerPresenter.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::MediaPlayerPresenterGenerated::MediaPlayerPresenterGenerated()
{
}

DirectUI::MediaPlayerPresenterGenerated::~MediaPlayerPresenterGenerated()
{
}

HRESULT DirectUI::MediaPlayerPresenterGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::MediaPlayerPresenter)))
    {
        *ppObject = static_cast<DirectUI::MediaPlayerPresenter*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IMediaPlayerPresenter)))
    {
        *ppObject = ctl::interface_cast<ABI::Microsoft::UI::Xaml::Controls::IMediaPlayerPresenter>(this);
    }
    else
    {
        RRETURN(DirectUI::FrameworkElement::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaPlayerPresenterGenerated::get_IsFullWindow(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::MediaPlayerPresenter_IsFullWindow, pValue));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaPlayerPresenterGenerated::put_IsFullWindow(_In_ BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::MediaPlayerPresenter_IsFullWindow, value));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaPlayerPresenterGenerated::get_MediaPlayer(_Outptr_result_maybenull_ ABI::Windows::Media::Playback::IMediaPlayer** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::MediaPlayerPresenter_MediaPlayer, ppValue));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaPlayerPresenterGenerated::put_MediaPlayer(_In_opt_ ABI::Windows::Media::Playback::IMediaPlayer* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::MediaPlayerPresenter_MediaPlayer, pValue));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaPlayerPresenterGenerated::get_Stretch(_Out_ ABI::Microsoft::UI::Xaml::Media::Stretch* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::MediaPlayerPresenter_Stretch, pValue));
}
_Check_return_ HRESULT STDMETHODCALLTYPE DirectUI::MediaPlayerPresenterGenerated::put_Stretch(_In_ ABI::Microsoft::UI::Xaml::Media::Stretch value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::MediaPlayerPresenter_Stretch, value));
}

// Events.

// Methods.

HRESULT DirectUI::MediaPlayerPresenterFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IMediaPlayerPresenterFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IMediaPlayerPresenterFactory*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IMediaPlayerPresenterStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IMediaPlayerPresenterStatics*>(this);
    }
    else
    {
        RRETURN(ctl::BetterAggregableCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.
IFACEMETHODIMP DirectUI::MediaPlayerPresenterFactory::CreateInstance(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Controls::IMediaPlayerPresenter** ppInstance)
{

#if DBG
    // We play some games with reinterpret_cast and assuming that the GUID type table is accurate - which is somewhat sketchy, but
    // really good for binary size.  This code is a sanity check that the games we play are ok.
    const GUID uuidofGUID = __uuidof(ABI::Microsoft::UI::Xaml::Controls::IMediaPlayerPresenter);
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
IFACEMETHODIMP DirectUI::MediaPlayerPresenterFactory::get_MediaPlayerProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::MediaPlayerPresenter_MediaPlayer, ppValue));
}
IFACEMETHODIMP DirectUI::MediaPlayerPresenterFactory::get_StretchProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::MediaPlayerPresenter_Stretch, ppValue));
}
IFACEMETHODIMP DirectUI::MediaPlayerPresenterFactory::get_IsFullWindowProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::MediaPlayerPresenter_IsFullWindow, ppValue));
}

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_MediaPlayerPresenter()
    {
        RRETURN(ctl::ActivationFactoryCreator<MediaPlayerPresenterFactory>::CreateActivationFactory());
    }
}
