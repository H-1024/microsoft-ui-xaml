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


#define __DragItemsStartingEventArgs_GUID "2da913d5-3a7b-4fab-9d39-d9b6aeb8f15c"

namespace DirectUI
{
    class DragItemsStartingEventArgs;

    class __declspec(novtable) __declspec(uuid(__DragItemsStartingEventArgs_GUID)) DragItemsStartingEventArgs :
        public ABI::Microsoft::UI::Xaml::Controls::IDragItemsStartingEventArgs,
        public DirectUI::EventArgs
    {

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Controls.DragItemsStartingEventArgs");

        BEGIN_INTERFACE_MAP(DragItemsStartingEventArgs, DirectUI::EventArgs)
            INTERFACE_ENTRY(DragItemsStartingEventArgs, ABI::Microsoft::UI::Xaml::Controls::IDragItemsStartingEventArgs)
        END_INTERFACE_MAP(DragItemsStartingEventArgs, DirectUI::EventArgs)

    public:
        DragItemsStartingEventArgs();
        ~DragItemsStartingEventArgs() override;

        // Properties.
        IFACEMETHOD(get_Cancel)(_Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(put_Cancel)(BOOLEAN value) override;
        IFACEMETHOD(get_Items)(_Outptr_result_maybenull_ ABI::Windows::Foundation::Collections::IVector<IInspectable*>** ppValue) override;
        _Check_return_ HRESULT put_Items(_In_opt_ ABI::Windows::Foundation::Collections::IVector<IInspectable*>* pValue);
        IFACEMETHOD(get_Data)(_Outptr_result_maybenull_ ABI::Windows::ApplicationModel::DataTransfer::IDataPackage** ppValue) override;
        _Check_return_ HRESULT put_Data(_In_opt_ ABI::Windows::ApplicationModel::DataTransfer::IDataPackage* pValue);

        // Methods.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:
        // Customized properties.

        // Customized methods.

        // Fields.
        BOOLEAN m_cancel;
        TrackerPtr<ABI::Windows::Foundation::Collections::IVector<IInspectable*>> m_pItems;
        TrackerPtr<ABI::Windows::ApplicationModel::DataTransfer::IDataPackage> m_pData;
    };
}


