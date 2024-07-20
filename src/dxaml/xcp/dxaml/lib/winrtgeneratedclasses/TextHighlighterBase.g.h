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


#define __TextHighlighterBase_GUID "a482300a-3e35-4620-aeed-bae246bd3845"

#pragma region forwarders
namespace ctl
{
    template<typename impl_type>
    class interface_forwarder< ABI::Microsoft::UI::Xaml::Documents::ITextHighlighterBase, impl_type> final
        : public ctl::iinspectable_forwarder_base< ABI::Microsoft::UI::Xaml::Documents::ITextHighlighterBase, impl_type>
    {
        impl_type* This() { return this->This_helper<impl_type>(); }
    };
}
#pragma endregion

namespace DirectUI
{
    class TextHighlighterBase;

    class __declspec(novtable) __declspec(uuid(__TextHighlighterBase_GUID)) TextHighlighterBase:
        public DirectUI::DependencyObject
        , public ctl::forwarder_holder< ABI::Microsoft::UI::Xaml::Documents::ITextHighlighterBase, TextHighlighterBase >
    {

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Documents.TextHighlighterBase");

        BEGIN_INTERFACE_MAP(TextHighlighterBase, DirectUI::DependencyObject)
            INTERFACE_ENTRY(TextHighlighterBase, ABI::Microsoft::UI::Xaml::Documents::ITextHighlighterBase)
        END_INTERFACE_MAP(TextHighlighterBase, DirectUI::DependencyObject)

    public:
        TextHighlighterBase();
        ~TextHighlighterBase() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::TextHighlighterBase;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::TextHighlighterBase;
        }

        // Properties.

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
    class __declspec(novtable) TextHighlighterBaseFactory:
       public ctl::BetterAggregableCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Documents::ITextHighlighterBaseFactory
    {
        BEGIN_INTERFACE_MAP(TextHighlighterBaseFactory, ctl::BetterAggregableCoreObjectActivationFactory)
            INTERFACE_ENTRY(TextHighlighterBaseFactory, ABI::Microsoft::UI::Xaml::Documents::ITextHighlighterBaseFactory)
        END_INTERFACE_MAP(TextHighlighterBaseFactory, ctl::BetterAggregableCoreObjectActivationFactory)

    public:
        // Factory methods.

        // Static properties.

        // Dependency properties.

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::TextHighlighterBase;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}
