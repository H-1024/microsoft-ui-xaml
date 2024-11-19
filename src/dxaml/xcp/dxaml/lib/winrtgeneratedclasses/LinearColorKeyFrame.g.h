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

#include "ColorKeyFrame.g.h"

#define __LinearColorKeyFrame_GUID "5b8075f8-9d50-41bb-8710-7c268a1a4530"

namespace DirectUI
{
    class LinearColorKeyFrame;

    class __declspec(novtable) __declspec(uuid(__LinearColorKeyFrame_GUID)) LinearColorKeyFrame:
        public DirectUI::ColorKeyFrame
        , public ABI::Microsoft::UI::Xaml::Media::Animation::ILinearColorKeyFrame
    {

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Media.Animation.LinearColorKeyFrame");

        BEGIN_INTERFACE_MAP(LinearColorKeyFrame, DirectUI::ColorKeyFrame)
            INTERFACE_ENTRY(LinearColorKeyFrame, ABI::Microsoft::UI::Xaml::Media::Animation::ILinearColorKeyFrame)
        END_INTERFACE_MAP(LinearColorKeyFrame, DirectUI::ColorKeyFrame)

    public:
        LinearColorKeyFrame();
        ~LinearColorKeyFrame() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::LinearColorKeyFrame;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::LinearColorKeyFrame;
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

