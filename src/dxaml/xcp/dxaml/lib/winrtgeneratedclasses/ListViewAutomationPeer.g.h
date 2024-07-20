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

#include "ListViewBaseAutomationPeer.g.h"

#define __ListViewAutomationPeer_GUID "b5696491-0054-49ca-9265-b0f1a871f3c8"

namespace DirectUI
{
    class ListViewAutomationPeer;

    class __declspec(novtable) ListViewAutomationPeerGenerated:
        public DirectUI::ListViewBaseAutomationPeer
        , public ABI::Microsoft::UI::Xaml::Automation::Peers::IListViewAutomationPeer
    {
        friend class DirectUI::ListViewAutomationPeer;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Automation.Peers.ListViewAutomationPeer");

        BEGIN_INTERFACE_MAP(ListViewAutomationPeerGenerated, DirectUI::ListViewBaseAutomationPeer)
            INTERFACE_ENTRY(ListViewAutomationPeerGenerated, ABI::Microsoft::UI::Xaml::Automation::Peers::IListViewAutomationPeer)
        END_INTERFACE_MAP(ListViewAutomationPeerGenerated, DirectUI::ListViewBaseAutomationPeer)

    public:
        ListViewAutomationPeerGenerated();
        ~ListViewAutomationPeerGenerated() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::ListViewAutomationPeer;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::ListViewAutomationPeer;
        }

        // Properties.

        // Events.

        // Methods.


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "ListViewAutomationPeer_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) ListViewAutomationPeerFactory:
       public ctl::BetterAggregableCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Automation::Peers::IListViewAutomationPeerFactory
    {
        BEGIN_INTERFACE_MAP(ListViewAutomationPeerFactory, ctl::BetterAggregableCoreObjectActivationFactory)
            INTERFACE_ENTRY(ListViewAutomationPeerFactory, ABI::Microsoft::UI::Xaml::Automation::Peers::IListViewAutomationPeerFactory)
        END_INTERFACE_MAP(ListViewAutomationPeerFactory, ctl::BetterAggregableCoreObjectActivationFactory)

    public:
        // Factory methods.
        IFACEMETHOD(CreateInstanceWithOwner)(_In_ ABI::Microsoft::UI::Xaml::Controls::IListView* pOwner, _In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Automation::Peers::IListViewAutomationPeer** ppInstance);

        // Static properties.

        // Dependency properties.

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::ListViewAutomationPeer;
        }


    private:
        _Check_return_ HRESULT CreateInstanceWithOwnerImpl(_In_ ABI::Microsoft::UI::Xaml::Controls::IListView* pOwner, _In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Automation::Peers::IListViewAutomationPeer** ppInstance);

        // Customized static properties.

        // Customized static  methods.
    };
}
