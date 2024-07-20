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

#define __DragItemThemeAnimation_GUID "36ad1f84-339e-4d09-9b97-92684c9bf5ac"

namespace DirectUI
{
    class DragItemThemeAnimation;

    class __declspec(novtable) DragItemThemeAnimationGenerated:
        public DirectUI::DynamicTimeline
        , public ABI::Microsoft::UI::Xaml::Media::Animation::IDragItemThemeAnimation
    {
        friend class DirectUI::DragItemThemeAnimation;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Media.Animation.DragItemThemeAnimation");

        BEGIN_INTERFACE_MAP(DragItemThemeAnimationGenerated, DirectUI::DynamicTimeline)
            INTERFACE_ENTRY(DragItemThemeAnimationGenerated, ABI::Microsoft::UI::Xaml::Media::Animation::IDragItemThemeAnimation)
        END_INTERFACE_MAP(DragItemThemeAnimationGenerated, DirectUI::DynamicTimeline)

    public:
        DragItemThemeAnimationGenerated();
        ~DragItemThemeAnimationGenerated() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::DragItemThemeAnimation;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::DragItemThemeAnimation;
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

#include "DragItemThemeAnimation_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) DragItemThemeAnimationFactory:
       public ctl::BetterCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Media::Animation::IDragItemThemeAnimationStatics
    {
        BEGIN_INTERFACE_MAP(DragItemThemeAnimationFactory, ctl::BetterCoreObjectActivationFactory)
            INTERFACE_ENTRY(DragItemThemeAnimationFactory, ABI::Microsoft::UI::Xaml::Media::Animation::IDragItemThemeAnimationStatics)
        END_INTERFACE_MAP(DragItemThemeAnimationFactory, ctl::BetterCoreObjectActivationFactory)

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
            return KnownTypeIndex::DragItemThemeAnimation;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}
