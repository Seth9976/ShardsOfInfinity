// 函数名称: __wsopen_nolock
// 虚拟地址: 0x53a284
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__wsopen_nolock(int32_t* arg1, int32_t* arg2, int32_t arg3, int32_t arg4, int32_t arg5, char arg6)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_54 = edi
    void var_48
    char var_30
    int32_t ecx
    int32_t edx
    __builtin_memcpy(&var_30, sub_539fc8(&var_48, edx, ecx, &var_48, arg4, arg5, arg6), 0x18)
    int32_t var_24
    
    if (var_24 != 0xffffffff)
        int32_t eax_6 = __alloc_osfhnd()
        *arg2 = eax_6
        
        if (eax_6 != 0xffffffff)
            int32_t var_14_1 = 0
            int32_t var_18 = 0xc
            *arg1 = 1
            int32_t var_10_1 = not.d(arg4 u>> 7) & 1
            int32_t* var_70_1 = &var_18
            int32_t var_74 = arg3
            void var_6c
            __builtin_memcpy(&var_6c, &var_30, 0x18)
            HANDLE hObject_1 = create_file()
            HANDLE hObject = hObject_1
            int32_t var_2c
            
            if (hObject_1 != 0xffffffff)
            label_53a3ab:
                enum FILE_TYPE eax_22 = GetFileType(hObject_1)
                
                if (eax_22 != FILE_TYPE_UNKNOWN)
                    if (eax_22 != FILE_TYPE_CHAR)
                        bool cond:0_1 = eax_22 != FILE_TYPE_PIPE
                        eax_22.b = var_30
                        
                        if (not(cond:0_1))
                            eax_22.b |= 8
                    else
                        eax_22.b = var_30
                        eax_22.b |= 0x40
                    
                    char var_5_1 = eax_22.b
                    ___acrt_lowio_set_os_handle(*arg2, hObject_1)
                    int32_t edx_1
                    edx_1.b = var_5_1
                    int32_t ecx_10 = *arg2
                    edx_1.b |= 1
                    char var_5_2 = edx_1.b
                    var_30 = edx_1.b
                    *((&data_65a778)[ecx_10 s>> 6] + (ecx_10 & 0x3f) * 0x30 + 0x28) = edx_1.b
                    int32_t ecx_13 = *arg2
                    int32_t ecx_15 = (ecx_13 & 0x3f) * 0x30
                    int32_t eax_33 = (&data_65a778)[ecx_13 s>> 6]
                    *(eax_33 + ecx_15 + 0x29) = 0
                    
                    if ((arg4.b & 2) != 0)
                        int32_t eax_34
                        eax_34, edx_1 = truncate_ctrl_z_if_present(eax_33, edx_1, ecx_15, *arg2)
                        
                        if (eax_34 != 0)
                            __close_nolock(*arg2)
                            return eax_34
                    
                    char var_6 = 0
                    char* var_58_8 = &var_6
                    int32_t var_5c_2 = arg4
                    int32_t eax_36 =
                        sub_539cea(&var_6, edx_1, __builtin_memcpy(&var_74, &var_30, 0x18), *arg2)
                    int32_t edx_2 = *arg2
                    
                    if (eax_36 != 0)
                        __close_nolock(edx_2)
                        return eax_36
                    
                    eax_36.b = var_6
                    *((&data_65a778)[edx_2 s>> 6] + (edx_2 & 0x3f) * 0x30 + 0x29) = eax_36.b
                    int32_t ecx_22 = *arg2
                    int32_t edx_5 = (ecx_22 & 0x3f) * 0x30
                    int32_t ecx_24 = (&data_65a778)[ecx_22 s>> 6]
                    *(ecx_24 + edx_5 + 0x2d) ^= ((arg4 u>> 0x10).b ^ *(ecx_24 + edx_5 + 0x2d)) & 1
                    
                    if ((var_5_2 & 0x48) == 0 && (arg4.b & 8) != 0)
                        int32_t ecx_25 = *arg2
                        int32_t ecx_27 = (ecx_25 & 0x3f) * 0x30
                        int32_t eax_43 = (&data_65a778)[ecx_25 s>> 6]
                        *(eax_43 + ecx_27 + 0x28) |= 0x20
                    
                    if ((var_2c & 0xc0000000) != 0xc0000000 || (arg4.b & 1) == 0)
                        return 0
                    
                    CloseHandle(hObject)
                    int32_t var_2c_1 = var_2c & 0x7fffffff
                    int32_t* var_70_3 = &var_18
                    var_74 = arg3
                    __builtin_memcpy(&var_6c, &var_30, 0x18)
                    HANDLE eax_46 = create_file()
                    
                    if (eax_46 != 0xffffffff)
                        int32_t ecx_32 = *arg2
                        *((&data_65a778)[ecx_32 s>> 6] + (ecx_32 & 0x3f) * 0x30 + 0x18) = eax_46
                        return 0
                    
                    ___acrt_errno_map_os_error(GetLastError())
                    int32_t ecx_28 = *arg2
                    int32_t ecx_30 = (ecx_28 & 0x3f) * 0x30
                    int32_t eax_50 = (&data_65a778)[ecx_28 s>> 6]
                    *(eax_50 + ecx_30 + 0x28) &= 0xfe
                    __free_osfhnd(*arg2)
                else
                    enum WIN32_ERROR eax_23 = GetLastError()
                    ___acrt_errno_map_os_error(eax_23)
                    int32_t ecx_7 = *arg2
                    int32_t ecx_9 = (ecx_7 & 0x3f) * 0x30
                    int32_t eax_26 = (&data_65a778)[ecx_7 s>> 6]
                    *(eax_26 + ecx_9 + 0x28) &= 0xfe
                    CloseHandle(hObject_1)
                    
                    if (eax_23 == NO_ERROR)
                        *__errno() = 0xd
            else
                if ((var_2c & 0xc0000000) == 0xc0000000 && (arg4.b & 1) != 0)
                    var_2c &= 0x7fffffff
                    int32_t* var_70_2 = &var_18
                    var_74 = arg3
                    __builtin_memcpy(&var_6c, &var_30, 0x18)
                    hObject_1 = create_file()
                    hObject = hObject_1
                    
                    if (hObject_1 != 0xffffffff)
                        goto label_53a3ab
                    
                    goto label_53a37f
                
            label_53a37f:
                int32_t ecx_3 = *arg2
                int32_t ecx_5 = (ecx_3 & 0x3f) * 0x30
                int32_t eax_20 = (&data_65a778)[ecx_3 s>> 6]
                *(eax_20 + ecx_5 + 0x28) &= 0xfe
                ___acrt_errno_map_os_error(GetLastError())
        else
            *___doserrno() = 0
            *arg2 = 0xffffffff
            *__errno() = 0x18
    else
        *___doserrno() = 0
        *arg2 = 0xffffffff
    
    return *__errno()
}
