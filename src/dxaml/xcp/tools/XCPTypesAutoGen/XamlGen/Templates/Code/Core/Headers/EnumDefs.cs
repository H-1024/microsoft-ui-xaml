// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.
// ------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Runtime Version: 15.0.0.0
//  
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
// ------------------------------------------------------------------------------
namespace XamlGen.Templates.Code.Core.Headers
{
    using System.Linq;
    using System.Text;
    using System.Collections.Generic;
    using OM;
    using System;
    
    /// <summary>
    /// Class to produce the template output
    /// </summary>
    [global::System.CodeDom.Compiler.GeneratedCodeAttribute("Microsoft.VisualStudio.TextTemplating", "15.0.0.0")]
    public partial class EnumDefs : CppCodeGenerator<OMContextView>
    {
        /// <summary>
        /// Create the template output
        /// </summary>
        public override string TransformText()
        {
            this.Write(this.ToStringHelper.ToStringWithCulture(IncludeTemplate<Copyright>()));
            this.Write("\r\n\r\n#pragma once\r\n\r\nnamespace ");
            this.Write(this.ToStringHelper.ToStringWithCulture(OMContext.DefaultImplementationNamespace));
            this.Write("\r\n{\r\n");
 foreach (var type in Model.GetAllEnums().Where(t => t.GenerateInCore && !t.XamlEnumFlags.IsExcludedFromNative).OrderBy(t => t.Name)) { 
            this.Write("    enum class ");
            this.Write(this.ToStringHelper.ToStringWithCulture(type.Name));
            this.Write(" ");
            this.Write(this.ToStringHelper.ToStringWithCulture(type.GetNativeTypeSpecification()));
            this.Write("\r\n    {\r\n");
     foreach (var value in type.Values) { 
            this.Write("        ");
            this.Write(this.ToStringHelper.ToStringWithCulture(value.Name));
            this.Write(" = ");
            this.Write(this.ToStringHelper.ToStringWithCulture((type.XamlEnumFlags.AreValuesFlags ? string.Format("0x{0:X}", value.Value) : value.Value.ToString())));
            this.Write(",\r\n");
     } 
            this.Write("    };\r\n    DEFINE_ENUM_FLAG_OPERATORS(");
            this.Write(this.ToStringHelper.ToStringWithCulture(type.Name));
            this.Write(");\r\n\r\n");
 if (type.XamlEnumFlags.GenerateConsecutiveEnum) { 
            this.Write("    enum class ");
            this.Write(this.ToStringHelper.ToStringWithCulture(type.Name));
            this.Write("Consecutive : uint32_t\r\n    {\r\n");
     for (int i = 0; i < type.Values.Count; i++) { 
            this.Write("        ");
            this.Write(this.ToStringHelper.ToStringWithCulture(type.Values[i].Name));
            this.Write(" = ");
            this.Write(this.ToStringHelper.ToStringWithCulture((type.XamlEnumFlags.AreValuesFlags ? string.Format("0x{0:X}", i) : i.ToString())));
            this.Write(",\r\n");
  } 
            this.Write("        InvalidValue = ");
            this.Write(this.ToStringHelper.ToStringWithCulture(type.Values.Count));
            this.Write("\r\n    };\r\n\r\n    ");
            this.Write(this.ToStringHelper.ToStringWithCulture(type.Name));
            this.Write("Consecutive Convert(");
            this.Write(this.ToStringHelper.ToStringWithCulture(type.Name));
            this.Write(" value);\r\n\r\n");
 } 
 } 
            this.Write("}\r\n");
            return this.GenerationEnvironment.ToString();
        }
    }
}
