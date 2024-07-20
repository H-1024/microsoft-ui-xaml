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
    public partial class Struct : CppCodeGenerator<ClassDefinition>
    {
        /// <summary>
        /// Create the template output
        /// </summary>
        public override string TransformText()
        {
            this.Write(this.ToStringHelper.ToStringWithCulture(IncludeTemplate<Copyright>()));
            this.Write("\r\n\r\n#include \"");
            this.Write(this.ToStringHelper.ToStringWithCulture(Model.CppFrameworkGeneratedHeaderFileName));
            this.Write("\"\r\n\r\nusing namespace ");
            this.Write(this.ToStringHelper.ToStringWithCulture(OMContext.DefaultImplementationNamespace));
            this.Write(";\r\n\r\n");
 if (Model.IdlClassInfo.HasAnyFactoryInterfaces) { 
            this.Write("HRESULT ");
            this.Write(this.ToStringHelper.ToStringWithCulture(AsCppType(Model.GeneratedFactoryFullName)));
            this.Write("::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)\r\n{\r\n");
     using (var headerGenerator = new HeaderGenerator())
       {
           foreach (var version in Model.Versions.OrderBy(v => v.Version).Select(v => v.GetProjection())) {
               if (version.IdlClassInfo.HasFactoryMethods) { 
            this.Write("    ");
 if (!headerGenerator.IsFirst) { 
            this.Write("else ");
 } 
            this.Write("if (InlineIsEqualGUID(iid, __uuidof(");
            this.Write(this.ToStringHelper.ToStringWithCulture(AsCppType(version.IdlClassInfo.FullFactoryInterfaceName)));
            this.Write(")))\r\n    {\r\n        *ppObject = static_cast<");
            this.Write(this.ToStringHelper.ToStringWithCulture(AsCppType(version.IdlClassInfo.FullFactoryInterfaceName)));
            this.Write("*>(this);\r\n    }\r\n");
             }
               if (version.IdlClassInfo.HasStaticMembers) { 
            this.Write("    ");
 if (!headerGenerator.IsFirst) { 
            this.Write("else ");
 } 
            this.Write("if (InlineIsEqualGUID(iid, __uuidof(");
            this.Write(this.ToStringHelper.ToStringWithCulture(AsCppType(version.IdlClassInfo.FullStaticMembersInterfaceName)));
            this.Write(")))\r\n    {\r\n        *ppObject = static_cast<");
            this.Write(this.ToStringHelper.ToStringWithCulture(AsCppType(version.IdlClassInfo.FullStaticMembersInterfaceName)));
            this.Write("*>(this);\r\n    }\r\n");
             }
           } 
            this.Write("    else\r\n    {\r\n        RRETURN(");
            this.Write(this.ToStringHelper.ToStringWithCulture(GetBaseFactoryFullName(Model)));
            this.Write("::QueryInterfaceImpl(iid, ppObject));\r\n    }\r\n\r\n    AddRefOuter();\r\n    RRETURN(S" +
                    "_OK);\r\n");
     } 
            this.Write("}\r\n");
 } 
            this.Write("\r\n");
 if (Model.IdlClassInfo.HasRuntimeClass) { 
            this.Write("namespace ");
            this.Write(this.ToStringHelper.ToStringWithCulture(OMContext.DefaultImplementationNamespace));
            this.Write("\r\n{\r\n");
     if (Model.IdlClassInfo.HasRuntimeClass) { 
            this.Write("    _Check_return_ IActivationFactory* ");
            this.Write(this.ToStringHelper.ToStringWithCulture(Model.FactoryConstructor));
            this.Write("()\r\n    {\r\n        RRETURN(ctl::ActivationFactoryCreator<");
            this.Write(this.ToStringHelper.ToStringWithCulture(GetFactoryFullName(Model)));
            this.Write(">::CreateActivationFactory());\r\n    }\r\n");
     } 
            this.Write("}\r\n");
 } 
            return this.GenerationEnvironment.ToString();
        }
    }
}
