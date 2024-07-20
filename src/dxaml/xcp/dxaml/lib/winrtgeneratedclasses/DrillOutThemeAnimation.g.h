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

#define __DrillOutThemeAnimation_GUID "e6401717-c507-435b-9281-237fe1f195b2"

namespace DirectUI
{
    class DrillOutThemeAnimation;

    class __declspec(novtable) DrillOutThemeAnimationGenerated:
        public DirectUI::DynamicTimeline
        , public ABI::Microsoft::UI::Xaml::Media::Animation::IDrillOutThemeAnimation
    {
        friend class DirectUI::DrillOutThemeAnimation;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Media.Animation.DrillOutThemeAnimation");

        BEGIN_INTERFACE_MAP(DrillOutThemeAnimationGenerated, DirectUI::DynamicTimeline)
            INTERFACE_ENTRY(DrillOutThemeAnimationGenerated, ABI::Microsoft::UI::Xaml::Media::Animation::IDrillOutThemeAnimation)
        END_INTERFACE_MAP(DrillOutThemeAnimationGenerated, DirectUI::DynamicTimeline)

    public:
        DrillOutThemeAnimationGenerated();
        ~DrillOutThemeAnimationGenerated() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::DrillOutThemeAnimation;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::DrillOutThemeAnimation;
        }

        // Properties.
        IFACEMETHOD(get_EntranceTarget)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IDependencyObject** ppValue) override;
        IFACEMETHOD(put_EntranceTarget)(_In_opt_ ABI::Microsoft::UI::Xaml::IDependencyObject* pValue) override;
        IFACEMETHOD(get_EntranceTargetName)(_Out_ HSTRING* pValue) override;
        IFACEMETHOD(put_EntranceTargetName)(_In_opt_ HSTRING value) override;
        IFACEMETHOD(get_ExitTarget)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IDependencyObject** ppValue) override;
        IFACEMETHOD(put_ExitTarget)(_In_opt_ ABI::Microsoft::UI::Xaml::IDependencyObject* pValue) override;
        IFACEMETHOD(get_ExitTargetName)(_Out_ HSTRING* pValue) override;
        IFACEMETHOD(put_ExitTargetName)(_In_opt_ HSTRING value) override;

        // Events.

        // Methods.


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "DrillOutThemeAnimation_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) DrillOutThemeAnimationFactory:
       public ctl::BetterCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Media::Animation::IDrillOutThemeAnimationStatics
    {
        BEGIN_INTERFACE_MAP(DrillOutThemeAnimationFactory, ctl::BetterCoreObjectActivationFactory)
            INTERFACE_ENTRY(DrillOutThemeAnimationFactory, ABI::Microsoft::UI::Xaml::Media::Animation::IDrillOutThemeAnimationStatics)
        END_INTERFACE_MAP(DrillOutThemeAnimationFactory, ctl::BetterCoreObjectActivationFactory)

    public:
        // Factory methods.

        // Static properties.

        // Dependency properties.
        IFACEMETHOD(get_EntranceTargetNameProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_EntranceTargetProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_ExitTargetNameProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_ExitTargetProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::DrillOutThemeAnimation;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}
