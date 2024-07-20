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

#include "UIElement.g.h"
#include "Thickness.g.h"
#include <FeatureFlags.h>
#if WI_IS_FEATURE_PRESENT(Feature_Xaml2018) 
#define FEATURE_XAML2018_OVERRIDE override
#else
#define FEATURE_XAML2018_OVERRIDE
#endif
#define __FrameworkElementEx_GUID "d966489e-8ac3-4851-a506-4ec55d68420d"

namespace DirectUI
{
    class FrameworkElementEx;
    class UIElementCollection;

    class __declspec(novtable) __declspec(uuid(__FrameworkElementEx_GUID)) FrameworkElementEx:
        public DirectUI::UIElement
#if WI_IS_FEATURE_PRESENT(Feature_Xaml2018)
        , public ABI::Microsoft::UI::Xaml::IFrameworkElementEx
        , public ABI::Microsoft::UI::Xaml::IFrameworkElementExProtected
#endif
    {

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.FrameworkElementEx");

        BEGIN_INTERFACE_MAP(FrameworkElementEx, DirectUI::UIElement)
#if WI_IS_FEATURE_PRESENT(Feature_Xaml2018)
            INTERFACE_ENTRY(FrameworkElementEx, ABI::Microsoft::UI::Xaml::IFrameworkElementEx)
            INTERFACE_ENTRY(FrameworkElementEx, ABI::Microsoft::UI::Xaml::IFrameworkElementExProtected)
#else
            INTERFACE_ENTRY(DUMMYINTERFACE, IUnknown)
#endif
        END_INTERFACE_MAP(FrameworkElementEx, DirectUI::UIElement)

    public:
        FrameworkElementEx();
        ~FrameworkElementEx() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::FrameworkElementEx;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::FrameworkElementEx;
        }

        // Properties.
        IFACEMETHOD(get_ActualHeight)(_Out_ DOUBLE* pValue) FEATURE_XAML2018_OVERRIDE;
        IFACEMETHOD(get_ActualWidth)(_Out_ DOUBLE* pValue) FEATURE_XAML2018_OVERRIDE;
        IFACEMETHOD(get_Children)(_Outptr_result_maybenull_ ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Xaml::UIElement*>** ppValue) FEATURE_XAML2018_OVERRIDE;
        IFACEMETHOD(get_Height)(_Out_ DOUBLE* pValue) FEATURE_XAML2018_OVERRIDE;
        IFACEMETHOD(put_Height)(_In_ DOUBLE value) FEATURE_XAML2018_OVERRIDE;
        IFACEMETHOD(get_HorizontalAlignment)(_Out_ ABI::Microsoft::UI::Xaml::HorizontalAlignment* pValue) FEATURE_XAML2018_OVERRIDE;
        IFACEMETHOD(put_HorizontalAlignment)(_In_ ABI::Microsoft::UI::Xaml::HorizontalAlignment value) FEATURE_XAML2018_OVERRIDE;
        IFACEMETHOD(get_Margin)(_Out_ ABI::Microsoft::UI::Xaml::Thickness* pValue) FEATURE_XAML2018_OVERRIDE;
        IFACEMETHOD(put_Margin)(_In_ ABI::Microsoft::UI::Xaml::Thickness value) FEATURE_XAML2018_OVERRIDE;
        IFACEMETHOD(get_MaxHeight)(_Out_ DOUBLE* pValue) FEATURE_XAML2018_OVERRIDE;
        IFACEMETHOD(put_MaxHeight)(_In_ DOUBLE value) FEATURE_XAML2018_OVERRIDE;
        IFACEMETHOD(get_MaxWidth)(_Out_ DOUBLE* pValue) FEATURE_XAML2018_OVERRIDE;
        IFACEMETHOD(put_MaxWidth)(_In_ DOUBLE value) FEATURE_XAML2018_OVERRIDE;
        IFACEMETHOD(get_MinHeight)(_Out_ DOUBLE* pValue) FEATURE_XAML2018_OVERRIDE;
        IFACEMETHOD(put_MinHeight)(_In_ DOUBLE value) FEATURE_XAML2018_OVERRIDE;
        IFACEMETHOD(get_MinWidth)(_Out_ DOUBLE* pValue) FEATURE_XAML2018_OVERRIDE;
        IFACEMETHOD(put_MinWidth)(_In_ DOUBLE value) FEATURE_XAML2018_OVERRIDE;
        IFACEMETHOD(get_VerticalAlignment)(_Out_ ABI::Microsoft::UI::Xaml::VerticalAlignment* pValue) FEATURE_XAML2018_OVERRIDE;
        IFACEMETHOD(put_VerticalAlignment)(_In_ ABI::Microsoft::UI::Xaml::VerticalAlignment value) FEATURE_XAML2018_OVERRIDE;
        IFACEMETHOD(get_Width)(_Out_ DOUBLE* pValue) FEATURE_XAML2018_OVERRIDE;
        IFACEMETHOD(put_Width)(_In_ DOUBLE value) FEATURE_XAML2018_OVERRIDE;

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
    class __declspec(novtable) FrameworkElementExFactory:
       public ctl::BetterAggregableAbstractCoreObjectActivationFactory
#if WI_IS_FEATURE_PRESENT(Feature_Xaml2018)
        , public ABI::Microsoft::UI::Xaml::IFrameworkElementExFactory
        , public ABI::Microsoft::UI::Xaml::IFrameworkElementExStatics
#endif
    {
        BEGIN_INTERFACE_MAP(FrameworkElementExFactory, ctl::BetterAggregableAbstractCoreObjectActivationFactory)
#if WI_IS_FEATURE_PRESENT(Feature_Xaml2018)
            INTERFACE_ENTRY(FrameworkElementExFactory, ABI::Microsoft::UI::Xaml::IFrameworkElementExFactory)
            INTERFACE_ENTRY(FrameworkElementExFactory, ABI::Microsoft::UI::Xaml::IFrameworkElementExStatics)
#else
            INTERFACE_ENTRY(DUMMYINTERFACE, IUnknown)
#endif
        END_INTERFACE_MAP(FrameworkElementExFactory, ctl::BetterAggregableAbstractCoreObjectActivationFactory)

    public:
        // Factory methods.
        IFACEMETHOD(CreateInstance)(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::IFrameworkElementEx** ppInstance);

        // Static properties.

        // Dependency properties.
        IFACEMETHOD(get_ActualWidthProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) FEATURE_XAML2018_OVERRIDE;
        IFACEMETHOD(get_ActualHeightProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) FEATURE_XAML2018_OVERRIDE;
        IFACEMETHOD(get_WidthProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) FEATURE_XAML2018_OVERRIDE;
        IFACEMETHOD(get_HeightProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) FEATURE_XAML2018_OVERRIDE;
        IFACEMETHOD(get_MinWidthProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) FEATURE_XAML2018_OVERRIDE;
        IFACEMETHOD(get_MaxWidthProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) FEATURE_XAML2018_OVERRIDE;
        IFACEMETHOD(get_MinHeightProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) FEATURE_XAML2018_OVERRIDE;
        IFACEMETHOD(get_MaxHeightProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) FEATURE_XAML2018_OVERRIDE;
        IFACEMETHOD(get_HorizontalAlignmentProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) FEATURE_XAML2018_OVERRIDE;
        IFACEMETHOD(get_VerticalAlignmentProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) FEATURE_XAML2018_OVERRIDE;
        IFACEMETHOD(get_MarginProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) FEATURE_XAML2018_OVERRIDE;
        

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::FrameworkElementEx;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}
