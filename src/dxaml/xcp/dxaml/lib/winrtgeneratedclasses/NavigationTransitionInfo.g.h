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


#define __NavigationTransitionInfo_GUID "92d011e2-fca0-495c-a72e-990f65e32bb9"

namespace DirectUI
{
    class NavigationTransitionInfo;
    class UIElement;

    class __declspec(novtable) NavigationTransitionInfoGenerated:
        public DirectUI::DependencyObject
        , public ABI::Microsoft::UI::Xaml::Media::Animation::INavigationTransitionInfo
        , public ABI::Microsoft::UI::Xaml::Media::Animation::INavigationTransitionInfoOverrides
        , public ABI::Microsoft::UI::Xaml::Media::Animation::INavigationTransitionInfoOverridesPrivate
        , public ABI::Microsoft::UI::Xaml::Media::Animation::INavigationTransitionInfoPrivate
    {
        friend class DirectUI::NavigationTransitionInfo;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Media.Animation.NavigationTransitionInfo");

        BEGIN_INTERFACE_MAP(NavigationTransitionInfoGenerated, DirectUI::DependencyObject)
            INTERFACE_ENTRY(NavigationTransitionInfoGenerated, ABI::Microsoft::UI::Xaml::Media::Animation::INavigationTransitionInfo)
            INTERFACE_ENTRY(NavigationTransitionInfoGenerated, ABI::Microsoft::UI::Xaml::Media::Animation::INavigationTransitionInfoOverrides)
            INTERFACE_ENTRY(NavigationTransitionInfoGenerated, ABI::Microsoft::UI::Xaml::Media::Animation::INavigationTransitionInfoOverridesPrivate)
            INTERFACE_ENTRY(NavigationTransitionInfoGenerated, ABI::Microsoft::UI::Xaml::Media::Animation::INavigationTransitionInfoPrivate)
        END_INTERFACE_MAP(NavigationTransitionInfoGenerated, DirectUI::DependencyObject)

    public:
        NavigationTransitionInfoGenerated();
        ~NavigationTransitionInfoGenerated() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::NavigationTransitionInfo;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::NavigationTransitionInfo;
        }

        // Properties.

        // Events.

        // Methods.
        IFACEMETHOD(CreateStoryboards)(_In_ ABI::Microsoft::UI::Xaml::IUIElement* pElement, _In_ ABI::Microsoft::UI::Xaml::Media::Animation::NavigationTrigger trigger, _In_ ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Xaml::Media::Animation::Storyboard*>* pStoryboards) override;
        IFACEMETHOD(CreateStoryboardsCore)(_In_ ABI::Microsoft::UI::Xaml::IUIElement* pElement, _In_ ABI::Microsoft::UI::Xaml::Media::Animation::NavigationTrigger trigger, _In_ ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Xaml::Media::Animation::Storyboard*>* pStoryboards) override;
        IFACEMETHOD(GetNavigationStateCore)(_Out_ HSTRING* pReturnValue) override;
        _Check_return_ HRESULT GetNavigationStateCoreProtected(_Out_ HSTRING* pReturnValue);
        IFACEMETHOD(SetNavigationStateCore)(_In_ HSTRING navigationState) override;
        _Check_return_ HRESULT SetNavigationStateCoreProtected(_In_ HSTRING navigationState);


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "NavigationTransitionInfo_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) NavigationTransitionInfoFactory:
       public ctl::BetterAggregableAbstractCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Media::Animation::INavigationTransitionInfoFactory
    {
        BEGIN_INTERFACE_MAP(NavigationTransitionInfoFactory, ctl::BetterAggregableAbstractCoreObjectActivationFactory)
            INTERFACE_ENTRY(NavigationTransitionInfoFactory, ABI::Microsoft::UI::Xaml::Media::Animation::INavigationTransitionInfoFactory)
        END_INTERFACE_MAP(NavigationTransitionInfoFactory, ctl::BetterAggregableAbstractCoreObjectActivationFactory)

    public:
        // Factory methods.
        IFACEMETHOD(CreateInstance)(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Media::Animation::INavigationTransitionInfo** ppInstance);

        // Static properties.

        // Dependency properties.

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::NavigationTransitionInfo;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}
