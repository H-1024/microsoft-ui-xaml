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

#include "ConnectedAnimationConfiguration.g.h"

#define __DirectConnectedAnimationConfiguration_GUID "742c8b46-2243-40fe-b76c-5251fb802c77"

namespace DirectUI
{
    class DirectConnectedAnimationConfiguration;

    class __declspec(novtable) DirectConnectedAnimationConfigurationGenerated:
        public DirectUI::ConnectedAnimationConfiguration
        , public ABI::Microsoft::UI::Xaml::Media::Animation::IDirectConnectedAnimationConfiguration
    {
        friend class DirectUI::DirectConnectedAnimationConfiguration;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Media.Animation.DirectConnectedAnimationConfiguration");

        BEGIN_INTERFACE_MAP(DirectConnectedAnimationConfigurationGenerated, DirectUI::ConnectedAnimationConfiguration)
            INTERFACE_ENTRY(DirectConnectedAnimationConfigurationGenerated, ABI::Microsoft::UI::Xaml::Media::Animation::IDirectConnectedAnimationConfiguration)
        END_INTERFACE_MAP(DirectConnectedAnimationConfigurationGenerated, DirectUI::ConnectedAnimationConfiguration)

    public:
        DirectConnectedAnimationConfigurationGenerated();
        ~DirectConnectedAnimationConfigurationGenerated() override;

        // Event source typedefs.


        // Properties.

        // Events.

        // Methods.


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "DirectConnectedAnimationConfiguration_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) DirectConnectedAnimationConfigurationFactory:
       public ctl::AggregableActivationFactory<DirectUI::DirectConnectedAnimationConfiguration>
        , public ABI::Microsoft::UI::Xaml::Media::Animation::IDirectConnectedAnimationConfigurationFactory
    {
        BEGIN_INTERFACE_MAP(DirectConnectedAnimationConfigurationFactory, ctl::AggregableActivationFactory<DirectUI::DirectConnectedAnimationConfiguration>)
            INTERFACE_ENTRY(DirectConnectedAnimationConfigurationFactory, ABI::Microsoft::UI::Xaml::Media::Animation::IDirectConnectedAnimationConfigurationFactory)
        END_INTERFACE_MAP(DirectConnectedAnimationConfigurationFactory, ctl::AggregableActivationFactory<DirectUI::DirectConnectedAnimationConfiguration>)

    public:
        // Factory methods.
        IFACEMETHOD(CreateInstance)(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Media::Animation::IDirectConnectedAnimationConfiguration** ppInstance);

        // Static properties.

        // Dependency properties.

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;



    private:

        // Customized static properties.

        // Customized static  methods.
    };
}