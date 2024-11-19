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

#include "precomp.h"
#include <SimplePropertiesHelpers.h>

namespace SimpleProperties
{

bool IsSimplePropertySetToDefault(KnownPropertyIndex propertyIndex, SimpleProperty::const_objid_t obj)
{
    switch (propertyIndex)
    {
        case KnownPropertyIndex::BrushTransition_Duration:
        {
            if (SimpleProperty::Property::id<KnownPropertyIndex::BrushTransition_Duration>::IsSet(obj))
            {
                return (SimpleProperty::Property::id<KnownPropertyIndex::BrushTransition_Duration>::Get(obj) ==
                        SimpleProperty::Property::Default<KnownPropertyIndex::BrushTransition_Duration>());
            }
        }
        break;

        case KnownPropertyIndex::ScalarTransition_Duration:
        {
            if (SimpleProperty::Property::id<KnownPropertyIndex::ScalarTransition_Duration>::IsSet(obj))
            {
                return (SimpleProperty::Property::id<KnownPropertyIndex::ScalarTransition_Duration>::Get(obj) ==
                        SimpleProperty::Property::Default<KnownPropertyIndex::ScalarTransition_Duration>());
            }
        }
        break;

        case KnownPropertyIndex::UIElement_CenterPoint:
        {
            if (SimpleProperty::Property::id<KnownPropertyIndex::UIElement_CenterPoint>::IsSet(obj))
            {
                return (SimpleProperty::Property::id<KnownPropertyIndex::UIElement_CenterPoint>::Get(obj) ==
                        SimpleProperty::Property::Default<KnownPropertyIndex::UIElement_CenterPoint>());
            }
        }
        break;

        case KnownPropertyIndex::UIElement_KeepAliveCount:
        {
            if (SimpleProperty::Property::id<KnownPropertyIndex::UIElement_KeepAliveCount>::IsSet(obj))
            {
                return (SimpleProperty::Property::id<KnownPropertyIndex::UIElement_KeepAliveCount>::Get(obj) ==
                        SimpleProperty::Property::Default<KnownPropertyIndex::UIElement_KeepAliveCount>());
            }
        }
        break;

        case KnownPropertyIndex::UIElement_RasterizationScale:
        {
            if (SimpleProperty::Property::id<KnownPropertyIndex::UIElement_RasterizationScale>::IsSet(obj))
            {
                return (SimpleProperty::Property::id<KnownPropertyIndex::UIElement_RasterizationScale>::Get(obj) ==
                        SimpleProperty::Property::Default<KnownPropertyIndex::UIElement_RasterizationScale>());
            }
        }
        break;

        case KnownPropertyIndex::UIElement_Rotation:
        {
            if (SimpleProperty::Property::id<KnownPropertyIndex::UIElement_Rotation>::IsSet(obj))
            {
                return (SimpleProperty::Property::id<KnownPropertyIndex::UIElement_Rotation>::Get(obj) ==
                        SimpleProperty::Property::Default<KnownPropertyIndex::UIElement_Rotation>());
            }
        }
        break;

        case KnownPropertyIndex::UIElement_RotationAxis:
        {
            if (SimpleProperty::Property::id<KnownPropertyIndex::UIElement_RotationAxis>::IsSet(obj))
            {
                return (SimpleProperty::Property::id<KnownPropertyIndex::UIElement_RotationAxis>::Get(obj) ==
                        SimpleProperty::Property::Default<KnownPropertyIndex::UIElement_RotationAxis>());
            }
        }
        break;

        case KnownPropertyIndex::UIElement_Scale:
        {
            if (SimpleProperty::Property::id<KnownPropertyIndex::UIElement_Scale>::IsSet(obj))
            {
                return (SimpleProperty::Property::id<KnownPropertyIndex::UIElement_Scale>::Get(obj) ==
                        SimpleProperty::Property::Default<KnownPropertyIndex::UIElement_Scale>());
            }
        }
        break;

        case KnownPropertyIndex::UIElement_ThemeShadowReceiverCount:
        {
            if (SimpleProperty::Property::id<KnownPropertyIndex::UIElement_ThemeShadowReceiverCount>::IsSet(obj))
            {
                return (SimpleProperty::Property::id<KnownPropertyIndex::UIElement_ThemeShadowReceiverCount>::Get(obj) ==
                        SimpleProperty::Property::Default<KnownPropertyIndex::UIElement_ThemeShadowReceiverCount>());
            }
        }
        break;

        case KnownPropertyIndex::UIElement_TransformMatrix:
        {
            if (SimpleProperty::Property::id<KnownPropertyIndex::UIElement_TransformMatrix>::IsSet(obj))
            {
                return (SimpleProperty::Property::id<KnownPropertyIndex::UIElement_TransformMatrix>::Get(obj) ==
                        SimpleProperty::Property::Default<KnownPropertyIndex::UIElement_TransformMatrix>());
            }
        }
        break;

        case KnownPropertyIndex::UIElement_Translation:
        {
            if (SimpleProperty::Property::id<KnownPropertyIndex::UIElement_Translation>::IsSet(obj))
            {
                return (SimpleProperty::Property::id<KnownPropertyIndex::UIElement_Translation>::Get(obj) ==
                        SimpleProperty::Property::Default<KnownPropertyIndex::UIElement_Translation>());
            }
        }
        break;

        case KnownPropertyIndex::Vector3Transition_Components:
        {
            if (SimpleProperty::Property::id<KnownPropertyIndex::Vector3Transition_Components>::IsSet(obj))
            {
                return (SimpleProperty::Property::id<KnownPropertyIndex::Vector3Transition_Components>::Get(obj) ==
                        SimpleProperty::Property::Default<KnownPropertyIndex::Vector3Transition_Components>());
            }
        }
        break;

        case KnownPropertyIndex::Vector3Transition_Duration:
        {
            if (SimpleProperty::Property::id<KnownPropertyIndex::Vector3Transition_Duration>::IsSet(obj))
            {
                return (SimpleProperty::Property::id<KnownPropertyIndex::Vector3Transition_Duration>::Get(obj) ==
                        SimpleProperty::Property::Default<KnownPropertyIndex::Vector3Transition_Duration>());
            }
        }
        break;

        case KnownPropertyIndex::LinearGradientBrush_CenterPoint:
        {
            if (SimpleProperty::Property::id<KnownPropertyIndex::LinearGradientBrush_CenterPoint>::IsSet(obj))
            {
                return (SimpleProperty::Property::id<KnownPropertyIndex::LinearGradientBrush_CenterPoint>::Get(obj) ==
                        SimpleProperty::Property::Default<KnownPropertyIndex::LinearGradientBrush_CenterPoint>());
            }
        }
        break;

        case KnownPropertyIndex::LinearGradientBrush_Rotation:
        {
            if (SimpleProperty::Property::id<KnownPropertyIndex::LinearGradientBrush_Rotation>::IsSet(obj))
            {
                return (SimpleProperty::Property::id<KnownPropertyIndex::LinearGradientBrush_Rotation>::Get(obj) ==
                        SimpleProperty::Property::Default<KnownPropertyIndex::LinearGradientBrush_Rotation>());
            }
        }
        break;

        case KnownPropertyIndex::LinearGradientBrush_Scale:
        {
            if (SimpleProperty::Property::id<KnownPropertyIndex::LinearGradientBrush_Scale>::IsSet(obj))
            {
                return (SimpleProperty::Property::id<KnownPropertyIndex::LinearGradientBrush_Scale>::Get(obj) ==
                        SimpleProperty::Property::Default<KnownPropertyIndex::LinearGradientBrush_Scale>());
            }
        }
        break;

        case KnownPropertyIndex::LinearGradientBrush_TransformMatrix:
        {
            if (SimpleProperty::Property::id<KnownPropertyIndex::LinearGradientBrush_TransformMatrix>::IsSet(obj))
            {
                return (SimpleProperty::Property::id<KnownPropertyIndex::LinearGradientBrush_TransformMatrix>::Get(obj) ==
                        SimpleProperty::Property::Default<KnownPropertyIndex::LinearGradientBrush_TransformMatrix>());
            }
        }
        break;

        case KnownPropertyIndex::LinearGradientBrush_Translation:
        {
            if (SimpleProperty::Property::id<KnownPropertyIndex::LinearGradientBrush_Translation>::IsSet(obj))
            {
                return (SimpleProperty::Property::id<KnownPropertyIndex::LinearGradientBrush_Translation>::Get(obj) ==
                        SimpleProperty::Property::Default<KnownPropertyIndex::LinearGradientBrush_Translation>());
            }
        }
        break;

        default:
            XAML_FAIL_FAST();  // investigate unknown simple property
    }

    return true;
}

} // namespace SimpleProperties