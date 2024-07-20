// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#include "precomp.h"
#include "Activators.g.h"
#include "GettingFocusEventArgs.h"

_Check_return_ HRESULT CGettingFocusEventArgs::get_OldFocusedElement(_Outptr_ CDependencyObject** oldFocusedElement)
{
    m_oldFocusedElement.CopyTo(oldFocusedElement);
    return S_OK;
}

_Check_return_ HRESULT CGettingFocusEventArgs::get_NewFocusedElement(_Outptr_ CDependencyObject** newFocusedElement)
{
    m_newFocusedElement.CopyTo(newFocusedElement);
    return S_OK;
}

_Check_return_ HRESULT CGettingFocusEventArgs::put_NewFocusedElement(_In_ CDependencyObject* newFocusedElement)
{
    if (!m_bCanCancelOrRedirectFocus)
    {
        IFC_RETURN(E_INVALIDARG);
    }
    m_newFocusedElement = newFocusedElement;
    return S_OK;
}

_Check_return_ HRESULT CGettingFocusEventArgs::get_FocusState(_Out_ DirectUI::FocusState* focusState)
{
    *focusState = m_focusState;
    return S_OK;
}

_Check_return_ HRESULT CGettingFocusEventArgs::get_Direction(_Out_ DirectUI::FocusNavigationDirection* focusNavigationDirection)
{
    *focusNavigationDirection = m_focusNavigationDirection;
    return S_OK;
}

_Check_return_ HRESULT CGettingFocusEventArgs::get_Handled(_Out_ BOOLEAN *handled)
{
    *handled = (m_bHandled == TRUE);
    return S_OK;
}

_Check_return_ HRESULT CGettingFocusEventArgs::put_Handled(_In_ BOOLEAN handled)
{
    m_bHandled = handled;
    return S_OK;
}

_Check_return_ HRESULT CGettingFocusEventArgs::get_InputDevice(_Out_ DirectUI::FocusInputDeviceKind* inputDevice)
{
    *inputDevice = m_inputDevice;
    return S_OK;
}

_Check_return_ HRESULT CGettingFocusEventArgs::get_CorrelationId(_Out_ GUID* correlationId)
{
    *correlationId = m_correlationId;
    return S_OK;
}

_Check_return_ HRESULT CGettingFocusEventArgs::get_Cancel(_Out_ BOOLEAN* cancel)
{
    *cancel = m_bCancel;
    return S_OK;
}
_Check_return_ HRESULT CGettingFocusEventArgs::put_Cancel(BOOLEAN cancel)
{
    if (!m_bCanCancelOrRedirectFocus && cancel)
    {
        IFC_RETURN(E_INVALIDARG);
    }
    m_bCancel = !!cancel;
    return S_OK;
}

_Check_return_ HRESULT CGettingFocusEventArgs::CreateFrameworkPeer(_Outptr_ IInspectable** ppPeer)
{
    IFC_RETURN(DirectUI::OnFrameworkCreateGettingFocusEventArgs(this, ppPeer));

    return S_OK;
}