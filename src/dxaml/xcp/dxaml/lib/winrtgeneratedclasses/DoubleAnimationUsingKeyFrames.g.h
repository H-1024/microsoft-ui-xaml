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

#include "Timeline.g.h"

#define __DoubleAnimationUsingKeyFrames_GUID "3f9998e0-55ee-494a-bec8-d2634699c071"

namespace DirectUI
{
    class DoubleAnimationUsingKeyFrames;
    class DoubleKeyFrameCollection;

    class __declspec(novtable) __declspec(uuid(__DoubleAnimationUsingKeyFrames_GUID)) DoubleAnimationUsingKeyFrames:
        public DirectUI::Timeline
        , public ABI::Microsoft::UI::Xaml::Media::Animation::IDoubleAnimationUsingKeyFrames
    {

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Media.Animation.DoubleAnimationUsingKeyFrames");

        BEGIN_INTERFACE_MAP(DoubleAnimationUsingKeyFrames, DirectUI::Timeline)
            INTERFACE_ENTRY(DoubleAnimationUsingKeyFrames, ABI::Microsoft::UI::Xaml::Media::Animation::IDoubleAnimationUsingKeyFrames)
        END_INTERFACE_MAP(DoubleAnimationUsingKeyFrames, DirectUI::Timeline)

    public:
        DoubleAnimationUsingKeyFrames();
        ~DoubleAnimationUsingKeyFrames() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::DoubleAnimationUsingKeyFrames;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::DoubleAnimationUsingKeyFrames;
        }

        // Properties.
        IFACEMETHOD(get_EnableDependentAnimation)(_Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(put_EnableDependentAnimation)(BOOLEAN value) override;
        IFACEMETHOD(get_KeyFrames)(_Outptr_result_maybenull_ ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Xaml::Media::Animation::DoubleKeyFrame*>** ppValue) override;

        // Events.

        // Methods.


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:
        // Customized properties.

        // Customized methods.

        // Fields.
    };
}


namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) DoubleAnimationUsingKeyFramesFactory:
       public ctl::BetterCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Media::Animation::IDoubleAnimationUsingKeyFramesStatics
    {
        BEGIN_INTERFACE_MAP(DoubleAnimationUsingKeyFramesFactory, ctl::BetterCoreObjectActivationFactory)
            INTERFACE_ENTRY(DoubleAnimationUsingKeyFramesFactory, ABI::Microsoft::UI::Xaml::Media::Animation::IDoubleAnimationUsingKeyFramesStatics)
        END_INTERFACE_MAP(DoubleAnimationUsingKeyFramesFactory, ctl::BetterCoreObjectActivationFactory)

    public:
        // Factory methods.

        // Static properties.

        // Dependency properties.
        
        IFACEMETHOD(get_EnableDependentAnimationProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::DoubleAnimationUsingKeyFrames;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}
