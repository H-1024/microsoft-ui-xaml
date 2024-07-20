// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#pragma once

class RatingControlProperties
{
public:
    RatingControlProperties();

    void Caption(winrt::hstring const& value);
    winrt::hstring Caption();

    void InitialSetValue(int value);
    int InitialSetValue();

    void IsClearEnabled(bool value);
    bool IsClearEnabled();

    void IsReadOnly(bool value);
    bool IsReadOnly();

    void ItemInfo(winrt::RatingItemInfo const& value);
    winrt::RatingItemInfo ItemInfo();

    void MaxRating(int value);
    int MaxRating();

    void PlaceholderValue(double value);
    double PlaceholderValue();

    void Value(double value);
    double Value();

    static winrt::DependencyProperty CaptionProperty() { return s_CaptionProperty; }
    static winrt::DependencyProperty InitialSetValueProperty() { return s_InitialSetValueProperty; }
    static winrt::DependencyProperty IsClearEnabledProperty() { return s_IsClearEnabledProperty; }
    static winrt::DependencyProperty IsReadOnlyProperty() { return s_IsReadOnlyProperty; }
    static winrt::DependencyProperty ItemInfoProperty() { return s_ItemInfoProperty; }
    static winrt::DependencyProperty MaxRatingProperty() { return s_MaxRatingProperty; }
    static winrt::DependencyProperty PlaceholderValueProperty() { return s_PlaceholderValueProperty; }
    static winrt::DependencyProperty ValueProperty() { return s_ValueProperty; }

    static GlobalDependencyProperty s_CaptionProperty;
    static GlobalDependencyProperty s_InitialSetValueProperty;
    static GlobalDependencyProperty s_IsClearEnabledProperty;
    static GlobalDependencyProperty s_IsReadOnlyProperty;
    static GlobalDependencyProperty s_ItemInfoProperty;
    static GlobalDependencyProperty s_MaxRatingProperty;
    static GlobalDependencyProperty s_PlaceholderValueProperty;
    static GlobalDependencyProperty s_ValueProperty;

    winrt::event_token ValueChanged(winrt::TypedEventHandler<winrt::RatingControl, winrt::IInspectable> const& value);
    void ValueChanged(winrt::event_token const& token);

    event_source<winrt::TypedEventHandler<winrt::RatingControl, winrt::IInspectable>> m_valueChangedEventSource;

    static void EnsureProperties();
    static void ClearProperties();

    static void OnCaptionPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnInitialSetValuePropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnIsClearEnabledPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnIsReadOnlyPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnItemInfoPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnMaxRatingPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnPlaceholderValuePropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnValuePropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);
};
