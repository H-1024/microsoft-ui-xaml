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

#include "CollectionView.g.h"

#define __VectorCollectionView_GUID "6aca7ab3-348f-4436-9c0a-0d59a2f96f5a"

namespace DirectUI
{
    class VectorCollectionView;

    class __declspec(novtable) VectorCollectionViewGenerated:
        public DirectUI::CollectionView
    {
        friend class DirectUI::VectorCollectionView;



    public:
        VectorCollectionViewGenerated();
        ~VectorCollectionViewGenerated() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::VectorCollectionView;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::VectorCollectionView;
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

#include "VectorCollectionView_Partial.h"

