// 函数名称: ??$FindHandler@V__FrameHandler3@@@@YAXPAUEHExceptionRecord@@PAUEHRegistrationNode@@PAU_CONTEXT@@PAXPBU_s_FuncInfo@@EH1@Z
// 虚拟地址: 0x51e69a
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*??$FindHandler@V__FrameHandler3@@@@YAXPAUEHExceptionRecord@@PAUEHRegistrationNode@@PAU_CONTEXT@@PAXPBU_s_FuncInfo@@EH1@Z(int32_t* arg1, void** arg2, int32_t arg3, void* arg4, int32_t* arg5, char arg6, int32_t arg7, void** arg8)
{
    // 第一条实际指令: int32_t* edi = arg5
    int32_t* edi = arg5
    int32_t i_1 = 0
    int32_t* var_68 = edi
    char var_2c = 0
    char var_5 = 0
    int32_t eax = __FrameHandler3::GetCurrentState(arg2, arg4)
    int32_t var_c = eax
    
    if (eax s>= 0xffffffff && eax s< edi[1])
        int32_t* esi_1 = arg1
        int32_t var_54
        int32_t var_10_1
        void* result
        int32_t edx_1
        
        if (*esi_1 != 0xe06d7363 || esi_1[4] != 3)
        label_51e7da:
            edx_1 = arg3
            var_10_1 = edx_1
        label_51e7eb:
            int32_t* var_48 = edi
            void* var_44_1 = arg4
            
            if (*esi_1 != 0xe06d7363 || esi_1[4] != 3
                    || (esi_1[5] != 0x19930520 && esi_1[5] != 0x19930521 && esi_1[5] != 0x19930522))
                if (edi[3] u<= 0)
                    goto label_51e9b4
                
                if (arg6 == 0)
                    FindHandlerForForeignException<class __FrameHandler3>(esi_1, arg2, edx_1, arg4, 
                        edi, eax, arg7, arg8)
                label_51e9b4:
                    result = sub_51e354()
                    
                    if (*(result + 0x1c) == 0)
                        return result
            else
                if (edi[3] u> 0)
                    int32_t* var_58
                    __FrameHandler3::GetRangeOfTrysToCheck(&var_58, &var_48, eax, arg7)
                    int32_t edx_2 = var_54
                    int32_t* eax_11 = var_58
                    int32_t var_1c_1 = edx_2
                    int32_t var_4c
                    
                    if (edx_2 u< var_4c)
                        int32_t ecx_6 = var_c
                        int32_t var_20_3 = edx_2 * 0x14
                        
                        do
                            int32_t* eax_16 = *(*eax_11 + 0x10) + var_20_3
                            
                            if (*eax_16 s<= ecx_6 && ecx_6 s<= eax_16[1])
                                int32_t eax_17 = eax_16[3]
                                char* var_14_1 = eax_16[4]
                                edi = arg5
                                int32_t var_28_1 = 0
                                
                                if (eax_17 != 0)
                                    int32_t* eax_19 = *(esi_1[7] + 0xc)
                                    int32_t i_3 = *eax_19
                                    void* eax_20 = &eax_19[1]
                                    int32_t i_4 = i_3
                                    void* var_3c_1 = eax_20
                                    
                                    while (true)
                                        void* ecx_7 = eax_20
                                        void* var_18_1 = ecx_7
                                        int32_t i_2 = i_3
                                        
                                        if (i_3 s> 0)
                                            int32_t i
                                            
                                            do
                                                if (TypeMatchHelper<class __FrameHandler3>(var_14_1, 
                                                        *ecx_7, esi_1[7]) != 0)
                                                    int32_t var_68_4 = var_2c.d
                                                    var_5 = 1
                                                    CatchIt<class __FrameHandler3>(esi_1, arg2, 
                                                        var_10_1, arg4, edi, var_14_1, *var_18_1, 
                                                        eax_16, arg7, arg8)
                                                    goto label_51e924
                                                
                                                i = i_2 - 1
                                                ecx_7 = var_18_1 + 4
                                                i_2 = i
                                                var_18_1 = ecx_7
                                            while (i s> 0)
                                            i_3 = i_4
                                        
                                        var_14_1 = &var_14_1[0x10]
                                        int32_t eax_25 = var_28_1 + 1
                                        var_28_1 = eax_25
                                        
                                        if (eax_25 == eax_17)
                                            break
                                        
                                        eax_20 = var_3c_1
                                    
                                label_51e924:
                                    edx_2 = var_1c_1
                                    ecx_6 = var_c
                            
                            var_20_3 += 0x14
                            edx_2 += 1
                            var_1c_1 = edx_2
                        while (edx_2 u< var_4c)
                
                if (arg6 != 0)
                    ___DestructExceptionObject(esi_1)
                
                if (var_5 != 0 || (*edi & 0x1fffffff) u< 0x19930521
                        || (edi[7] == 0 && (((edi[8] u>> 2).b & 1) == 0 || arg7 != 0)))
                    goto label_51e9b4
                
                if (((edi[8] u>> 2).b & 1) == 0)
                    if (IsInExceptionSpec(esi_1, edi[7]) != 0)
                        goto label_51e9b4
                    
                    *(sub_51e354() + 0x10) = esi_1
                    *(sub_51e354() + 0x14) = var_10_1
                    void** eax_36 = arg8
                    
                    if (eax_36 == 0)
                        eax_36 = arg2
                    
                    sub_51cb38(eax_36, esi_1)
                    __FrameHandler3::FrameUnwindToEmptyState(arg2, arg4, edi)
                    int32_t var_68_10 = ?begin@?$WriteOnlyArray@E$00@Platform@@Q$ABAPAEXZ(edi)
                    CallUnexpected()
                    noreturn
        else
            if (esi_1[5] == 0x19930520 || esi_1[5] == 0x19930521)
                if (esi_1[7] != 0)
                    goto label_51e7da
            else if (esi_1[5] != 0x19930522 || esi_1[7] != 0)
                goto label_51e7da
            
            result = sub_51e354()
            
            if (*(result + 0x10) == 0)
                return result
            
            esi_1 = *(sub_51e354() + 0x10)
            var_2c = 1
            var_10_1 = *(sub_51e354() + 0x14)
            
            if (esi_1 != 0)
                if (*esi_1 != 0xe06d7363 || esi_1[4] != 3)
                label_51e772:
                    void* eax_4 = sub_51e354()
                    int32_t* eax_6
                    char eax_8
                    
                    if (*(eax_4 + 0x1c) != 0)
                        eax_6 = *(sub_51e354() + 0x1c)
                        *(sub_51e354() + 0x1c) = 0
                        eax_8 = IsInExceptionSpec(esi_1, eax_6)
                    
                    if (*(eax_4 + 0x1c) == 0 || eax_8 != 0)
                        edx_1 = var_10_1
                        eax = var_c
                        goto label_51e7eb
                    
                    if (*eax_6 s> 0)
                        int32_t ecx_2 = 0
                        int32_t var_20_2 = 0
                        
                        do
                            if (type_info::operator==(*(ecx_2 + eax_6[1] + 4), 
                                    &class std::bad_exception `RTTI Type Descriptor') != 0)
                                int32_t var_68_7 = 1
                                ___DestructExceptionObject(esi_1)
                                std::bad_cast::bad_cast(&var_54)
                                __CxxThrowException@8(&var_54, 0x5ac45c)
                                noreturn
                            
                            i_1 += 1
                            ecx_2 = var_20_2 + 0x10
                            var_20_2 = ecx_2
                        while (i_1 s< *eax_6)
                else if (esi_1[5] == 0x19930520 || esi_1[5] == 0x19930521)
                    if (esi_1[7] != 0)
                        goto label_51e772
                else if (esi_1[5] != 0x19930522 || esi_1[7] != 0)
                    goto label_51e772
    
    sub_52f140()
    noreturn
}
