// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#include "precomp.h"
#include <VisualStateCollection.h>
#include <DependencyObjectTraits.h>
#include <DependencyObjectTraits.g.h>

KnownTypeIndex CVisualStateCollection::GetTypeIndex() const
{
    return DependencyObjectTraits<CVisualStateCollection>::Index;
}