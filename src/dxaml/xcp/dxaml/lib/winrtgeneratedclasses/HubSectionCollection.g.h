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


#define __HubSectionCollection_GUID "3df2d721-6551-47aa-8447-43da41afa38b"

namespace DirectUI
{
    class HubSectionCollection;

    class __declspec(novtable) HubSectionCollectionGenerated:
        public DirectUI::PresentationFrameworkCollection<ABI::Microsoft::UI::Xaml::Controls::HubSection*>
    {
        friend class DirectUI::HubSectionCollection;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Controls.HubSectionCollection");


    public:
        HubSectionCollectionGenerated();
        ~HubSectionCollectionGenerated() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::HubSectionCollection;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::HubSectionCollection;
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

#include "HubSectionCollection_Partial.h"

