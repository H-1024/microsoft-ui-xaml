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

#define __PointAnimation_GUID "5714c188-0d03-458e-9c6c-51d51c26fb5f"

namespace DirectUI
{
    class PointAnimation;
    class EasingFunctionBase;

    class __declspec(novtable) __declspec(uuid(__PointAnimation_GUID)) PointAnimation:
        public DirectUI::Timeline
        , public ABI::Microsoft::UI::Xaml::Media::Animation::IPointAnimation
    {

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Media.Animation.PointAnimation");

        BEGIN_INTERFACE_MAP(PointAnimation, DirectUI::Timeline)
            INTERFACE_ENTRY(PointAnimation, ABI::Microsoft::UI::Xaml::Media::Animation::IPointAnimation)
        END_INTERFACE_MAP(PointAnimation, DirectUI::Timeline)

    public:
        PointAnimation();
        ~PointAnimation() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::PointAnimation;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::PointAnimation;
        }

        // Properties.
        IFACEMETHOD(get_By)(_Out_ ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::Point>** ppValue) override;
        IFACEMETHOD(put_By)(_In_ ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::Point>* pValue) override;
        IFACEMETHOD(get_EasingFunction)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Media::Animation::IEasingFunctionBase** ppValue) override;
        IFACEMETHOD(put_EasingFunction)(_In_opt_ ABI::Microsoft::UI::Xaml::Media::Animation::IEasingFunctionBase* pValue) override;
        IFACEMETHOD(get_EnableDependentAnimation)(_Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(put_EnableDependentAnimation)(_In_ BOOLEAN value) override;
        IFACEMETHOD(get_From)(_Out_ ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::Point>** ppValue) override;
        IFACEMETHOD(put_From)(_In_ ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::Point>* pValue) override;
        IFACEMETHOD(get_To)(_Out_ ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::Point>** ppValue) override;
        IFACEMETHOD(put_To)(_In_ ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::Point>* pValue) override;

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
    class __declspec(novtable) PointAnimationFactory:
       public ctl::BetterCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Media::Animation::IPointAnimationStatics
    {
        BEGIN_INTERFACE_MAP(PointAnimationFactory, ctl::BetterCoreObjectActivationFactory)
            INTERFACE_ENTRY(PointAnimationFactory, ABI::Microsoft::UI::Xaml::Media::Animation::IPointAnimationStatics)
        END_INTERFACE_MAP(PointAnimationFactory, ctl::BetterCoreObjectActivationFactory)

    public:
        // Factory methods.

        // Static properties.

        // Dependency properties.
        IFACEMETHOD(get_FromProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_ToProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_ByProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_EasingFunctionProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_EnableDependentAnimationProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::PointAnimation;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}
