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


#define __InertiaTranslationBehavior_GUID "dda979fb-f67f-459b-bb2d-f1f4edfd12eb"

namespace DirectUI
{
    class InertiaTranslationBehavior;

    class __declspec(novtable) __declspec(uuid(__InertiaTranslationBehavior_GUID)) InertiaTranslationBehavior:
        public DirectUI::DependencyObject
        , public ABI::Microsoft::UI::Xaml::Input::IInertiaTranslationBehavior
    {

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Input.InertiaTranslationBehavior");

        BEGIN_INTERFACE_MAP(InertiaTranslationBehavior, DirectUI::DependencyObject)
            INTERFACE_ENTRY(InertiaTranslationBehavior, ABI::Microsoft::UI::Xaml::Input::IInertiaTranslationBehavior)
        END_INTERFACE_MAP(InertiaTranslationBehavior, DirectUI::DependencyObject)

    public:
        InertiaTranslationBehavior();
        ~InertiaTranslationBehavior() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::InertiaTranslationBehavior;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::InertiaTranslationBehavior;
        }

        // Properties.
        IFACEMETHOD(get_DesiredDeceleration)(_Out_ DOUBLE* pValue) override;
        IFACEMETHOD(put_DesiredDeceleration)(_In_ DOUBLE value) override;
        IFACEMETHOD(get_DesiredDisplacement)(_Out_ DOUBLE* pValue) override;
        IFACEMETHOD(put_DesiredDisplacement)(_In_ DOUBLE value) override;

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
    class __declspec(novtable) InertiaTranslationBehaviorFactory:
       public ctl::AbstractActivationFactory
    {

    public:
        // Factory methods.

        // Static properties.

        // Dependency properties.
        
        

        // Attached properties.

        // Static methods.

        // Static events.

    protected:

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::InertiaTranslationBehavior;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}