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

#define __FadeInThemeAnimation_GUID "e3f586d1-7e6d-4fa5-92f6-df7377e50f8d"

namespace DirectUI
{
    class FadeInThemeAnimation;

    class __declspec(novtable) FadeInThemeAnimationGenerated:
        public DirectUI::DynamicTimeline
        , public ABI::Microsoft::UI::Xaml::Media::Animation::IFadeInThemeAnimation
    {
        friend class DirectUI::FadeInThemeAnimation;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Media.Animation.FadeInThemeAnimation");

        BEGIN_INTERFACE_MAP(FadeInThemeAnimationGenerated, DirectUI::DynamicTimeline)
            INTERFACE_ENTRY(FadeInThemeAnimationGenerated, ABI::Microsoft::UI::Xaml::Media::Animation::IFadeInThemeAnimation)
        END_INTERFACE_MAP(FadeInThemeAnimationGenerated, DirectUI::DynamicTimeline)

    public:
        FadeInThemeAnimationGenerated();
        ~FadeInThemeAnimationGenerated() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::FadeInThemeAnimation;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::FadeInThemeAnimation;
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

#include "FadeInThemeAnimation_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) FadeInThemeAnimationFactory:
       public ctl::BetterCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Media::Animation::IFadeInThemeAnimationStatics
    {
        BEGIN_INTERFACE_MAP(FadeInThemeAnimationFactory, ctl::BetterCoreObjectActivationFactory)
            INTERFACE_ENTRY(FadeInThemeAnimationFactory, ABI::Microsoft::UI::Xaml::Media::Animation::IFadeInThemeAnimationStatics)
        END_INTERFACE_MAP(FadeInThemeAnimationFactory, ctl::BetterCoreObjectActivationFactory)

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
            return KnownTypeIndex::FadeInThemeAnimation;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}
