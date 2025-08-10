#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>
struct KeyCollection_tCC15D033281A6593E2488FAF5B205812A152AC03;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>
struct ValueCollection_tCE6BD704B9571C131E2D8C8CED569DDEC4AE042B;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Int32>[]
struct EntryU5BU5D_tEA0133B78B9FF7045128C508FA50247E525A94D6;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Xml.XmlTextWriter/Namespace[]
struct NamespaceU5BU5D_tF0F2AD10B1537EBB0F35B1611FD7D89D48FA9E93;
// System.Xml.XmlTextWriter/State[]
struct StateU5BU5D_t41A58B7031FABDC61B34059A1FB722121203D858;
// System.Xml.XmlTextWriter/TagInfo[]
struct TagInfoU5BU5D_tC6FBAFF4593190EF8F7EEBAB8913C4E17D645776;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.Xml.Base64Encoder
struct Base64Encoder_tA62CD5B68BCE27F764FAA91A7FCE6583772978A2;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Exception
struct Exception_t;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Xml.SecureStringHasher
struct SecureStringHasher_t4052E73C966E6FE65426B19F4AF48AB9869F614E;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.Runtime.Serialization.SerializationInfoEnumerator
struct SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.IO.StringWriter
struct StringWriter_tF48052BE4F980E5C85403221E835768E4156267D;
// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.IO.TextWriter
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3;
// System.Type
struct Type_t;
// System.Text.UnicodeEncoding
struct UnicodeEncoding_t2C90D9E1E55C16081FACA57B229053C1EF05DAF0;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Xml.XmlChildEnumerator
struct XmlChildEnumerator_tDD03B83EAA250AB86DFF4B53C1430DA942E85939;
// System.Xml.XmlDOMTextWriter
struct XmlDOMTextWriter_t362092F200AC52B03B5A7E4D443A3D04134C02AF;
// System.Xml.XmlException
struct XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C;
// System.Xml.XmlNode
struct XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF;
// System.Xml.XmlTextEncoder
struct XmlTextEncoder_tACD13BCC8237E0710F82A7703FAF7D09FCDF0C40;
// System.Xml.XmlTextWriter
struct XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B;
// System.Xml.XmlTextWriterBase64Encoder
struct XmlTextWriterBase64Encoder_tC7209F119916DF622459E830377C23D7BFA2B30D;
// System.Xml.XmlWriter
struct XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F;
// System.Xml.SecureStringHasher/HashCodeOfStringDelegate
struct HashCodeOfStringDelegate_t9AB4FF441166EF88D20657805C4FA187C4FF5046;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashCodeOfStringDelegate_t9AB4FF441166EF88D20657805C4FA187C4FF5046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NamespaceU5BU5D_tF0F2AD10B1537EBB0F35B1611FD7D89D48FA9E93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SecureStringHasher_t4052E73C966E6FE65426B19F4AF48AB9869F614E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StateU5BU5D_t41A58B7031FABDC61B34059A1FB722121203D858_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TagInfoU5BU5D_tC6FBAFF4593190EF8F7EEBAB8913C4E17D645776_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlChildEnumerator_tDD03B83EAA250AB86DFF4B53C1430DA942E85939_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlDOMTextWriter_t362092F200AC52B03B5A7E4D443A3D04134C02AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlTextEncoder_tACD13BCC8237E0710F82A7703FAF7D09FCDF0C40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBAB6DC40B1709E21296656960228A17F1BE57FD7____D1D9AF18AFC4E3074AF5E4C44B81B73889D033D7AF6DFEB387BBCC76B36FE8B9_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBAB6DC40B1709E21296656960228A17F1BE57FD7____DACC0E6568D9B10337A1A693F10D42C3175E80C378154406C6FBFA989F919F51_1_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBAB6DC40B1709E21296656960228A17F1BE57FD7____DB7DD2341DB9D4574E432AAAFF03FB0A3E8FF2F645A337077EDF0C6FE902E660_2_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBAB6DC40B1709E21296656960228A17F1BE57FD7____DBBF94CCF4250B303976041627BB8FC302CE57D55373C469F41F97318412037D_3_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02E5C3B8AD72F3FC46F6C829AB1FEDDC9B115473;
IL2CPP_EXTERN_C String_t* _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626;
IL2CPP_EXTERN_C String_t* _stringLiteral0BA9045FCB28C8C8B2ACED641BB5013BAC05D492;
IL2CPP_EXTERN_C String_t* _stringLiteral0E0426234071F961E725D9438C6D5A048A0394B3;
IL2CPP_EXTERN_C String_t* _stringLiteral0FD08B3C99047786420F2D9A7AC37D5DC351C9C8;
IL2CPP_EXTERN_C String_t* _stringLiteral120472D8D40924F6F8355A94DB677A8F142E2EB6;
IL2CPP_EXTERN_C String_t* _stringLiteral16C0D1A98D99C5FB32B981C3E41FDB407A083C18;
IL2CPP_EXTERN_C String_t* _stringLiteral1710B4477A01FFE20514D8AA61891F364D71C25B;
IL2CPP_EXTERN_C String_t* _stringLiteral197DB4D12C3F8F844439AC8086D04A7E9906FD24;
IL2CPP_EXTERN_C String_t* _stringLiteral1E1DB32AFA986C58B9ACC9C146BF83E67C0DCE66;
IL2CPP_EXTERN_C String_t* _stringLiteral2309CFA4F156DCCB12A14E727DCE560E1426B532;
IL2CPP_EXTERN_C String_t* _stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94;
IL2CPP_EXTERN_C String_t* _stringLiteral2343901946DDD83EFBB8B93C33F01CBD394063B2;
IL2CPP_EXTERN_C String_t* _stringLiteral23A6BF321FC205420788A7F2E1A1334F6C712C89;
IL2CPP_EXTERN_C String_t* _stringLiteral23E65142459FB1BF5009AD8736318547A5DFE850;
IL2CPP_EXTERN_C String_t* _stringLiteral32189949CB1CA4A6EBB1A643EBE2DB69713D5407;
IL2CPP_EXTERN_C String_t* _stringLiteral349C6DC0F34B9BA242E4C728EDD28CAB809D4917;
IL2CPP_EXTERN_C String_t* _stringLiteral35B44AA64754DEDC52915E7F763C081CF5B004D9;
IL2CPP_EXTERN_C String_t* _stringLiteral3D9E33C04AB4A0A0E8E88B74BB9D5F9003E15C78;
IL2CPP_EXTERN_C String_t* _stringLiteral3EBF7CFEC7929F196835D5D12FBBE2F845BF2A5F;
IL2CPP_EXTERN_C String_t* _stringLiteral41477B187466178A05A136C12F806B3EDCAB6349;
IL2CPP_EXTERN_C String_t* _stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE;
IL2CPP_EXTERN_C String_t* _stringLiteral45B9464D208C0A900770E5F7A95E5FE067CD4CCC;
IL2CPP_EXTERN_C String_t* _stringLiteral47EB169AEE74B181812673783C66416B39F5F464;
IL2CPP_EXTERN_C String_t* _stringLiteral4A962F7AAEC3B50EF4B2CD52A7A2C969B759A960;
IL2CPP_EXTERN_C String_t* _stringLiteral4B4906CA939816C30A7D9C9A911CF6A9F506CCE3;
IL2CPP_EXTERN_C String_t* _stringLiteral513659CEF285C73478E9829E41D7E4C23DB53E12;
IL2CPP_EXTERN_C String_t* _stringLiteral5296173AB8D4E282E989F7B0B7B7C9A3ACF26E18;
IL2CPP_EXTERN_C String_t* _stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4;
IL2CPP_EXTERN_C String_t* _stringLiteral56EF1F2751B48DAA3EC7F762F420920B8E40757A;
IL2CPP_EXTERN_C String_t* _stringLiteral5C7DA3CBD254CB3BB9FCC98E58CF1A56E605861E;
IL2CPP_EXTERN_C String_t* _stringLiteral63D27168A6FFA4A02D5FDBA464A248377E88F4F4;
IL2CPP_EXTERN_C String_t* _stringLiteral67171AD8B6817F7CF25B89C98234BCDA36D476FC;
IL2CPP_EXTERN_C String_t* _stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044;
IL2CPP_EXTERN_C String_t* _stringLiteral7BBD8C0287448D34297B233D6604618390BA9C38;
IL2CPP_EXTERN_C String_t* _stringLiteral81ABCB006928101D1882FA2FBB7BFA00FE053221;
IL2CPP_EXTERN_C String_t* _stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE;
IL2CPP_EXTERN_C String_t* _stringLiteral872479F10B4968F255B608A3698CA1A7EE09888B;
IL2CPP_EXTERN_C String_t* _stringLiteral893D84FF4ED81AC205FBC0C67CBEE1C0C752B406;
IL2CPP_EXTERN_C String_t* _stringLiteral916F4E7879C25AF1EA844F7068842D5508777C48;
IL2CPP_EXTERN_C String_t* _stringLiteral94A9AE3A92C04F7400ADC94B7BCB73FFC0A08DE4;
IL2CPP_EXTERN_C String_t* _stringLiteral952F621460E9250177F13FF0BEAD9E00E2B86302;
IL2CPP_EXTERN_C String_t* _stringLiteral96930EC8C6FD5250BB36A5E1040AB06A9588FD62;
IL2CPP_EXTERN_C String_t* _stringLiteral9932973D4B6AA1AA193C06D8D34B58B677685003;
IL2CPP_EXTERN_C String_t* _stringLiteral9F0051E3370AA31B69F5CBF0E35FBE94ACAE0651;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB63A1A23B65582B8791AA4E655E90AA5647D7298;
IL2CPP_EXTERN_C String_t* _stringLiteralB6F0795DD4F409C92875D0327F58FDEA357047F1;
IL2CPP_EXTERN_C String_t* _stringLiteralB76F93064E827FE764713C55F705D2E388DF17D7;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralBBC1106D65ACC9B0DB541F4FAF5DBAF5B7F7BA1F;
IL2CPP_EXTERN_C String_t* _stringLiteralC3FBA6155AE85E3CB81F8437A6F1C503BB7D09B7;
IL2CPP_EXTERN_C String_t* _stringLiteralCC5753B4554091FA687FA64F4FA303B0C913E2EC;
IL2CPP_EXTERN_C String_t* _stringLiteralCD347E1307036F9337DFB643A0DA73051573F178;
IL2CPP_EXTERN_C String_t* _stringLiteralCE63895ACF2B7A447477491E6E010B297DD75B0D;
IL2CPP_EXTERN_C String_t* _stringLiteralCEB6890FC169A5D98961042EBCAD0677F2F0656F;
IL2CPP_EXTERN_C String_t* _stringLiteralD2B699E6F0658A4364F9D1A0F5A4EB7C94F6F656;
IL2CPP_EXTERN_C String_t* _stringLiteralD2D2F8D3F9F04A081FFBE6B2AF7917BAAADFC052;
IL2CPP_EXTERN_C String_t* _stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE;
IL2CPP_EXTERN_C String_t* _stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7;
IL2CPP_EXTERN_C String_t* _stringLiteralD9319D8D06606B8F2B10B57EBAABAE57F7D5B8E7;
IL2CPP_EXTERN_C String_t* _stringLiteralE1356901E9F96E6ACC91632889AE94286AFE4CD4;
IL2CPP_EXTERN_C String_t* _stringLiteralE1C34BAD815D8104249A053C9455FA539CDF5036;
IL2CPP_EXTERN_C String_t* _stringLiteralEDC12722FE0763003109C7EDBACB6977C0E31132;
IL2CPP_EXTERN_C String_t* _stringLiteralF41760006700B346FE970834ED6436CD21A1330F;
IL2CPP_EXTERN_C String_t* _stringLiteralF4ED3BDF7EB24796E98DB0F3022D762D2C5EBFB0;
IL2CPP_EXTERN_C String_t* _stringLiteralF91B9F4F51199474999FD40AF7DB23C33195BC0B;
IL2CPP_EXTERN_C String_t* _stringLiteralFBD1A9745DCC4D80697D44756437CCB57698AE21;
IL2CPP_EXTERN_C String_t* _stringLiteralFDA1C9397356AF77AAE64869A9D6288562F10D4C;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m0C90DB78F4134CDEB001F338AA2745F8D9651CAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m835BB1E6EA8A8BF1242B51E28FD65B43FEF68E2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m9804017B0F6F06DE8C8FAA9292240873CB450B2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SecureStringHasher_GetHashCodeOfString_mD609BCF07ECFD2DC5CA0118228A09B6757D0D30A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlChildEnumerator_get_Current_m149208EFC92AEDC42F82839102B3D5F017DA4C46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlTextEncoder_WriteRaw_m3003736A7A660B71BF6890C087EB7AE70C9388C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlTextEncoder_WriteSurrogateChar_m81A912C37647DE260C756097A6188DFA25BB1EDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlTextEncoder_Write_m50A8B7FD9B3EA8856AE8EA6EEE4FFD02E06726A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlTextWriter_AutoComplete_m6D82B054F5B8A65C9DEFEC095D1AA71B64E01D19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlTextWriter_HandleSpecialAttribute_m6E1B85CC5B5CE12883AE164DB945EBA54F7564A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlTextWriter_InternalWriteEndElement_m1FEBF6E0816D4B25A83B098093170CA61265CA6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlTextWriter_PushNamespace_m85B9B39621886474A21E929986FBB95C51ECC8FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlTextWriter_VerifyPrefixXml_mB5720166A6E438017CE9C6677F77670ACF2BE661_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* HashCodeOfStringDelegate_t9AB4FF441166EF88D20657805C4FA187C4FF5046_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct NamespaceU5BU5D_tF0F2AD10B1537EBB0F35B1611FD7D89D48FA9E93;
struct StateU5BU5D_t41A58B7031FABDC61B34059A1FB722121203D858;
struct TagInfoU5BU5D_tC6FBAFF4593190EF8F7EEBAB8913C4E17D645776;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t4791F64F4B6411D4D033A002CAD365D597AA2451 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tEA0133B78B9FF7045128C508FA50247E525A94D6* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tCC15D033281A6593E2488FAF5B205812A152AC03* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tCE6BD704B9571C131E2D8C8CED569DDEC4AE042B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tBAB6DC40B1709E21296656960228A17F1BE57FD7  : public RuntimeObject
{
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.Xml.Base64Encoder
struct Base64Encoder_tA62CD5B68BCE27F764FAA91A7FCE6583772978A2  : public RuntimeObject
{
	// System.Byte[] System.Xml.Base64Encoder::leftOverBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___leftOverBytes_0;
	// System.Int32 System.Xml.Base64Encoder::leftOverBytesCount
	int32_t ___leftOverBytesCount_1;
	// System.Char[] System.Xml.Base64Encoder::charsLine
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___charsLine_2;
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472  : public RuntimeObject
{
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___numberGroupSizes_1;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___currencyGroupSizes_2;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___percentGroupSizes_3;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_4;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_5;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_6;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_9;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_10;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_11;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_12;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_15;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_16;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_17;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_18;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___nativeDigits_19;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_20;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_21;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_22;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_23;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_24;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_27;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_28;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_29;
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_30;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_31;
	// System.Boolean System.Globalization.NumberFormatInfo::m_isInvariant
	bool ___m_isInvariant_32;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_34;
};

// System.Xml.Res
struct Res_t9D2D9AFBC694346FDF3C1FCBE2D6D7AAEADB3B9A  : public RuntimeObject
{
};

// SR
struct SR_t89C10D8172151F8A1D55AEE28C31D3233CD919B3  : public RuntimeObject
{
};

// System.Xml.SecureStringHasher
struct SecureStringHasher_t4052E73C966E6FE65426B19F4AF48AB9869F614E  : public RuntimeObject
{
	// System.Int32 System.Xml.SecureStringHasher::hashCodeRandomizer
	int32_t ___hashCodeRandomizer_1;
};

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t* ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;
};

// System.Runtime.Serialization.SerializationInfoEnumerator
struct SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540  : public RuntimeObject
{
	// System.String[] System.Runtime.Serialization.SerializationInfoEnumerator::_members
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____members_0;
	// System.Object[] System.Runtime.Serialization.SerializationInfoEnumerator::_data
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____data_1;
	// System.Type[] System.Runtime.Serialization.SerializationInfoEnumerator::_types
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ____types_2;
	// System.Int32 System.Runtime.Serialization.SerializationInfoEnumerator::_numItems
	int32_t ____numItems_3;
	// System.Int32 System.Runtime.Serialization.SerializationInfoEnumerator::_currItem
	int32_t ____currItem_4;
	// System.Boolean System.Runtime.Serialization.SerializationInfoEnumerator::_current
	bool ____current_5;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Xml.XmlChildEnumerator
struct XmlChildEnumerator_tDD03B83EAA250AB86DFF4B53C1430DA942E85939  : public RuntimeObject
{
	// System.Xml.XmlNode System.Xml.XmlChildEnumerator::container
	XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___container_0;
	// System.Xml.XmlNode System.Xml.XmlChildEnumerator::child
	XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___child_1;
	// System.Boolean System.Xml.XmlChildEnumerator::isFirst
	bool ___isFirst_2;
};

// System.Xml.XmlConvert
struct XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA  : public RuntimeObject
{
};

// System.Xml.XmlNode
struct XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF  : public RuntimeObject
{
};

// System.Xml.XmlReader
struct XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD  : public RuntimeObject
{
};

// System.Xml.XmlWriter
struct XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F  : public RuntimeObject
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// System.Runtime.Serialization.SerializationEntry
struct SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74 
{
	// System.String System.Runtime.Serialization.SerializationEntry::_name
	String_t* ____name_0;
	// System.Object System.Runtime.Serialization.SerializationEntry::_value
	RuntimeObject* ____value_1;
	// System.Type System.Runtime.Serialization.SerializationEntry::_type
	Type_t* ____type_2;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.SerializationEntry
struct SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74_marshaled_pinvoke
{
	char* ____name_0;
	Il2CppIUnknown* ____value_1;
	Type_t* ____type_2;
};
// Native definition for COM marshalling of System.Runtime.Serialization.SerializationEntry
struct SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74_marshaled_com
{
	Il2CppChar* ____name_0;
	Il2CppIUnknown* ____value_1;
	Type_t* ____type_2;
};

// System.IO.TextWriter
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___CoreNewLine_3;
	// System.String System.IO.TextWriter::CoreNewLineStr
	String_t* ___CoreNewLineStr_4;
	// System.IFormatProvider System.IO.TextWriter::_internalFormatProvider
	RuntimeObject* ____internalFormatProvider_5;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Xml.XmlCharType
struct XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3 
{
	// System.Byte[] System.Xml.XmlCharType::charProperties
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___charProperties_2;
};
// Native definition for P/Invoke marshalling of System.Xml.XmlCharType
struct XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___charProperties_2;
};
// Native definition for COM marshalling of System.Xml.XmlCharType
struct XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___charProperties_2;
};

// System.Xml.Serialization.XmlIgnoreAttribute
struct XmlIgnoreAttribute_tF75E291BD9B9092629821783096CBA98748F5C3F  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C  : public XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF
{
	// System.Xml.XmlLinkedNode System.Xml.XmlLinkedNode::next
	XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C* ___next_0;
};

// System.Xml.XmlTextWriterBase64Encoder
struct XmlTextWriterBase64Encoder_tC7209F119916DF622459E830377C23D7BFA2B30D  : public Base64Encoder_tA62CD5B68BCE27F764FAA91A7FCE6583772978A2
{
	// System.Xml.XmlTextEncoder System.Xml.XmlTextWriterBase64Encoder::xmlTextEncoder
	XmlTextEncoder_tACD13BCC8237E0710F82A7703FAF7D09FCDF0C40* ___xmlTextEncoder_3;
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=416
struct __StaticArrayInitTypeSizeU3D416_tDAAA72EB80DBA06129AAA1F57A4CF148B4458AA5 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D416_tDAAA72EB80DBA06129AAA1F57A4CF148B4458AA5__padding[416];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6
struct __StaticArrayInitTypeSizeU3D6_t6B2CCEB1D7CF8B1F02780951EBD798284272BFE4 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D6_t6B2CCEB1D7CF8B1F02780951EBD798284272BFE4__padding[6];
	};
};

// System.Xml.XmlTextWriter/Namespace
struct Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853 
{
	// System.String System.Xml.XmlTextWriter/Namespace::prefix
	String_t* ___prefix_0;
	// System.String System.Xml.XmlTextWriter/Namespace::ns
	String_t* ___ns_1;
	// System.Boolean System.Xml.XmlTextWriter/Namespace::declared
	bool ___declared_2;
	// System.Int32 System.Xml.XmlTextWriter/Namespace::prevNsIndex
	int32_t ___prevNsIndex_3;
};
// Native definition for P/Invoke marshalling of System.Xml.XmlTextWriter/Namespace
struct Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853_marshaled_pinvoke
{
	char* ___prefix_0;
	char* ___ns_1;
	int32_t ___declared_2;
	int32_t ___prevNsIndex_3;
};
// Native definition for COM marshalling of System.Xml.XmlTextWriter/Namespace
struct Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853_marshaled_com
{
	Il2CppChar* ___prefix_0;
	Il2CppChar* ___ns_1;
	int32_t ___declared_2;
	int32_t ___prevNsIndex_3;
};

// System.Reflection.BindingFlags
struct BindingFlags_t5DC2835E4AE9C1862B3AD172EF35B6A5F4F1812C 
{
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	intptr_t ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Xml.ExceptionType
struct ExceptionType_t59E7D22CBFECCF0813D4C424384DDCD3FC74D95D 
{
	// System.Int32 System.Xml.ExceptionType::value__
	int32_t ___value___2;
};

// System.Xml.Formatting
struct Formatting_t5EF3CA95BE1609D2F16907321F59B3BF36D59598 
{
	// System.Int32 System.Xml.Formatting::value__
	int32_t ___value___2;
};

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Runtime.Serialization.StreamingContextStates
struct StreamingContextStates_t5EE358E619B251608A9327618C7BFE8638FC33C1 
{
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;
};

// System.StringComparison
struct StringComparison_tE14A55CCFA001A5AC85D754179BF2888F45CC94D 
{
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;
};

// System.IO.StringWriter
struct StringWriter_tF48052BE4F980E5C85403221E835768E4156267D  : public TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3
{
	// System.Text.StringBuilder System.IO.StringWriter::_sb
	StringBuilder_t* ____sb_7;
	// System.Boolean System.IO.StringWriter::_isOpen
	bool ____isOpen_8;
};

// System.Xml.WriteState
struct WriteState_t7C7DD3FA495CE7586781A5919ECDD49CD0270729 
{
	// System.Int32 System.Xml.WriteState::value__
	int32_t ___value___2;
};

// System.Xml.XmlSpace
struct XmlSpace_t6A78E68D9618EE5EFEA37E875ED46B88B03DB357 
{
	// System.Int32 System.Xml.XmlSpace::value__
	int32_t ___value___2;
};

// System.Xml.XmlTextEncoder
struct XmlTextEncoder_tACD13BCC8237E0710F82A7703FAF7D09FCDF0C40  : public RuntimeObject
{
	// System.IO.TextWriter System.Xml.XmlTextEncoder::textWriter
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___textWriter_0;
	// System.Boolean System.Xml.XmlTextEncoder::inAttribute
	bool ___inAttribute_1;
	// System.Char System.Xml.XmlTextEncoder::quoteChar
	Il2CppChar ___quoteChar_2;
	// System.Text.StringBuilder System.Xml.XmlTextEncoder::attrValue
	StringBuilder_t* ___attrValue_3;
	// System.Boolean System.Xml.XmlTextEncoder::cacheAttrValue
	bool ___cacheAttrValue_4;
	// System.Xml.XmlCharType System.Xml.XmlTextEncoder::xmlCharType
	XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3 ___xmlCharType_5;
};

// System.Xml.XmlTextWriter/NamespaceState
struct NamespaceState_t96D7826057D94D01FF46912868C57967FC8E6C01 
{
	// System.Int32 System.Xml.XmlTextWriter/NamespaceState::value__
	int32_t ___value___2;
};

// System.Xml.XmlTextWriter/SpecialAttr
struct SpecialAttr_t020B7EFC3BE44C46A0E81D094A9AE5646065887C 
{
	// System.Int32 System.Xml.XmlTextWriter/SpecialAttr::value__
	int32_t ___value___2;
};

// System.Xml.XmlTextWriter/State
struct State_t2EBD3BF5AFDFDCF3FB477A1B4DE46FA56C5D68CE 
{
	// System.Int32 System.Xml.XmlTextWriter/State::value__
	int32_t ___value___2;
};

// System.Xml.XmlTextWriter/Token
struct Token_t42EE6846A8E76E8B25571430B0C13E3EEA36F639 
{
	// System.Int32 System.Xml.XmlTextWriter/Token::value__
	int32_t ___value___2;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Xml.XmlTextWriter
struct XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B  : public XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F
{
	// System.IO.TextWriter System.Xml.XmlTextWriter::textWriter
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___textWriter_0;
	// System.Xml.XmlTextEncoder System.Xml.XmlTextWriter::xmlEncoder
	XmlTextEncoder_tACD13BCC8237E0710F82A7703FAF7D09FCDF0C40* ___xmlEncoder_1;
	// System.Text.Encoding System.Xml.XmlTextWriter::encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding_2;
	// System.Xml.Formatting System.Xml.XmlTextWriter::formatting
	int32_t ___formatting_3;
	// System.Boolean System.Xml.XmlTextWriter::indented
	bool ___indented_4;
	// System.Int32 System.Xml.XmlTextWriter::indentation
	int32_t ___indentation_5;
	// System.Char System.Xml.XmlTextWriter::indentChar
	Il2CppChar ___indentChar_6;
	// System.Xml.XmlTextWriter/TagInfo[] System.Xml.XmlTextWriter::stack
	TagInfoU5BU5D_tC6FBAFF4593190EF8F7EEBAB8913C4E17D645776* ___stack_7;
	// System.Int32 System.Xml.XmlTextWriter::top
	int32_t ___top_8;
	// System.Xml.XmlTextWriter/State[] System.Xml.XmlTextWriter::stateTable
	StateU5BU5D_t41A58B7031FABDC61B34059A1FB722121203D858* ___stateTable_9;
	// System.Xml.XmlTextWriter/State System.Xml.XmlTextWriter::currentState
	int32_t ___currentState_10;
	// System.Xml.XmlTextWriter/Token System.Xml.XmlTextWriter::lastToken
	int32_t ___lastToken_11;
	// System.Xml.XmlTextWriterBase64Encoder System.Xml.XmlTextWriter::base64Encoder
	XmlTextWriterBase64Encoder_tC7209F119916DF622459E830377C23D7BFA2B30D* ___base64Encoder_12;
	// System.Char System.Xml.XmlTextWriter::quoteChar
	Il2CppChar ___quoteChar_13;
	// System.Char System.Xml.XmlTextWriter::curQuoteChar
	Il2CppChar ___curQuoteChar_14;
	// System.Boolean System.Xml.XmlTextWriter::namespaces
	bool ___namespaces_15;
	// System.Xml.XmlTextWriter/SpecialAttr System.Xml.XmlTextWriter::specialAttr
	int32_t ___specialAttr_16;
	// System.String System.Xml.XmlTextWriter::prefixForXmlNs
	String_t* ___prefixForXmlNs_17;
	// System.Boolean System.Xml.XmlTextWriter::flush
	bool ___flush_18;
	// System.Xml.XmlTextWriter/Namespace[] System.Xml.XmlTextWriter::nsStack
	NamespaceU5BU5D_tF0F2AD10B1537EBB0F35B1611FD7D89D48FA9E93* ___nsStack_19;
	// System.Int32 System.Xml.XmlTextWriter::nsTop
	int32_t ___nsTop_20;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlTextWriter::nsHashtable
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___nsHashtable_21;
	// System.Boolean System.Xml.XmlTextWriter::useNsHashtable
	bool ___useNsHashtable_22;
	// System.Xml.XmlCharType System.Xml.XmlTextWriter::xmlCharType
	XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3 ___xmlCharType_23;
};

// System.Xml.XmlTextWriter/TagInfo
struct TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C 
{
	// System.String System.Xml.XmlTextWriter/TagInfo::name
	String_t* ___name_0;
	// System.String System.Xml.XmlTextWriter/TagInfo::prefix
	String_t* ___prefix_1;
	// System.String System.Xml.XmlTextWriter/TagInfo::defaultNs
	String_t* ___defaultNs_2;
	// System.Xml.XmlTextWriter/NamespaceState System.Xml.XmlTextWriter/TagInfo::defaultNsState
	int32_t ___defaultNsState_3;
	// System.Xml.XmlSpace System.Xml.XmlTextWriter/TagInfo::xmlSpace
	int32_t ___xmlSpace_4;
	// System.String System.Xml.XmlTextWriter/TagInfo::xmlLang
	String_t* ___xmlLang_5;
	// System.Int32 System.Xml.XmlTextWriter/TagInfo::prevNsTop
	int32_t ___prevNsTop_6;
	// System.Int32 System.Xml.XmlTextWriter/TagInfo::prefixCount
	int32_t ___prefixCount_7;
	// System.Boolean System.Xml.XmlTextWriter/TagInfo::mixed
	bool ___mixed_8;
};
// Native definition for P/Invoke marshalling of System.Xml.XmlTextWriter/TagInfo
struct TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C_marshaled_pinvoke
{
	char* ___name_0;
	char* ___prefix_1;
	char* ___defaultNs_2;
	int32_t ___defaultNsState_3;
	int32_t ___xmlSpace_4;
	char* ___xmlLang_5;
	int32_t ___prevNsTop_6;
	int32_t ___prefixCount_7;
	int32_t ___mixed_8;
};
// Native definition for COM marshalling of System.Xml.XmlTextWriter/TagInfo
struct TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___prefix_1;
	Il2CppChar* ___defaultNs_2;
	int32_t ___defaultNsState_3;
	int32_t ___xmlSpace_4;
	Il2CppChar* ___xmlLang_5;
	int32_t ___prevNsTop_6;
	int32_t ___prefixCount_7;
	int32_t ___mixed_8;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Resources.MissingManifestResourceException
struct MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Xml.XmlDOMTextWriter
struct XmlDOMTextWriter_t362092F200AC52B03B5A7E4D443A3D04134C02AF  : public XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B
{
};

// System.Xml.XmlException
struct XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.Xml.XmlException::res
	String_t* ___res_18;
	// System.String[] System.Xml.XmlException::args
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___args_19;
	// System.Int32 System.Xml.XmlException::lineNumber
	int32_t ___lineNumber_20;
	// System.Int32 System.Xml.XmlException::linePosition
	int32_t ___linePosition_21;
	// System.String System.Xml.XmlException::sourceUri
	String_t* ___sourceUri_22;
	// System.String System.Xml.XmlException::message
	String_t* ___message_23;
};

// System.Xml.SecureStringHasher/HashCodeOfStringDelegate
struct HashCodeOfStringDelegate_t9AB4FF441166EF88D20657805C4FA187C4FF5046  : public MulticastDelegate_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tBAB6DC40B1709E21296656960228A17F1BE57FD7_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=416 <PrivateImplementationDetails>::D1D9AF18AFC4E3074AF5E4C44B81B73889D033D7AF6DFEB387BBCC76B36FE8B9
	__StaticArrayInitTypeSizeU3D416_tDAAA72EB80DBA06129AAA1F57A4CF148B4458AA5 ___D1D9AF18AFC4E3074AF5E4C44B81B73889D033D7AF6DFEB387BBCC76B36FE8B9_0;
	// System.Int64 <PrivateImplementationDetails>::DACC0E6568D9B10337A1A693F10D42C3175E80C378154406C6FBFA989F919F51
	int64_t ___DACC0E6568D9B10337A1A693F10D42C3175E80C378154406C6FBFA989F919F51_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=416 <PrivateImplementationDetails>::DB7DD2341DB9D4574E432AAAFF03FB0A3E8FF2F645A337077EDF0C6FE902E660
	__StaticArrayInitTypeSizeU3D416_tDAAA72EB80DBA06129AAA1F57A4CF148B4458AA5 ___DB7DD2341DB9D4574E432AAAFF03FB0A3E8FF2F645A337077EDF0C6FE902E660_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6 <PrivateImplementationDetails>::DBBF94CCF4250B303976041627BB8FC302CE57D55373C469F41F97318412037D
	__StaticArrayInitTypeSizeU3D6_t6B2CCEB1D7CF8B1F02780951EBD798284272BFE4 ___DBBF94CCF4250B303976041627BB8FC302CE57D55373C469F41F97318412037D_3;
};

// <PrivateImplementationDetails>

// System.Xml.Base64Encoder

// System.Xml.Base64Encoder

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};

// System.Globalization.CultureInfo

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.Text.Encoding

// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472_StaticFields
{
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.NumberFormatInfo::invariantInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___invariantInfo_0;
};

// System.Globalization.NumberFormatInfo

// System.Xml.Res

// System.Xml.Res

// SR

// SR

// System.Xml.SecureStringHasher
struct SecureStringHasher_t4052E73C966E6FE65426B19F4AF48AB9869F614E_StaticFields
{
	// System.Xml.SecureStringHasher/HashCodeOfStringDelegate System.Xml.SecureStringHasher::hashCodeDelegate
	HashCodeOfStringDelegate_t9AB4FF441166EF88D20657805C4FA187C4FF5046* ___hashCodeDelegate_0;
};

// System.Xml.SecureStringHasher

// System.Runtime.Serialization.SerializationInfo

// System.Runtime.Serialization.SerializationInfo

// System.Runtime.Serialization.SerializationInfoEnumerator

// System.Runtime.Serialization.SerializationInfoEnumerator

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// System.Xml.XmlChildEnumerator

// System.Xml.XmlChildEnumerator

// System.Xml.XmlConvert
struct XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_StaticFields
{
	// System.Xml.XmlCharType System.Xml.XmlConvert::xmlCharType
	XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3 ___xmlCharType_0;
	// System.Char[] System.Xml.XmlConvert::crt
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___crt_1;
	// System.Int32 System.Xml.XmlConvert::c_EncodedCharLength
	int32_t ___c_EncodedCharLength_2;
	// System.Char[] System.Xml.XmlConvert::WhitespaceChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___WhitespaceChars_3;
};

// System.Xml.XmlConvert

// System.Xml.XmlNode

// System.Xml.XmlNode

// System.Xml.XmlReader
struct XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_StaticFields
{
	// System.UInt32 System.Xml.XmlReader::IsTextualNodeBitmap
	uint32_t ___IsTextualNodeBitmap_0;
	// System.UInt32 System.Xml.XmlReader::CanReadContentAsBitmap
	uint32_t ___CanReadContentAsBitmap_1;
	// System.UInt32 System.Xml.XmlReader::HasValueBitmap
	uint32_t ___HasValueBitmap_2;
};

// System.Xml.XmlReader

// System.Xml.XmlWriter

// System.Xml.XmlWriter

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Runtime.Serialization.SerializationEntry

// System.Runtime.Serialization.SerializationEntry

// System.IO.TextWriter
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3_StaticFields
{
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___Null_1;
	// System.Char[] System.IO.TextWriter::s_coreNewLine
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_coreNewLine_2;
};

// System.IO.TextWriter

// System.UInt32

// System.UInt32

// System.Void

// System.Void

// System.Xml.XmlCharType
struct XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_StaticFields
{
	// System.Object System.Xml.XmlCharType::s_Lock
	RuntimeObject* ___s_Lock_0;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Xml.XmlCharType::s_CharProperties
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_CharProperties_1;
};

// System.Xml.XmlCharType

// System.Xml.Serialization.XmlIgnoreAttribute

// System.Xml.Serialization.XmlIgnoreAttribute

// System.Xml.XmlLinkedNode

// System.Xml.XmlLinkedNode

// System.Xml.XmlTextWriterBase64Encoder

// System.Xml.XmlTextWriterBase64Encoder

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=416

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=416

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6

// System.Xml.XmlTextWriter/Namespace

// System.Xml.XmlTextWriter/Namespace

// System.Reflection.BindingFlags

// System.Reflection.BindingFlags

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.Xml.ExceptionType

// System.Xml.ExceptionType

// System.Xml.Formatting

// System.Xml.Formatting

// System.Reflection.MethodInfo

// System.Reflection.MethodInfo

// System.RuntimeFieldHandle

// System.RuntimeFieldHandle

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// System.StringComparison

// System.StringComparison

// System.IO.StringWriter
struct StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_StaticFields
{
	// System.Text.UnicodeEncoding modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StringWriter::m_encoding
	UnicodeEncoding_t2C90D9E1E55C16081FACA57B229053C1EF05DAF0* ___m_encoding_6;
};

// System.IO.StringWriter

// System.Xml.WriteState

// System.Xml.WriteState

// System.Xml.XmlSpace

// System.Xml.XmlSpace

// System.Xml.XmlTextEncoder

// System.Xml.XmlTextEncoder

// System.Xml.XmlTextWriter/NamespaceState

// System.Xml.XmlTextWriter/NamespaceState

// System.Xml.XmlTextWriter/SpecialAttr

// System.Xml.XmlTextWriter/SpecialAttr

// System.Xml.XmlTextWriter/State

// System.Xml.XmlTextWriter/State

// System.Xml.XmlTextWriter/Token

// System.Xml.XmlTextWriter/Token

// System.Runtime.Serialization.StreamingContext

// System.Runtime.Serialization.StreamingContext

// System.SystemException

// System.SystemException

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.Xml.XmlTextWriter
struct XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_StaticFields
{
	// System.String[] System.Xml.XmlTextWriter::stateName
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___stateName_24;
	// System.String[] System.Xml.XmlTextWriter::tokenName
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___tokenName_25;
	// System.Xml.XmlTextWriter/State[] System.Xml.XmlTextWriter::stateTableDefault
	StateU5BU5D_t41A58B7031FABDC61B34059A1FB722121203D858* ___stateTableDefault_26;
	// System.Xml.XmlTextWriter/State[] System.Xml.XmlTextWriter::stateTableDocument
	StateU5BU5D_t41A58B7031FABDC61B34059A1FB722121203D858* ___stateTableDocument_27;
};

// System.Xml.XmlTextWriter

// System.Xml.XmlTextWriter/TagInfo

// System.Xml.XmlTextWriter/TagInfo

// System.ArgumentException

// System.ArgumentException

// System.InvalidOperationException

// System.InvalidOperationException

// System.Resources.MissingManifestResourceException

// System.Resources.MissingManifestResourceException

// System.Xml.XmlDOMTextWriter

// System.Xml.XmlDOMTextWriter

// System.Xml.XmlException

// System.Xml.XmlException

// System.Xml.SecureStringHasher/HashCodeOfStringDelegate

// System.Xml.SecureStringHasher/HashCodeOfStringDelegate

// System.ArgumentNullException

// System.ArgumentNullException

// System.ArgumentOutOfRangeException

// System.ArgumentOutOfRangeException
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Xml.XmlTextWriter/Namespace[]
struct NamespaceU5BU5D_tF0F2AD10B1537EBB0F35B1611FD7D89D48FA9E93  : public RuntimeArray
{
	ALIGN_FIELD (8) Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853 m_Items[1];

	inline Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___prefix_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___ns_1), (void*)NULL);
		#endif
	}
	inline Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___prefix_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___ns_1), (void*)NULL);
		#endif
	}
};
// System.Xml.XmlTextWriter/TagInfo[]
struct TagInfoU5BU5D_tC6FBAFF4593190EF8F7EEBAB8913C4E17D645776  : public RuntimeArray
{
	ALIGN_FIELD (8) TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C m_Items[1];

	inline TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___prefix_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___defaultNs_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___xmlLang_5), (void*)NULL);
		#endif
	}
	inline TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___prefix_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___defaultNs_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___xmlLang_5), (void*)NULL);
		#endif
	}
};
// System.Xml.XmlTextWriter/State[]
struct StateU5BU5D_t41A58B7031FABDC61B34059A1FB722121203D858  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m89AC42CD88BC0ED965D36B7028EF3DE23D290E1D_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m4B8EE45640C70BBFD6F3EFF1040983404C098342_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, int32_t* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m72CC2F1213D1C1B8ABEDE31082D07B67EC873B13_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mFDB1C734B470EB31B094053D97F7749210922576_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;

// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.String SR::GetString(System.Globalization.CultureInfo,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetString_mA5E85933B81C0C44BF2C3784451187A0C9514E3C (CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___0_culture, String_t* ___1_name, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, const RuntimeMethod* method) ;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75 (RuntimeObject* ___0_provider, String_t* ___1_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToBase64CharArray(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToBase64CharArray_mA76751948F258E3726B76E8A93133C6F364B216B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_inArray, int32_t ___1_offsetIn, int32_t ___2_length, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___3_outArray, int32_t ___4_offsetOut, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlTextEncoder::WriteRaw(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextEncoder_WriteRaw_m3003736A7A660B71BF6890C087EB7AE70C9388C7 (XmlTextEncoder_tACD13BCC8237E0710F82A7703FAF7D09FCDF0C40* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 System.Environment::get_TickCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_TickCount_m183BFCF001E12849E3D898957F0B81FD88BA183C (const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String,System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCC34895D0DB2AD440C9D8767032215BC86B5C48B (String_t* ___0_a, String_t* ___1_b, int32_t ___2_comparisonType, const RuntimeMethod* method) ;
// System.Xml.SecureStringHasher/HashCodeOfStringDelegate System.Xml.SecureStringHasher::GetHashCodeDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashCodeOfStringDelegate_t9AB4FF441166EF88D20657805C4FA187C4FF5046* SecureStringHasher_GetHashCodeDelegate_mC935B1E47A8478DE0257CD650A4689DB2965A379 (const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.Xml.SecureStringHasher/HashCodeOfStringDelegate::Invoke(System.String,System.Int32,System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashCodeOfStringDelegate_Invoke_m75607AC5443193A85145E05E5C6036A9BA0C61A2_inline (HashCodeOfStringDelegate_t9AB4FF441166EF88D20657805C4FA187C4FF5046* __this, String_t* ___0_s, int32_t ___1_sLen, int64_t ___2_additionalEntropy, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_m9E66B5053F150537A74C490C1DA5174A7875189D (Type_t* __this, String_t* ___0_name, int32_t ___1_bindingAttr, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodInfo::op_Inequality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Inequality_mB73597A1FCC2F906DBCADDEC68A1B7D5B7E89FA8 (MethodInfo_t* ___0_left, MethodInfo_t* ___1_right, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_CreateDelegate_m166F8149A673DE0A735634C1AB9DE71FD34A6BB4 (Type_t* ___0_type, MethodInfo_t* ___1_method, const RuntimeMethod* method) ;
// System.Void System.Xml.SecureStringHasher/HashCodeOfStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashCodeOfStringDelegate__ctor_m5635DF373D683517CDFD80D0EB8C380E78BFFA58 (HashCodeOfStringDelegate_t9AB4FF441166EF88D20657805C4FA187C4FF5046* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Xml.XmlCharType System.Xml.XmlCharType::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3 XmlCharType_get_Instance_m1279A3FC91B74599A9BC76979E50DBFC07F67C55 (const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414 (StringBuilder_t* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Xml.XmlCharType::IsLowSurrogate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlCharType_IsLowSurrogate_m8D27C4276BE118C7FF3ECC1707EEE026D28FC456 (int32_t ___0_ch, const RuntimeMethod* method) ;
// System.Boolean System.Xml.XmlCharType::IsHighSurrogate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlCharType_IsHighSurrogate_mB3E741B22E4B47DC85F7F18A411F031D8717BA60 (int32_t ___0_ch, const RuntimeMethod* method) ;
// System.Exception System.Xml.XmlConvert::CreateInvalidSurrogatePairException(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* XmlConvert_CreateInvalidSurrogatePairException_mAD70BE2F96B56C1308578273A8FD96C8240350B2 (Il2CppChar ___0_low, Il2CppChar ___1_hi, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlTextEncoder::WriteStringFragment(System.String,System.Int32,System.Int32,System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextEncoder_WriteStringFragment_mC798AEDBDBCA83BA9B7DD619874CF6597B0B3E0A (XmlTextEncoder_tACD13BCC8237E0710F82A7703FAF7D09FCDF0C40* __this, String_t* ___0_str, int32_t ___1_offset, int32_t ___2_count, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___3_helperBuffer, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlTextEncoder::WriteCharEntityImpl(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextEncoder_WriteCharEntityImpl_m1ACBC7CA8215F706FA03FED4B6DB523B11F3601A (XmlTextEncoder_tACD13BCC8237E0710F82A7703FAF7D09FCDF0C40* __this, Il2CppChar ___0_ch, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlTextEncoder::WriteEntityRefImpl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextEncoder_WriteEntityRefImpl_m3177B6466CF31B15DD0A4937BEED5178673ED019 (XmlTextEncoder_tACD13BCC8237E0710F82A7703FAF7D09FCDF0C40* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlTextEncoder::WriteSurrogateChar(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextEncoder_WriteSurrogateChar_m81A912C37647DE260C756097A6188DFA25BB1EDB (XmlTextEncoder_tACD13BCC8237E0710F82A7703FAF7D09FCDF0C40* __this, Il2CppChar ___0_lowChar, Il2CppChar ___1_highChar, const RuntimeMethod* method) ;
// System.Exception System.Xml.XmlConvert::CreateInvalidHighSurrogateCharException(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* XmlConvert_CreateInvalidHighSurrogateCharException_mD30C6B24B7B92886A5317E3DEA61AC969889BFF4 (Il2CppChar ___0_hi, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_mC09A30993B77CC4D8E906720683B6386F0E15747 (StringBuilder_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_value, int32_t ___1_startIndex, int32_t ___2_charCount, const RuntimeMethod* method) ;
// System.Void System.String::CopyTo(System.Int32,System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void String_CopyTo_m6E1DE99F2A6481B3B9839C8A026C74887C10A1DC (String_t* __this, int32_t ___0_sourceIndex, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___1_destination, int32_t ___2_destinationIndex, int32_t ___3_count, const RuntimeMethod* method) ;
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::get_InvariantInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* NumberFormatInfo_get_InvariantInfo_m4689F466D2607C7369BCE394E3FB3681A6E644FA (const RuntimeMethod* method) ;
// System.String System.Int32::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_mE871810BC163EE4EF88E7C7682A6AD39911173B8 (int32_t* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlTextEncoder::WriteCharEntityImpl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextEncoder_WriteCharEntityImpl_m700BFAD8FCCB6BC22471CD185A4CBC2B6C2F1CF0 (XmlTextEncoder_tACD13BCC8237E0710F82A7703FAF7D09FCDF0C40* __this, String_t* ___0_strVal, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlWriter__ctor_m8944C0C05D32C64DD68AE6641BA0943BE80CE714 (XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlTextWriter/TagInfo::Init(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TagInfo_Init_m351285BE790D79A15E824AE90114E1DD5734BAB6 (TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C* __this, int32_t ___0_nsTop, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlTextWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextWriter__ctor_m48FEF103AD5753DA42EFBDC57A0B7B61B208F8CF (XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlTextEncoder::.ctor(System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextEncoder__ctor_m29D14256606ECE213B16EC9E934E11DE23BC2F6F (XmlTextEncoder_tACD13BCC8237E0710F82A7703FAF7D09FCDF0C40* __this, TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___0_textWriter, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlTextEncoder::set_QuoteChar(System.Char)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XmlTextEncoder_set_QuoteChar_mE15FB6ECB7FAF6CE0780E1FE421D0802BF38D627_inline (XmlTextEncoder_tACD13BCC8237E0710F82A7703FAF7D09FCDF0C40* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlTextWriter::InternalWriteEndElement(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextWriter_InternalWriteEndElement_m1FEBF6E0816D4B25A83B098093170CA61265CA6B (XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* __this, bool ___0_longFormat, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlTextWriter::AutoCompleteAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextWriter_AutoCompleteAll_m4B6E34BC27932EF01C546E2C1CBB70BF21721209 (XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* __this, const RuntimeMethod* method) ;
// System.String System.Xml.Res::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Res_GetString_mBEE82ACFE97F93A6DDE81E322477CF2713466364 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.String System.Xml.Res::GetString(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Res_GetString_m088600B9D0FC319A206451B009A0583C600B9A83 (String_t* ___0_name, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlTextWriter::Indent(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextWriter_Indent_m8FDE99DA08161BAF95B52060FE665815467653AC (XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* __this, bool ___0_beforeEndElement, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlTextWriter::WriteEndAttributeQuote()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextWriter_WriteEndAttributeQuote_mB416CDC30D6D53A1CA083DB23889440E87AFF2AD (XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlTextWriter::WriteEndStartTag(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextWriter_WriteEndStartTag_m3D5BD66F7B3C09F72E943C0E5C865371905D552E (XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* __this, bool ___0_empty, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlTextWriter::FlushEncoders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextWriter_FlushEncoders_mF122D55A7BB079E9DA00A0055CFC78277584A093 (XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlTextWriter::AutoComplete(System.Xml.XmlTextWriter/Token)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextWriter_AutoComplete_m6D82B054F5B8A65C9DEFEC095D1AA71B64E01D19 (XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* __this, int32_t ___0_token, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlTextWriter::PopNamespaces(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextWriter_PopNamespaces_mE1AF0C6EBC567887BAA9E6DD4175AEBF7464A046 (XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* __this, int32_t ___0_indexFrom, int32_t ___1_indexTo, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlTextEncoder::StartAttribute(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextEncoder_StartAttribute_mF465D7D8BA5D27C78DD05400E137E682BD9FDE7B (XmlTextEncoder_tACD13BCC8237E0710F82A7703FAF7D09FCDF0C40* __this, bool ___0_cacheAttrValue, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlTextEncoder::Write(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextEncoder_Write_m50A8B7FD9B3EA8856AE8EA6EEE4FFD02E06726A4 (XmlTextEncoder_tACD13BCC8237E0710F82A7703FAF7D09FCDF0C40* __this, String_t* ___0_text, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlTextEncoder::EndAttribute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextEncoder_EndAttribute_mAED2FFE742552CD2454B204481F9C43B113396FB (XmlTextEncoder_tACD13BCC8237E0710F82A7703FAF7D09FCDF0C40* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlTextWriter::HandleSpecialAttribute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextWriter_HandleSpecialAttribute_m6E1B85CC5B5CE12883AE164DB945EBA54F7564A6 (XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Int32 System.Xml.XmlTextWriter::LookupNamespace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlTextWriter_LookupNamespace_m26D7A144D7D60165AA28DFB54EE15332AD26CB89 (XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* __this, String_t* ___0_prefix, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlTextWriter::AddNamespace(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextWriter_AddNamespace_mA9DF9F1648BEF737A3D46BE7A93EE57CED55DCB4 (XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* __this, String_t* ___0_prefix, String_t* ___1_ns, bool ___2_declared, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900 (RuntimeArray* ___0_sourceArray, RuntimeArray* ___1_destinationArray, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlTextWriter/Namespace::Set(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Namespace_Set_mA421F92F59A44FCD987802098A78CA52CA3867BD (Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853* __this, String_t* ___0_prefix, String_t* ___1_ns, bool ___2_declared, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlTextWriter::AddToNamespaceHashtable(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextWriter_AddToNamespaceHashtable_m8BCCD6D70601F264479A46D8259BDDC174AD233F (XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* __this, int32_t ___0_namespaceIndex, const RuntimeMethod* method) ;
// System.Void System.Xml.SecureStringHasher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecureStringHasher__ctor_m1F7C97F1DB5BEC1B80480E7CB4019B8E68CC4E92 (SecureStringHasher_t4052E73C966E6FE65426B19F4AF48AB9869F614E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
inline void Dictionary_2__ctor_m9804017B0F6F06DE8C8FAA9292240873CB450B2D (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m89AC42CD88BC0ED965D36B7028EF3DE23D290E1D_gshared)(__this, ___0_comparer, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m835BB1E6EA8A8BF1242B51E28FD65B43FEF68E2A (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* __this, String_t* ___0_key, int32_t* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*, String_t*, int32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_m4B8EE45640C70BBFD6F3EFF1040983404C098342_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2 (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* __this, String_t* ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*, String_t*, int32_t, const RuntimeMethod*))Dictionary_2_set_Item_m72CC2F1213D1C1B8ABEDE31082D07B67EC873B13_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Remove(TKey)
inline bool Dictionary_2_Remove_m0C90DB78F4134CDEB001F338AA2745F8D9651CAC (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_mFDB1C734B470EB31B094053D97F7749210922576_gshared)(__this, ___0_key, method);
}
// System.String System.Xml.XmlTextEncoder::get_AttributeValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlTextEncoder_get_AttributeValue_m3DC77E08BDA49EFA196673E7625B43CBCE70DA96 (XmlTextEncoder_tACD13BCC8237E0710F82A7703FAF7D09FCDF0C40* __this, const RuntimeMethod* method) ;
// System.String System.Xml.XmlConvert::TrimString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_TrimString_mDAA514C90ADF5307B9781647EDE50EC8E542ABC7 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlTextWriter::VerifyPrefixXml(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextWriter_VerifyPrefixXml_mB5720166A6E438017CE9C6677F77670ACF2BE661 (XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* __this, String_t* ___0_prefix, String_t* ___1_ns, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlTextWriter::PushNamespace(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextWriter_PushNamespace_m85B9B39621886474A21E929986FBB95C51ECC8FF (XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* __this, String_t* ___0_prefix, String_t* ___1_ns, bool ___2_declared, const RuntimeMethod* method) ;
// System.Void System.Xml.Base64Encoder::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Base64Encoder_Flush_mBCE3506CD0C1A9EF71FB84544496707BBC562324 (Base64Encoder_tA62CD5B68BCE27F764FAA91A7FCE6583772978A2* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
// System.Boolean System.Xml.XmlChildEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlChildEnumerator_MoveNext_m038B637C00AC0482CAD4E35995F2CF2AE8E3D556 (XmlChildEnumerator_tDD03B83EAA250AB86DFF4B53C1430DA942E85939* __this, const RuntimeMethod* method) ;
// System.Xml.XmlNode System.Xml.XmlChildEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* XmlChildEnumerator_get_Current_m149208EFC92AEDC42F82839102B3D5F017DA4C46 (XmlChildEnumerator_tDD03B83EAA250AB86DFF4B53C1430DA942E85939* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlTextWriter::.ctor(System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextWriter__ctor_m4AE8363DFA5B2D16F3750514727C63D4A0096489 (XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* __this, TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___0_w, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlChildEnumerator::.ctor(System.Xml.XmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlChildEnumerator__ctor_mC51E8B709CB2FCB079D44B180D5EF3DF9DBC3671 (XmlChildEnumerator_tDD03B83EAA250AB86DFF4B53C1430DA942E85939* __this, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___0_container, const RuntimeMethod* method) ;
// System.Void System.IO.StringWriter::.ctor(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringWriter__ctor_mE3EE42D6B6B6CE4F81849022B19FFC1842FB3FCA (StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* __this, RuntimeObject* ___0_formatProvider, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlDOMTextWriter::.ctor(System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlDOMTextWriter__ctor_mF435D9DB37F13BD9A8112CC37E51C10216A2A082 (XmlDOMTextWriter_t362092F200AC52B03B5A7E4D443A3D04134C02AF* __this, TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___0_w, const RuntimeMethod* method) ;
// System.Object System.Xml.XmlCharType::get_StaticLock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlCharType_get_StaticLock_m39193568D86AD7E7A5AA4B3745D64C6F5D60472E (const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlCharType::SetProperties(System.Byte[],System.String,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlCharType_SetProperties_m8964034908DAEC93686ADC1D879E15967B91D4D4 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_chProps, String_t* ___1_ranges, uint8_t ___2_value, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::MemoryBarrier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_MemoryBarrier_m83873F1E6CEB16C0781941141382DA874A36097D (const RuntimeMethod* method) ;
// System.Void System.Xml.XmlCharType::.ctor(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XmlCharType__ctor_mB4A379AC51751894C31365E176E3B9BFB5ABC771_inline (XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_charProperties, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlCharType::InitInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlCharType_InitInstance_m486814EDE27EF404061078D3EA69301B23F01378 (const RuntimeMethod* method) ;
// System.Boolean System.Xml.XmlCharType::InRange(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlCharType_InRange_mA7DAF677E841F90A0B3657CB19ACB90A32CDCBF2 (int32_t ___0_value, int32_t ___1_start, int32_t ___2_end, const RuntimeMethod* method) ;
// System.String System.String::Trim(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_m81BD35659E6F89DDD56816975E6E05390D023FE5 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_trimChars, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlException::.ctor(System.String,System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlException__ctor_m03120C28C23F76A8DA17B42FB00F599D2FB22B3F (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* __this, String_t* ___0_res, String_t* ___1_arg, int32_t ___2_lineNumber, int32_t ___3_linePosition, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlException::.ctor(System.String,System.String[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlException__ctor_m9533F222CB16C788C194E7494449C1D96BC781CA (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* __this, String_t* ___0_res, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_args, int32_t ___2_lineNumber, int32_t ___3_linePosition, const RuntimeMethod* method) ;
// System.Exception System.Xml.XmlConvert::CreateInvalidSurrogatePairException(System.Char,System.Char,System.Xml.ExceptionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* XmlConvert_CreateInvalidSurrogatePairException_mE7C31A4492160E09C8DFFC0E7FEE5623F16E109F (Il2CppChar ___0_low, Il2CppChar ___1_hi, int32_t ___2_exceptionType, const RuntimeMethod* method) ;
// System.Exception System.Xml.XmlConvert::CreateInvalidSurrogatePairException(System.Char,System.Char,System.Xml.ExceptionType,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* XmlConvert_CreateInvalidSurrogatePairException_mF5391689034F1ABE4316BC5E70A2C707546B1B5A (Il2CppChar ___0_low, Il2CppChar ___1_hi, int32_t ___2_exceptionType, int32_t ___3_lineNo, int32_t ___4_linePos, const RuntimeMethod* method) ;
// System.String System.UInt32::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt32_ToString_m464396B0FE2115F3CEA38AEECDDB0FACC3AADADE (uint32_t* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
// System.Exception System.Xml.XmlConvert::CreateException(System.String,System.String[],System.Xml.ExceptionType,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* XmlConvert_CreateException_m5E2DE07EE27F255E64E7A0FE08BA8B1C147EE580 (String_t* ___0_res, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_args, int32_t ___2_exceptionType, int32_t ___3_lineNo, int32_t ___4_linePos, const RuntimeMethod* method) ;
// System.Exception System.Xml.XmlConvert::CreateInvalidHighSurrogateCharException(System.Char,System.Xml.ExceptionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* XmlConvert_CreateInvalidHighSurrogateCharException_m1FB213C96EC2B3CD0D3F58CDC5C9AD37841191BD (Il2CppChar ___0_hi, int32_t ___1_exceptionType, const RuntimeMethod* method) ;
// System.Exception System.Xml.XmlConvert::CreateInvalidHighSurrogateCharException(System.Char,System.Xml.ExceptionType,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* XmlConvert_CreateInvalidHighSurrogateCharException_m472648586C709A4D9516E1FBFA518FD605B15A21 (Il2CppChar ___0_hi, int32_t ___1_exceptionType, int32_t ___2_lineNo, int32_t ___3_linePos, const RuntimeMethod* method) ;
// System.Exception System.Xml.XmlConvert::CreateException(System.String,System.String,System.Xml.ExceptionType,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* XmlConvert_CreateException_m0EE119DB38F2B6B661CE7FC9A94BC0BF1CB197AD (String_t* ___0_res, String_t* ___1_arg, int32_t ___2_exceptionType, int32_t ___3_lineNo, int32_t ___4_linePos, const RuntimeMethod* method) ;
// System.Void System.SystemException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemException__ctor_mA2BB392E0F4CD8A4C132984F76B7A9FBDB3B6879 (SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) ;
// System.Object System.Runtime.Serialization.SerializationInfo::GetValue(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, Type_t* ___1_type, const RuntimeMethod* method) ;
// System.Runtime.Serialization.SerializationInfoEnumerator System.Runtime.Serialization.SerializationInfo::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* SerializationInfo_GetEnumerator_m5230A1D4E4B612E90B10E2034C638CD42F667EA6 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, const RuntimeMethod* method) ;
// System.Runtime.Serialization.SerializationEntry System.Runtime.Serialization.SerializationInfoEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74 SerializationInfoEnumerator_get_Current_m820863174CF73089751ACC36BC34DD3188A1929B (SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* __this, const RuntimeMethod* method) ;
// System.String System.Runtime.Serialization.SerializationEntry::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SerializationEntry_get_Name_mF6151F31B3F43C88AF08F39F178401406642EB67_inline (SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74* __this, const RuntimeMethod* method) ;
// System.Object System.Runtime.Serialization.SerializationEntry::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SerializationEntry_get_Value_mA57713535F866795C180D20067C0E38A85327912_inline (SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.Serialization.SerializationInfoEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializationInfoEnumerator_MoveNext_m4F052C960AE85EFED1048CAAAC538AB3714078A6 (SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* __this, const RuntimeMethod* method) ;
// System.String System.Xml.XmlException::CreateMessage(System.String,System.String[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlException_CreateMessage_m7EF05421A745BA0BC494014171B7FE75BE36D056 (String_t* ___0_res, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_args, int32_t ___2_lineNumber, int32_t ___3_linePosition, const RuntimeMethod* method) ;
// System.Void System.Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception_GetObjectData_mD69929DB0BB2512240908B9EEE21778CB7B72DA9 (Exception_t* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m28FE9B110F21DDB8FF5F5E35A0EABD659DB22C2F (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlException__ctor_m39D4A09CD4A3351C21D85A89AAE43ECAD0E910F4 (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlException::.ctor(System.String,System.Exception,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlException__ctor_m022651219BF5C270D6B851281AACACCB4A6AE5FC (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* __this, String_t* ___0_message, Exception_t* ___1_innerException, int32_t ___2_lineNumber, int32_t ___3_linePosition, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlException::.ctor(System.String,System.Exception,System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlException__ctor_m9E8E4966F92E92928F2334A4B5A6992A20505AD7 (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* __this, String_t* ___0_message, Exception_t* ___1_innerException, int32_t ___2_lineNumber, int32_t ___3_linePosition, String_t* ___4_sourceUri, const RuntimeMethod* method) ;
// System.String System.Xml.XmlException::FormatUserMessage(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlException_FormatUserMessage_m063B26658DDABD7F6364C28217D4A518715FC001 (String_t* ___0_message, int32_t ___1_lineNumber, int32_t ___2_linePosition, const RuntimeMethod* method) ;
// System.Void System.SystemException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemException__ctor_m0FC84CACD2A5D66222998AA601A5C41CEC36A611 (SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.Exception::set_HResult(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Exception_set_HResult_m010A171183E240EBF4F7611E924B533FAB2E471F_inline (Exception_t* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlException::.ctor(System.String,System.String[],System.Exception,System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlException__ctor_mAF9987B6D433F91FBD0101527C492BA66AB25F37 (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* __this, String_t* ___0_res, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_args, Exception_t* ___2_innerException, int32_t ___3_lineNumber, int32_t ___4_linePosition, String_t* ___5_sourceUri, const RuntimeMethod* method) ;
// System.String System.Int32::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m3B2730D9F5B0C1C57DCCC8B8DCFB8E5EC4E8979B (int32_t* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.String System.Exception::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Exception_get_Message_mCFE0D38FDF9001405299AAE43BBE2A9AD806C441 (Exception_t* __this, const RuntimeMethod* method) ;
// System.String SR::GetString(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetString_mBBCFC8C3B18DF600D0FAED49E703251D2250D41B (String_t* ___0_name, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String SR::GetString(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetString_mBBCFC8C3B18DF600D0FAED49E703251D2250D41B (String_t* ___0_name, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_1 = ___0_name;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		String_t* L_3;
		L_3 = SR_GetString_mA5E85933B81C0C44BF2C3784451187A0C9514E3C(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.String SR::GetString(System.Globalization.CultureInfo,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetString_mA5E85933B81C0C44BF2C3784451187A0C9514E3C (CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___0_culture, String_t* ___1_name, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, const RuntimeMethod* method) 
{
	{
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0 = ___0_culture;
		String_t* L_1 = ___1_name;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.Base64Encoder::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Base64Encoder_Flush_mBCE3506CD0C1A9EF71FB84544496707BBC562324 (Base64Encoder_tA62CD5B68BCE27F764FAA91A7FCE6583772978A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___leftOverBytesCount_1;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___leftOverBytes_0;
		int32_t L_2 = __this->___leftOverBytesCount_1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = __this->___charsLine_2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Convert_ToBase64CharArray_mA76751948F258E3726B76E8A93133C6F364B216B(L_1, 0, L_2, L_3, 0, NULL);
		V_0 = L_4;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = __this->___charsLine_2;
		int32_t L_6 = V_0;
		VirtualActionInvoker3< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t, int32_t >::Invoke(4 /* System.Void System.Xml.Base64Encoder::WriteChars(System.Char[],System.Int32,System.Int32) */, __this, L_5, 0, L_6);
		__this->___leftOverBytesCount_1 = 0;
	}

IL_0038:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.XmlTextWriterBase64Encoder::WriteChars(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextWriterBase64Encoder_WriteChars_m895F0F1E91C6A0D76A27621A11FECB6E14517365 (XmlTextWriterBase64Encoder_tC7209F119916DF622459E830377C23D7BFA2B30D* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_chars, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) 
{
	{
		XmlTextEncoder_tACD13BCC8237E0710F82A7703FAF7D09FCDF0C40* L_0 = __this->___xmlTextEncoder_3;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = ___0_chars;
		int32_t L_2 = ___1_index;
		int32_t L_3 = ___2_count;
		NullCheck(L_0);
		XmlTextEncoder_WriteRaw_m3003736A7A660B71BF6890C087EB7AE70C9388C7(L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.SecureStringHasher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecureStringHasher__ctor_m1F7C97F1DB5BEC1B80480E7CB4019B8E68CC4E92 (SecureStringHasher_t4052E73C966E6FE65426B19F4AF48AB9869F614E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0;
		L_0 = Environment_get_TickCount_m183BFCF001E12849E3D898957F0B81FD88BA183C(NULL);
		__this->___hashCodeRandomizer_1 = L_0;
		return;
	}
}
// System.Boolean System.Xml.SecureStringHasher::Equals(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SecureStringHasher_Equals_m8B63A714C33E1F7F738D528913B19165972CDDE7 (SecureStringHasher_t4052E73C966E6FE65426B19F4AF48AB9869F614E* __this, String_t* ___0_x, String_t* ___1_y, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_x;
		String_t* L_1 = ___1_y;
		bool L_2;
		L_2 = String_Equals_mCC34895D0DB2AD440C9D8767032215BC86B5C48B(L_0, L_1, 4, NULL);
		return L_2;
	}
}
// System.Int32 System.Xml.SecureStringHasher::GetHashCode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SecureStringHasher_GetHashCode_m227DB10B51581EC41428AA34560415F9916FF8C4 (SecureStringHasher_t4052E73C966E6FE65426B19F4AF48AB9869F614E* __this, String_t* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecureStringHasher_t4052E73C966E6FE65426B19F4AF48AB9869F614E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HashCodeOfStringDelegate_t9AB4FF441166EF88D20657805C4FA187C4FF5046* L_0 = ((SecureStringHasher_t4052E73C966E6FE65426B19F4AF48AB9869F614E_StaticFields*)il2cpp_codegen_static_fields_for(SecureStringHasher_t4052E73C966E6FE65426B19F4AF48AB9869F614E_il2cpp_TypeInfo_var))->___hashCodeDelegate_0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		HashCodeOfStringDelegate_t9AB4FF441166EF88D20657805C4FA187C4FF5046* L_1;
		L_1 = SecureStringHasher_GetHashCodeDelegate_mC935B1E47A8478DE0257CD650A4689DB2965A379(NULL);
		((SecureStringHasher_t4052E73C966E6FE65426B19F4AF48AB9869F614E_StaticFields*)il2cpp_codegen_static_fields_for(SecureStringHasher_t4052E73C966E6FE65426B19F4AF48AB9869F614E_il2cpp_TypeInfo_var))->___hashCodeDelegate_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SecureStringHasher_t4052E73C966E6FE65426B19F4AF48AB9869F614E_StaticFields*)il2cpp_codegen_static_fields_for(SecureStringHasher_t4052E73C966E6FE65426B19F4AF48AB9869F614E_il2cpp_TypeInfo_var))->___hashCodeDelegate_0), (void*)L_1);
	}

IL_0011:
	{
		HashCodeOfStringDelegate_t9AB4FF441166EF88D20657805C4FA187C4FF5046* L_2 = ((SecureStringHasher_t4052E73C966E6FE65426B19F4AF48AB9869F614E_StaticFields*)il2cpp_codegen_static_fields_for(SecureStringHasher_t4052E73C966E6FE65426B19F4AF48AB9869F614E_il2cpp_TypeInfo_var))->___hashCodeDelegate_0;
		String_t* L_3 = ___0_key;
		String_t* L_4 = ___0_key;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		int32_t L_6 = __this->___hashCodeRandomizer_1;
		NullCheck(L_2);
		int32_t L_7;
		L_7 = HashCodeOfStringDelegate_Invoke_m75607AC5443193A85145E05E5C6036A9BA0C61A2_inline(L_2, L_3, L_5, ((int64_t)L_6), NULL);
		return L_7;
	}
}
// System.Int32 System.Xml.SecureStringHasher::GetHashCodeOfString(System.String,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SecureStringHasher_GetHashCodeOfString_mD609BCF07ECFD2DC5CA0118228A09B6757D0D30A (String_t* ___0_key, int32_t ___1_sLen, int64_t ___2_additionalEntropy, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int64_t L_0 = ___2_additionalEntropy;
		V_0 = ((int32_t)L_0);
		V_1 = 0;
		goto IL_0019;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		int32_t L_2 = V_0;
		String_t* L_3 = ___0_key;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		Il2CppChar L_5;
		L_5 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_3, L_4, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)(((int32_t)(L_2<<7))^(int32_t)L_5))));
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0019:
	{
		int32_t L_7 = V_1;
		String_t* L_8 = ___0_key;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_8, NULL);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_10 = V_0;
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_10, ((int32_t)(L_11>>((int32_t)17)))));
		int32_t L_12 = V_0;
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, ((int32_t)(L_13>>((int32_t)11)))));
		int32_t L_14 = V_0;
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_14, ((int32_t)(L_15>>5))));
		int32_t L_16 = V_0;
		return L_16;
	}
}
// System.Xml.SecureStringHasher/HashCodeOfStringDelegate System.Xml.SecureStringHasher::GetHashCodeDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashCodeOfStringDelegate_t9AB4FF441166EF88D20657805C4FA187C4FF5046* SecureStringHasher_GetHashCodeDelegate_mC935B1E47A8478DE0257CD650A4689DB2965A379 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashCodeOfStringDelegate_t9AB4FF441166EF88D20657805C4FA187C4FF5046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashCodeOfStringDelegate_t9AB4FF441166EF88D20657805C4FA187C4FF5046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecureStringHasher_GetHashCodeOfString_mD609BCF07ECFD2DC5CA0118228A09B6757D0D30A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9319D8D06606B8F2B10B57EBAABAE57F7D5B8E7);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t* V_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		MethodInfo_t* L_2;
		L_2 = Type_GetMethod_m9E66B5053F150537A74C490C1DA5174A7875189D(L_1, _stringLiteralD9319D8D06606B8F2B10B57EBAABAE57F7D5B8E7, ((int32_t)40), NULL);
		V_0 = L_2;
		MethodInfo_t* L_3 = V_0;
		bool L_4;
		L_4 = MethodInfo_op_Inequality_mB73597A1FCC2F906DBCADDEC68A1B7D5B7E89FA8(L_3, (MethodInfo_t*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (HashCodeOfStringDelegate_t9AB4FF441166EF88D20657805C4FA187C4FF5046_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		MethodInfo_t* L_7 = V_0;
		Delegate_t* L_8;
		L_8 = Delegate_CreateDelegate_m166F8149A673DE0A735634C1AB9DE71FD34A6BB4(L_6, L_7, NULL);
		return ((HashCodeOfStringDelegate_t9AB4FF441166EF88D20657805C4FA187C4FF5046*)CastclassSealed((RuntimeObject*)L_8, HashCodeOfStringDelegate_t9AB4FF441166EF88D20657805C4FA187C4FF5046_il2cpp_TypeInfo_var));
	}

IL_0036:
	{
		HashCodeOfStringDelegate_t9AB4FF441166EF88D20657805C4FA187C4FF5046* L_9 = (HashCodeOfStringDelegate_t9AB4FF441166EF88D20657805C4FA187C4FF5046*)il2cpp_codegen_object_new(HashCodeOfStringDelegate_t9AB4FF441166EF88D20657805C4FA187C4FF5046_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		HashCodeOfStringDelegate__ctor_m5635DF373D683517CDFD80D0EB8C380E78BFFA58(L_9, NULL, (intptr_t)((void*)SecureStringHasher_GetHashCodeOfString_mD609BCF07ECFD2DC5CA0118228A09B6757D0D30A_RuntimeMethod_var), NULL);
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t HashCodeOfStringDelegate_Invoke_m75607AC5443193A85145E05E5C6036A9BA0C61A2_Multicast(HashCodeOfStringDelegate_t9AB4FF441166EF88D20657805C4FA187C4FF5046* __this, String_t* ___0_s, int32_t ___1_sLen, int64_t ___2_additionalEntropy, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		HashCodeOfStringDelegate_t9AB4FF441166EF88D20657805C4FA187C4FF5046* currentDelegate = reinterpret_cast<HashCodeOfStringDelegate_t9AB4FF441166EF88D20657805C4FA187C4FF5046*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, String_t*, int32_t, int64_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_s, ___1_sLen, ___2_additionalEntropy, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t HashCodeOfStringDelegate_Invoke_m75607AC5443193A85145E05E5C6036A9BA0C61A2_OpenInst(HashCodeOfStringDelegate_t9AB4FF441166EF88D20657805C4FA187C4FF5046* __this, String_t* ___0_s, int32_t ___1_sLen, int64_t ___2_additionalEntropy, const RuntimeMethod* method)
{
	NullCheck(___0_s);
	typedef int32_t (*FunctionPointerType) (String_t*, int32_t, int64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_s, ___1_sLen, ___2_additionalEntropy, method);
}
int32_t HashCodeOfStringDelegate_Invoke_m75607AC5443193A85145E05E5C6036A9BA0C61A2_OpenStatic(HashCodeOfStringDelegate_t9AB4FF441166EF88D20657805C4FA187C4FF5046* __this, String_t* ___0_s, int32_t ___1_sLen, int64_t ___2_additionalEntropy, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (String_t*, int32_t, int64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_s, ___1_sLen, ___2_additionalEntropy, method);
}
int32_t HashCodeOfStringDelegate_Invoke_m75607AC5443193A85145E05E5C6036A9BA0C61A2_OpenStaticInvoker(HashCodeOfStringDelegate_t9AB4FF441166EF88D20657805C4FA187C4FF5046* __this, String_t* ___0_s, int32_t ___1_sLen, int64_t ___2_additionalEntropy, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, String_t*, int32_t, int64_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_s, ___1_sLen, ___2_additionalEntropy);
}
int32_t HashCodeOfStringDelegate_Invoke_m75607AC5443193A85145E05E5C6036A9BA0C61A2_ClosedStaticInvoker(HashCodeOfStringDelegate_t9AB4FF441166EF88D20657805C4FA187C4FF5046* __this, String_t* ___0_s, int32_t ___1_sLen, int64_t ___2_additionalEntropy, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, String_t*, int32_t, int64_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_s, ___1_sLen, ___2_additionalEntropy);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_HashCodeOfStringDelegate_t9AB4FF441166EF88D20657805C4FA187C4FF5046 (HashCodeOfStringDelegate_t9AB4FF441166EF88D20657805C4FA187C4FF5046* __this, String_t* ___0_s, int32_t ___1_sLen, int64_t ___2_additionalEntropy, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(char*, int32_t, int64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_s' to native representation
	char* ____0_s_marshaled = NULL;
	____0_s_marshaled = il2cpp_codegen_marshal_string(___0_s);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(____0_s_marshaled, ___1_sLen, ___2_additionalEntropy);

	// Marshaling cleanup of parameter '___0_s' native representation
	il2cpp_codegen_marshal_free(____0_s_marshaled);
	____0_s_marshaled = NULL;

	return returnValue;
}
// System.Void System.Xml.SecureStringHasher/HashCodeOfStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashCodeOfStringDelegate__ctor_m5635DF373D683517CDFD80D0EB8C380E78BFFA58 (HashCodeOfStringDelegate_t9AB4FF441166EF88D20657805C4FA187C4FF5046* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&HashCodeOfStringDelegate_Invoke_m75607AC5443193A85145E05E5C6036A9BA0C61A2_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&HashCodeOfStringDelegate_Invoke_m75607AC5443193A85145E05E5C6036A9BA0C61A2_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&HashCodeOfStringDelegate_Invoke_m75607AC5443193A85145E05E5C6036A9BA0C61A2_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&HashCodeOfStringDelegate_Invoke_m75607AC5443193A85145E05E5C6036A9BA0C61A2_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&HashCodeOfStringDelegate_Invoke_m75607AC5443193A85145E05E5C6036A9BA0C61A2_Multicast;
}
// System.Int32 System.Xml.SecureStringHasher/HashCodeOfStringDelegate::Invoke(System.String,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeOfStringDelegate_Invoke_m75607AC5443193A85145E05E5C6036A9BA0C61A2 (HashCodeOfStringDelegate_t9AB4FF441166EF88D20657805C4FA187C4FF5046* __this, String_t* ___0_s, int32_t ___1_sLen, int64_t ___2_additionalEntropy, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, String_t*, int32_t, int64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_s, ___1_sLen, ___2_additionalEntropy, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.XmlReader::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlReader__cctor_m9FF3BD38D3644E099B8305E251679A77A0DF493E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_StaticFields*)il2cpp_codegen_static_fields_for(XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_il2cpp_TypeInfo_var))->___IsTextualNodeBitmap_0 = ((int32_t)24600);
		((XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_StaticFields*)il2cpp_codegen_static_fields_for(XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_il2cpp_TypeInfo_var))->___CanReadContentAsBitmap_1 = ((int32_t)123324);
		((XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_StaticFields*)il2cpp_codegen_static_fields_for(XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_il2cpp_TypeInfo_var))->___HasValueBitmap_2 = ((int32_t)157084);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.XmlTextEncoder::.ctor(System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextEncoder__ctor_m29D14256606ECE213B16EC9E934E11DE23BC2F6F (XmlTextEncoder_tACD13BCC8237E0710F82A7703FAF7D09FCDF0C40* __this, TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___0_textWriter, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_0 = ___0_textWriter;
		__this->___textWriter_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___textWriter_0), (void*)L_0);
		__this->___quoteChar_2 = ((int32_t)34);
		XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3 L_1;
		L_1 = XmlCharType_get_Instance_m1279A3FC91B74599A9BC76979E50DBFC07F67C55(NULL);
		__this->___xmlCharType_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___xmlCharType_5))->___charProperties_2), (void*)NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextEncoder::set_QuoteChar(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextEncoder_set_QuoteChar_mE15FB6ECB7FAF6CE0780E1FE421D0802BF38D627 (XmlTextEncoder_tACD13BCC8237E0710F82A7703FAF7D09FCDF0C40* __this, Il2CppChar ___0_value, const RuntimeMethod* method) 
{
	{
		Il2CppChar L_0 = ___0_value;
		__this->___quoteChar_2 = L_0;
		return;
	}
}
// System.Void System.Xml.XmlTextEncoder::StartAttribute(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextEncoder_StartAttribute_mF465D7D8BA5D27C78DD05400E137E682BD9FDE7B (XmlTextEncoder_tACD13BCC8237E0710F82A7703FAF7D09FCDF0C40* __this, bool ___0_cacheAttrValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___inAttribute_1 = (bool)1;
		bool L_0 = ___0_cacheAttrValue;
		__this->___cacheAttrValue_4 = L_0;
		bool L_1 = ___0_cacheAttrValue;
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		StringBuilder_t* L_2 = __this->___attrValue_3;
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		StringBuilder_t* L_3 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_3, NULL);
		__this->___attrValue_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___attrValue_3), (void*)L_3);
		return;
	}

IL_0025:
	{
		StringBuilder_t* L_4 = __this->___attrValue_3;
		NullCheck(L_4);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_4, 0, NULL);
	}

IL_0031:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextEncoder::EndAttribute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextEncoder_EndAttribute_mAED2FFE742552CD2454B204481F9C43B113396FB (XmlTextEncoder_tACD13BCC8237E0710F82A7703FAF7D09FCDF0C40* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___cacheAttrValue_4;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		StringBuilder_t* L_1 = __this->___attrValue_3;
		NullCheck(L_1);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_1, 0, NULL);
	}

IL_0014:
	{
		__this->___inAttribute_1 = (bool)0;
		__this->___cacheAttrValue_4 = (bool)0;
		return;
	}
}
// System.String System.Xml.XmlTextEncoder::get_AttributeValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlTextEncoder_get_AttributeValue_m3DC77E08BDA49EFA196673E7625B43CBCE70DA96 (XmlTextEncoder_tACD13BCC8237E0710F82A7703FAF7D09FCDF0C40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->___cacheAttrValue_4;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		StringBuilder_t* L_1 = __this->___attrValue_3;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		return L_2;
	}

IL_0014:
	{
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_3;
	}
}
// System.Void System.Xml.XmlTextEncoder::WriteSurrogateChar(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextEncoder_WriteSurrogateChar_m81A912C37647DE260C756097A6188DFA25BB1EDB (XmlTextEncoder_tACD13BCC8237E0710F82A7703FAF7D09FCDF0C40* __this, Il2CppChar ___0_lowChar, Il2CppChar ___1_highChar, const RuntimeMethod* method) 
{
	{
		Il2CppChar L_0 = ___0_lowChar;
		bool L_1;
		L_1 = XmlCharType_IsLowSurrogate_m8D27C4276BE118C7FF3ECC1707EEE026D28FC456(L_0, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		Il2CppChar L_2 = ___1_highChar;
		bool L_3;
		L_3 = XmlCharType_IsHighSurrogate_mB3E741B22E4B47DC85F7F18A411F031D8717BA60(L_2, NULL);
		if (L_3)
		{
			goto IL_0018;
		}
	}

IL_0010:
	{
		Il2CppChar L_4 = ___0_lowChar;
		Il2CppChar L_5 = ___1_highChar;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var)));
		Exception_t* L_6;
		L_6 = XmlConvert_CreateInvalidSurrogatePairException_mAD70BE2F96B56C1308578273A8FD96C8240350B2(L_4, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlTextEncoder_WriteSurrogateChar_m81A912C37647DE260C756097A6188DFA25BB1EDB_RuntimeMethod_var)));
	}

IL_0018:
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_7 = __this->___textWriter_0;
		Il2CppChar L_8 = ___1_highChar;
		NullCheck(L_7);
		VirtualActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_7, L_8);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_9 = __this->___textWriter_0;
		Il2CppChar L_10 = ___0_lowChar;
		NullCheck(L_9);
		VirtualActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_9, L_10);
		return;
	}
}
// System.Void System.Xml.XmlTextEncoder::Write(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextEncoder_Write_m50A8B7FD9B3EA8856AE8EA6EEE4FFD02E06726A4 (XmlTextEncoder_tACD13BCC8237E0710F82A7703FAF7D09FCDF0C40* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1710B4477A01FFE20514D8AA61891F364D71C25B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35B44AA64754DEDC52915E7F763C081CF5B004D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral513659CEF285C73478E9829E41D7E4C23DB53E12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral893D84FF4ED81AC205FBC0C67CBEE1C0C752B406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96930EC8C6FD5250BB36A5E1040AB06A9588FD62);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_4 = NULL;
	{
		String_t* L_0 = ___0_text;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		bool L_1 = __this->___cacheAttrValue_4;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		StringBuilder_t* L_2 = __this->___attrValue_3;
		String_t* L_3 = ___0_text;
		NullCheck(L_2);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_2, L_3, NULL);
	}

IL_0019:
	{
		String_t* L_5 = ___0_text;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_0 = L_6;
		V_1 = 0;
		V_2 = 0;
		V_3 = 0;
		goto IL_002c;
	}

IL_0028:
	{
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_002c:
	{
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		if ((((int32_t)L_8) >= ((int32_t)L_9)))
		{
			goto IL_004d;
		}
	}
	{
		XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* L_10 = (XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3*)(&__this->___xmlCharType_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = L_10->___charProperties_2;
		String_t* L_12 = ___0_text;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		Il2CppChar L_14;
		L_14 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_12, L_13, NULL);
		Il2CppChar L_15 = L_14;
		V_3 = L_15;
		NullCheck(L_11);
		Il2CppChar L_16 = L_15;
		uint8_t L_17 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		if (((int32_t)((int32_t)L_17&((int32_t)128))))
		{
			goto IL_0028;
		}
	}

IL_004d:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		if ((!(((uint32_t)L_18) == ((uint32_t)L_19))))
		{
			goto IL_005e;
		}
	}
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_20 = __this->___textWriter_0;
		String_t* L_21 = ___0_text;
		NullCheck(L_20);
		VirtualActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_20, L_21);
		return;
	}

IL_005e:
	{
		bool L_22 = __this->___inAttribute_1;
		if (!L_22)
		{
			goto IL_0071;
		}
	}
	{
		Il2CppChar L_23 = V_3;
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_0090;
		}
	}
	{
		int32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		goto IL_002c;
	}

IL_0071:
	{
		Il2CppChar L_25 = V_3;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)9))))
		{
			goto IL_008a;
		}
	}
	{
		Il2CppChar L_26 = V_3;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)10))))
		{
			goto IL_008a;
		}
	}
	{
		Il2CppChar L_27 = V_3;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)13))))
		{
			goto IL_008a;
		}
	}
	{
		Il2CppChar L_28 = V_3;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)34))))
		{
			goto IL_008a;
		}
	}
	{
		Il2CppChar L_29 = V_3;
		if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)39)))))
		{
			goto IL_0090;
		}
	}

IL_008a:
	{
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_002c;
	}

IL_0090:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_31 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		V_4 = L_31;
	}

IL_009c:
	{
		int32_t L_32 = V_2;
		int32_t L_33 = V_1;
		if ((((int32_t)L_32) >= ((int32_t)L_33)))
		{
			goto IL_00ad;
		}
	}
	{
		String_t* L_34 = ___0_text;
		int32_t L_35 = V_2;
		int32_t L_36 = V_1;
		int32_t L_37 = V_2;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_38 = V_4;
		XmlTextEncoder_WriteStringFragment_mC798AEDBDBCA83BA9B7DD619874CF6597B0B3E0A(__this, L_34, L_35, ((int32_t)il2cpp_codegen_subtract(L_36, L_37)), L_38, NULL);
	}

IL_00ad:
	{
		int32_t L_39 = V_1;
		int32_t L_40 = V_0;
		if ((((int32_t)L_39) == ((int32_t)L_40)))
		{
			goto IL_023a;
		}
	}
	{
		Il2CppChar L_41 = V_3;
		if ((!(((uint32_t)L_41) <= ((uint32_t)((int32_t)38)))))
		{
			goto IL_00e8;
		}
	}
	{
		Il2CppChar L_42 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_42, ((int32_t)9))))
		{
			case 0:
			{
				goto IL_00fc;
			}
			case 1:
			{
				goto IL_010d;
			}
			case 2:
			{
				goto IL_01bf;
			}
			case 3:
			{
				goto IL_01bf;
			}
			case 4:
			{
				goto IL_010d;
			}
		}
	}
	{
		Il2CppChar L_43 = V_3;
		if ((((int32_t)L_43) == ((int32_t)((int32_t)34))))
		{
			goto IL_0192;
		}
	}
	{
		Il2CppChar L_44 = V_3;
		if ((((int32_t)L_44) == ((int32_t)((int32_t)38))))
		{
			goto IL_0152;
		}
	}
	{
		goto IL_01bf;
	}

IL_00e8:
	{
		Il2CppChar L_45 = V_3;
		if ((((int32_t)L_45) == ((int32_t)((int32_t)39))))
		{
			goto IL_0162;
		}
	}
	{
		Il2CppChar L_46 = V_3;
		if ((((int32_t)L_46) == ((int32_t)((int32_t)60))))
		{
			goto IL_0132;
		}
	}
	{
		Il2CppChar L_47 = V_3;
		if ((((int32_t)L_47) == ((int32_t)((int32_t)62))))
		{
			goto IL_0142;
		}
	}
	{
		goto IL_01bf;
	}

IL_00fc:
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_48 = __this->___textWriter_0;
		Il2CppChar L_49 = V_3;
		NullCheck(L_48);
		VirtualActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_48, L_49);
		goto IL_0205;
	}

IL_010d:
	{
		bool L_50 = __this->___inAttribute_1;
		if (!L_50)
		{
			goto IL_0121;
		}
	}
	{
		Il2CppChar L_51 = V_3;
		XmlTextEncoder_WriteCharEntityImpl_m1ACBC7CA8215F706FA03FED4B6DB523B11F3601A(__this, L_51, NULL);
		goto IL_0205;
	}

IL_0121:
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_52 = __this->___textWriter_0;
		Il2CppChar L_53 = V_3;
		NullCheck(L_52);
		VirtualActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_52, L_53);
		goto IL_0205;
	}

IL_0132:
	{
		XmlTextEncoder_WriteEntityRefImpl_m3177B6466CF31B15DD0A4937BEED5178673ED019(__this, _stringLiteral35B44AA64754DEDC52915E7F763C081CF5B004D9, NULL);
		goto IL_0205;
	}

IL_0142:
	{
		XmlTextEncoder_WriteEntityRefImpl_m3177B6466CF31B15DD0A4937BEED5178673ED019(__this, _stringLiteral1710B4477A01FFE20514D8AA61891F364D71C25B, NULL);
		goto IL_0205;
	}

IL_0152:
	{
		XmlTextEncoder_WriteEntityRefImpl_m3177B6466CF31B15DD0A4937BEED5178673ED019(__this, _stringLiteral96930EC8C6FD5250BB36A5E1040AB06A9588FD62, NULL);
		goto IL_0205;
	}

IL_0162:
	{
		bool L_54 = __this->___inAttribute_1;
		if (!L_54)
		{
			goto IL_0183;
		}
	}
	{
		Il2CppChar L_55 = __this->___quoteChar_2;
		Il2CppChar L_56 = V_3;
		if ((!(((uint32_t)L_55) == ((uint32_t)L_56))))
		{
			goto IL_0183;
		}
	}
	{
		XmlTextEncoder_WriteEntityRefImpl_m3177B6466CF31B15DD0A4937BEED5178673ED019(__this, _stringLiteral513659CEF285C73478E9829E41D7E4C23DB53E12, NULL);
		goto IL_0205;
	}

IL_0183:
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_57 = __this->___textWriter_0;
		NullCheck(L_57);
		VirtualActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_57, ((int32_t)39));
		goto IL_0205;
	}

IL_0192:
	{
		bool L_58 = __this->___inAttribute_1;
		if (!L_58)
		{
			goto IL_01b0;
		}
	}
	{
		Il2CppChar L_59 = __this->___quoteChar_2;
		Il2CppChar L_60 = V_3;
		if ((!(((uint32_t)L_59) == ((uint32_t)L_60))))
		{
			goto IL_01b0;
		}
	}
	{
		XmlTextEncoder_WriteEntityRefImpl_m3177B6466CF31B15DD0A4937BEED5178673ED019(__this, _stringLiteral893D84FF4ED81AC205FBC0C67CBEE1C0C752B406, NULL);
		goto IL_0205;
	}

IL_01b0:
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_61 = __this->___textWriter_0;
		NullCheck(L_61);
		VirtualActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_61, ((int32_t)34));
		goto IL_0205;
	}

IL_01bf:
	{
		Il2CppChar L_62 = V_3;
		bool L_63;
		L_63 = XmlCharType_IsHighSurrogate_mB3E741B22E4B47DC85F7F18A411F031D8717BA60(L_62, NULL);
		if (!L_63)
		{
			goto IL_01ef;
		}
	}
	{
		int32_t L_64 = V_1;
		int32_t L_65 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_64, 1))) >= ((int32_t)L_65)))
		{
			goto IL_01e1;
		}
	}
	{
		String_t* L_66 = ___0_text;
		int32_t L_67 = V_1;
		int32_t L_68 = ((int32_t)il2cpp_codegen_add(L_67, 1));
		V_1 = L_68;
		NullCheck(L_66);
		Il2CppChar L_69;
		L_69 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_66, L_68, NULL);
		Il2CppChar L_70 = V_3;
		XmlTextEncoder_WriteSurrogateChar_m81A912C37647DE260C756097A6188DFA25BB1EDB(__this, L_69, L_70, NULL);
		goto IL_0205;
	}

IL_01e1:
	{
		String_t* L_71 = ___0_text;
		int32_t L_72 = V_1;
		NullCheck(L_71);
		Il2CppChar L_73;
		L_73 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_71, L_72, NULL);
		Il2CppChar L_74 = V_3;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var)));
		Exception_t* L_75;
		L_75 = XmlConvert_CreateInvalidSurrogatePairException_mAD70BE2F96B56C1308578273A8FD96C8240350B2(L_73, L_74, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_75, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlTextEncoder_Write_m50A8B7FD9B3EA8856AE8EA6EEE4FFD02E06726A4_RuntimeMethod_var)));
	}

IL_01ef:
	{
		Il2CppChar L_76 = V_3;
		bool L_77;
		L_77 = XmlCharType_IsLowSurrogate_m8D27C4276BE118C7FF3ECC1707EEE026D28FC456(L_76, NULL);
		if (!L_77)
		{
			goto IL_01fe;
		}
	}
	{
		Il2CppChar L_78 = V_3;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var)));
		Exception_t* L_79;
		L_79 = XmlConvert_CreateInvalidHighSurrogateCharException_mD30C6B24B7B92886A5317E3DEA61AC969889BFF4(L_78, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_79, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlTextEncoder_Write_m50A8B7FD9B3EA8856AE8EA6EEE4FFD02E06726A4_RuntimeMethod_var)));
	}

IL_01fe:
	{
		Il2CppChar L_80 = V_3;
		XmlTextEncoder_WriteCharEntityImpl_m1ACBC7CA8215F706FA03FED4B6DB523B11F3601A(__this, L_80, NULL);
	}

IL_0205:
	{
		int32_t L_81 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_81, 1));
		int32_t L_82 = V_1;
		V_2 = L_82;
		goto IL_0211;
	}

IL_020d:
	{
		int32_t L_83 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_83, 1));
	}

IL_0211:
	{
		int32_t L_84 = V_1;
		int32_t L_85 = V_0;
		if ((((int32_t)L_84) >= ((int32_t)L_85)))
		{
			goto IL_009c;
		}
	}
	{
		XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* L_86 = (XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3*)(&__this->___xmlCharType_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_87 = L_86->___charProperties_2;
		String_t* L_88 = ___0_text;
		int32_t L_89 = V_1;
		NullCheck(L_88);
		Il2CppChar L_90;
		L_90 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_88, L_89, NULL);
		Il2CppChar L_91 = L_90;
		V_3 = L_91;
		NullCheck(L_87);
		Il2CppChar L_92 = L_91;
		uint8_t L_93 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		if (((int32_t)((int32_t)L_93&((int32_t)128))))
		{
			goto IL_020d;
		}
	}
	{
		goto IL_009c;
	}

IL_023a:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextEncoder::WriteRaw(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextEncoder_WriteRaw_m3003736A7A660B71BF6890C087EB7AE70C9388C7 (XmlTextEncoder_tACD13BCC8237E0710F82A7703FAF7D09FCDF0C40* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlTextEncoder_WriteRaw_m3003736A7A660B71BF6890C087EB7AE70C9388C7_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___2_count;
		if ((((int32_t)0) <= ((int32_t)L_2)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlTextEncoder_WriteRaw_m3003736A7A660B71BF6890C087EB7AE70C9388C7_RuntimeMethod_var)));
	}

IL_001d:
	{
		int32_t L_4 = ___1_offset;
		if ((((int32_t)0) <= ((int32_t)L_4)))
		{
			goto IL_002c;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlTextEncoder_WriteRaw_m3003736A7A660B71BF6890C087EB7AE70C9388C7_RuntimeMethod_var)));
	}

IL_002c:
	{
		int32_t L_6 = ___2_count;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_offset;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8)))))
		{
			goto IL_003f;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_9 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlTextEncoder_WriteRaw_m3003736A7A660B71BF6890C087EB7AE70C9388C7_RuntimeMethod_var)));
	}

IL_003f:
	{
		bool L_10 = __this->___cacheAttrValue_4;
		if (!L_10)
		{
			goto IL_0056;
		}
	}
	{
		StringBuilder_t* L_11 = __this->___attrValue_3;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_12 = ___0_array;
		int32_t L_13 = ___1_offset;
		int32_t L_14 = ___2_count;
		NullCheck(L_11);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_mC09A30993B77CC4D8E906720683B6386F0E15747(L_11, L_12, L_13, L_14, NULL);
	}

IL_0056:
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_16 = __this->___textWriter_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_17 = ___0_array;
		int32_t L_18 = ___1_offset;
		int32_t L_19 = ___2_count;
		NullCheck(L_16);
		VirtualActionInvoker3< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t, int32_t >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.Char[],System.Int32,System.Int32) */, L_16, L_17, L_18, L_19);
		return;
	}
}
// System.Void System.Xml.XmlTextEncoder::WriteStringFragment(System.String,System.Int32,System.Int32,System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextEncoder_WriteStringFragment_mC798AEDBDBCA83BA9B7DD619874CF6597B0B3E0A (XmlTextEncoder_tACD13BCC8237E0710F82A7703FAF7D09FCDF0C40* __this, String_t* ___0_str, int32_t ___1_offset, int32_t ___2_count, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___3_helperBuffer, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___3_helperBuffer;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		goto IL_0033;
	}

IL_0007:
	{
		int32_t L_1 = ___2_count;
		V_1 = L_1;
		int32_t L_2 = V_1;
		int32_t L_3 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_4 = V_0;
		V_1 = L_4;
	}

IL_000f:
	{
		String_t* L_5 = ___0_str;
		int32_t L_6 = ___1_offset;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = ___3_helperBuffer;
		int32_t L_8 = V_1;
		NullCheck(L_5);
		String_CopyTo_m6E1DE99F2A6481B3B9839C8A026C74887C10A1DC(L_5, L_6, L_7, 0, L_8, NULL);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_9 = __this->___textWriter_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_10 = ___3_helperBuffer;
		int32_t L_11 = V_1;
		NullCheck(L_9);
		VirtualActionInvoker3< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t, int32_t >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.Char[],System.Int32,System.Int32) */, L_9, L_10, 0, L_11);
		int32_t L_12 = ___1_offset;
		int32_t L_13 = V_1;
		___1_offset = ((int32_t)il2cpp_codegen_add(L_12, L_13));
		int32_t L_14 = ___2_count;
		int32_t L_15 = V_1;
		___2_count = ((int32_t)il2cpp_codegen_subtract(L_14, L_15));
	}

IL_0033:
	{
		int32_t L_16 = ___2_count;
		if ((((int32_t)L_16) > ((int32_t)0)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void System.Xml.XmlTextEncoder::WriteCharEntityImpl(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextEncoder_WriteCharEntityImpl_m1ACBC7CA8215F706FA03FED4B6DB523B11F3601A (XmlTextEncoder_tACD13BCC8237E0710F82A7703FAF7D09FCDF0C40* __this, Il2CppChar ___0_ch, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Il2CppChar L_0 = ___0_ch;
		V_0 = L_0;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_1;
		L_1 = NumberFormatInfo_get_InvariantInfo_m4689F466D2607C7369BCE394E3FB3681A6E644FA(NULL);
		String_t* L_2;
		L_2 = Int32_ToString_mE871810BC163EE4EF88E7C7682A6AD39911173B8((&V_0), _stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE, L_1, NULL);
		XmlTextEncoder_WriteCharEntityImpl_m700BFAD8FCCB6BC22471CD185A4CBC2B6C2F1CF0(__this, L_2, NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextEncoder::WriteCharEntityImpl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextEncoder_WriteCharEntityImpl_m700BFAD8FCCB6BC22471CD185A4CBC2B6C2F1CF0 (XmlTextEncoder_tACD13BCC8237E0710F82A7703FAF7D09FCDF0C40* __this, String_t* ___0_strVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEB6890FC169A5D98961042EBCAD0677F2F0656F);
		s_Il2CppMethodInitialized = true;
	}
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_0 = __this->___textWriter_0;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_0, _stringLiteralCEB6890FC169A5D98961042EBCAD0677F2F0656F);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_1 = __this->___textWriter_0;
		String_t* L_2 = ___0_strVal;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_1, L_2);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_3 = __this->___textWriter_0;
		NullCheck(L_3);
		VirtualActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_3, ((int32_t)59));
		return;
	}
}
// System.Void System.Xml.XmlTextEncoder::WriteEntityRefImpl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextEncoder_WriteEntityRefImpl_m3177B6466CF31B15DD0A4937BEED5178673ED019 (XmlTextEncoder_tACD13BCC8237E0710F82A7703FAF7D09FCDF0C40* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_0 = __this->___textWriter_0;
		NullCheck(L_0);
		VirtualActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_0, ((int32_t)38));
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_1 = __this->___textWriter_0;
		String_t* L_2 = ___0_name;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_1, L_2);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_3 = __this->___textWriter_0;
		NullCheck(L_3);
		VirtualActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_3, ((int32_t)59));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.XmlTextWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextWriter__ctor_m48FEF103AD5753DA42EFBDC57A0B7B61B208F8CF (XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NamespaceU5BU5D_tF0F2AD10B1537EBB0F35B1611FD7D89D48FA9E93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TagInfoU5BU5D_tC6FBAFF4593190EF8F7EEBAB8913C4E17D645776_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3 L_0;
		L_0 = XmlCharType_get_Instance_m1279A3FC91B74599A9BC76979E50DBFC07F67C55(NULL);
		__this->___xmlCharType_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___xmlCharType_23))->___charProperties_2), (void*)NULL);
		XmlWriter__ctor_m8944C0C05D32C64DD68AE6641BA0943BE80CE714(__this, NULL);
		__this->___namespaces_15 = (bool)1;
		__this->___formatting_3 = 0;
		__this->___indentation_5 = 2;
		__this->___indentChar_6 = ((int32_t)32);
		NamespaceU5BU5D_tF0F2AD10B1537EBB0F35B1611FD7D89D48FA9E93* L_1 = (NamespaceU5BU5D_tF0F2AD10B1537EBB0F35B1611FD7D89D48FA9E93*)(NamespaceU5BU5D_tF0F2AD10B1537EBB0F35B1611FD7D89D48FA9E93*)SZArrayNew(NamespaceU5BU5D_tF0F2AD10B1537EBB0F35B1611FD7D89D48FA9E93_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->___nsStack_19 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nsStack_19), (void*)L_1);
		__this->___nsTop_20 = (-1);
		TagInfoU5BU5D_tC6FBAFF4593190EF8F7EEBAB8913C4E17D645776* L_2 = (TagInfoU5BU5D_tC6FBAFF4593190EF8F7EEBAB8913C4E17D645776*)(TagInfoU5BU5D_tC6FBAFF4593190EF8F7EEBAB8913C4E17D645776*)SZArrayNew(TagInfoU5BU5D_tC6FBAFF4593190EF8F7EEBAB8913C4E17D645776_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		__this->___stack_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stack_7), (void*)L_2);
		__this->___top_8 = 0;
		TagInfoU5BU5D_tC6FBAFF4593190EF8F7EEBAB8913C4E17D645776* L_3 = __this->___stack_7;
		int32_t L_4 = __this->___top_8;
		NullCheck(L_3);
		TagInfo_Init_m351285BE790D79A15E824AE90114E1DD5734BAB6(((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4))), (-1), NULL);
		__this->___quoteChar_13 = ((int32_t)34);
		il2cpp_codegen_runtime_class_init_inline(XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_il2cpp_TypeInfo_var);
		StateU5BU5D_t41A58B7031FABDC61B34059A1FB722121203D858* L_5 = ((XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_il2cpp_TypeInfo_var))->___stateTableDefault_26;
		__this->___stateTable_9 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stateTable_9), (void*)L_5);
		__this->___currentState_10 = 0;
		__this->___lastToken_11 = ((int32_t)13);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::.ctor(System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextWriter__ctor_m4AE8363DFA5B2D16F3750514727C63D4A0096489 (XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* __this, TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___0_w, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlTextEncoder_tACD13BCC8237E0710F82A7703FAF7D09FCDF0C40_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlTextWriter__ctor_m48FEF103AD5753DA42EFBDC57A0B7B61B208F8CF(__this, NULL);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_0 = ___0_w;
		__this->___textWriter_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___textWriter_0), (void*)L_0);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_1 = ___0_w;
		NullCheck(L_1);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_2;
		L_2 = VirtualFuncInvoker0< Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* >::Invoke(10 /* System.Text.Encoding System.IO.TextWriter::get_Encoding() */, L_1);
		__this->___encoding_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___encoding_2), (void*)L_2);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_3 = ___0_w;
		XmlTextEncoder_tACD13BCC8237E0710F82A7703FAF7D09FCDF0C40* L_4 = (XmlTextEncoder_tACD13BCC8237E0710F82A7703FAF7D09FCDF0C40*)il2cpp_codegen_object_new(XmlTextEncoder_tACD13BCC8237E0710F82A7703FAF7D09FCDF0C40_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		XmlTextEncoder__ctor_m29D14256606ECE213B16EC9E934E11DE23BC2F6F(L_4, L_3, NULL);
		__this->___xmlEncoder_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___xmlEncoder_1), (void*)L_4);
		XmlTextEncoder_tACD13BCC8237E0710F82A7703FAF7D09FCDF0C40* L_5 = __this->___xmlEncoder_1;
		Il2CppChar L_6 = __this->___quoteChar_13;
		NullCheck(L_5);
		XmlTextEncoder_set_QuoteChar_mE15FB6ECB7FAF6CE0780E1FE421D0802BF38D627_inline(L_5, L_6, NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteEndElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextWriter_WriteEndElement_mA8CD9204FB8E00BC57A4ABD7F1CFED2487E34E42 (XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* __this, const RuntimeMethod* method) 
{
	{
		XmlTextWriter_InternalWriteEndElement_m1FEBF6E0816D4B25A83B098093170CA61265CA6B(__this, (bool)0, NULL);
		return;
	}
}
// System.Xml.WriteState System.Xml.XmlTextWriter::get_WriteState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlTextWriter_get_WriteState_m2D73C223CA6F8883A206FDEED27BFD25A6E3C88F (XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___currentState_10;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0037;
			}
			case 1:
			{
				goto IL_0039;
			}
			case 2:
			{
				goto IL_0039;
			}
			case 3:
			{
				goto IL_003b;
			}
			case 4:
			{
				goto IL_003d;
			}
			case 5:
			{
				goto IL_003f;
			}
			case 6:
			{
				goto IL_003d;
			}
			case 7:
			{
				goto IL_003f;
			}
			case 8:
			{
				goto IL_0041;
			}
			case 9:
			{
				goto IL_0043;
			}
		}
	}
	{
		goto IL_0045;
	}

IL_0037:
	{
		return (int32_t)(0);
	}

IL_0039:
	{
		return (int32_t)(1);
	}

IL_003b:
	{
		return (int32_t)(2);
	}

IL_003d:
	{
		return (int32_t)(3);
	}

IL_003f:
	{
		return (int32_t)(4);
	}

IL_0041:
	{
		return (int32_t)(6);
	}

IL_0043:
	{
		return (int32_t)(5);
	}

IL_0045:
	{
		return (int32_t)(6);
	}
}
// System.Void System.Xml.XmlTextWriter::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextWriter_Close_mC6869F52623D5C5024CBC333916E09DBE102F3FD (XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* __this, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				__this->___currentState_10 = ((int32_t)9);
				TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_0 = __this->___textWriter_0;
				NullCheck(L_0);
				VirtualActionInvoker0::Invoke(8 /* System.Void System.IO.TextWriter::Close() */, L_0);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				XmlTextWriter_AutoCompleteAll_m4B6E34BC27932EF01C546E2C1CBB70BF21721209(__this, NULL);
				goto IL_001f;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0008_1;
				}
				throw e;
			}

CATCH_0008_1:
			{// begin catch(System.Object)
				RuntimeObject* L_1 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
				IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
				goto IL_001f;
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001f:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::AutoComplete(System.Xml.XmlTextWriter/Token)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextWriter_AutoComplete_m6D82B054F5B8A65C9DEFEC095D1AA71B64E01D19 (XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* __this, int32_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___currentState_10;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_001a;
		}
	}
	{
		String_t* L_1;
		L_1 = Res_GetString_mBEE82ACFE97F93A6DDE81E322477CF2713466364(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral952F621460E9250177F13FF0BEAD9E00E2B86302)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlTextWriter_AutoComplete_m6D82B054F5B8A65C9DEFEC095D1AA71B64E01D19_RuntimeMethod_var)));
	}

IL_001a:
	{
		int32_t L_3 = __this->___currentState_10;
		if ((!(((uint32_t)L_3) == ((uint32_t)8))))
		{
			goto IL_004d;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_il2cpp_TypeInfo_var)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = ((XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_il2cpp_TypeInfo_var))))->___tokenName_25;
		int32_t L_7 = ___0_token;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		String_t* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_9);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = ((XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_il2cpp_TypeInfo_var))))->___stateName_24;
		NullCheck(L_11);
		int32_t L_12 = 8;
		String_t* L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_13);
		String_t* L_14;
		L_14 = Res_GetString_m088600B9D0FC319A206451B009A0583C600B9A83(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral23E65142459FB1BF5009AD8736318547A5DFE850)), L_10, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_15 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_15, L_14, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlTextWriter_AutoComplete_m6D82B054F5B8A65C9DEFEC095D1AA71B64E01D19_RuntimeMethod_var)));
	}

IL_004d:
	{
		StateU5BU5D_t41A58B7031FABDC61B34059A1FB722121203D858* L_16 = __this->___stateTable_9;
		int32_t L_17 = ___0_token;
		int32_t L_18 = __this->___currentState_10;
		NullCheck(L_16);
		int32_t L_19 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((int32_t)L_17, 8)), (int32_t)L_18));
		int32_t L_20 = (int32_t)(L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_0 = L_20;
		int32_t L_21 = V_0;
		if ((!(((uint32_t)L_21) == ((uint32_t)8))))
		{
			goto IL_0092;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_22;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_il2cpp_TypeInfo_var)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = ((XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_il2cpp_TypeInfo_var))))->___tokenName_25;
		int32_t L_25 = ___0_token;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		String_t* L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_27);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_27);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = L_23;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = ((XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_il2cpp_TypeInfo_var))))->___stateName_24;
		int32_t L_30 = __this->___currentState_10;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		String_t* L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_32);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_32);
		String_t* L_33;
		L_33 = Res_GetString_m088600B9D0FC319A206451B009A0583C600B9A83(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral23E65142459FB1BF5009AD8736318547A5DFE850)), L_28, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_34 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_34);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_34, L_33, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlTextWriter_AutoComplete_m6D82B054F5B8A65C9DEFEC095D1AA71B64E01D19_RuntimeMethod_var)));
	}

IL_0092:
	{
		int32_t L_35 = ___0_token;
		switch (L_35)
		{
			case 0:
			{
				goto IL_00f3;
			}
			case 1:
			{
				goto IL_00d1;
			}
			case 2:
			{
				goto IL_00f3;
			}
			case 3:
			{
				goto IL_00f3;
			}
			case 4:
			{
				goto IL_00f3;
			}
			case 5:
			{
				goto IL_015d;
			}
			case 6:
			{
				goto IL_015d;
			}
			case 7:
			{
				goto IL_01b5;
			}
			case 8:
			{
				goto IL_01fc;
			}
			case 9:
			{
				goto IL_0212;
			}
			case 10:
			{
				goto IL_0212;
			}
			case 11:
			{
				goto IL_0212;
			}
			case 12:
			{
				goto IL_0212;
			}
		}
	}
	{
		goto IL_025c;
	}

IL_00d1:
	{
		bool L_36 = __this->___indented_4;
		if (!L_36)
		{
			goto IL_026c;
		}
	}
	{
		int32_t L_37 = __this->___currentState_10;
		if (!L_37)
		{
			goto IL_026c;
		}
	}
	{
		XmlTextWriter_Indent_m8FDE99DA08161BAF95B52060FE665815467653AC(__this, (bool)0, NULL);
		goto IL_026c;
	}

IL_00f3:
	{
		int32_t L_38 = __this->___currentState_10;
		if ((!(((uint32_t)L_38) == ((uint32_t)4))))
		{
			goto IL_010b;
		}
	}
	{
		XmlTextWriter_WriteEndAttributeQuote_mB416CDC30D6D53A1CA083DB23889440E87AFF2AD(__this, NULL);
		XmlTextWriter_WriteEndStartTag_m3D5BD66F7B3C09F72E943C0E5C865371905D552E(__this, (bool)0, NULL);
		goto IL_011b;
	}

IL_010b:
	{
		int32_t L_39 = __this->___currentState_10;
		if ((!(((uint32_t)L_39) == ((uint32_t)3))))
		{
			goto IL_011b;
		}
	}
	{
		XmlTextWriter_WriteEndStartTag_m3D5BD66F7B3C09F72E943C0E5C865371905D552E(__this, (bool)0, NULL);
	}

IL_011b:
	{
		int32_t L_40 = ___0_token;
		if ((!(((uint32_t)L_40) == ((uint32_t)3))))
		{
			goto IL_013b;
		}
	}
	{
		TagInfoU5BU5D_tC6FBAFF4593190EF8F7EEBAB8913C4E17D645776* L_41 = __this->___stack_7;
		int32_t L_42 = __this->___top_8;
		NullCheck(L_41);
		((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___mixed_8 = (bool)1;
		goto IL_026c;
	}

IL_013b:
	{
		bool L_43 = __this->___indented_4;
		if (!L_43)
		{
			goto IL_026c;
		}
	}
	{
		int32_t L_44 = __this->___currentState_10;
		if (!L_44)
		{
			goto IL_026c;
		}
	}
	{
		XmlTextWriter_Indent_m8FDE99DA08161BAF95B52060FE665815467653AC(__this, (bool)0, NULL);
		goto IL_026c;
	}

IL_015d:
	{
		bool L_45 = __this->___flush_18;
		if (!L_45)
		{
			goto IL_016b;
		}
	}
	{
		XmlTextWriter_FlushEncoders_mF122D55A7BB079E9DA00A0055CFC78277584A093(__this, NULL);
	}

IL_016b:
	{
		int32_t L_46 = __this->___currentState_10;
		if ((!(((uint32_t)L_46) == ((uint32_t)4))))
		{
			goto IL_017a;
		}
	}
	{
		XmlTextWriter_WriteEndAttributeQuote_mB416CDC30D6D53A1CA083DB23889440E87AFF2AD(__this, NULL);
	}

IL_017a:
	{
		int32_t L_47 = __this->___currentState_10;
		if ((!(((uint32_t)L_47) == ((uint32_t)5))))
		{
			goto IL_0188;
		}
	}
	{
		___0_token = 6;
		goto IL_0192;
	}

IL_0188:
	{
		int32_t L_48 = ___0_token;
		XmlTextWriter_WriteEndStartTag_m3D5BD66F7B3C09F72E943C0E5C865371905D552E(__this, (bool)((((int32_t)L_48) == ((int32_t)5))? 1 : 0), NULL);
	}

IL_0192:
	{
		il2cpp_codegen_runtime_class_init_inline(XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_il2cpp_TypeInfo_var);
		StateU5BU5D_t41A58B7031FABDC61B34059A1FB722121203D858* L_49 = ((XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_il2cpp_TypeInfo_var))->___stateTableDocument_27;
		StateU5BU5D_t41A58B7031FABDC61B34059A1FB722121203D858* L_50 = __this->___stateTable_9;
		if ((!(((RuntimeObject*)(StateU5BU5D_t41A58B7031FABDC61B34059A1FB722121203D858*)L_49) == ((RuntimeObject*)(StateU5BU5D_t41A58B7031FABDC61B34059A1FB722121203D858*)L_50))))
		{
			goto IL_026c;
		}
	}
	{
		int32_t L_51 = __this->___top_8;
		if ((!(((uint32_t)L_51) == ((uint32_t)1))))
		{
			goto IL_026c;
		}
	}
	{
		V_0 = 7;
		goto IL_026c;
	}

IL_01b5:
	{
		bool L_52 = __this->___flush_18;
		if (!L_52)
		{
			goto IL_01c3;
		}
	}
	{
		XmlTextWriter_FlushEncoders_mF122D55A7BB079E9DA00A0055CFC78277584A093(__this, NULL);
	}

IL_01c3:
	{
		int32_t L_53 = __this->___currentState_10;
		if ((!(((uint32_t)L_53) == ((uint32_t)4))))
		{
			goto IL_01e4;
		}
	}
	{
		XmlTextWriter_WriteEndAttributeQuote_mB416CDC30D6D53A1CA083DB23889440E87AFF2AD(__this, NULL);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_54 = __this->___textWriter_0;
		NullCheck(L_54);
		VirtualActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_54, ((int32_t)32));
		goto IL_026c;
	}

IL_01e4:
	{
		int32_t L_55 = __this->___currentState_10;
		if ((!(((uint32_t)L_55) == ((uint32_t)3))))
		{
			goto IL_026c;
		}
	}
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_56 = __this->___textWriter_0;
		NullCheck(L_56);
		VirtualActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_56, ((int32_t)32));
		goto IL_026c;
	}

IL_01fc:
	{
		bool L_57 = __this->___flush_18;
		if (!L_57)
		{
			goto IL_020a;
		}
	}
	{
		XmlTextWriter_FlushEncoders_mF122D55A7BB079E9DA00A0055CFC78277584A093(__this, NULL);
	}

IL_020a:
	{
		XmlTextWriter_WriteEndAttributeQuote_mB416CDC30D6D53A1CA083DB23889440E87AFF2AD(__this, NULL);
		goto IL_026c;
	}

IL_0212:
	{
		int32_t L_58 = ___0_token;
		if ((((int32_t)L_58) == ((int32_t)((int32_t)10))))
		{
			goto IL_0225;
		}
	}
	{
		bool L_59 = __this->___flush_18;
		if (!L_59)
		{
			goto IL_0225;
		}
	}
	{
		XmlTextWriter_FlushEncoders_mF122D55A7BB079E9DA00A0055CFC78277584A093(__this, NULL);
	}

IL_0225:
	{
		int32_t L_60 = __this->___currentState_10;
		if ((!(((uint32_t)L_60) == ((uint32_t)3))))
		{
			goto IL_023f;
		}
	}
	{
		int32_t L_61 = __this->___lastToken_11;
		if ((((int32_t)L_61) == ((int32_t)((int32_t)9))))
		{
			goto IL_023f;
		}
	}
	{
		XmlTextWriter_WriteEndStartTag_m3D5BD66F7B3C09F72E943C0E5C865371905D552E(__this, (bool)0, NULL);
	}

IL_023f:
	{
		int32_t L_62 = V_0;
		if ((!(((uint32_t)L_62) == ((uint32_t)5))))
		{
			goto IL_026c;
		}
	}
	{
		TagInfoU5BU5D_tC6FBAFF4593190EF8F7EEBAB8913C4E17D645776* L_63 = __this->___stack_7;
		int32_t L_64 = __this->___top_8;
		NullCheck(L_63);
		((L_63)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_64)))->___mixed_8 = (bool)1;
		goto IL_026c;
	}

IL_025c:
	{
		String_t* L_65;
		L_65 = Res_GetString_mBEE82ACFE97F93A6DDE81E322477CF2713466364(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFBD1A9745DCC4D80697D44756437CCB57698AE21)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_66 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_66);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_66, L_65, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_66, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlTextWriter_AutoComplete_m6D82B054F5B8A65C9DEFEC095D1AA71B64E01D19_RuntimeMethod_var)));
	}

IL_026c:
	{
		int32_t L_67 = V_0;
		__this->___currentState_10 = L_67;
		int32_t L_68 = ___0_token;
		__this->___lastToken_11 = L_68;
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::AutoCompleteAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextWriter_AutoCompleteAll_m4B6E34BC27932EF01C546E2C1CBB70BF21721209 (XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___flush_18;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		XmlTextWriter_FlushEncoders_mF122D55A7BB079E9DA00A0055CFC78277584A093(__this, NULL);
		goto IL_0016;
	}

IL_0010:
	{
		VirtualActionInvoker0::Invoke(5 /* System.Void System.Xml.XmlWriter::WriteEndElement() */, __this);
	}

IL_0016:
	{
		int32_t L_1 = __this->___top_8;
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::InternalWriteEndElement(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextWriter_InternalWriteEndElement_m1FEBF6E0816D4B25A83B098093170CA61265CA6B (XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* __this, bool ___0_longFormat, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* G_B4_0 = NULL;
	XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* G_B5_1 = NULL;
	try
	{// begin try (depth: 1)
		{
			int32_t L_0 = __this->___top_8;
			if ((((int32_t)L_0) > ((int32_t)0)))
			{
				goto IL_0019_1;
			}
		}
		{
			String_t* L_1;
			L_1 = Res_GetString_mBEE82ACFE97F93A6DDE81E322477CF2713466364(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral67171AD8B6817F7CF25B89C98234BCDA36D476FC)), NULL);
			InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
			NullCheck(L_2);
			InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, L_1, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlTextWriter_InternalWriteEndElement_m1FEBF6E0816D4B25A83B098093170CA61265CA6B_RuntimeMethod_var)));
		}

IL_0019_1:
		{
			bool L_3 = ___0_longFormat;
			G_B3_0 = __this;
			if (L_3)
			{
				G_B4_0 = __this;
				goto IL_0020_1;
			}
		}
		{
			G_B5_0 = 5;
			G_B5_1 = G_B3_0;
			goto IL_0021_1;
		}

IL_0020_1:
		{
			G_B5_0 = 6;
			G_B5_1 = G_B4_0;
		}

IL_0021_1:
		{
			NullCheck(G_B5_1);
			XmlTextWriter_AutoComplete_m6D82B054F5B8A65C9DEFEC095D1AA71B64E01D19(G_B5_1, G_B5_0, NULL);
			int32_t L_4 = __this->___lastToken_11;
			if ((!(((uint32_t)L_4) == ((uint32_t)6))))
			{
				goto IL_00d7_1;
			}
		}
		{
			bool L_5 = __this->___indented_4;
			if (!L_5)
			{
				goto IL_0041_1;
			}
		}
		{
			XmlTextWriter_Indent_m8FDE99DA08161BAF95B52060FE665815467653AC(__this, (bool)1, NULL);
		}

IL_0041_1:
		{
			TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_6 = __this->___textWriter_0;
			NullCheck(L_6);
			VirtualActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_6, ((int32_t)60));
			TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_7 = __this->___textWriter_0;
			NullCheck(L_7);
			VirtualActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_7, ((int32_t)47));
			bool L_8 = __this->___namespaces_15;
			if (!L_8)
			{
				goto IL_00a9_1;
			}
		}
		{
			TagInfoU5BU5D_tC6FBAFF4593190EF8F7EEBAB8913C4E17D645776* L_9 = __this->___stack_7;
			int32_t L_10 = __this->___top_8;
			NullCheck(L_9);
			String_t* L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___prefix_1;
			if (!L_11)
			{
				goto IL_00a9_1;
			}
		}
		{
			TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_12 = __this->___textWriter_0;
			TagInfoU5BU5D_tC6FBAFF4593190EF8F7EEBAB8913C4E17D645776* L_13 = __this->___stack_7;
			int32_t L_14 = __this->___top_8;
			NullCheck(L_13);
			String_t* L_15 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___prefix_1;
			NullCheck(L_12);
			VirtualActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_12, L_15);
			TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_16 = __this->___textWriter_0;
			NullCheck(L_16);
			VirtualActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_16, ((int32_t)58));
		}

IL_00a9_1:
		{
			TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_17 = __this->___textWriter_0;
			TagInfoU5BU5D_tC6FBAFF4593190EF8F7EEBAB8913C4E17D645776* L_18 = __this->___stack_7;
			int32_t L_19 = __this->___top_8;
			NullCheck(L_18);
			String_t* L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___name_0;
			NullCheck(L_17);
			VirtualActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_17, L_20);
			TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_21 = __this->___textWriter_0;
			NullCheck(L_21);
			VirtualActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_21, ((int32_t)62));
		}

IL_00d7_1:
		{
			TagInfoU5BU5D_tC6FBAFF4593190EF8F7EEBAB8913C4E17D645776* L_22 = __this->___stack_7;
			int32_t L_23 = __this->___top_8;
			NullCheck(L_22);
			int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___prevNsTop_6;
			V_0 = L_24;
			bool L_25 = __this->___useNsHashtable_22;
			if (!L_25)
			{
				goto IL_010e_1;
			}
		}
		{
			int32_t L_26 = V_0;
			int32_t L_27 = __this->___nsTop_20;
			if ((((int32_t)L_26) >= ((int32_t)L_27)))
			{
				goto IL_010e_1;
			}
		}
		{
			int32_t L_28 = V_0;
			int32_t L_29 = __this->___nsTop_20;
			XmlTextWriter_PopNamespaces_mE1AF0C6EBC567887BAA9E6DD4175AEBF7464A046(__this, ((int32_t)il2cpp_codegen_add(L_28, 1)), L_29, NULL);
		}

IL_010e_1:
		{
			int32_t L_30 = V_0;
			__this->___nsTop_20 = L_30;
			int32_t L_31 = __this->___top_8;
			__this->___top_8 = ((int32_t)il2cpp_codegen_subtract(L_31, 1));
			goto IL_012f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0125;
		}
		throw e;
	}

CATCH_0125:
	{// begin catch(System.Object)
		RuntimeObject* L_32 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
		__this->___currentState_10 = 8;
		IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
	}// end catch (depth: 1)

IL_012f:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteEndStartTag(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextWriter_WriteEndStartTag_m3D5BD66F7B3C09F72E943C0E5C865371905D552E (XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* __this, bool ___0_empty, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C7DA3CBD254CB3BB9FCC98E58CF1A56E605861E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE63895ACF2B7A447477491E6E010B297DD75B0D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		XmlTextEncoder_tACD13BCC8237E0710F82A7703FAF7D09FCDF0C40* L_0 = __this->___xmlEncoder_1;
		NullCheck(L_0);
		XmlTextEncoder_StartAttribute_mF465D7D8BA5D27C78DD05400E137E682BD9FDE7B(L_0, (bool)0, NULL);
		int32_t L_1 = __this->___nsTop_20;
		V_0 = L_1;
		goto IL_00b6;
	}

IL_0018:
	{
		NamespaceU5BU5D_tF0F2AD10B1537EBB0F35B1611FD7D89D48FA9E93* L_2 = __this->___nsStack_19;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		bool L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___declared_2;
		if (L_4)
		{
			goto IL_00b2;
		}
	}
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_5 = __this->___textWriter_0;
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_5, _stringLiteral5C7DA3CBD254CB3BB9FCC98E58CF1A56E605861E);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_6 = __this->___textWriter_0;
		NullCheck(L_6);
		VirtualActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_6, ((int32_t)58));
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_7 = __this->___textWriter_0;
		NamespaceU5BU5D_tF0F2AD10B1537EBB0F35B1611FD7D89D48FA9E93* L_8 = __this->___nsStack_19;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		String_t* L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___prefix_0;
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_7, L_10);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_11 = __this->___textWriter_0;
		NullCheck(L_11);
		VirtualActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_11, ((int32_t)61));
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_12 = __this->___textWriter_0;
		Il2CppChar L_13 = __this->___quoteChar_13;
		NullCheck(L_12);
		VirtualActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_12, L_13);
		XmlTextEncoder_tACD13BCC8237E0710F82A7703FAF7D09FCDF0C40* L_14 = __this->___xmlEncoder_1;
		NamespaceU5BU5D_tF0F2AD10B1537EBB0F35B1611FD7D89D48FA9E93* L_15 = __this->___nsStack_19;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		String_t* L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___ns_1;
		NullCheck(L_14);
		XmlTextEncoder_Write_m50A8B7FD9B3EA8856AE8EA6EEE4FFD02E06726A4(L_14, L_17, NULL);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_18 = __this->___textWriter_0;
		Il2CppChar L_19 = __this->___quoteChar_13;
		NullCheck(L_18);
		VirtualActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_18, L_19);
	}

IL_00b2:
	{
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_20, 1));
	}

IL_00b6:
	{
		int32_t L_21 = V_0;
		TagInfoU5BU5D_tC6FBAFF4593190EF8F7EEBAB8913C4E17D645776* L_22 = __this->___stack_7;
		int32_t L_23 = __this->___top_8;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___prevNsTop_6;
		if ((((int32_t)L_21) > ((int32_t)L_24)))
		{
			goto IL_0018;
		}
	}
	{
		TagInfoU5BU5D_tC6FBAFF4593190EF8F7EEBAB8913C4E17D645776* L_25 = __this->___stack_7;
		int32_t L_26 = __this->___top_8;
		NullCheck(L_25);
		String_t* L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___defaultNs_2;
		TagInfoU5BU5D_tC6FBAFF4593190EF8F7EEBAB8913C4E17D645776* L_28 = __this->___stack_7;
		int32_t L_29 = __this->___top_8;
		NullCheck(L_28);
		String_t* L_30 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_29, 1)))))->___defaultNs_2;
		bool L_31;
		L_31 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_27, L_30, NULL);
		if (!L_31)
		{
			goto IL_019a;
		}
	}
	{
		TagInfoU5BU5D_tC6FBAFF4593190EF8F7EEBAB8913C4E17D645776* L_32 = __this->___stack_7;
		int32_t L_33 = __this->___top_8;
		NullCheck(L_32);
		int32_t L_34 = ((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)))->___defaultNsState_3;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_019a;
		}
	}
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_35 = __this->___textWriter_0;
		NullCheck(L_35);
		VirtualActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_35, _stringLiteral5C7DA3CBD254CB3BB9FCC98E58CF1A56E605861E);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_36 = __this->___textWriter_0;
		NullCheck(L_36);
		VirtualActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_36, ((int32_t)61));
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_37 = __this->___textWriter_0;
		Il2CppChar L_38 = __this->___quoteChar_13;
		NullCheck(L_37);
		VirtualActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_37, L_38);
		XmlTextEncoder_tACD13BCC8237E0710F82A7703FAF7D09FCDF0C40* L_39 = __this->___xmlEncoder_1;
		TagInfoU5BU5D_tC6FBAFF4593190EF8F7EEBAB8913C4E17D645776* L_40 = __this->___stack_7;
		int32_t L_41 = __this->___top_8;
		NullCheck(L_40);
		String_t* L_42 = ((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41)))->___defaultNs_2;
		NullCheck(L_39);
		XmlTextEncoder_Write_m50A8B7FD9B3EA8856AE8EA6EEE4FFD02E06726A4(L_39, L_42, NULL);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_43 = __this->___textWriter_0;
		Il2CppChar L_44 = __this->___quoteChar_13;
		NullCheck(L_43);
		VirtualActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_43, L_44);
		TagInfoU5BU5D_tC6FBAFF4593190EF8F7EEBAB8913C4E17D645776* L_45 = __this->___stack_7;
		int32_t L_46 = __this->___top_8;
		NullCheck(L_45);
		((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___defaultNsState_3 = 3;
	}

IL_019a:
	{
		XmlTextEncoder_tACD13BCC8237E0710F82A7703FAF7D09FCDF0C40* L_47 = __this->___xmlEncoder_1;
		NullCheck(L_47);
		XmlTextEncoder_EndAttribute_mAED2FFE742552CD2454B204481F9C43B113396FB(L_47, NULL);
		bool L_48 = ___0_empty;
		if (!L_48)
		{
			goto IL_01b8;
		}
	}
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_49 = __this->___textWriter_0;
		NullCheck(L_49);
		VirtualActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_49, _stringLiteralCE63895ACF2B7A447477491E6E010B297DD75B0D);
	}

IL_01b8:
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_50 = __this->___textWriter_0;
		NullCheck(L_50);
		VirtualActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_50, ((int32_t)62));
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteEndAttributeQuote()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextWriter_WriteEndAttributeQuote_mB416CDC30D6D53A1CA083DB23889440E87AFF2AD (XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___specialAttr_16;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		XmlTextWriter_HandleSpecialAttribute_m6E1B85CC5B5CE12883AE164DB945EBA54F7564A6(__this, NULL);
	}

IL_000e:
	{
		XmlTextEncoder_tACD13BCC8237E0710F82A7703FAF7D09FCDF0C40* L_1 = __this->___xmlEncoder_1;
		NullCheck(L_1);
		XmlTextEncoder_EndAttribute_mAED2FFE742552CD2454B204481F9C43B113396FB(L_1, NULL);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_2 = __this->___textWriter_0;
		Il2CppChar L_3 = __this->___curQuoteChar_14;
		NullCheck(L_2);
		VirtualActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_2, L_3);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::Indent(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextWriter_Indent_m8FDE99DA08161BAF95B52060FE665815467653AC (XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* __this, bool ___0_beforeEndElement, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = __this->___top_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_1 = __this->___textWriter_0;
		NullCheck(L_1);
		VirtualActionInvoker0::Invoke(17 /* System.Void System.IO.TextWriter::WriteLine() */, L_1);
		return;
	}

IL_0014:
	{
		TagInfoU5BU5D_tC6FBAFF4593190EF8F7EEBAB8913C4E17D645776* L_2 = __this->___stack_7;
		int32_t L_3 = __this->___top_8;
		NullCheck(L_2);
		bool L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___mixed_8;
		if (L_4)
		{
			goto IL_006f;
		}
	}
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_5 = __this->___textWriter_0;
		NullCheck(L_5);
		VirtualActionInvoker0::Invoke(17 /* System.Void System.IO.TextWriter::WriteLine() */, L_5);
		bool L_6 = ___0_beforeEndElement;
		if (L_6)
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_7 = __this->___top_8;
		G_B6_0 = L_7;
		goto IL_004a;
	}

IL_0042:
	{
		int32_t L_8 = __this->___top_8;
		G_B6_0 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_004a:
	{
		V_0 = G_B6_0;
		int32_t L_9 = V_0;
		int32_t L_10 = __this->___indentation_5;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_9, L_10));
		goto IL_006b;
	}

IL_0056:
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_11 = __this->___textWriter_0;
		Il2CppChar L_12 = __this->___indentChar_6;
		NullCheck(L_11);
		VirtualActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_11, L_12);
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_006b:
	{
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) > ((int32_t)0)))
		{
			goto IL_0056;
		}
	}

IL_006f:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::PushNamespace(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextWriter_PushNamespace_m85B9B39621886474A21E929986FBB95C51ECC8FF (XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* __this, String_t* ___0_prefix, String_t* ___1_ns, bool ___2_declared, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C* G_B9_0 = NULL;
	TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C* G_B8_0 = NULL;
	int32_t G_B10_0 = 0;
	TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C* G_B10_1 = NULL;
	{
		String_t* L_0 = ___1_ns;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(_stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE, L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_2;
		L_2 = Res_GetString_mBEE82ACFE97F93A6DDE81E322477CF2713466364(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral197DB4D12C3F8F844439AC8086D04A7E9906FD24)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlTextWriter_PushNamespace_m85B9B39621886474A21E929986FBB95C51ECC8FF_RuntimeMethod_var)));
	}

IL_001d:
	{
		String_t* L_4 = ___0_prefix;
		if (L_4)
		{
			goto IL_0075;
		}
	}
	{
		TagInfoU5BU5D_tC6FBAFF4593190EF8F7EEBAB8913C4E17D645776* L_5 = __this->___stack_7;
		int32_t L_6 = __this->___top_8;
		NullCheck(L_5);
		int32_t L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___defaultNsState_3;
		V_0 = L_7;
		int32_t L_8 = V_0;
		if ((!(((uint32_t)L_8) > ((uint32_t)1))))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)2)))
		{
			goto IL_0057;
		}
	}
	{
		return;
	}

IL_0040:
	{
		TagInfoU5BU5D_tC6FBAFF4593190EF8F7EEBAB8913C4E17D645776* L_10 = __this->___stack_7;
		int32_t L_11 = __this->___top_8;
		NullCheck(L_10);
		String_t* L_12 = ___1_ns;
		((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___defaultNs_2 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___defaultNs_2), (void*)L_12);
	}

IL_0057:
	{
		TagInfoU5BU5D_tC6FBAFF4593190EF8F7EEBAB8913C4E17D645776* L_13 = __this->___stack_7;
		int32_t L_14 = __this->___top_8;
		NullCheck(L_13);
		bool L_15 = ___2_declared;
		G_B8_0 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		if (L_15)
		{
			G_B9_0 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
			goto IL_006e;
		}
	}
	{
		G_B10_0 = 2;
		G_B10_1 = G_B8_0;
		goto IL_006f;
	}

IL_006e:
	{
		G_B10_0 = 3;
		G_B10_1 = G_B9_0;
	}

IL_006f:
	{
		G_B10_1->___defaultNsState_3 = G_B10_0;
		return;
	}

IL_0075:
	{
		String_t* L_16 = ___0_prefix;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_16, NULL);
		if (!L_17)
		{
			goto IL_0095;
		}
	}
	{
		String_t* L_18 = ___1_ns;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_18, NULL);
		if (L_19)
		{
			goto IL_0095;
		}
	}
	{
		String_t* L_20;
		L_20 = Res_GetString_mBEE82ACFE97F93A6DDE81E322477CF2713466364(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB63A1A23B65582B8791AA4E655E90AA5647D7298)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_21 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_21);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_21, L_20, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlTextWriter_PushNamespace_m85B9B39621886474A21E929986FBB95C51ECC8FF_RuntimeMethod_var)));
	}

IL_0095:
	{
		String_t* L_22 = ___0_prefix;
		int32_t L_23;
		L_23 = XmlTextWriter_LookupNamespace_m26D7A144D7D60165AA28DFB54EE15332AD26CB89(__this, L_22, NULL);
		V_1 = L_23;
		int32_t L_24 = V_1;
		if ((((int32_t)L_24) == ((int32_t)(-1))))
		{
			goto IL_00d0;
		}
	}
	{
		NamespaceU5BU5D_tF0F2AD10B1537EBB0F35B1611FD7D89D48FA9E93* L_25 = __this->___nsStack_19;
		int32_t L_26 = V_1;
		NullCheck(L_25);
		String_t* L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___ns_1;
		String_t* L_28 = ___1_ns;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, L_28, NULL);
		if (!L_29)
		{
			goto IL_00d0;
		}
	}
	{
		bool L_30 = ___2_declared;
		if (!L_30)
		{
			goto IL_010b;
		}
	}
	{
		NamespaceU5BU5D_tF0F2AD10B1537EBB0F35B1611FD7D89D48FA9E93* L_31 = __this->___nsStack_19;
		int32_t L_32 = V_1;
		NullCheck(L_31);
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___declared_2 = (bool)1;
		return;
	}

IL_00d0:
	{
		bool L_33 = ___2_declared;
		if (!L_33)
		{
			goto IL_0102;
		}
	}
	{
		int32_t L_34 = V_1;
		if ((((int32_t)L_34) == ((int32_t)(-1))))
		{
			goto IL_0102;
		}
	}
	{
		int32_t L_35 = V_1;
		TagInfoU5BU5D_tC6FBAFF4593190EF8F7EEBAB8913C4E17D645776* L_36 = __this->___stack_7;
		int32_t L_37 = __this->___top_8;
		NullCheck(L_36);
		int32_t L_38 = ((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37)))->___prevNsTop_6;
		if ((((int32_t)L_35) <= ((int32_t)L_38)))
		{
			goto IL_0102;
		}
	}
	{
		NamespaceU5BU5D_tF0F2AD10B1537EBB0F35B1611FD7D89D48FA9E93* L_39 = __this->___nsStack_19;
		int32_t L_40 = V_1;
		NullCheck(L_39);
		((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___declared_2 = (bool)1;
	}

IL_0102:
	{
		String_t* L_41 = ___0_prefix;
		String_t* L_42 = ___1_ns;
		bool L_43 = ___2_declared;
		XmlTextWriter_AddNamespace_mA9DF9F1648BEF737A3D46BE7A93EE57CED55DCB4(__this, L_41, L_42, L_43, NULL);
	}

IL_010b:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::AddNamespace(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextWriter_AddNamespace_mA9DF9F1648BEF737A3D46BE7A93EE57CED55DCB4 (XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* __this, String_t* ___0_prefix, String_t* ___1_ns, bool ___2_declared, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m9804017B0F6F06DE8C8FAA9292240873CB450B2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NamespaceU5BU5D_tF0F2AD10B1537EBB0F35B1611FD7D89D48FA9E93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecureStringHasher_t4052E73C966E6FE65426B19F4AF48AB9869F614E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	NamespaceU5BU5D_tF0F2AD10B1537EBB0F35B1611FD7D89D48FA9E93* V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->___nsTop_20;
		V_1 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = V_1;
		__this->___nsTop_20 = L_1;
		int32_t L_2 = V_1;
		V_0 = L_2;
		int32_t L_3 = V_0;
		NamespaceU5BU5D_tF0F2AD10B1537EBB0F35B1611FD7D89D48FA9E93* L_4 = __this->___nsStack_19;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_5 = V_0;
		NamespaceU5BU5D_tF0F2AD10B1537EBB0F35B1611FD7D89D48FA9E93* L_6 = (NamespaceU5BU5D_tF0F2AD10B1537EBB0F35B1611FD7D89D48FA9E93*)(NamespaceU5BU5D_tF0F2AD10B1537EBB0F35B1611FD7D89D48FA9E93*)SZArrayNew(NamespaceU5BU5D_tF0F2AD10B1537EBB0F35B1611FD7D89D48FA9E93_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_5, 2)));
		V_2 = L_6;
		NamespaceU5BU5D_tF0F2AD10B1537EBB0F35B1611FD7D89D48FA9E93* L_7 = __this->___nsStack_19;
		NamespaceU5BU5D_tF0F2AD10B1537EBB0F35B1611FD7D89D48FA9E93* L_8 = V_2;
		int32_t L_9 = V_0;
		Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_7, (RuntimeArray*)L_8, L_9, NULL);
		NamespaceU5BU5D_tF0F2AD10B1537EBB0F35B1611FD7D89D48FA9E93* L_10 = V_2;
		__this->___nsStack_19 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nsStack_19), (void*)L_10);
	}

IL_003a:
	{
		NamespaceU5BU5D_tF0F2AD10B1537EBB0F35B1611FD7D89D48FA9E93* L_11 = __this->___nsStack_19;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		String_t* L_13 = ___0_prefix;
		String_t* L_14 = ___1_ns;
		bool L_15 = ___2_declared;
		Namespace_Set_mA421F92F59A44FCD987802098A78CA52CA3867BD(((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12))), L_13, L_14, L_15, NULL);
		bool L_16 = __this->___useNsHashtable_22;
		if (!L_16)
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_17 = V_0;
		XmlTextWriter_AddToNamespaceHashtable_m8BCCD6D70601F264479A46D8259BDDC174AD233F(__this, L_17, NULL);
		return;
	}

IL_005e:
	{
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_008d;
		}
	}
	{
		SecureStringHasher_t4052E73C966E6FE65426B19F4AF48AB9869F614E* L_19 = (SecureStringHasher_t4052E73C966E6FE65426B19F4AF48AB9869F614E*)il2cpp_codegen_object_new(SecureStringHasher_t4052E73C966E6FE65426B19F4AF48AB9869F614E_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		SecureStringHasher__ctor_m1F7C97F1DB5BEC1B80480E7CB4019B8E68CC4E92(L_19, NULL);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_20 = (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*)il2cpp_codegen_object_new(Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		Dictionary_2__ctor_m9804017B0F6F06DE8C8FAA9292240873CB450B2D(L_20, L_19, Dictionary_2__ctor_m9804017B0F6F06DE8C8FAA9292240873CB450B2D_RuntimeMethod_var);
		__this->___nsHashtable_21 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nsHashtable_21), (void*)L_20);
		V_3 = 0;
		goto IL_0082;
	}

IL_0077:
	{
		int32_t L_21 = V_3;
		XmlTextWriter_AddToNamespaceHashtable_m8BCCD6D70601F264479A46D8259BDDC174AD233F(__this, L_21, NULL);
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0082:
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_0;
		if ((((int32_t)L_23) <= ((int32_t)L_24)))
		{
			goto IL_0077;
		}
	}
	{
		__this->___useNsHashtable_22 = (bool)1;
	}

IL_008d:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::AddToNamespaceHashtable(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextWriter_AddToNamespaceHashtable_m8BCCD6D70601F264479A46D8259BDDC174AD233F (XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* __this, int32_t ___0_namespaceIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m835BB1E6EA8A8BF1242B51E28FD65B43FEF68E2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		NamespaceU5BU5D_tF0F2AD10B1537EBB0F35B1611FD7D89D48FA9E93* L_0 = __this->___nsStack_19;
		int32_t L_1 = ___0_namespaceIndex;
		NullCheck(L_0);
		String_t* L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->___prefix_0;
		V_0 = L_2;
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_3 = __this->___nsHashtable_21;
		String_t* L_4 = V_0;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_TryGetValue_m835BB1E6EA8A8BF1242B51E28FD65B43FEF68E2A(L_3, L_4, (&V_1), Dictionary_2_TryGetValue_m835BB1E6EA8A8BF1242B51E28FD65B43FEF68E2A_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		NamespaceU5BU5D_tF0F2AD10B1537EBB0F35B1611FD7D89D48FA9E93* L_6 = __this->___nsStack_19;
		int32_t L_7 = ___0_namespaceIndex;
		NullCheck(L_6);
		int32_t L_8 = V_1;
		((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___prevNsIndex_3 = L_8;
	}

IL_0034:
	{
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_9 = __this->___nsHashtable_21;
		String_t* L_10 = V_0;
		int32_t L_11 = ___0_namespaceIndex;
		NullCheck(L_9);
		Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2(L_9, L_10, L_11, Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::PopNamespaces(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextWriter_PopNamespaces_mE1AF0C6EBC567887BAA9E6DD4175AEBF7464A046 (XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* __this, int32_t ___0_indexFrom, int32_t ___1_indexTo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m0C90DB78F4134CDEB001F338AA2745F8D9651CAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_indexTo;
		V_0 = L_0;
		goto IL_0068;
	}

IL_0004:
	{
		NamespaceU5BU5D_tF0F2AD10B1537EBB0F35B1611FD7D89D48FA9E93* L_1 = __this->___nsStack_19;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->___prevNsIndex_3;
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_0037;
		}
	}
	{
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_4 = __this->___nsHashtable_21;
		NamespaceU5BU5D_tF0F2AD10B1537EBB0F35B1611FD7D89D48FA9E93* L_5 = __this->___nsStack_19;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		String_t* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___prefix_0;
		NullCheck(L_4);
		bool L_8;
		L_8 = Dictionary_2_Remove_m0C90DB78F4134CDEB001F338AA2745F8D9651CAC(L_4, L_7, Dictionary_2_Remove_m0C90DB78F4134CDEB001F338AA2745F8D9651CAC_RuntimeMethod_var);
		goto IL_0064;
	}

IL_0037:
	{
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_9 = __this->___nsHashtable_21;
		NamespaceU5BU5D_tF0F2AD10B1537EBB0F35B1611FD7D89D48FA9E93* L_10 = __this->___nsStack_19;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		String_t* L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___prefix_0;
		NamespaceU5BU5D_tF0F2AD10B1537EBB0F35B1611FD7D89D48FA9E93* L_13 = __this->___nsStack_19;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		int32_t L_15 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___prevNsIndex_3;
		NullCheck(L_9);
		Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2(L_9, L_12, L_15, Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2_RuntimeMethod_var);
	}

IL_0064:
	{
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
	}

IL_0068:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___0_indexFrom;
		if ((((int32_t)L_17) >= ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Int32 System.Xml.XmlTextWriter::LookupNamespace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlTextWriter_LookupNamespace_m26D7A144D7D60165AA28DFB54EE15332AD26CB89 (XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* __this, String_t* ___0_prefix, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m835BB1E6EA8A8BF1242B51E28FD65B43FEF68E2A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		bool L_0 = __this->___useNsHashtable_22;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_1 = __this->___nsHashtable_21;
		String_t* L_2 = ___0_prefix;
		NullCheck(L_1);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m835BB1E6EA8A8BF1242B51E28FD65B43FEF68E2A(L_1, L_2, (&V_0), Dictionary_2_TryGetValue_m835BB1E6EA8A8BF1242B51E28FD65B43FEF68E2A_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_4 = V_0;
		return L_4;
	}

IL_001a:
	{
		int32_t L_5 = __this->___nsTop_20;
		V_1 = L_5;
		goto IL_0042;
	}

IL_0023:
	{
		NamespaceU5BU5D_tF0F2AD10B1537EBB0F35B1611FD7D89D48FA9E93* L_6 = __this->___nsStack_19;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		String_t* L_8 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___prefix_0;
		String_t* L_9 = ___0_prefix;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_11 = V_1;
		return L_11;
	}

IL_003e:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_0042:
	{
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0023;
		}
	}

IL_0046:
	{
		return (-1);
	}
}
// System.Void System.Xml.XmlTextWriter::HandleSpecialAttribute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextWriter_HandleSpecialAttribute_m6E1B85CC5B5CE12883AE164DB945EBA54F7564A6 (XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral916F4E7879C25AF1EA844F7068842D5508777C48);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		XmlTextEncoder_tACD13BCC8237E0710F82A7703FAF7D09FCDF0C40* L_0 = __this->___xmlEncoder_1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XmlTextEncoder_get_AttributeValue_m3DC77E08BDA49EFA196673E7625B43CBCE70DA96(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = __this->___specialAttr_16;
		V_1 = L_2;
		int32_t L_3 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, 1)))
		{
			case 0:
			{
				goto IL_0040;
			}
			case 1:
			{
				goto IL_0028;
			}
			case 2:
			{
				goto IL_00ab;
			}
		}
	}
	{
		return;
	}

IL_0028:
	{
		TagInfoU5BU5D_tC6FBAFF4593190EF8F7EEBAB8913C4E17D645776* L_4 = __this->___stack_7;
		int32_t L_5 = __this->___top_8;
		NullCheck(L_4);
		String_t* L_6 = V_0;
		((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___xmlLang_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___xmlLang_5), (void*)L_6);
		return;
	}

IL_0040:
	{
		String_t* L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_8;
		L_8 = XmlConvert_TrimString_mDAA514C90ADF5307B9781647EDE50EC8E542ABC7(L_7, NULL);
		V_0 = L_8;
		String_t* L_9 = V_0;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044, NULL);
		if (!L_10)
		{
			goto IL_006c;
		}
	}
	{
		TagInfoU5BU5D_tC6FBAFF4593190EF8F7EEBAB8913C4E17D645776* L_11 = __this->___stack_7;
		int32_t L_12 = __this->___top_8;
		NullCheck(L_11);
		((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->___xmlSpace_4 = 1;
		return;
	}

IL_006c:
	{
		String_t* L_13 = V_0;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral916F4E7879C25AF1EA844F7068842D5508777C48, NULL);
		if (!L_14)
		{
			goto IL_0091;
		}
	}
	{
		TagInfoU5BU5D_tC6FBAFF4593190EF8F7EEBAB8913C4E17D645776* L_15 = __this->___stack_7;
		int32_t L_16 = __this->___top_8;
		NullCheck(L_15);
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___xmlSpace_4 = 2;
		return;
	}

IL_0091:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_17;
		String_t* L_19 = V_0;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_19);
		String_t* L_20;
		L_20 = Res_GetString_m088600B9D0FC319A206451B009A0583C600B9A83(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB76F93064E827FE764713C55F705D2E388DF17D7)), L_18, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_21 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_21);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_21, L_20, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlTextWriter_HandleSpecialAttribute_m6E1B85CC5B5CE12883AE164DB945EBA54F7564A6_RuntimeMethod_var)));
	}

IL_00ab:
	{
		String_t* L_22 = __this->___prefixForXmlNs_17;
		String_t* L_23 = V_0;
		XmlTextWriter_VerifyPrefixXml_mB5720166A6E438017CE9C6677F77670ACF2BE661(__this, L_22, L_23, NULL);
		String_t* L_24 = __this->___prefixForXmlNs_17;
		String_t* L_25 = V_0;
		XmlTextWriter_PushNamespace_m85B9B39621886474A21E929986FBB95C51ECC8FF(__this, L_24, L_25, (bool)1, NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::VerifyPrefixXml(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextWriter_VerifyPrefixXml_mB5720166A6E438017CE9C6677F77670ACF2BE661 (XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* __this, String_t* ___0_prefix, String_t* ___1_ns, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral349C6DC0F34B9BA242E4C728EDD28CAB809D4917);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_prefix;
		if (!L_0)
		{
			goto IL_006b;
		}
	}
	{
		String_t* L_1 = ___0_prefix;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)3))))
		{
			goto IL_006b;
		}
	}
	{
		String_t* L_3 = ___0_prefix;
		NullCheck(L_3);
		Il2CppChar L_4;
		L_4 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_3, 0, NULL);
		if ((((int32_t)L_4) == ((int32_t)((int32_t)120))))
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_5 = ___0_prefix;
		NullCheck(L_5);
		Il2CppChar L_6;
		L_6 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_5, 0, NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)88)))))
		{
			goto IL_006b;
		}
	}

IL_0022:
	{
		String_t* L_7 = ___0_prefix;
		NullCheck(L_7);
		Il2CppChar L_8;
		L_8 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_7, 1, NULL);
		if ((((int32_t)L_8) == ((int32_t)((int32_t)109))))
		{
			goto IL_0038;
		}
	}
	{
		String_t* L_9 = ___0_prefix;
		NullCheck(L_9);
		Il2CppChar L_10;
		L_10 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_9, 1, NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)77)))))
		{
			goto IL_006b;
		}
	}

IL_0038:
	{
		String_t* L_11 = ___0_prefix;
		NullCheck(L_11);
		Il2CppChar L_12;
		L_12 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_11, 2, NULL);
		if ((((int32_t)L_12) == ((int32_t)((int32_t)108))))
		{
			goto IL_004e;
		}
	}
	{
		String_t* L_13 = ___0_prefix;
		NullCheck(L_13);
		Il2CppChar L_14;
		L_14 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_13, 2, NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)76)))))
		{
			goto IL_006b;
		}
	}

IL_004e:
	{
		String_t* L_15 = ___1_ns;
		bool L_16;
		L_16 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(_stringLiteral349C6DC0F34B9BA242E4C728EDD28CAB809D4917, L_15, NULL);
		if (!L_16)
		{
			goto IL_006b;
		}
	}
	{
		String_t* L_17;
		L_17 = Res_GetString_mBEE82ACFE97F93A6DDE81E322477CF2713466364(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC3FBA6155AE85E3CB81F8437A6F1C503BB7D09B7)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_18 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_18);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_18, L_17, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlTextWriter_VerifyPrefixXml_mB5720166A6E438017CE9C6677F77670ACF2BE661_RuntimeMethod_var)));
	}

IL_006b:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::FlushEncoders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextWriter_FlushEncoders_mF122D55A7BB079E9DA00A0055CFC78277584A093 (XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* __this, const RuntimeMethod* method) 
{
	{
		XmlTextWriterBase64Encoder_tC7209F119916DF622459E830377C23D7BFA2B30D* L_0 = __this->___base64Encoder_12;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		XmlTextWriterBase64Encoder_tC7209F119916DF622459E830377C23D7BFA2B30D* L_1 = __this->___base64Encoder_12;
		NullCheck(L_1);
		Base64Encoder_Flush_mBCE3506CD0C1A9EF71FB84544496707BBC562324(L_1, NULL);
	}

IL_0013:
	{
		__this->___flush_18 = (bool)0;
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextWriter__cctor_m0FB55E81306513A5765789B07FFFAFAD6AE95DB3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateU5BU5D_t41A58B7031FABDC61B34059A1FB722121203D858_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBAB6DC40B1709E21296656960228A17F1BE57FD7____D1D9AF18AFC4E3074AF5E4C44B81B73889D033D7AF6DFEB387BBCC76B36FE8B9_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBAB6DC40B1709E21296656960228A17F1BE57FD7____DB7DD2341DB9D4574E432AAAFF03FB0A3E8FF2F645A337077EDF0C6FE902E660_2_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FD08B3C99047786420F2D9A7AC37D5DC351C9C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral120472D8D40924F6F8355A94DB677A8F142E2EB6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E1DB32AFA986C58B9ACC9C146BF83E67C0DCE66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2343901946DDD83EFBB8B93C33F01CBD394063B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23A6BF321FC205420788A7F2E1A1334F6C712C89);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32189949CB1CA4A6EBB1A643EBE2DB69713D5407);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D9E33C04AB4A0A0E8E88B74BB9D5F9003E15C78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EBF7CFEC7929F196835D5D12FBBE2F845BF2A5F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41477B187466178A05A136C12F806B3EDCAB6349);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45B9464D208C0A900770E5F7A95E5FE067CD4CCC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B4906CA939816C30A7D9C9A911CF6A9F506CCE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5296173AB8D4E282E989F7B0B7B7C9A3ACF26E18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56EF1F2751B48DAA3EC7F762F420920B8E40757A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BBD8C0287448D34297B233D6604618390BA9C38);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9932973D4B6AA1AA193C06D8D34B58B677685003);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6F0795DD4F409C92875D0327F58FDEA357047F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBC1106D65ACC9B0DB541F4FAF5DBAF5B7F7BA1F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD347E1307036F9337DFB643A0DA73051573F178);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2B699E6F0658A4364F9D1A0F5A4EB7C94F6F656);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1C34BAD815D8104249A053C9455FA539CDF5036);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF41760006700B346FE970834ED6436CD21A1330F);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteralD2B699E6F0658A4364F9D1A0F5A4EB7C94F6F656);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralD2B699E6F0658A4364F9D1A0F5A4EB7C94F6F656);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralE1C34BAD815D8104249A053C9455FA539CDF5036);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralE1C34BAD815D8104249A053C9455FA539CDF5036);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral9932973D4B6AA1AA193C06D8D34B58B677685003);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral9932973D4B6AA1AA193C06D8D34B58B677685003);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral120472D8D40924F6F8355A94DB677A8F142E2EB6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral120472D8D40924F6F8355A94DB677A8F142E2EB6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralB6F0795DD4F409C92875D0327F58FDEA357047F1);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralB6F0795DD4F409C92875D0327F58FDEA357047F1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral41477B187466178A05A136C12F806B3EDCAB6349);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral41477B187466178A05A136C12F806B3EDCAB6349);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteralCD347E1307036F9337DFB643A0DA73051573F178);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteralCD347E1307036F9337DFB643A0DA73051573F178);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteralBBC1106D65ACC9B0DB541F4FAF5DBAF5B7F7BA1F);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteralBBC1106D65ACC9B0DB541F4FAF5DBAF5B7F7BA1F);
		((XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_il2cpp_TypeInfo_var))->___stateName_24 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_il2cpp_TypeInfo_var))->___stateName_24), (void*)L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral5296173AB8D4E282E989F7B0B7B7C9A3ACF26E18);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral5296173AB8D4E282E989F7B0B7B7C9A3ACF26E18);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral3D9E33C04AB4A0A0E8E88B74BB9D5F9003E15C78);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3D9E33C04AB4A0A0E8E88B74BB9D5F9003E15C78);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral3EBF7CFEC7929F196835D5D12FBBE2F845BF2A5F);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3EBF7CFEC7929F196835D5D12FBBE2F845BF2A5F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral4B4906CA939816C30A7D9C9A911CF6A9F506CCE3);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral4B4906CA939816C30A7D9C9A911CF6A9F506CCE3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral56EF1F2751B48DAA3EC7F762F420920B8E40757A);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral56EF1F2751B48DAA3EC7F762F420920B8E40757A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteral7BBD8C0287448D34297B233D6604618390BA9C38);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral7BBD8C0287448D34297B233D6604618390BA9C38);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_17;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteral0FD08B3C99047786420F2D9A7AC37D5DC351C9C8);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral0FD08B3C99047786420F2D9A7AC37D5DC351C9C8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_18;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteral23A6BF321FC205420788A7F2E1A1334F6C712C89);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral23A6BF321FC205420788A7F2E1A1334F6C712C89);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_19;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteral2343901946DDD83EFBB8B93C33F01CBD394063B2);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral2343901946DDD83EFBB8B93C33F01CBD394063B2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_20;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteralB6F0795DD4F409C92875D0327F58FDEA357047F1);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteralB6F0795DD4F409C92875D0327F58FDEA357047F1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_21;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteral45B9464D208C0A900770E5F7A95E5FE067CD4CCC);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral45B9464D208C0A900770E5F7A95E5FE067CD4CCC);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_22;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteralF41760006700B346FE970834ED6436CD21A1330F);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteralF41760006700B346FE970834ED6436CD21A1330F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_23;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteral1E1DB32AFA986C58B9ACC9C146BF83E67C0DCE66);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral1E1DB32AFA986C58B9ACC9C146BF83E67C0DCE66);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_24;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, _stringLiteral32189949CB1CA4A6EBB1A643EBE2DB69713D5407);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteral32189949CB1CA4A6EBB1A643EBE2DB69713D5407);
		((XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_il2cpp_TypeInfo_var))->___tokenName_25 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_il2cpp_TypeInfo_var))->___tokenName_25), (void*)L_25);
		StateU5BU5D_t41A58B7031FABDC61B34059A1FB722121203D858* L_26 = (StateU5BU5D_t41A58B7031FABDC61B34059A1FB722121203D858*)(StateU5BU5D_t41A58B7031FABDC61B34059A1FB722121203D858*)SZArrayNew(StateU5BU5D_t41A58B7031FABDC61B34059A1FB722121203D858_il2cpp_TypeInfo_var, (uint32_t)((int32_t)104));
		StateU5BU5D_t41A58B7031FABDC61B34059A1FB722121203D858* L_27 = L_26;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_28 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBAB6DC40B1709E21296656960228A17F1BE57FD7____DB7DD2341DB9D4574E432AAAFF03FB0A3E8FF2F645A337077EDF0C6FE902E660_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_27, L_28, NULL);
		((XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_il2cpp_TypeInfo_var))->___stateTableDefault_26 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&((XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_il2cpp_TypeInfo_var))->___stateTableDefault_26), (void*)L_27);
		StateU5BU5D_t41A58B7031FABDC61B34059A1FB722121203D858* L_29 = (StateU5BU5D_t41A58B7031FABDC61B34059A1FB722121203D858*)(StateU5BU5D_t41A58B7031FABDC61B34059A1FB722121203D858*)SZArrayNew(StateU5BU5D_t41A58B7031FABDC61B34059A1FB722121203D858_il2cpp_TypeInfo_var, (uint32_t)((int32_t)104));
		StateU5BU5D_t41A58B7031FABDC61B34059A1FB722121203D858* L_30 = L_29;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_31 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBAB6DC40B1709E21296656960228A17F1BE57FD7____D1D9AF18AFC4E3074AF5E4C44B81B73889D033D7AF6DFEB387BBCC76B36FE8B9_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_30, L_31, NULL);
		((XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_il2cpp_TypeInfo_var))->___stateTableDocument_27 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&((XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_il2cpp_TypeInfo_var))->___stateTableDocument_27), (void*)L_30);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: System.Xml.XmlTextWriter/TagInfo
IL2CPP_EXTERN_C void TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C_marshal_pinvoke(const TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C& unmarshaled, TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C_marshaled_pinvoke& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.___name_0);
	marshaled.___prefix_1 = il2cpp_codegen_marshal_string(unmarshaled.___prefix_1);
	marshaled.___defaultNs_2 = il2cpp_codegen_marshal_string(unmarshaled.___defaultNs_2);
	marshaled.___defaultNsState_3 = unmarshaled.___defaultNsState_3;
	marshaled.___xmlSpace_4 = unmarshaled.___xmlSpace_4;
	marshaled.___xmlLang_5 = il2cpp_codegen_marshal_string(unmarshaled.___xmlLang_5);
	marshaled.___prevNsTop_6 = unmarshaled.___prevNsTop_6;
	marshaled.___prefixCount_7 = unmarshaled.___prefixCount_7;
	marshaled.___mixed_8 = static_cast<int32_t>(unmarshaled.___mixed_8);
}
IL2CPP_EXTERN_C void TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C_marshal_pinvoke_back(const TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C_marshaled_pinvoke& marshaled, TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_string_result(marshaled.___name_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___name_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___name_0));
	unmarshaled.___prefix_1 = il2cpp_codegen_marshal_string_result(marshaled.___prefix_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___prefix_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___prefix_1));
	unmarshaled.___defaultNs_2 = il2cpp_codegen_marshal_string_result(marshaled.___defaultNs_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___defaultNs_2), (void*)il2cpp_codegen_marshal_string_result(marshaled.___defaultNs_2));
	int32_t unmarshaleddefaultNsState_temp_3 = 0;
	unmarshaleddefaultNsState_temp_3 = marshaled.___defaultNsState_3;
	unmarshaled.___defaultNsState_3 = unmarshaleddefaultNsState_temp_3;
	int32_t unmarshaledxmlSpace_temp_4 = 0;
	unmarshaledxmlSpace_temp_4 = marshaled.___xmlSpace_4;
	unmarshaled.___xmlSpace_4 = unmarshaledxmlSpace_temp_4;
	unmarshaled.___xmlLang_5 = il2cpp_codegen_marshal_string_result(marshaled.___xmlLang_5);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___xmlLang_5), (void*)il2cpp_codegen_marshal_string_result(marshaled.___xmlLang_5));
	int32_t unmarshaledprevNsTop_temp_6 = 0;
	unmarshaledprevNsTop_temp_6 = marshaled.___prevNsTop_6;
	unmarshaled.___prevNsTop_6 = unmarshaledprevNsTop_temp_6;
	int32_t unmarshaledprefixCount_temp_7 = 0;
	unmarshaledprefixCount_temp_7 = marshaled.___prefixCount_7;
	unmarshaled.___prefixCount_7 = unmarshaledprefixCount_temp_7;
	bool unmarshaledmixed_temp_8 = false;
	unmarshaledmixed_temp_8 = static_cast<bool>(marshaled.___mixed_8);
	unmarshaled.___mixed_8 = unmarshaledmixed_temp_8;
}
// Conversion method for clean up from marshalling of: System.Xml.XmlTextWriter/TagInfo
IL2CPP_EXTERN_C void TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C_marshal_pinvoke_cleanup(TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_0);
	marshaled.___name_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___prefix_1);
	marshaled.___prefix_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___defaultNs_2);
	marshaled.___defaultNs_2 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___xmlLang_5);
	marshaled.___xmlLang_5 = NULL;
}
// Conversion methods for marshalling of: System.Xml.XmlTextWriter/TagInfo
IL2CPP_EXTERN_C void TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C_marshal_com(const TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C& unmarshaled, TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C_marshaled_com& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___name_0);
	marshaled.___prefix_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___prefix_1);
	marshaled.___defaultNs_2 = il2cpp_codegen_marshal_bstring(unmarshaled.___defaultNs_2);
	marshaled.___defaultNsState_3 = unmarshaled.___defaultNsState_3;
	marshaled.___xmlSpace_4 = unmarshaled.___xmlSpace_4;
	marshaled.___xmlLang_5 = il2cpp_codegen_marshal_bstring(unmarshaled.___xmlLang_5);
	marshaled.___prevNsTop_6 = unmarshaled.___prevNsTop_6;
	marshaled.___prefixCount_7 = unmarshaled.___prefixCount_7;
	marshaled.___mixed_8 = static_cast<int32_t>(unmarshaled.___mixed_8);
}
IL2CPP_EXTERN_C void TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C_marshal_com_back(const TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C_marshaled_com& marshaled, TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___name_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___name_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___name_0));
	unmarshaled.___prefix_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___prefix_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___prefix_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___prefix_1));
	unmarshaled.___defaultNs_2 = il2cpp_codegen_marshal_bstring_result(marshaled.___defaultNs_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___defaultNs_2), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___defaultNs_2));
	int32_t unmarshaleddefaultNsState_temp_3 = 0;
	unmarshaleddefaultNsState_temp_3 = marshaled.___defaultNsState_3;
	unmarshaled.___defaultNsState_3 = unmarshaleddefaultNsState_temp_3;
	int32_t unmarshaledxmlSpace_temp_4 = 0;
	unmarshaledxmlSpace_temp_4 = marshaled.___xmlSpace_4;
	unmarshaled.___xmlSpace_4 = unmarshaledxmlSpace_temp_4;
	unmarshaled.___xmlLang_5 = il2cpp_codegen_marshal_bstring_result(marshaled.___xmlLang_5);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___xmlLang_5), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___xmlLang_5));
	int32_t unmarshaledprevNsTop_temp_6 = 0;
	unmarshaledprevNsTop_temp_6 = marshaled.___prevNsTop_6;
	unmarshaled.___prevNsTop_6 = unmarshaledprevNsTop_temp_6;
	int32_t unmarshaledprefixCount_temp_7 = 0;
	unmarshaledprefixCount_temp_7 = marshaled.___prefixCount_7;
	unmarshaled.___prefixCount_7 = unmarshaledprefixCount_temp_7;
	bool unmarshaledmixed_temp_8 = false;
	unmarshaledmixed_temp_8 = static_cast<bool>(marshaled.___mixed_8);
	unmarshaled.___mixed_8 = unmarshaledmixed_temp_8;
}
// Conversion method for clean up from marshalling of: System.Xml.XmlTextWriter/TagInfo
IL2CPP_EXTERN_C void TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C_marshal_com_cleanup(TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___name_0);
	marshaled.___name_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___prefix_1);
	marshaled.___prefix_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___defaultNs_2);
	marshaled.___defaultNs_2 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___xmlLang_5);
	marshaled.___xmlLang_5 = NULL;
}
// System.Void System.Xml.XmlTextWriter/TagInfo::Init(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TagInfo_Init_m351285BE790D79A15E824AE90114E1DD5734BAB6 (TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C* __this, int32_t ___0_nsTop, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___name_0 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_0), (void*)(String_t*)NULL);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___defaultNs_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defaultNs_2), (void*)L_0);
		__this->___defaultNsState_3 = 0;
		__this->___xmlSpace_4 = 0;
		__this->___xmlLang_5 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___xmlLang_5), (void*)(String_t*)NULL);
		int32_t L_1 = ___0_nsTop;
		__this->___prevNsTop_6 = L_1;
		__this->___prefixCount_7 = 0;
		__this->___mixed_8 = (bool)0;
		return;
	}
}
IL2CPP_EXTERN_C  void TagInfo_Init_m351285BE790D79A15E824AE90114E1DD5734BAB6_AdjustorThunk (RuntimeObject* __this, int32_t ___0_nsTop, const RuntimeMethod* method)
{
	TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C*>(__this + _offset);
	TagInfo_Init_m351285BE790D79A15E824AE90114E1DD5734BAB6(_thisAdjusted, ___0_nsTop, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: System.Xml.XmlTextWriter/Namespace
IL2CPP_EXTERN_C void Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853_marshal_pinvoke(const Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853& unmarshaled, Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853_marshaled_pinvoke& marshaled)
{
	marshaled.___prefix_0 = il2cpp_codegen_marshal_string(unmarshaled.___prefix_0);
	marshaled.___ns_1 = il2cpp_codegen_marshal_string(unmarshaled.___ns_1);
	marshaled.___declared_2 = static_cast<int32_t>(unmarshaled.___declared_2);
	marshaled.___prevNsIndex_3 = unmarshaled.___prevNsIndex_3;
}
IL2CPP_EXTERN_C void Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853_marshal_pinvoke_back(const Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853_marshaled_pinvoke& marshaled, Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853& unmarshaled)
{
	unmarshaled.___prefix_0 = il2cpp_codegen_marshal_string_result(marshaled.___prefix_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___prefix_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___prefix_0));
	unmarshaled.___ns_1 = il2cpp_codegen_marshal_string_result(marshaled.___ns_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___ns_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___ns_1));
	bool unmarshaleddeclared_temp_2 = false;
	unmarshaleddeclared_temp_2 = static_cast<bool>(marshaled.___declared_2);
	unmarshaled.___declared_2 = unmarshaleddeclared_temp_2;
	int32_t unmarshaledprevNsIndex_temp_3 = 0;
	unmarshaledprevNsIndex_temp_3 = marshaled.___prevNsIndex_3;
	unmarshaled.___prevNsIndex_3 = unmarshaledprevNsIndex_temp_3;
}
// Conversion method for clean up from marshalling of: System.Xml.XmlTextWriter/Namespace
IL2CPP_EXTERN_C void Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853_marshal_pinvoke_cleanup(Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___prefix_0);
	marshaled.___prefix_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___ns_1);
	marshaled.___ns_1 = NULL;
}
// Conversion methods for marshalling of: System.Xml.XmlTextWriter/Namespace
IL2CPP_EXTERN_C void Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853_marshal_com(const Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853& unmarshaled, Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853_marshaled_com& marshaled)
{
	marshaled.___prefix_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___prefix_0);
	marshaled.___ns_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___ns_1);
	marshaled.___declared_2 = static_cast<int32_t>(unmarshaled.___declared_2);
	marshaled.___prevNsIndex_3 = unmarshaled.___prevNsIndex_3;
}
IL2CPP_EXTERN_C void Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853_marshal_com_back(const Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853_marshaled_com& marshaled, Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853& unmarshaled)
{
	unmarshaled.___prefix_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___prefix_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___prefix_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___prefix_0));
	unmarshaled.___ns_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___ns_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___ns_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___ns_1));
	bool unmarshaleddeclared_temp_2 = false;
	unmarshaleddeclared_temp_2 = static_cast<bool>(marshaled.___declared_2);
	unmarshaled.___declared_2 = unmarshaleddeclared_temp_2;
	int32_t unmarshaledprevNsIndex_temp_3 = 0;
	unmarshaledprevNsIndex_temp_3 = marshaled.___prevNsIndex_3;
	unmarshaled.___prevNsIndex_3 = unmarshaledprevNsIndex_temp_3;
}
// Conversion method for clean up from marshalling of: System.Xml.XmlTextWriter/Namespace
IL2CPP_EXTERN_C void Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853_marshal_com_cleanup(Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___prefix_0);
	marshaled.___prefix_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___ns_1);
	marshaled.___ns_1 = NULL;
}
// System.Void System.Xml.XmlTextWriter/Namespace::Set(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Namespace_Set_mA421F92F59A44FCD987802098A78CA52CA3867BD (Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853* __this, String_t* ___0_prefix, String_t* ___1_ns, bool ___2_declared, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_prefix;
		__this->___prefix_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___prefix_0), (void*)L_0);
		String_t* L_1 = ___1_ns;
		__this->___ns_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ns_1), (void*)L_1);
		bool L_2 = ___2_declared;
		__this->___declared_2 = L_2;
		__this->___prevNsIndex_3 = (-1);
		return;
	}
}
IL2CPP_EXTERN_C  void Namespace_Set_mA421F92F59A44FCD987802098A78CA52CA3867BD_AdjustorThunk (RuntimeObject* __this, String_t* ___0_prefix, String_t* ___1_ns, bool ___2_declared, const RuntimeMethod* method)
{
	Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853*>(__this + _offset);
	Namespace_Set_mA421F92F59A44FCD987802098A78CA52CA3867BD(_thisAdjusted, ___0_prefix, ___1_ns, ___2_declared, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.XmlWriter::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlWriter_Close_m70BFE83F2AD6CDF309ECA99E0880689C1CC68611 (XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void System.Xml.XmlWriter::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlWriter_Dispose_mA0416A9B156E8271B9E129F3E91FEF6EE0A2B373 (XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* __this, const RuntimeMethod* method) 
{
	{
		VirtualActionInvoker1< bool >::Invoke(8 /* System.Void System.Xml.XmlWriter::Dispose(System.Boolean) */, __this, (bool)1);
		return;
	}
}
// System.Void System.Xml.XmlWriter::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlWriter_Dispose_m85892819F0A87F253D548139924CE7950DA5D64D (XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_disposing;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Xml.WriteState System.Xml.XmlWriter::get_WriteState() */, __this);
		if ((((int32_t)L_1) == ((int32_t)5)))
		{
			goto IL_0012;
		}
	}
	{
		VirtualActionInvoker0::Invoke(7 /* System.Void System.Xml.XmlWriter::Close() */, __this);
	}

IL_0012:
	{
		return;
	}
}
// System.Void System.Xml.XmlWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlWriter__ctor_m8944C0C05D32C64DD68AE6641BA0943BE80CE714 (XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.XmlChildEnumerator::.ctor(System.Xml.XmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlChildEnumerator__ctor_mC51E8B709CB2FCB079D44B180D5EF3DF9DBC3671 (XmlChildEnumerator_tDD03B83EAA250AB86DFF4B53C1430DA942E85939* __this, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___0_container, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0 = ___0_container;
		__this->___container_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___container_0), (void*)L_0);
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_1 = ___0_container;
		NullCheck(L_1);
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_2;
		L_2 = VirtualFuncInvoker0< XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* >::Invoke(6 /* System.Xml.XmlNode System.Xml.XmlNode::get_FirstChild() */, L_1);
		__this->___child_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___child_1), (void*)L_2);
		__this->___isFirst_2 = (bool)1;
		return;
	}
}
// System.Boolean System.Xml.XmlChildEnumerator::System.Collections.IEnumerator.MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlChildEnumerator_System_Collections_IEnumerator_MoveNext_m9DF8D71649BD5173C9E9859A12E9E6777450A55D (XmlChildEnumerator_tDD03B83EAA250AB86DFF4B53C1430DA942E85939* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = XmlChildEnumerator_MoveNext_m038B637C00AC0482CAD4E35995F2CF2AE8E3D556(__this, NULL);
		return L_0;
	}
}
// System.Boolean System.Xml.XmlChildEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlChildEnumerator_MoveNext_m038B637C00AC0482CAD4E35995F2CF2AE8E3D556 (XmlChildEnumerator_tDD03B83EAA250AB86DFF4B53C1430DA942E85939* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___isFirst_2;
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_1 = __this->___container_0;
		NullCheck(L_1);
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_2;
		L_2 = VirtualFuncInvoker0< XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* >::Invoke(6 /* System.Xml.XmlNode System.Xml.XmlNode::get_FirstChild() */, L_1);
		__this->___child_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___child_1), (void*)L_2);
		__this->___isFirst_2 = (bool)0;
		goto IL_003b;
	}

IL_0022:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_3 = __this->___child_1;
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_4 = __this->___child_1;
		NullCheck(L_4);
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_5;
		L_5 = VirtualFuncInvoker0< XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* >::Invoke(5 /* System.Xml.XmlNode System.Xml.XmlNode::get_NextSibling() */, L_4);
		__this->___child_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___child_1), (void*)L_5);
	}

IL_003b:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_6 = __this->___child_1;
		return (bool)((!(((RuntimeObject*)(XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Void System.Xml.XmlChildEnumerator::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlChildEnumerator_System_Collections_IEnumerator_Reset_m3E1BD7C0BE0E5576593A8C53ABC11109F275C4EF (XmlChildEnumerator_tDD03B83EAA250AB86DFF4B53C1430DA942E85939* __this, const RuntimeMethod* method) 
{
	{
		__this->___isFirst_2 = (bool)1;
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0 = __this->___container_0;
		NullCheck(L_0);
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_1;
		L_1 = VirtualFuncInvoker0< XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* >::Invoke(6 /* System.Xml.XmlNode System.Xml.XmlNode::get_FirstChild() */, L_0);
		__this->___child_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___child_1), (void*)L_1);
		return;
	}
}
// System.Object System.Xml.XmlChildEnumerator::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlChildEnumerator_System_Collections_IEnumerator_get_Current_mEC0FD9B4CD70461AD71D93AB21025A3D83AE0418 (XmlChildEnumerator_tDD03B83EAA250AB86DFF4B53C1430DA942E85939* __this, const RuntimeMethod* method) 
{
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0;
		L_0 = XmlChildEnumerator_get_Current_m149208EFC92AEDC42F82839102B3D5F017DA4C46(__this, NULL);
		return L_0;
	}
}
// System.Xml.XmlNode System.Xml.XmlChildEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* XmlChildEnumerator_get_Current_m149208EFC92AEDC42F82839102B3D5F017DA4C46 (XmlChildEnumerator_tDD03B83EAA250AB86DFF4B53C1430DA942E85939* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___isFirst_2;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_1 = __this->___child_1;
		if (L_1)
		{
			goto IL_0020;
		}
	}

IL_0010:
	{
		String_t* L_2;
		L_2 = Res_GetString_mBEE82ACFE97F93A6DDE81E322477CF2713466364(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFBD1A9745DCC4D80697D44756437CCB57698AE21)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlChildEnumerator_get_Current_m149208EFC92AEDC42F82839102B3D5F017DA4C46_RuntimeMethod_var)));
	}

IL_0020:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_4 = __this->___child_1;
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.XmlDOMTextWriter::.ctor(System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlDOMTextWriter__ctor_mF435D9DB37F13BD9A8112CC37E51C10216A2A082 (XmlDOMTextWriter_t362092F200AC52B03B5A7E4D443A3D04134C02AF* __this, TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___0_w, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_0 = ___0_w;
		il2cpp_codegen_runtime_class_init_inline(XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_il2cpp_TypeInfo_var);
		XmlTextWriter__ctor_m4AE8363DFA5B2D16F3750514727C63D4A0096489(__this, L_0, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Xml.XmlNode System.Xml.XmlNode::get_NextSibling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* XmlNode_get_NextSibling_mB3B3EFD4597AF366F3010C0CC80DC5C5B6885492 (XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* __this, const RuntimeMethod* method) 
{
	{
		return (XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)NULL;
	}
}
// System.Xml.XmlNode System.Xml.XmlNode::get_FirstChild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* XmlNode_get_FirstChild_m5F667C696492597141F3F92F048DB73C5546F1CD (XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* __this, const RuntimeMethod* method) 
{
	XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C* V_0 = NULL;
	{
		XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C* L_0;
		L_0 = VirtualFuncInvoker0< XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C* >::Invoke(7 /* System.Xml.XmlLinkedNode System.Xml.XmlNode::get_LastNode() */, __this);
		V_0 = L_0;
		XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C* L_2 = V_0;
		NullCheck(L_2);
		XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C* L_3 = L_2->___next_0;
		return L_3;
	}

IL_0011:
	{
		return (XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)NULL;
	}
}
// System.Xml.XmlLinkedNode System.Xml.XmlNode::get_LastNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C* XmlNode_get_LastNode_mBE8307841D326A20F838DB33C8487C53FD0394A7 (XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* __this, const RuntimeMethod* method) 
{
	{
		return (XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C*)NULL;
	}
}
// System.Collections.IEnumerator System.Xml.XmlNode::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlNode_System_Collections_IEnumerable_GetEnumerator_m6FDE5461EDE0DECB154EA403EAD911EBFD4C4E68 (XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlChildEnumerator_tDD03B83EAA250AB86DFF4B53C1430DA942E85939_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlChildEnumerator_tDD03B83EAA250AB86DFF4B53C1430DA942E85939* L_0 = (XmlChildEnumerator_tDD03B83EAA250AB86DFF4B53C1430DA942E85939*)il2cpp_codegen_object_new(XmlChildEnumerator_tDD03B83EAA250AB86DFF4B53C1430DA942E85939_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		XmlChildEnumerator__ctor_mC51E8B709CB2FCB079D44B180D5EF3DF9DBC3671(L_0, __this, NULL);
		return L_0;
	}
}
// System.String System.Xml.XmlNode::get_OuterXml()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNode_get_OuterXml_mD3C17BA9B4E84274E3602EFCBF4AFD8AC8AE695C (XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlDOMTextWriter_t362092F200AC52B03B5A7E4D443A3D04134C02AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* V_0 = NULL;
	XmlDOMTextWriter_t362092F200AC52B03B5A7E4D443A3D04134C02AF* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_1 = (StringWriter_tF48052BE4F980E5C85403221E835768E4156267D*)il2cpp_codegen_object_new(StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringWriter__ctor_mE3EE42D6B6B6CE4F81849022B19FFC1842FB3FCA(L_1, L_0, NULL);
		V_0 = L_1;
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_2 = V_0;
		XmlDOMTextWriter_t362092F200AC52B03B5A7E4D443A3D04134C02AF* L_3 = (XmlDOMTextWriter_t362092F200AC52B03B5A7E4D443A3D04134C02AF*)il2cpp_codegen_object_new(XmlDOMTextWriter_t362092F200AC52B03B5A7E4D443A3D04134C02AF_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		XmlDOMTextWriter__ctor_mF435D9DB37F13BD9A8112CC37E51C10216A2A082(L_3, L_2, NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001b:
			{// begin finally (depth: 1)
				XmlDOMTextWriter_t362092F200AC52B03B5A7E4D443A3D04134C02AF* L_4 = V_1;
				NullCheck(L_4);
				VirtualActionInvoker0::Invoke(7 /* System.Void System.Xml.XmlWriter::Close() */, L_4);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			XmlDOMTextWriter_t362092F200AC52B03B5A7E4D443A3D04134C02AF* L_5 = V_1;
			VirtualActionInvoker1< XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* >::Invoke(9 /* System.Void System.Xml.XmlNode::WriteTo(System.Xml.XmlWriter) */, __this, L_5);
			goto IL_0022;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0022:
	{
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		return L_7;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: System.Xml.XmlCharType
IL2CPP_EXTERN_C void XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshal_pinvoke(const XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3& unmarshaled, XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshaled_pinvoke& marshaled)
{
	marshaled.___charProperties_2 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___charProperties_2);
}
IL2CPP_EXTERN_C void XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshal_pinvoke_back(const XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshaled_pinvoke& marshaled, XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___charProperties_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___charProperties_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___charProperties_2), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___charProperties_2));
}
// Conversion method for clean up from marshalling of: System.Xml.XmlCharType
IL2CPP_EXTERN_C void XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshal_pinvoke_cleanup(XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___charProperties_2);
	marshaled.___charProperties_2 = NULL;
}
// Conversion methods for marshalling of: System.Xml.XmlCharType
IL2CPP_EXTERN_C void XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshal_com(const XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3& unmarshaled, XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshaled_com& marshaled)
{
	marshaled.___charProperties_2 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___charProperties_2);
}
IL2CPP_EXTERN_C void XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshal_com_back(const XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshaled_com& marshaled, XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___charProperties_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___charProperties_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___charProperties_2), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___charProperties_2));
}
// Conversion method for clean up from marshalling of: System.Xml.XmlCharType
IL2CPP_EXTERN_C void XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshal_com_cleanup(XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___charProperties_2);
	marshaled.___charProperties_2 = NULL;
}
// System.Object System.Xml.XmlCharType::get_StaticLock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlCharType_get_StaticLock_m39193568D86AD7E7A5AA4B3745D64C6F5D60472E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ((XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_StaticFields*)il2cpp_codegen_static_fields_for(XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_il2cpp_TypeInfo_var))->___s_Lock_0;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_1, NULL);
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>((&((XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_StaticFields*)il2cpp_codegen_static_fields_for(XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_il2cpp_TypeInfo_var))->___s_Lock_0), L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = ((XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_StaticFields*)il2cpp_codegen_static_fields_for(XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_il2cpp_TypeInfo_var))->___s_Lock_0;
		return L_4;
	}
}
// System.Void System.Xml.XmlCharType::InitInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlCharType_InitInstance_m486814EDE27EF404061078D3EA69301B23F01378 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02E5C3B8AD72F3FC46F6C829AB1FEDDC9B115473);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E0426234071F961E725D9438C6D5A048A0394B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2309CFA4F156DCCB12A14E727DCE560E1426B532);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81ABCB006928101D1882FA2FBB7BFA00FE053221);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94A9AE3A92C04F7400ADC94B7BCB73FFC0A08DE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC5753B4554091FA687FA64F4FA303B0C913E2EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDA1C9397356AF77AAE64869A9D6288562F10D4C);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeObject* L_0;
		L_0 = XmlCharType_get_StaticLock_m39193568D86AD7E7A5AA4B3745D64C6F5D60472E(NULL);
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009d:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_00a6;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_00a6:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ((XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_StaticFields*)il2cpp_codegen_static_fields_for(XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_il2cpp_TypeInfo_var))->___s_CharProperties_1;
				il2cpp_codegen_memory_barrier();
				if (!L_4)
				{
					goto IL_001e_1;
				}
			}
			{
				goto IL_00a7;
			}

IL_001e_1:
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)65536));
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = L_5;
				XmlCharType_SetProperties_m8964034908DAEC93686ADC1D879E15967B91D4D4(L_6, _stringLiteral2309CFA4F156DCCB12A14E727DCE560E1426B532, (uint8_t)1, NULL);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = L_6;
				XmlCharType_SetProperties_m8964034908DAEC93686ADC1D879E15967B91D4D4(L_7, _stringLiteral0E0426234071F961E725D9438C6D5A048A0394B3, (uint8_t)2, NULL);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = L_7;
				XmlCharType_SetProperties_m8964034908DAEC93686ADC1D879E15967B91D4D4(L_8, _stringLiteralCC5753B4554091FA687FA64F4FA303B0C913E2EC, (uint8_t)4, NULL);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = L_8;
				XmlCharType_SetProperties_m8964034908DAEC93686ADC1D879E15967B91D4D4(L_9, _stringLiteral02E5C3B8AD72F3FC46F6C829AB1FEDDC9B115473, (uint8_t)8, NULL);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = L_9;
				XmlCharType_SetProperties_m8964034908DAEC93686ADC1D879E15967B91D4D4(L_10, _stringLiteralFDA1C9397356AF77AAE64869A9D6288562F10D4C, (uint8_t)((int32_t)16), NULL);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = L_10;
				XmlCharType_SetProperties_m8964034908DAEC93686ADC1D879E15967B91D4D4(L_11, _stringLiteral02E5C3B8AD72F3FC46F6C829AB1FEDDC9B115473, (uint8_t)((int32_t)32), NULL);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = L_11;
				XmlCharType_SetProperties_m8964034908DAEC93686ADC1D879E15967B91D4D4(L_12, _stringLiteral94A9AE3A92C04F7400ADC94B7BCB73FFC0A08DE4, (uint8_t)((int32_t)64), NULL);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = L_12;
				XmlCharType_SetProperties_m8964034908DAEC93686ADC1D879E15967B91D4D4(L_13, _stringLiteral81ABCB006928101D1882FA2FBB7BFA00FE053221, (uint8_t)((int32_t)128), NULL);
				Thread_MemoryBarrier_m83873F1E6CEB16C0781941141382DA874A36097D(NULL);
				il2cpp_codegen_memory_barrier();
				((XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_StaticFields*)il2cpp_codegen_static_fields_for(XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_il2cpp_TypeInfo_var))->___s_CharProperties_1 = L_13;
				Il2CppCodeGenWriteBarrier((void**)(&((XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_StaticFields*)il2cpp_codegen_static_fields_for(XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_il2cpp_TypeInfo_var))->___s_CharProperties_1), (void*)L_13);
				goto IL_00a7;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a7:
	{
		return;
	}
}
// System.Void System.Xml.XmlCharType::SetProperties(System.Byte[],System.String,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlCharType_SetProperties_m8964034908DAEC93686ADC1D879E15967B91D4D4 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_chProps, String_t* ___1_ranges, uint8_t ___2_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		goto IL_0031;
	}

IL_0004:
	{
		String_t* L_0 = ___1_ranges;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Il2CppChar L_2;
		L_2 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_0, L_1, NULL);
		V_1 = L_2;
		String_t* L_3 = ___1_ranges;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Il2CppChar L_5;
		L_5 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_3, ((int32_t)il2cpp_codegen_add(L_4, 1)), NULL);
		V_2 = L_5;
		goto IL_0029;
	}

IL_0018:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_chProps;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		uint8_t* L_8 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)));
		int32_t L_9 = *((uint8_t*)L_8);
		uint8_t L_10 = ___2_value;
		*((int8_t*)L_8) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_9|(int32_t)L_10)));
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0029:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_2;
		if ((((int32_t)L_12) <= ((int32_t)L_13)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 2));
	}

IL_0031:
	{
		int32_t L_15 = V_0;
		String_t* L_16 = ___1_ranges;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_16, NULL);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void System.Xml.XmlCharType::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlCharType__ctor_mB4A379AC51751894C31365E176E3B9BFB5ABC771 (XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_charProperties, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_charProperties;
		__this->___charProperties_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___charProperties_2), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void XmlCharType__ctor_mB4A379AC51751894C31365E176E3B9BFB5ABC771_AdjustorThunk (RuntimeObject* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_charProperties, const RuntimeMethod* method)
{
	XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3*>(__this + _offset);
	XmlCharType__ctor_mB4A379AC51751894C31365E176E3B9BFB5ABC771_inline(_thisAdjusted, ___0_charProperties, method);
}
// System.Xml.XmlCharType System.Xml.XmlCharType::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3 XmlCharType_get_Instance_m1279A3FC91B74599A9BC76979E50DBFC07F67C55 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ((XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_StaticFields*)il2cpp_codegen_static_fields_for(XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_il2cpp_TypeInfo_var))->___s_CharProperties_1;
		il2cpp_codegen_memory_barrier();
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		XmlCharType_InitInstance_m486814EDE27EF404061078D3EA69301B23F01378(NULL);
	}

IL_000e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ((XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_StaticFields*)il2cpp_codegen_static_fields_for(XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_il2cpp_TypeInfo_var))->___s_CharProperties_1;
		il2cpp_codegen_memory_barrier();
		XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3 L_2;
		memset((&L_2), 0, sizeof(L_2));
		XmlCharType__ctor_mB4A379AC51751894C31365E176E3B9BFB5ABC771_inline((&L_2), L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.Xml.XmlCharType::IsHighSurrogate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlCharType_IsHighSurrogate_mB3E741B22E4B47DC85F7F18A411F031D8717BA60 (int32_t ___0_ch, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_ch;
		bool L_1;
		L_1 = XmlCharType_InRange_mA7DAF677E841F90A0B3657CB19ACB90A32CDCBF2(L_0, ((int32_t)55296), ((int32_t)56319), NULL);
		return L_1;
	}
}
// System.Boolean System.Xml.XmlCharType::IsLowSurrogate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlCharType_IsLowSurrogate_m8D27C4276BE118C7FF3ECC1707EEE026D28FC456 (int32_t ___0_ch, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_ch;
		bool L_1;
		L_1 = XmlCharType_InRange_mA7DAF677E841F90A0B3657CB19ACB90A32CDCBF2(L_0, ((int32_t)56320), ((int32_t)57343), NULL);
		return L_1;
	}
}
// System.Boolean System.Xml.XmlCharType::InRange(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlCharType_InRange_mA7DAF677E841F90A0B3657CB19ACB90A32CDCBF2 (int32_t ___0_value, int32_t ___1_start, int32_t ___2_end, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_end;
		int32_t L_3 = ___1_start;
		return (bool)((((int32_t)((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(L_0, L_1))) <= ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String System.Xml.XmlConvert::TrimString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_TrimString_mDAA514C90ADF5307B9781647EDE50EC8E542ABC7 (String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = ((XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_StaticFields*)il2cpp_codegen_static_fields_for(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var))->___WhitespaceChars_3;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = String_Trim_m81BD35659E6F89DDD56816975E6E05390D023FE5(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Exception System.Xml.XmlConvert::CreateException(System.String,System.String,System.Xml.ExceptionType,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* XmlConvert_CreateException_m0EE119DB38F2B6B661CE7FC9A94BC0BF1CB197AD (String_t* ___0_res, String_t* ___1_arg, int32_t ___2_exceptionType, int32_t ___3_lineNo, int32_t ___4_linePos, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___2_exceptionType;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_1 = ___2_exceptionType;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_001f;
		}
	}
	{
		goto IL_001f;
	}

IL_0009:
	{
		String_t* L_2 = ___0_res;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		String_t* L_5 = ___1_arg;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		String_t* L_6;
		L_6 = Res_GetString_m088600B9D0FC319A206451B009A0583C600B9A83(L_2, L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, L_6, NULL);
		return L_7;
	}

IL_001f:
	{
		String_t* L_8 = ___0_res;
		String_t* L_9 = ___1_arg;
		int32_t L_10 = ___3_lineNo;
		int32_t L_11 = ___4_linePos;
		XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* L_12 = (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596*)il2cpp_codegen_object_new(XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		XmlException__ctor_m03120C28C23F76A8DA17B42FB00F599D2FB22B3F(L_12, L_8, L_9, L_10, L_11, NULL);
		return L_12;
	}
}
// System.Exception System.Xml.XmlConvert::CreateException(System.String,System.String[],System.Xml.ExceptionType,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* XmlConvert_CreateException_m5E2DE07EE27F255E64E7A0FE08BA8B1C147EE580 (String_t* ___0_res, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_args, int32_t ___2_exceptionType, int32_t ___3_lineNo, int32_t ___4_linePos, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___2_exceptionType;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_1 = ___2_exceptionType;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		goto IL_0018;
	}

IL_0009:
	{
		String_t* L_2 = ___0_res;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ___1_args;
		V_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		String_t* L_5;
		L_5 = Res_GetString_m088600B9D0FC319A206451B009A0583C600B9A83(L_2, L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, L_5, NULL);
		return L_6;
	}

IL_0018:
	{
		String_t* L_7 = ___0_res;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = ___1_args;
		int32_t L_9 = ___3_lineNo;
		int32_t L_10 = ___4_linePos;
		XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* L_11 = (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596*)il2cpp_codegen_object_new(XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		XmlException__ctor_m9533F222CB16C788C194E7494449C1D96BC781CA(L_11, L_7, L_8, L_9, L_10, NULL);
		return L_11;
	}
}
// System.Exception System.Xml.XmlConvert::CreateInvalidSurrogatePairException(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* XmlConvert_CreateInvalidSurrogatePairException_mAD70BE2F96B56C1308578273A8FD96C8240350B2 (Il2CppChar ___0_low, Il2CppChar ___1_hi, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___0_low;
		Il2CppChar L_1 = ___1_hi;
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		Exception_t* L_2;
		L_2 = XmlConvert_CreateInvalidSurrogatePairException_mE7C31A4492160E09C8DFFC0E7FEE5623F16E109F(L_0, L_1, 0, NULL);
		return L_2;
	}
}
// System.Exception System.Xml.XmlConvert::CreateInvalidSurrogatePairException(System.Char,System.Char,System.Xml.ExceptionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* XmlConvert_CreateInvalidSurrogatePairException_mE7C31A4492160E09C8DFFC0E7FEE5623F16E109F (Il2CppChar ___0_low, Il2CppChar ___1_hi, int32_t ___2_exceptionType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___0_low;
		Il2CppChar L_1 = ___1_hi;
		int32_t L_2 = ___2_exceptionType;
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		Exception_t* L_3;
		L_3 = XmlConvert_CreateInvalidSurrogatePairException_mF5391689034F1ABE4316BC5E70A2C707546B1B5A(L_0, L_1, L_2, 0, 0, NULL);
		return L_3;
	}
}
// System.Exception System.Xml.XmlConvert::CreateInvalidSurrogatePairException(System.Char,System.Char,System.Xml.ExceptionType,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* XmlConvert_CreateInvalidSurrogatePairException_mF5391689034F1ABE4316BC5E70A2C707546B1B5A (Il2CppChar ___0_low, Il2CppChar ___1_hi, int32_t ___2_exceptionType, int32_t ___3_lineNo, int32_t ___4_linePos, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF91B9F4F51199474999FD40AF7DB23C33195BC0B);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	uint32_t V_1 = 0;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		Il2CppChar L_2 = ___1_hi;
		V_1 = L_2;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_3;
		L_3 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_4;
		L_4 = UInt32_ToString_m464396B0FE2115F3CEA38AEECDDB0FACC3AADADE((&V_1), _stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE, L_3, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_1;
		Il2CppChar L_6 = ___0_low;
		V_1 = L_6;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_7;
		L_7 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_8;
		L_8 = UInt32_ToString_m464396B0FE2115F3CEA38AEECDDB0FACC3AADADE((&V_1), _stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE, L_7, NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_8);
		V_0 = L_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = V_0;
		int32_t L_10 = ___2_exceptionType;
		int32_t L_11 = ___3_lineNo;
		int32_t L_12 = ___4_linePos;
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		Exception_t* L_13;
		L_13 = XmlConvert_CreateException_m5E2DE07EE27F255E64E7A0FE08BA8B1C147EE580(_stringLiteralF91B9F4F51199474999FD40AF7DB23C33195BC0B, L_9, L_10, L_11, L_12, NULL);
		return L_13;
	}
}
// System.Exception System.Xml.XmlConvert::CreateInvalidHighSurrogateCharException(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* XmlConvert_CreateInvalidHighSurrogateCharException_mD30C6B24B7B92886A5317E3DEA61AC969889BFF4 (Il2CppChar ___0_hi, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___0_hi;
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = XmlConvert_CreateInvalidHighSurrogateCharException_m1FB213C96EC2B3CD0D3F58CDC5C9AD37841191BD(L_0, 0, NULL);
		return L_1;
	}
}
// System.Exception System.Xml.XmlConvert::CreateInvalidHighSurrogateCharException(System.Char,System.Xml.ExceptionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* XmlConvert_CreateInvalidHighSurrogateCharException_m1FB213C96EC2B3CD0D3F58CDC5C9AD37841191BD (Il2CppChar ___0_hi, int32_t ___1_exceptionType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___0_hi;
		int32_t L_1 = ___1_exceptionType;
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		Exception_t* L_2;
		L_2 = XmlConvert_CreateInvalidHighSurrogateCharException_m472648586C709A4D9516E1FBFA518FD605B15A21(L_0, L_1, 0, 0, NULL);
		return L_2;
	}
}
// System.Exception System.Xml.XmlConvert::CreateInvalidHighSurrogateCharException(System.Char,System.Xml.ExceptionType,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* XmlConvert_CreateInvalidHighSurrogateCharException_m472648586C709A4D9516E1FBFA518FD605B15A21 (Il2CppChar ___0_hi, int32_t ___1_exceptionType, int32_t ___2_lineNo, int32_t ___3_linePos, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4ED3BDF7EB24796E98DB0F3022D762D2C5EBFB0);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		Il2CppChar L_0 = ___0_hi;
		V_0 = L_0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_2;
		L_2 = UInt32_ToString_m464396B0FE2115F3CEA38AEECDDB0FACC3AADADE((&V_0), _stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE, L_1, NULL);
		int32_t L_3 = ___1_exceptionType;
		int32_t L_4 = ___2_lineNo;
		int32_t L_5 = ___3_linePos;
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		Exception_t* L_6;
		L_6 = XmlConvert_CreateException_m0EE119DB38F2B6B661CE7FC9A94BC0BF1CB197AD(_stringLiteralF4ED3BDF7EB24796E98DB0F3022D762D2C5EBFB0, L_2, L_3, L_4, L_5, NULL);
		return L_6;
	}
}
// System.Void System.Xml.XmlConvert::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlConvert__cctor_m7B068115A3F73B6954E126C91D02F3B338BCBC1C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBAB6DC40B1709E21296656960228A17F1BE57FD7____DACC0E6568D9B10337A1A693F10D42C3175E80C378154406C6FBFA989F919F51_1_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBAB6DC40B1709E21296656960228A17F1BE57FD7____DBBF94CCF4250B303976041627BB8FC302CE57D55373C469F41F97318412037D_3_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3 L_0;
		L_0 = XmlCharType_get_Instance_m1279A3FC91B74599A9BC76979E50DBFC07F67C55(NULL);
		((XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_StaticFields*)il2cpp_codegen_static_fields_for(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var))->___xmlCharType_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&((XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_StaticFields*)il2cpp_codegen_static_fields_for(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var))->___xmlCharType_0))->___charProperties_2), (void*)NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)3);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = L_1;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_3 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBAB6DC40B1709E21296656960228A17F1BE57FD7____DBBF94CCF4250B303976041627BB8FC302CE57D55373C469F41F97318412037D_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_2, L_3, NULL);
		((XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_StaticFields*)il2cpp_codegen_static_fields_for(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var))->___crt_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_StaticFields*)il2cpp_codegen_static_fields_for(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var))->___crt_1), (void*)L_2);
		((XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_StaticFields*)il2cpp_codegen_static_fields_for(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var))->___c_EncodedCharLength_2 = 7;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)4);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = L_4;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_6 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBAB6DC40B1709E21296656960228A17F1BE57FD7____DACC0E6568D9B10337A1A693F10D42C3175E80C378154406C6FBFA989F919F51_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_5, L_6, NULL);
		((XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_StaticFields*)il2cpp_codegen_static_fields_for(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var))->___WhitespaceChars_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_StaticFields*)il2cpp_codegen_static_fields_for(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var))->___WhitespaceChars_3), (void*)L_5);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.XmlException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlException__ctor_m2FC4E2AB470AD5003F7B9B5B9451CE320AFDDB2F (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BA9045FCB28C8C8B2ACED641BB5013BAC05D492);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47EB169AEE74B181812673783C66416B39F5F464);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F0051E3370AA31B69F5CBF0E35FBE94ACAE0651);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2D2F8D3F9F04A081FFBE6B2AF7917BAAADFC052);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1356901E9F96E6ACC91632889AE94286AFE4CD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDC12722FE0763003109C7EDBACB6977C0E31132);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* V_1 = NULL;
	SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74 V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* V_3 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_1 = ___1_context;
		SystemException__ctor_mA2BB392E0F4CD8A4C132984F76B7A9FBDB3B6879(__this, L_0, L_1, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		NullCheck(L_2);
		RuntimeObject* L_5;
		L_5 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_2, _stringLiteral9F0051E3370AA31B69F5CBF0E35FBE94ACAE0651, L_4, NULL);
		__this->___res_18 = ((String_t*)CastclassSealed((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___res_18), (void*)((String_t*)CastclassSealed((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var)));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_6 = ___0_info;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_0_0_0_var) };
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(L_6);
		RuntimeObject* L_9;
		L_9 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_6, _stringLiteralEDC12722FE0763003109C7EDBACB6977C0E31132, L_8, NULL);
		__this->___args_19 = ((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)Castclass((RuntimeObject*)L_9, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___args_19), (void*)((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)Castclass((RuntimeObject*)L_9, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var)));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_10 = ___0_info;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck(L_10);
		RuntimeObject* L_13;
		L_13 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_10, _stringLiteral0BA9045FCB28C8C8B2ACED641BB5013BAC05D492, L_12, NULL);
		__this->___lineNumber_20 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_13, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = ___0_info;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralE1356901E9F96E6ACC91632889AE94286AFE4CD4, L_16, NULL);
		__this->___linePosition_21 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_17, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		String_t* L_18 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___sourceUri_22 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sourceUri_22), (void*)L_18);
		V_0 = (String_t*)NULL;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_19 = ___0_info;
		NullCheck(L_19);
		SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* L_20;
		L_20 = SerializationInfo_GetEnumerator_m5230A1D4E4B612E90B10E2034C638CD42F667EA6(L_19, NULL);
		V_1 = L_20;
		goto IL_00ea;
	}

IL_009e:
	{
		SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* L_21 = V_1;
		NullCheck(L_21);
		SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74 L_22;
		L_22 = SerializationInfoEnumerator_get_Current_m820863174CF73089751ACC36BC34DD3188A1929B(L_21, NULL);
		V_2 = L_22;
		String_t* L_23;
		L_23 = SerializationEntry_get_Name_mF6151F31B3F43C88AF08F39F178401406642EB67_inline((&V_2), NULL);
		V_3 = L_23;
		String_t* L_24 = V_3;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral47EB169AEE74B181812673783C66416B39F5F464, NULL);
		if (L_25)
		{
			goto IL_00c9;
		}
	}
	{
		String_t* L_26 = V_3;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteralD2D2F8D3F9F04A081FFBE6B2AF7917BAAADFC052, NULL);
		if (L_27)
		{
			goto IL_00dd;
		}
	}
	{
		goto IL_00ea;
	}

IL_00c9:
	{
		RuntimeObject* L_28;
		L_28 = SerializationEntry_get_Value_mA57713535F866795C180D20067C0E38A85327912_inline((&V_2), NULL);
		__this->___sourceUri_22 = ((String_t*)CastclassSealed((RuntimeObject*)L_28, String_t_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sourceUri_22), (void*)((String_t*)CastclassSealed((RuntimeObject*)L_28, String_t_il2cpp_TypeInfo_var)));
		goto IL_00ea;
	}

IL_00dd:
	{
		RuntimeObject* L_29;
		L_29 = SerializationEntry_get_Value_mA57713535F866795C180D20067C0E38A85327912_inline((&V_2), NULL);
		V_0 = ((String_t*)CastclassSealed((RuntimeObject*)L_29, String_t_il2cpp_TypeInfo_var));
	}

IL_00ea:
	{
		SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* L_30 = V_1;
		NullCheck(L_30);
		bool L_31;
		L_31 = SerializationInfoEnumerator_MoveNext_m4F052C960AE85EFED1048CAAAC538AB3714078A6(L_30, NULL);
		if (L_31)
		{
			goto IL_009e;
		}
	}
	{
		String_t* L_32 = V_0;
		if (L_32)
		{
			goto IL_0119;
		}
	}
	{
		String_t* L_33 = __this->___res_18;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = __this->___args_19;
		int32_t L_35 = __this->___lineNumber_20;
		int32_t L_36 = __this->___linePosition_21;
		String_t* L_37;
		L_37 = XmlException_CreateMessage_m7EF05421A745BA0BC494014171B7FE75BE36D056(L_33, L_34, L_35, L_36, NULL);
		__this->___message_23 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___message_23), (void*)L_37);
		return;
	}

IL_0119:
	{
		__this->___message_23 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___message_23), (void*)(String_t*)NULL);
		return;
	}
}
// System.Void System.Xml.XmlException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlException_GetObjectData_m6179AFA2490E6B295B7C192E99A828A45104154D (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BA9045FCB28C8C8B2ACED641BB5013BAC05D492);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47EB169AEE74B181812673783C66416B39F5F464);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A962F7AAEC3B50EF4B2CD52A7A2C969B759A960);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F0051E3370AA31B69F5CBF0E35FBE94ACAE0651);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2D2F8D3F9F04A081FFBE6B2AF7917BAAADFC052);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1356901E9F96E6ACC91632889AE94286AFE4CD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDC12722FE0763003109C7EDBACB6977C0E31132);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_1 = ___1_context;
		Exception_GetObjectData_mD69929DB0BB2512240908B9EEE21778CB7B72DA9(__this, L_0, L_1, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		String_t* L_3 = __this->___res_18;
		NullCheck(L_2);
		SerializationInfo_AddValue_m28FE9B110F21DDB8FF5F5E35A0EABD659DB22C2F(L_2, _stringLiteral9F0051E3370AA31B69F5CBF0E35FBE94ACAE0651, L_3, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___0_info;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = __this->___args_19;
		NullCheck(L_4);
		SerializationInfo_AddValue_m28FE9B110F21DDB8FF5F5E35A0EABD659DB22C2F(L_4, _stringLiteralEDC12722FE0763003109C7EDBACB6977C0E31132, (RuntimeObject*)L_5, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_6 = ___0_info;
		int32_t L_7 = __this->___lineNumber_20;
		NullCheck(L_6);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_6, _stringLiteral0BA9045FCB28C8C8B2ACED641BB5013BAC05D492, L_7, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_8 = ___0_info;
		int32_t L_9 = __this->___linePosition_21;
		NullCheck(L_8);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_8, _stringLiteralE1356901E9F96E6ACC91632889AE94286AFE4CD4, L_9, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_10 = ___0_info;
		String_t* L_11 = __this->___sourceUri_22;
		NullCheck(L_10);
		SerializationInfo_AddValue_m28FE9B110F21DDB8FF5F5E35A0EABD659DB22C2F(L_10, _stringLiteral47EB169AEE74B181812673783C66416B39F5F464, L_11, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_12 = ___0_info;
		NullCheck(L_12);
		SerializationInfo_AddValue_m28FE9B110F21DDB8FF5F5E35A0EABD659DB22C2F(L_12, _stringLiteralD2D2F8D3F9F04A081FFBE6B2AF7917BAAADFC052, _stringLiteral4A962F7AAEC3B50EF4B2CD52A7A2C969B759A960, NULL);
		return;
	}
}
// System.Void System.Xml.XmlException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlException__ctor_m5BA0E89E2BA57EBA306CA552E59B20E5EA6E9909 (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* __this, const RuntimeMethod* method) 
{
	{
		XmlException__ctor_m39D4A09CD4A3351C21D85A89AAE43ECAD0E910F4(__this, (String_t*)NULL, NULL);
		return;
	}
}
// System.Void System.Xml.XmlException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlException__ctor_m39D4A09CD4A3351C21D85A89AAE43ECAD0E910F4 (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_message;
		XmlException__ctor_m022651219BF5C270D6B851281AACACCB4A6AE5FC(__this, L_0, (Exception_t*)NULL, 0, 0, NULL);
		return;
	}
}
// System.Void System.Xml.XmlException::.ctor(System.String,System.Exception,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlException__ctor_m022651219BF5C270D6B851281AACACCB4A6AE5FC (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* __this, String_t* ___0_message, Exception_t* ___1_innerException, int32_t ___2_lineNumber, int32_t ___3_linePosition, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_message;
		Exception_t* L_1 = ___1_innerException;
		int32_t L_2 = ___2_lineNumber;
		int32_t L_3 = ___3_linePosition;
		XmlException__ctor_m9E8E4966F92E92928F2334A4B5A6992A20505AD7(__this, L_0, L_1, L_2, L_3, (String_t*)NULL, NULL);
		return;
	}
}
// System.Void System.Xml.XmlException::.ctor(System.String,System.Exception,System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlException__ctor_m9E8E4966F92E92928F2334A4B5A6992A20505AD7 (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* __this, String_t* ___0_message, Exception_t* ___1_innerException, int32_t ___2_lineNumber, int32_t ___3_linePosition, String_t* ___4_sourceUri, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral872479F10B4968F255B608A3698CA1A7EE09888B);
		s_Il2CppMethodInitialized = true;
	}
	XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* G_B2_0 = NULL;
	XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* G_B3_1 = NULL;
	{
		String_t* L_0 = ___0_message;
		int32_t L_1 = ___2_lineNumber;
		int32_t L_2 = ___3_linePosition;
		String_t* L_3;
		L_3 = XmlException_FormatUserMessage_m063B26658DDABD7F6364C28217D4A518715FC001(L_0, L_1, L_2, NULL);
		Exception_t* L_4 = ___1_innerException;
		SystemException__ctor_m0FC84CACD2A5D66222998AA601A5C41CEC36A611(__this, L_3, L_4, NULL);
		Exception_set_HResult_m010A171183E240EBF4F7611E924B533FAB2E471F_inline(__this, ((int32_t)-2146232000), NULL);
		String_t* L_5 = ___0_message;
		G_B1_0 = __this;
		if (!L_5)
		{
			G_B2_0 = __this;
			goto IL_0026;
		}
	}
	{
		G_B3_0 = _stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94;
		G_B3_1 = G_B1_0;
		goto IL_002b;
	}

IL_0026:
	{
		G_B3_0 = _stringLiteral872479F10B4968F255B608A3698CA1A7EE09888B;
		G_B3_1 = G_B2_0;
	}

IL_002b:
	{
		NullCheck(G_B3_1);
		G_B3_1->___res_18 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___res_18), (void*)G_B3_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		String_t* L_8 = ___0_message;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_8);
		__this->___args_19 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___args_19), (void*)L_7);
		String_t* L_9 = ___4_sourceUri;
		__this->___sourceUri_22 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sourceUri_22), (void*)L_9);
		int32_t L_10 = ___2_lineNumber;
		__this->___lineNumber_20 = L_10;
		int32_t L_11 = ___3_linePosition;
		__this->___linePosition_21 = L_11;
		return;
	}
}
// System.Void System.Xml.XmlException::.ctor(System.String,System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlException__ctor_m03120C28C23F76A8DA17B42FB00F599D2FB22B3F (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* __this, String_t* ___0_res, String_t* ___1_arg, int32_t ___2_lineNumber, int32_t ___3_linePosition, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_res;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		String_t* L_3 = ___1_arg;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_3);
		int32_t L_4 = ___2_lineNumber;
		int32_t L_5 = ___3_linePosition;
		XmlException__ctor_mAF9987B6D433F91FBD0101527C492BA66AB25F37(__this, L_0, L_2, (Exception_t*)NULL, L_4, L_5, (String_t*)NULL, NULL);
		return;
	}
}
// System.Void System.Xml.XmlException::.ctor(System.String,System.String[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlException__ctor_m9533F222CB16C788C194E7494449C1D96BC781CA (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* __this, String_t* ___0_res, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_args, int32_t ___2_lineNumber, int32_t ___3_linePosition, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_res;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___1_args;
		int32_t L_2 = ___2_lineNumber;
		int32_t L_3 = ___3_linePosition;
		XmlException__ctor_mAF9987B6D433F91FBD0101527C492BA66AB25F37(__this, L_0, L_1, (Exception_t*)NULL, L_2, L_3, (String_t*)NULL, NULL);
		return;
	}
}
// System.Void System.Xml.XmlException::.ctor(System.String,System.String[],System.Exception,System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlException__ctor_mAF9987B6D433F91FBD0101527C492BA66AB25F37 (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* __this, String_t* ___0_res, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_args, Exception_t* ___2_innerException, int32_t ___3_lineNumber, int32_t ___4_linePosition, String_t* ___5_sourceUri, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_res;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___1_args;
		int32_t L_2 = ___3_lineNumber;
		int32_t L_3 = ___4_linePosition;
		String_t* L_4;
		L_4 = XmlException_CreateMessage_m7EF05421A745BA0BC494014171B7FE75BE36D056(L_0, L_1, L_2, L_3, NULL);
		Exception_t* L_5 = ___2_innerException;
		SystemException__ctor_m0FC84CACD2A5D66222998AA601A5C41CEC36A611(__this, L_4, L_5, NULL);
		Exception_set_HResult_m010A171183E240EBF4F7611E924B533FAB2E471F_inline(__this, ((int32_t)-2146232000), NULL);
		String_t* L_6 = ___0_res;
		__this->___res_18 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___res_18), (void*)L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = ___1_args;
		__this->___args_19 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___args_19), (void*)L_7);
		String_t* L_8 = ___5_sourceUri;
		__this->___sourceUri_22 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sourceUri_22), (void*)L_8);
		int32_t L_9 = ___3_lineNumber;
		__this->___lineNumber_20 = L_9;
		int32_t L_10 = ___4_linePosition;
		__this->___linePosition_21 = L_10;
		return;
	}
}
// System.String System.Xml.XmlException::FormatUserMessage(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlException_FormatUserMessage_m063B26658DDABD7F6364C28217D4A518715FC001 (String_t* ___0_message, int32_t ___1_lineNumber, int32_t ___2_linePosition, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral872479F10B4968F255B608A3698CA1A7EE09888B);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = ___1_lineNumber;
		int32_t L_2 = ___2_linePosition;
		String_t* L_3;
		L_3 = XmlException_CreateMessage_m7EF05421A745BA0BC494014171B7FE75BE36D056(_stringLiteral872479F10B4968F255B608A3698CA1A7EE09888B, (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL, L_1, L_2, NULL);
		return L_3;
	}

IL_0011:
	{
		int32_t L_4 = ___1_lineNumber;
		if (L_4)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_5 = ___2_linePosition;
		if (L_5)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_6 = ___0_message;
		return L_6;
	}

IL_0019:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		String_t* L_9 = ___0_message;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_9);
		int32_t L_10 = ___1_lineNumber;
		int32_t L_11 = ___2_linePosition;
		String_t* L_12;
		L_12 = XmlException_CreateMessage_m7EF05421A745BA0BC494014171B7FE75BE36D056(_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94, L_8, L_10, L_11, NULL);
		return L_12;
	}
}
// System.String System.Xml.XmlException::CreateMessage(System.String,System.String[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlException_CreateMessage_m7EF05421A745BA0BC494014171B7FE75BE36D056 (String_t* ___0_res, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_args, int32_t ___2_lineNumber, int32_t ___3_linePosition, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63D27168A6FFA4A02D5FDBA464A248377E88F4F4);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			int32_t L_0 = ___2_lineNumber;
			if (L_0)
			{
				goto IL_000f_1;
			}
		}
		{
			String_t* L_1 = ___0_res;
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = ___1_args;
			V_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_2;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_1;
			String_t* L_4;
			L_4 = Res_GetString_m088600B9D0FC319A206451B009A0583C600B9A83(L_1, L_3, NULL);
			V_0 = L_4;
			goto IL_0052_1;
		}

IL_000f_1:
		{
			il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
			CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5;
			L_5 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
			String_t* L_6;
			L_6 = Int32_ToString_m3B2730D9F5B0C1C57DCCC8B8DCFB8E5EC4E8979B((&___2_lineNumber), L_5, NULL);
			V_2 = L_6;
			CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_7;
			L_7 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
			String_t* L_8;
			L_8 = Int32_ToString_m3B2730D9F5B0C1C57DCCC8B8DCFB8E5EC4E8979B((&___3_linePosition), L_7, NULL);
			V_3 = L_8;
			String_t* L_9 = ___0_res;
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = ___1_args;
			V_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_10;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_1;
			String_t* L_12;
			L_12 = Res_GetString_m088600B9D0FC319A206451B009A0583C600B9A83(L_9, L_11, NULL);
			V_0 = L_12;
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)3);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
			String_t* L_15 = V_0;
			NullCheck(L_14);
			ArrayElementTypeCheck (L_14, L_15);
			(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_15);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_14;
			String_t* L_17 = V_2;
			NullCheck(L_16);
			ArrayElementTypeCheck (L_16, L_17);
			(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_17);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_16;
			String_t* L_19 = V_3;
			NullCheck(L_18);
			ArrayElementTypeCheck (L_18, L_19);
			(L_18)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_19);
			V_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_18;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = V_1;
			String_t* L_21;
			L_21 = Res_GetString_m088600B9D0FC319A206451B009A0583C600B9A83(_stringLiteral63D27168A6FFA4A02D5FDBA464A248377E88F4F4, L_20, NULL);
			V_0 = L_21;
		}

IL_0052_1:
		{
			String_t* L_22 = V_0;
			V_4 = L_22;
			goto IL_006c;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0057;
		}
		throw e;
	}

CATCH_0057:
	{// begin catch(System.Resources.MissingManifestResourceException)
		MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD* L_23 = ((MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD*)IL2CPP_GET_ACTIVE_EXCEPTION(MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD*));;
		String_t* L_24 = ___0_res;
		String_t* L_25;
		L_25 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral16C0D1A98D99C5FB32B981C3E41FDB407A083C18)), L_24, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D)), NULL);
		V_4 = L_25;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_006c;
	}// end catch (depth: 1)

IL_006c:
	{
		String_t* L_26 = V_4;
		return L_26;
	}
}
// System.String System.Xml.XmlException::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlException_get_Message_m218FC0CDE2D81F3E770F9C48807A9B864492F347 (XmlException_t86B8FDC142BBE4C73921439C9F1631092526D596* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___message_23;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_1 = __this->___message_23;
		return L_1;
	}

IL_000f:
	{
		String_t* L_2;
		L_2 = Exception_get_Message_mCFE0D38FDF9001405299AAE43BBE2A9AD806C441(__this, NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String System.Xml.Res::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Res_GetString_mBEE82ACFE97F93A6DDE81E322477CF2713466364 (String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_name;
		return L_0;
	}
}
// System.String System.Xml.Res::GetString(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Res_GetString_m088600B9D0FC319A206451B009A0583C600B9A83 (String_t* ___0_name, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		String_t* L_1 = ___0_name;
		return L_1;
	}

IL_0005:
	{
		String_t* L_2 = ___0_name;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		String_t* L_4;
		L_4 = SR_GetString_mBBCFC8C3B18DF600D0FAED49E703251D2250D41B(L_2, L_3, NULL);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashCodeOfStringDelegate_Invoke_m75607AC5443193A85145E05E5C6036A9BA0C61A2_inline (HashCodeOfStringDelegate_t9AB4FF441166EF88D20657805C4FA187C4FF5046* __this, String_t* ___0_s, int32_t ___1_sLen, int64_t ___2_additionalEntropy, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, String_t*, int32_t, int64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_s, ___1_sLen, ___2_additionalEntropy, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XmlTextEncoder_set_QuoteChar_mE15FB6ECB7FAF6CE0780E1FE421D0802BF38D627_inline (XmlTextEncoder_tACD13BCC8237E0710F82A7703FAF7D09FCDF0C40* __this, Il2CppChar ___0_value, const RuntimeMethod* method) 
{
	{
		Il2CppChar L_0 = ___0_value;
		__this->___quoteChar_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XmlCharType__ctor_mB4A379AC51751894C31365E176E3B9BFB5ABC771_inline (XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_charProperties, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_charProperties;
		__this->___charProperties_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___charProperties_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SerializationEntry_get_Name_mF6151F31B3F43C88AF08F39F178401406642EB67_inline (SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____name_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SerializationEntry_get_Value_mA57713535F866795C180D20067C0E38A85327912_inline (SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Exception_set_HResult_m010A171183E240EBF4F7611E924B533FAB2E471F_inline (Exception_t* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->____HResult_11 = L_0;
		return;
	}
}
