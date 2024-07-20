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

#include "DynamicTimeline.g.h"

#define __FadeOutThemeAnimation_GUID "203aca5d-feb5-4eeb-aea5-3102bd84797a"

namespace DirectUI
{
    class FadeOutThemeAnimation;

    class __declspec(novtable) FadeOutThemeAnimationGenerated:
        public DirectUI::DynamicTimeline
        , public ABI::Microsoft::UI::Xaml::Media::Animation::IFadeOutThemeAnimation
    {
        friend class DirectUI::FadeOutThemeAnimation;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Media.Animation.FadeOutThemeAnimation");

        BEGIN_INTERFACE_MAP(FadeOutThemeAnimationGenerated, DirectUI::DynamicTimeline)
            INTERFACE_ENTRY(FadeOutThemeAnimationGenerated, ABI::Microsoft::UI::Xaml::Media::Animation::IFadeOutThemeAnimation)
        END_INTERFACE_MAP(FadeOutThemeAnimationGenerated, DirectUI::DynamicTimeline)

    public:
        FadeOutThemeAnimationGenerated();
        ~FadeOutThemeAnimationGenerated() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::FadeOutThemeAnimation;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::FadeOutThemeAnimation;
        }

        // Properties.
        IFACEMETHOD(get_TargetName)(_Out_ HSTRING* pValue) override;
        IFACEMETHOD(put_TargetName)(_In_opt_ HSTRING value) override;

        // Events.

        // Methods.


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "FadeOutThemeAnimation_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) FadeOutThemeAnimationFactory:
       public ctl::BetterCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Media::Animation::IFadeOutThemeAnimationStatics
    {
        BEGIN_INTERFACE_MAP(FadeOutThemeAnimationFactory, ctl::BetterCoreObjectActivationFactory)
            INTERFACE_ENTRY(FadeOutThemeAnimationFactory, ABI::Microsoft::UI::Xaml::Media::Animation::IFadeOutThemeAnimationStatics)
        END_INTERFACE_MAP(FadeOutThemeAnimationFactory, ctl::BetterCoreObjectActivationFactory)

    public:
        // Factory methods.

        // Static properties.

        // Dependency properties.
        IFACEMETHOD(get_TargetNameProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::FadeOutThemeAnimation;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}
