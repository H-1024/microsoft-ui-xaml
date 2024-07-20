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


#define __FontFamily_GUID "bf8fa44a-c793-4d32-bd97-f1953dbdef1b"

namespace DirectUI
{
    class FontFamily;

    class __declspec(novtable) __declspec(uuid(__FontFamily_GUID)) FontFamily:
        public DirectUI::DependencyObject
        , public ABI::Microsoft::UI::Xaml::Media::IFontFamily
    {

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Media.FontFamily");

        BEGIN_INTERFACE_MAP(FontFamily, DirectUI::DependencyObject)
            INTERFACE_ENTRY(FontFamily, ABI::Microsoft::UI::Xaml::Media::IFontFamily)
        END_INTERFACE_MAP(FontFamily, DirectUI::DependencyObject)

    public:
        FontFamily();
        ~FontFamily() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::FontFamily;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::FontFamily;
        }

        // Properties.
        IFACEMETHOD(get_Source)(_Out_ HSTRING* pValue) override;
        _Check_return_ HRESULT put_Source(_In_opt_ HSTRING value);

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
    class __declspec(novtable) FontFamilyFactory:
       public ctl::BetterAggregableCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Media::IFontFamilyFactory
        , public ABI::Microsoft::UI::Xaml::Media::IFontFamilyStatics
    {
        BEGIN_INTERFACE_MAP(FontFamilyFactory, ctl::BetterAggregableCoreObjectActivationFactory)
            INTERFACE_ENTRY(FontFamilyFactory, ABI::Microsoft::UI::Xaml::Media::IFontFamilyFactory)
            INTERFACE_ENTRY(FontFamilyFactory, ABI::Microsoft::UI::Xaml::Media::IFontFamilyStatics)
        END_INTERFACE_MAP(FontFamilyFactory, ctl::BetterAggregableCoreObjectActivationFactory)

    public:
        // Factory methods.
        IFACEMETHOD(CreateInstanceWithName)(_In_ HSTRING familyName, _In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Media::IFontFamily** ppInstance);

        // Static properties.
        IFACEMETHOD(get_XamlAutoFontFamily)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Media::IFontFamily** ppValue) override;

        // Dependency properties.

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::FontFamily;
        }


    private:
        _Check_return_ HRESULT CreateInstanceWithNameImpl(_In_ HSTRING familyName, _In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Media::IFontFamily** ppInstance);

        // Customized static properties.
         _Check_return_ HRESULT get_XamlAutoFontFamilyImpl(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Media::IFontFamily** ppValue); 

        // Customized static  methods.
    };
}
