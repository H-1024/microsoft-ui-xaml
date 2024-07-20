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
namespace XamlGen.Templates.Code.Framework.Bodies
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
    public partial class AttachedPropertyGetterBody : CppCodeGenerator<AttachedPropertyDefinition>
    {
        /// <summary>
        /// Create the template output
        /// </summary>
        public override string TransformText()
        {
            this.Write("    RRETURN(DependencyObject::GetAttachedValueByKnownIndex(static_cast<");
            this.Write(this.ToStringHelper.ToStringWithCulture(AsCppType(Model.TargetType.AbiImplementationFullName)));
            this.Write("*>(");
            this.Write(this.ToStringHelper.ToStringWithCulture(Model.TargetType.AbiParameterName));
            this.Write("), ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Model.IndexName));
            this.Write(", ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Model.PropertyType.AbiReturnParameterName));
            this.Write("));");
            return this.GenerationEnvironment.ToString();
        }
    }
}
