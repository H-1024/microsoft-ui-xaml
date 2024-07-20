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

#include "ScrollViewer.h"
#include <DeclareMacros.h>
#include <Indexes.g.h>
#include <minxcptypes.h>

class CRootScrollViewer : public CScrollViewer
{
protected:
    CRootScrollViewer(_In_ CCoreServices *pCore)
        : CScrollViewer(pCore)
    {
        SetIsCustomType();
    }

    ~CRootScrollViewer() override = default;

public:
    DECLARE_CREATE(CRootScrollViewer);

    KnownTypeIndex GetTypeIndex() const override
    {
        return KnownTypeIndex::RootScrollViewer;
    }

    XUINT32 ParticipatesInManagedTreeInternal() override
    {
        return PARTICIPATES_IN_MANAGED_TREE;
    }
};
