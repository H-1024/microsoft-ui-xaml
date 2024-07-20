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

#include <SimpleProperty.h>
#include <SimplePropertiesCommon.g.h>

// Helper method that allows XamlNativeRuntime to set values of simple properties
// on DependencyObjects
namespace Parser {
    HRESULT XamlNativeRuntime_SetValueSimpleProperty(const CPropertyBase* property, CDependencyObject* pDO, const CValue& value)
    {
        auto propertyIndex = property->GetIndex();

        switch (propertyIndex)
        {
            case KnownPropertyIndex::BrushTransition_Duration:
            {
                ABI::Windows::Foundation::TimeSpan typeConvertedValue;
                IFC_RETURN(SimplePropertiesCommon::ConvertToTimeSpan(value, typeConvertedValue));
                SimpleProperty::Property::id<KnownPropertyIndex::BrushTransition_Duration>::Set(pDO, typeConvertedValue);
            }
            break;

            case KnownPropertyIndex::ScalarTransition_Duration:
            {
                ABI::Windows::Foundation::TimeSpan typeConvertedValue;
                IFC_RETURN(SimplePropertiesCommon::ConvertToTimeSpan(value, typeConvertedValue));
                SimpleProperty::Property::id<KnownPropertyIndex::ScalarTransition_Duration>::Set(pDO, typeConvertedValue);
            }
            break;

            case KnownPropertyIndex::UIElement_CenterPoint:
            {
                ABI::Windows::Foundation::Numerics::Vector3 typeConvertedValue;
                IFC_RETURN(SimplePropertiesCommon::ConvertToVector3(value, typeConvertedValue));
                SimpleProperty::Property::id<KnownPropertyIndex::UIElement_CenterPoint>::Set(pDO, typeConvertedValue);
            }
            break;

            case KnownPropertyIndex::UIElement_KeepAliveCount:
            {
                int typeConvertedValue;
                IFC_RETURN(SimplePropertiesCommon::ConvertToInt32(value, typeConvertedValue));
                SimpleProperty::Property::id<KnownPropertyIndex::UIElement_KeepAliveCount>::Set(pDO, typeConvertedValue);
            }
            break;

            case KnownPropertyIndex::UIElement_RasterizationScale:
            {
                double typeConvertedValue;
                IFC_RETURN(SimplePropertiesCommon::ConvertToDouble(value, typeConvertedValue));
                SimpleProperty::Property::id<KnownPropertyIndex::UIElement_RasterizationScale>::Set(pDO, typeConvertedValue);
            }
            break;

            case KnownPropertyIndex::UIElement_Rotation:
            {
                double typeConvertedValue;
                IFC_RETURN(SimplePropertiesCommon::ConvertToDouble(value, typeConvertedValue));
                SimpleProperty::Property::id<KnownPropertyIndex::UIElement_Rotation>::Set(pDO, typeConvertedValue);
            }
            break;

            case KnownPropertyIndex::UIElement_RotationAxis:
            {
                ABI::Windows::Foundation::Numerics::Vector3 typeConvertedValue;
                IFC_RETURN(SimplePropertiesCommon::ConvertToVector3(value, typeConvertedValue));
                SimpleProperty::Property::id<KnownPropertyIndex::UIElement_RotationAxis>::Set(pDO, typeConvertedValue);
            }
            break;

            case KnownPropertyIndex::UIElement_Scale:
            {
                ABI::Windows::Foundation::Numerics::Vector3 typeConvertedValue;
                IFC_RETURN(SimplePropertiesCommon::ConvertToVector3(value, typeConvertedValue));
                SimpleProperty::Property::id<KnownPropertyIndex::UIElement_Scale>::Set(pDO, typeConvertedValue);
            }
            break;

            case KnownPropertyIndex::UIElement_ThemeShadowReceiverCount:
            {
                int typeConvertedValue;
                IFC_RETURN(SimplePropertiesCommon::ConvertToInt32(value, typeConvertedValue));
                SimpleProperty::Property::id<KnownPropertyIndex::UIElement_ThemeShadowReceiverCount>::Set(pDO, typeConvertedValue);
            }
            break;

            case KnownPropertyIndex::UIElement_TransformMatrix:
            {
                ABI::Windows::Foundation::Numerics::Matrix4x4 typeConvertedValue;
                IFC_RETURN(SimplePropertiesCommon::ConvertToMatrix4x4(value, typeConvertedValue));
                SimpleProperty::Property::id<KnownPropertyIndex::UIElement_TransformMatrix>::Set(pDO, typeConvertedValue);
            }
            break;

            case KnownPropertyIndex::UIElement_Translation:
            {
                ABI::Windows::Foundation::Numerics::Vector3 typeConvertedValue;
                IFC_RETURN(SimplePropertiesCommon::ConvertToVector3(value, typeConvertedValue));
                SimpleProperty::Property::id<KnownPropertyIndex::UIElement_Translation>::Set(pDO, typeConvertedValue);
            }
            break;

            case KnownPropertyIndex::Vector3Transition_Components:
            {
                ABI::Microsoft::UI::Xaml::Vector3TransitionComponents typeConvertedValue;
                IFC_RETURN(SimplePropertiesCommon::ConvertToVector3TransitionComponents(value, typeConvertedValue));
                SimpleProperty::Property::id<KnownPropertyIndex::Vector3Transition_Components>::Set(pDO, typeConvertedValue);
            }
            break;

            case KnownPropertyIndex::Vector3Transition_Duration:
            {
                ABI::Windows::Foundation::TimeSpan typeConvertedValue;
                IFC_RETURN(SimplePropertiesCommon::ConvertToTimeSpan(value, typeConvertedValue));
                SimpleProperty::Property::id<KnownPropertyIndex::Vector3Transition_Duration>::Set(pDO, typeConvertedValue);
            }
            break;

            case KnownPropertyIndex::LinearGradientBrush_CenterPoint:
            {
                ABI::Windows::Foundation::Numerics::Vector2 typeConvertedValue;
                IFC_RETURN(SimplePropertiesCommon::ConvertToVector2(value, typeConvertedValue));
                SimpleProperty::Property::id<KnownPropertyIndex::LinearGradientBrush_CenterPoint>::Set(pDO, typeConvertedValue);
            }
            break;

            case KnownPropertyIndex::LinearGradientBrush_Rotation:
            {
                double typeConvertedValue;
                IFC_RETURN(SimplePropertiesCommon::ConvertToDouble(value, typeConvertedValue));
                SimpleProperty::Property::id<KnownPropertyIndex::LinearGradientBrush_Rotation>::Set(pDO, typeConvertedValue);
            }
            break;

            case KnownPropertyIndex::LinearGradientBrush_Scale:
            {
                ABI::Windows::Foundation::Numerics::Vector2 typeConvertedValue;
                IFC_RETURN(SimplePropertiesCommon::ConvertToVector2(value, typeConvertedValue));
                SimpleProperty::Property::id<KnownPropertyIndex::LinearGradientBrush_Scale>::Set(pDO, typeConvertedValue);
            }
            break;

            case KnownPropertyIndex::LinearGradientBrush_TransformMatrix:
            {
                ABI::Windows::Foundation::Numerics::Matrix3x2 typeConvertedValue;
                IFC_RETURN(SimplePropertiesCommon::ConvertToMatrix3x2(value, typeConvertedValue));
                SimpleProperty::Property::id<KnownPropertyIndex::LinearGradientBrush_TransformMatrix>::Set(pDO, typeConvertedValue);
            }
            break;

            case KnownPropertyIndex::LinearGradientBrush_Translation:
            {
                ABI::Windows::Foundation::Numerics::Vector2 typeConvertedValue;
                IFC_RETURN(SimplePropertiesCommon::ConvertToVector2(value, typeConvertedValue));
                SimpleProperty::Property::id<KnownPropertyIndex::LinearGradientBrush_Translation>::Set(pDO, typeConvertedValue);
            }
            break;

            default:
                MICROSOFT_TELEMETRY_ASSERT_DISABLED(false);  // investigate unknown simple property
                return E_FAIL;
        }

        return S_OK;
    }
}