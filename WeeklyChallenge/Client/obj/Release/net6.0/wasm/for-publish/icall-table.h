#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
183,
190,
191,
192,
193,
194,
195,
196,
197,
198,
201,
202,
362,
363,
365,
393,
394,
395,
415,
416,
417,
418,
419,
492,
493,
494,
497,
532,
533,
535,
537,
539,
541,
546,
554,
555,
556,
557,
558,
559,
560,
561,
562,
563,
692,
693,
700,
703,
705,
710,
711,
713,
714,
718,
719,
720,
721,
723,
724,
725,
728,
729,
732,
733,
734,
803,
804,
806,
814,
815,
816,
817,
818,
822,
823,
824,
825,
826,
827,
829,
830,
831,
833,
834,
835,
839,
840,
841,
1109,
1286,
1287,
5720,
5721,
5723,
5724,
5725,
5726,
5727,
5729,
5731,
5733,
5734,
5735,
5742,
5744,
5750,
5751,
5753,
5755,
5757,
5768,
5777,
5778,
5780,
5781,
5782,
5783,
5784,
5786,
5788,
6709,
6713,
6715,
6716,
6717,
6718,
6750,
6751,
6752,
6769,
6770,
6771,
6772,
6804,
6850,
6853,
6861,
6862,
6863,
7245,
7246,
7249,
7250,
7281,
7282,
7283,
7301,
7307,
7314,
7324,
7328,
7409,
7410,
7421,
7422,
7423,
7424,
7425,
7426,
7433,
7446,
7466,
7467,
7475,
7477,
7484,
7485,
7488,
7490,
7495,
7501,
7502,
7509,
7511,
7521,
7524,
7525,
7526,
7536,
7547,
7553,
7554,
7555,
7557,
7558,
7568,
7586,
7602,
7603,
7621,
7626,
7656,
7657,
8082,
8083,
8223,
8460,
8461,
8468,
8469,
8470,
8475,
8537,
8696,
8697,
10032,
10051,
10058,
10059,
10061,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementType_raw (int,int);
int ves_icall_System_Array_IsValueOfElementType_raw (int,int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy_raw (int,int,int,int,int,int);
int ves_icall_System_Array_GetLength_raw (int,int,int);
int ves_icall_System_Array_GetLowerBound_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
int ves_icall_System_Array_GetValueImpl_raw (int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
int ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
int ves_icall_System_Enum_ToObject_raw (int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType_raw (int,int);
int ves_icall_System_Enum_get_underlying_type_raw (int,int);
int ves_icall_System_Enum_InternalHasFlag_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Abs_double (double);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_make_array_type_raw (int,int,int);
int ves_icall_RuntimeType_make_byref_type_raw (int,int);
int ves_icall_RuntimeType_MakePointerType_raw (int,int);
int ves_icall_RuntimeType_MakeGenericType_raw (int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_Activator_CreateInstanceInternal_raw (int,int);
int ves_icall_RuntimeType_get_DeclaringMethod_raw (int,int);
int ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericArguments_raw (int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition_raw (int,int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetInterfaces_raw (int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_get_DeclaringType_raw (int,int);
int ves_icall_RuntimeType_get_Name_raw (int,int);
int ves_icall_RuntimeType_get_Namespace_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType_raw (int,int);
int ves_icall_RuntimeTypeHandle_HasInstantiation_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsComObject_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetModule_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsGenericVariable_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of (int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
int ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_String_InternalIsInterned_raw (int,int);
int ves_icall_System_String_InternalIntern_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Read_Long (int);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
int64_t ves_icall_System_Threading_Interlocked_Add_Long (int,int64_t);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
int ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw (int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw (int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int mono_object_hash_icall_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetCallingAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
void mono_digest_get_public_token (int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_System_Reflection_AssemblyName_ParseAssemblyName (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_location_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
int ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw (int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw (int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
int ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw (int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_AssemblyExtensions_ApplyUpdate (int,int,int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
void ves_icall_Mono_RuntimeMarshal_FreeAssemblyName (int,int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 183,
ves_icall_System_Array_InternalCreate,
// token 190,
ves_icall_System_Array_GetCorElementTypeOfElementType_raw,
// token 191,
ves_icall_System_Array_IsValueOfElementType_raw,
// token 192,
ves_icall_System_Array_CanChangePrimitive,
// token 193,
ves_icall_System_Array_FastCopy_raw,
// token 194,
ves_icall_System_Array_GetLength_raw,
// token 195,
ves_icall_System_Array_GetLowerBound_raw,
// token 196,
ves_icall_System_Array_GetGenericValue_icall,
// token 197,
ves_icall_System_Array_GetValueImpl_raw,
// token 198,
ves_icall_System_Array_SetGenericValue_icall,
// token 201,
ves_icall_System_Array_SetValueImpl_raw,
// token 202,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 362,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 363,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 365,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 393,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 394,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 395,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 415,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 416,
ves_icall_System_Enum_ToObject_raw,
// token 417,
ves_icall_System_Enum_InternalGetCorElementType_raw,
// token 418,
ves_icall_System_Enum_get_underlying_type_raw,
// token 419,
ves_icall_System_Enum_InternalHasFlag_raw,
// token 492,
ves_icall_System_Environment_get_ProcessorCount,
// token 493,
ves_icall_System_Environment_get_TickCount,
// token 494,
ves_icall_System_Environment_get_TickCount64,
// token 497,
ves_icall_System_Environment_FailFast_raw,
// token 532,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 533,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 535,
ves_icall_System_GC_SuppressFinalize_raw,
// token 537,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 539,
ves_icall_System_GC_GetGCMemoryInfo,
// token 541,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 546,
ves_icall_System_Object_MemberwiseClone_raw,
// token 554,
ves_icall_System_Math_Abs_double,
// token 555,
ves_icall_System_Math_Ceiling,
// token 556,
ves_icall_System_Math_Cos,
// token 557,
ves_icall_System_Math_Floor,
// token 558,
ves_icall_System_Math_Log10,
// token 559,
ves_icall_System_Math_Pow,
// token 560,
ves_icall_System_Math_Sin,
// token 561,
ves_icall_System_Math_Sqrt,
// token 562,
ves_icall_System_Math_Tan,
// token 563,
ves_icall_System_Math_ModF,
// token 692,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 693,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 700,
ves_icall_RuntimeType_make_array_type_raw,
// token 703,
ves_icall_RuntimeType_make_byref_type_raw,
// token 705,
ves_icall_RuntimeType_MakePointerType_raw,
// token 710,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 711,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 713,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 714,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 718,
ves_icall_System_Activator_CreateInstanceInternal_raw,
// token 719,
ves_icall_RuntimeType_get_DeclaringMethod_raw,
// token 720,
ves_icall_System_RuntimeType_getFullName_raw,
// token 721,
ves_icall_RuntimeType_GetGenericArguments_raw,
// token 723,
ves_icall_RuntimeType_GetGenericParameterPosition_raw,
// token 724,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 725,
ves_icall_RuntimeType_GetFields_native_raw,
// token 728,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 729,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 732,
ves_icall_RuntimeType_get_DeclaringType_raw,
// token 733,
ves_icall_RuntimeType_get_Name_raw,
// token 734,
ves_icall_RuntimeType_get_Namespace_raw,
// token 803,
ves_icall_RuntimeTypeHandle_GetAttributes_raw,
// token 804,
ves_icall_reflection_get_token_raw,
// token 806,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 814,
ves_icall_RuntimeTypeHandle_GetCorElementType_raw,
// token 815,
ves_icall_RuntimeTypeHandle_HasInstantiation_raw,
// token 816,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 817,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 818,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 822,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 823,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 824,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 825,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 826,
ves_icall_RuntimeTypeHandle_IsGenericVariable_raw,
// token 827,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 829,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 830,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw,
// token 831,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 833,
ves_icall_RuntimeTypeHandle_is_subclass_of,
// token 834,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 835,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 839,
ves_icall_System_String_FastAllocateString_raw,
// token 840,
ves_icall_System_String_InternalIsInterned_raw,
// token 841,
ves_icall_System_String_InternalIntern_raw,
// token 1109,
ves_icall_System_Type_internal_from_handle_raw,
// token 1286,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1287,
ves_icall_System_ValueType_Equals_raw,
// token 5720,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 5721,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 5723,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 5724,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 5725,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 5726,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 5727,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 5729,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 5731,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 5733,
ves_icall_System_Threading_Interlocked_Read_Long,
// token 5734,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 5735,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 5742,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 5744,
mono_monitor_exit_icall_raw,
// token 5750,
ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw,
// token 5751,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 5753,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 5755,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 5757,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 5768,
ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw,
// token 5777,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 5778,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 5780,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 5781,
ves_icall_System_Threading_Thread_GetState_raw,
// token 5782,
ves_icall_System_Threading_Thread_SetState_raw,
// token 5783,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 5784,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 5786,
ves_icall_System_Threading_Thread_YieldInternal,
// token 5788,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 6709,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 6713,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 6715,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 6716,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 6717,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 6718,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 6750,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 6751,
ves_icall_System_GCHandle_InternalFree_raw,
// token 6752,
ves_icall_System_GCHandle_InternalGet_raw,
// token 6769,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 6770,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 6771,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 6772,
ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw,
// token 6804,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 6850,
mono_object_hash_icall_raw,
// token 6853,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 6861,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 6862,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 6863,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 7245,
ves_icall_System_Reflection_Assembly_GetCallingAssembly_raw,
// token 7246,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 7249,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 7250,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 7281,
mono_digest_get_public_token,
// token 7282,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 7283,
ves_icall_System_Reflection_AssemblyName_ParseAssemblyName,
// token 7301,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 7307,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 7314,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 7324,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 7328,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 7409,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 7410,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 7421,
ves_icall_System_Reflection_RuntimeAssembly_get_location_raw,
// token 7422,
ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw,
// token 7423,
ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw,
// token 7424,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 7425,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 7426,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 7433,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 7446,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 7466,
ves_icall_reflection_get_token_raw,
// token 7467,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 7475,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 7477,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 7484,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 7485,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 7488,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 7490,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 7495,
ves_icall_reflection_get_token_raw,
// token 7501,
ves_icall_get_method_info_raw,
// token 7502,
ves_icall_get_method_attributes,
// token 7509,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 7511,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 7521,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 7524,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 7525,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 7526,
ves_icall_reflection_get_token_raw,
// token 7536,
ves_icall_InternalInvoke_raw,
// token 7547,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 7553,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 7554,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 7555,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 7557,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 7558,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 7568,
ves_icall_InternalInvoke_raw,
// token 7586,
ves_icall_reflection_get_token_raw,
// token 7602,
ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw,
// token 7603,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 7621,
ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw,
// token 7626,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 7656,
ves_icall_reflection_get_token_raw,
// token 7657,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 8082,
ves_icall_AssemblyExtensions_ApplyUpdate,
// token 8083,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 8223,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 8460,
ves_icall_ModuleBuilder_basic_init_raw,
// token 8461,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 8468,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 8469,
ves_icall_ModuleBuilder_getToken_raw,
// token 8470,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 8475,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 8537,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 8696,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 8697,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 10032,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 10051,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 10058,
ves_icall_Mono_RuntimeMarshal_FreeAssemblyName,
// token 10059,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 10061,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_handles [] = {
0,
1,
1,
0,
1,
1,
1,
0,
1,
0,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
0,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
};
