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




namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) InputManagerFactory:
       public ctl::AbstractActivationFactory
        , public ABI::Microsoft::UI::Xaml::Input::IInputManagerStatics
    {
        BEGIN_INTERFACE_MAP(InputManagerFactory, ctl::AbstractActivationFactory)
            INTERFACE_ENTRY(InputManagerFactory, ABI::Microsoft::UI::Xaml::Input::IInputManagerStatics)
        END_INTERFACE_MAP(InputManagerFactory, ctl::AbstractActivationFactory)

    public:
        // Factory methods.

        // Static properties.

        // Dependency properties.

        // Attached properties.

        // Static methods.
        IFACEMETHOD(GetLastInputDeviceType)(_Out_ ABI::Microsoft::UI::Xaml::Input::LastInputDeviceType* pResult) override;

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;



    private:

        // Customized static properties.

        // Customized static  methods.
         _Check_return_ HRESULT GetLastInputDeviceTypeImpl(_Out_ ABI::Microsoft::UI::Xaml::Input::LastInputDeviceType* pResult); 
    };
}
