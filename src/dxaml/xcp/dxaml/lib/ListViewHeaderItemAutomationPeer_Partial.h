// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#pragma once

#include "ListViewHeaderItemAutomationPeer.g.h"

namespace DirectUI
{
    // Represents the ListViewHeaderItemAutomationPeer
    PARTIAL_CLASS(ListViewHeaderItemAutomationPeer)
    {
        public:
            IFACEMETHOD(GetClassNameCore)(_Out_ HSTRING* returnValue);
    };
}
