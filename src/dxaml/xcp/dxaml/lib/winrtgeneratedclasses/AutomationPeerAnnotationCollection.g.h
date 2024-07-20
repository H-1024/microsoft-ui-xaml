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


#define __AutomationPeerAnnotationCollection_GUID "d240b3db-b699-4331-845f-4b067aefd5f7"

namespace DirectUI
{
    class AutomationPeerAnnotationCollection;

    class __declspec(novtable) __declspec(uuid(__AutomationPeerAnnotationCollection_GUID)) AutomationPeerAnnotationCollection:
        public DirectUI::PresentationFrameworkCollection<ABI::Microsoft::UI::Xaml::Automation::Peers::AutomationPeerAnnotation*>
    {



    public:
        AutomationPeerAnnotationCollection();
        ~AutomationPeerAnnotationCollection() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::AutomationPeerAnnotationCollection;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::AutomationPeerAnnotationCollection;
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


