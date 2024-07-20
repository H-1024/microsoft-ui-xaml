﻿// ------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Runtime Version: 17.0.0.0
//  
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
// ------------------------------------------------------------------------------
namespace Microsoft.UI.Xaml.Markup.Compiler.CodeGen
{
    using System;
    
    /// <summary>
    /// Class to produce the template output
    /// </summary>
    [global::System.CodeDom.Compiler.GeneratedCodeAttribute("Microsoft.VisualStudio.TextTemplating", "17.0.0.0")]
    internal partial class CppWinRT_TemplatedMetadataDelegates : CppWinRT_CodeGenerator<TypeInfoDefinition>
    {
        /// <summary>
        /// Create the template output
        /// </summary>
        public override string TransformText()
        {
            this.Write("template <typename T>\r\n");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.WindowsFoundation)));
            this.Write("::IInspectable ActivateType()\r\n{\r\n    return T();\r\n}\r\n\r\ntemplate <typename T>\r\n");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.WindowsFoundation)));
            this.Write("::IInspectable ActivateLocalType()\r\n{\r\n    return ::winrt::make<T>();\r\n}\r\n\r\ntempl" +
                    "ate<typename TInstance, typename TItem>\r\nvoid CollectionAdd(\r\n    ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.WindowsFoundation)));
            this.Write("::IInspectable const& instance, \r\n    ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.WindowsFoundation)));
            this.Write("::IInspectable const& item)\r\n{\r\n    instance.as<TInstance>().Append(::winrt::unbo" +
                    "x_value<TItem>(item));\r\n}\r\n\r\ntemplate<typename TInstance, typename TKey, typenam" +
                    "e TItem>\r\nvoid DictionaryAdd(\r\n    ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.WindowsFoundation)));
            this.Write("::IInspectable const& instance,\r\n    ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.WindowsFoundation)));
            this.Write("::IInspectable const& key,\r\n    ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.WindowsFoundation)));
            this.Write("::IInspectable const& item)\r\n{\r\n    instance.as<TInstance>().Insert(::winrt::unbo" +
                    "x_value<TKey>(key), ::winrt::unbox_value<TItem>(item));\r\n}\r\n\r\ntemplate<typename " +
                    "T>\r\n");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.WindowsFoundation)));
            this.Write("::IInspectable FromStringConverter(\r\n    XamlUserType const& userType, \r\n    ::wi" +
                    "nrt::hstring const& input)\r\n{\r\n    return ::winrt::box_value(static_cast<T>(user" +
                    "Type.CreateEnumUIntFromString(input)));\r\n}\r\n");
  foreach(String name in Model.AttachableMemberGetterUniqueNames) 
  { 
            this.Write("\r\ntemplate<typename TDeclaringType, typename TargetType>\r\n");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.WindowsFoundation)));
            this.Write("::IInspectable GetAttachableMember_");
            this.Write(this.ToStringHelper.ToStringWithCulture(name));
            this.Write("(");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.WindowsFoundation)));
            this.Write("::IInspectable const& instance)\r\n{\r\n    return ::winrt::box_value(TDeclaringType:" +
                    ":Get");
            this.Write(this.ToStringHelper.ToStringWithCulture(name));
            this.Write("(instance.as<TargetType>()));\r\n}\r\n");
  } 
  foreach(String name in Model.ValueTypeMemberGetterUniqueNames) 
  { 
            this.Write("\r\ntemplate<typename TDeclaringType, typename TValue>\r\n");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.WindowsFoundation)));
            this.Write("::IInspectable GetValueTypeMember_");
            this.Write(this.ToStringHelper.ToStringWithCulture(name));
            this.Write("(");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.WindowsFoundation)));
            this.Write("::IInspectable const& instance)\r\n{\r\n    return ::winrt::box_value<TValue>(instanc" +
                    "e.as<TDeclaringType>().");
            this.Write(this.ToStringHelper.ToStringWithCulture(name));
            this.Write("());\r\n}\r\n");
  } 
  foreach(String name in Model.StringGetterUniqueNames) 
  { 
            this.Write("\r\ntemplate <typename T>\r\n");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.WindowsFoundation)));
            this.Write("::IInspectable GetReferenceTypeStringMember_");
            this.Write(this.ToStringHelper.ToStringWithCulture(name));
            this.Write("(");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.WindowsFoundation)));
            this.Write("::IInspectable const& instance)\r\n{\r\n   return ::winrt::box_value(");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.WindowsFoundation)));
            this.Write("::PropertyValue::CreateString(instance.as<T>().");
            this.Write(this.ToStringHelper.ToStringWithCulture(name));
            this.Write("()));\r\n}\r\n");
  } 
  foreach(String name in Model.ReferenceTypeMemberGetterUniqueNamesNoStrings) 
  { 
            this.Write("\r\ntemplate <typename T>\r\n");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.WindowsFoundation)));
            this.Write("::IInspectable GetReferenceTypeMember_");
            this.Write(this.ToStringHelper.ToStringWithCulture(name));
            this.Write("(");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.WindowsFoundation)));
            this.Write("::IInspectable const& instance)\r\n{\r\n    return ::winrt::box_value(instance.as<T>(" +
                    ").");
            this.Write(this.ToStringHelper.ToStringWithCulture(name));
            this.Write("());\r\n}\r\n");
  } 
  foreach(String name in Model.AttachableMemberSetterUniqueNames) 
  { 
            this.Write("\r\ntemplate<typename TDeclaringType, typename TTargetType, typename TValue>\r\nvoid " +
                    "SetAttachableMember_");
            this.Write(this.ToStringHelper.ToStringWithCulture(name));
            this.Write("(");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.WindowsFoundation)));
            this.Write("::IInspectable const& instance, ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.WindowsFoundation)));
            this.Write("::IInspectable const& value)\r\n{\r\n    TDeclaringType::Set");
            this.Write(this.ToStringHelper.ToStringWithCulture(name));
            this.Write("(instance.as<TTargetType>(), ::winrt::unbox_value<TValue>(value));\r\n}\r\n");
  } 
  foreach(String name in Model.EnumTypeMemberSetterUniqueNames) 
  { 
            this.Write("\r\ntemplate<typename TDeclaringType, typename TValue>\r\nvoid SetEnumMember_");
            this.Write(this.ToStringHelper.ToStringWithCulture(name));
            this.Write("(\r\n    ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.WindowsFoundation)));
            this.Write("::IInspectable const& instance, \r\n    ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.WindowsFoundation)));
            this.Write("::IInspectable const& value)\r\n{\r\n    instance.as<TDeclaringType>().");
            this.Write(this.ToStringHelper.ToStringWithCulture(name));
            this.Write("(::winrt::unbox_value<TValue>(value));\r\n}\r\n");
  } 
  foreach(String name in Model.ValueTypeMemberSetterUniqueNames) 
  { 
            this.Write("\r\ntemplate<typename TDeclaringType, typename TValue>\r\nvoid SetValueTypeMember_");
            this.Write(this.ToStringHelper.ToStringWithCulture(name));
            this.Write("(\r\n    ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.WindowsFoundation)));
            this.Write("::IInspectable const& instance, \r\n    ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.WindowsFoundation)));
            this.Write("::IInspectable const& value)\r\n{\r\n    instance.as<TDeclaringType>().");
            this.Write(this.ToStringHelper.ToStringWithCulture(name));
            this.Write("(::winrt::unbox_value<TValue>(value));\r\n}\r\n");
  } 
  foreach(String name in Model.StringSetterUniqueNames) 
  { 
            this.Write("\r\ntemplate<typename TDeclaringType, typename TValue>\r\nvoid SetReferenceTypeString" +
                    "Member_");
            this.Write(this.ToStringHelper.ToStringWithCulture(name));
            this.Write("(\r\n    ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.WindowsFoundation)));
            this.Write("::IInspectable const& instance, \r\n    ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.WindowsFoundation)));
            this.Write("::IInspectable const& value)\r\n{\r\n    return instance.as<TDeclaringType>().");
            this.Write(this.ToStringHelper.ToStringWithCulture(name));
            this.Write("(::winrt::unbox_value<::winrt::hstring>(value));\r\n}\r\n");
  } 
  foreach(String name in Model.ReferenceTypeMemberSetterUniqueNamesNoStrings) 
  { 
            this.Write("\r\ntemplate<typename TDeclaringType, typename TValue>\r\nvoid SetReferenceTypeMember" +
                    "_");
            this.Write(this.ToStringHelper.ToStringWithCulture(name));
            this.Write("(\r\n    ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.WindowsFoundation)));
            this.Write("::IInspectable const& instance, \r\n    ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.WindowsFoundation)));
            this.Write("::IInspectable const& value)\r\n{\r\n    instance.as<TDeclaringType>().");
            this.Write(this.ToStringHelper.ToStringWithCulture(name));
            this.Write("(value.as<TValue>());\r\n}\r\n");
  } 
            return this.GenerationEnvironment.ToString();
        }
    }
}
