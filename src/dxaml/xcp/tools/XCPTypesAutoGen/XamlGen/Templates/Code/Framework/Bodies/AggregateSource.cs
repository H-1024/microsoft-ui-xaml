﻿// ------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Runtime Version: 16.0.0.0
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
    [global::System.CodeDom.Compiler.GeneratedCodeAttribute("Microsoft.VisualStudio.TextTemplating", "16.0.0.0")]
    public partial class AggregateSource : CppCodeGenerator<OMContextView>
    {
        /// <summary>
        /// Create the template output
        /// </summary>
        public override string TransformText()
        {
            this.Write(this.ToStringHelper.ToStringWithCulture(IncludeTemplate<Copyright>()));
            this.Write("\r\n\r\n#include \"precomp.h\"\r\n\r\nusing namespace ");
            this.Write(this.ToStringHelper.ToStringWithCulture(OMContext.DefaultImplementationNamespace));
            this.Write(";\r\n\r\n");
 foreach (var type in Model.GetAllClasses().Where(c => c.GenerateFrameworkCppFile)) { 
            this.Write("#include \"");
            this.Write(this.ToStringHelper.ToStringWithCulture(type.CppFrameworkGeneratedBodyFileName));
            this.Write("\"\r\n");
 } 
            return this.GenerationEnvironment.ToString();
        }
    }
}
