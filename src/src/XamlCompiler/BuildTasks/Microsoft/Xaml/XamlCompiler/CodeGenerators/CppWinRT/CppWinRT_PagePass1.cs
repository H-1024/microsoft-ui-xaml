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
    internal partial class CppWinRT_PagePass1 : CppWinRT_CodeGenerator<PageDefinition>
    {
        /// <summary>
        /// Create the template output
        /// </summary>
        public override string TransformText()
        {
            this.Write(@"
//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------
#pragma once

#include <unknwn.h>

// Undefine GetCurrentTime macro to prevent
// conflict with Storyboard::GetCurrentTime
#undef GetCurrentTime

");
  foreach (var includeFile in Model.NeededCppWinRTProjectionHeaderFiles) { 
            this.Write("#if __has_include(<");
            this.Write(this.ToStringHelper.ToStringWithCulture(includeFile));
            this.Write(">)\r\n#include <");
            this.Write(this.ToStringHelper.ToStringWithCulture(includeFile));
            this.Write(">\r\n#endif\r\n");
  }
            this.Write("\r\n");
  if (Model.CodeInfo.BindStatus != BindStatus.None) { 
            this.Write("#include \"XamlBindingInfo.xaml.g.h\"\r\n");
  } 
            this.Write("\r\nnamespace winrt::");
            this.Write(this.ToStringHelper.ToStringWithCulture(Colonize(Model.CodeInfo.ClassName.Namespace)));
            this.Write("::implementation\r\n{\r\n    using IInspectable = ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.WindowsFoundation)));
            this.Write("::IInspectable;\r\n\r\n    template <typename D, typename ... I>\r\n    struct ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Model.CodeInfo.ClassName.ShortName));
            this.Write("T : public ::winrt::");
            this.Write(this.ToStringHelper.ToStringWithCulture(Colonize(Model.CodeInfo.ClassName.Namespace)));
            this.Write("::implementation::");
            this.Write(this.ToStringHelper.ToStringWithCulture(Model.CodeInfo.ClassName.ShortName));
            this.Write("_base<D,\r\n");
  if (Model.CodeInfo.HasInComponentBase) { 
            this.Write("        ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(Model.CodeInfo.BaseTypeName).ToLocalCppWinRTTypeName()));
            this.Write(",\r\n");
  } else { 
            this.Write("        ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.XamlMarkup)));
            this.Write("::IComponentConnector,\r\n");
  } 
            this.Write("        I...>\r\n    {\r\n        using base_type = typename ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Model.CodeInfo.ClassName.ShortName));
            this.Write("T::base_type;\r\n        using base_type::base_type;\r\n        using class_type = ty" +
                    "pename ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Model.CodeInfo.ClassName.ShortName));
            this.Write("T::class_type;\r\n\r\n        void InitializeComponent();\r\n");
  if (Model.CodeInfo.PerXamlFileInfo.Count > 1) { 
            this.Write("        void InitializeComponent(");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.WindowsFoundation)));
            this.Write("::Uri const& resourceLocator);\r\n");
  }
            this.Write("        virtual void Connect(int32_t connectionId, IInspectable const& target);\r\n" +
                    "        virtual ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.XamlMarkup)));
            this.Write("::IComponentConnector GetBindingConnector(int32_t connectionId, IInspectable cons" +
                    "t& target);\r\n        void UnloadObject(");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(KnownNamespaces.Xaml)));
            this.Write("::DependencyObject const& dependencyObject);\r\n        void DisconnectUnloadedObje" +
                    "ct(int32_t connectionId);\r\n");
  foreach (var fieldData in Model.CodeInfo.FieldDeclarations) {
        if (fieldData.IsDeprecated) { 
            this.Write("#pragma warning(push)\r\n#pragma warning(disable : 4973)\r\n");
      }
            this.Write("\r\n        ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(fieldData.FieldTypeName)));
            this.Write(" ");
            this.Write(this.ToStringHelper.ToStringWithCulture(fieldData.FieldName));
            this.Write("()\r\n        {\r\n            return _");
            this.Write(this.ToStringHelper.ToStringWithCulture(fieldData.FieldName));
            this.Write(";\r\n        }\r\n        void ");
            this.Write(this.ToStringHelper.ToStringWithCulture(fieldData.FieldName));
            this.Write("(");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(fieldData.FieldTypeName)));
            this.Write(" value)\r\n        {\r\n            _");
            this.Write(this.ToStringHelper.ToStringWithCulture(fieldData.FieldName));
            this.Write(" = value;\r\n        }\r\n");
      if (fieldData.IsDeprecated) { 
            this.Write("#pragma warning(pop)\r\n");
      }
  }
            this.Write("        ");
  if (Model.CodeInfo.BindStatus != BindStatus.None) { 
            this.Write("\r\n         ::winrt::com_ptr<");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(ProjectInfo.RootNamespace)));
            this.Write("::implementation::XamlBindings> Bindings;\r\n");
  } 
            this.Write("\r\n    protected:\r\n        bool _contentLoaded{false};\r\n\r\n    private:\r\n");
  foreach (BindUniverse bindUniverse in Model.CodeInfo.BindUniverses) { 
            this.Write("        struct ");
            this.Write(this.ToStringHelper.ToStringWithCulture(bindUniverse.BindingsClassName));
            this.Write(";\r\n");
  }
            this.Write("\r\n");
  foreach (var fieldData in Model.CodeInfo.FieldDeclarations) { 
      if (fieldData.IsDeprecated) { 
            this.Write("#pragma warning(push)\r\n#pragma warning(disable : 4973)\r\n");
      }
            this.Write("        ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Projection(fieldData.FieldTypeName)));
            this.Write(" _");
            this.Write(this.ToStringHelper.ToStringWithCulture(fieldData.FieldName));
            this.Write("{nullptr};\r\n");
      if (fieldData.IsDeprecated) { 
            this.Write("#pragma warning(pop)\r\n");
      }
  }
            this.Write("    };\r\n}\r\n");
            return this.GenerationEnvironment.ToString();
        }
    }
}
