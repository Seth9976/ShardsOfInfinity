// 函数名称: sub_503ea0
// 虚拟地址: 0x503ea0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

HWND __convention("regparm")sub_503ea0(int32_t arg1, void* arg2, HWND arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t Y_1 = arg5 + 1
    int16_t var_1c = 0
    char var_1a = 0
    HWND result = *(arg2 + 0x14)
    arg5 = Y_1
    SYSTEMTIME var_18
    __builtin_memset(&var_18, 0, 0x10)
    
    if (result != 0xa)
        if (result == 0xb)
            HINSTANCE* esi_2 = data_e47264
            
            if (esi_2[7] == 0)
                *(data_e47264 + 0x1c) = sub_5029a0(result, arg3, *esi_2, 0x7d7, 0)
                esi_2 = data_e47264
            
            MoveWindow(esi_2[7], arg4, Y_1, arg6 - arg4, arg7 - Y_1, 1)
            int32_t ecx_7
            int32_t edx_3
            ecx_7, edx_3 = GetLocalTime(&var_18)
            int16_t* var_48_4 = &var_1c
            uint16_t* var_4c_5 = &var_18.wSecond
            uint16_t* var_50_4 = &var_18.wMinute
            uint16_t* var_54_4 = &var_18.wHour
            sub_4529c0(arg2, edx_3, ecx_7, *(arg2 + 0x10), "%hd:%hd:%hd %2s")
            
            if (__mbsicmp("PM", &var_1c) == 0)
                uint32_t eax_16
                eax_16.w = var_18.wHour
                
                if (eax_16.w != 0xc)
                    eax_16.w += 0xc
                    var_18.wHour = eax_16.w
            
            goto label_503f57
        
        if (result == 0xc)
            uint128_t X_2 = arg4.o
            HINSTANCE* ecx_8 = data_e47264
            int32_t X_1 = X_2
            int32_t eax_19
            int32_t edx_4
            edx_4:eax_19 = sx.q(_mm_bsrli_si128(X_2, 8) - X_1)
            int32_t X = ((eax_19 - edx_4) s>> 1) + X_1
            
            if (ecx_8[7] == 0)
                *(data_e47264 + 0x1c) = sub_5029a0(X, arg3, *ecx_8, 0x7d6, 1)
                ecx_8 = data_e47264
            
            BOOL eax_27 = MoveWindow(ecx_8[7], X_1, Y_1, X - X_1, arg7 - Y_1, 1)
            HINSTANCE* esi_3 = data_e47264
            
            if (esi_3[8] == 0)
                *(data_e47264 + 0x20) = sub_5029a0(eax_27, arg3, *esi_3, 0x7d7, 0)
                esi_3 = data_e47264
            
            int32_t Y = X_2:4.d
            int32_t ecx_13
            int32_t edx_8
            ecx_13, edx_8 = MoveWindow(esi_3[8], X, Y, X_2:8.d - X, X_2:0xc.d - Y, 1)
            int16_t* var_48_5 = &var_1c
            uint16_t* var_4c_8 = &var_18.wSecond
            uint16_t* var_50_7 = &var_18.wMinute
            uint16_t* var_54_7 = &var_18.wHour
            SYSTEMTIME* var_58_6 = &var_18
            uint16_t* var_5c_6 = &var_18.wDay
            uint16_t* var_60_2 = &var_18.wMonth
            sub_4529c0(arg2, edx_8, ecx_13, *(arg2 + 0x10), "%hd/%hd/%hd %hd:%hd:%hd %2s")
            
            if (__mbsicmp("PM", &var_1c) == 0)
                uint32_t eax_34
                eax_34.w = var_18.wHour
                
                if (eax_34.w != 0xc)
                    eax_34.w += 0xc
                    var_18.wHour = eax_34.w
            
            SendMessageA(*(data_e47264 + 0x1c), 0x1002, 0, &var_18)
            SendMessageA(*(data_e47264 + 0x20), 0x1002, 0, &var_18)
            ShowWindow(*(data_e47264 + 0x1c), SW_SHOW)
            ShowWindow(*(data_e47264 + 0x20), SW_SHOW)
            result = SetFocus(*(data_e47264 + 0x1c))
    else
        int32_t* esi_1 = data_e47264
        
        if (esi_1[7] == 0)
            *(data_e47264 + 0x1c) = sub_5029a0(result, arg3, *esi_1, 0x7d6, 1)
            esi_1 = data_e47264
        
        int32_t ecx_3
        int32_t edx_1
        ecx_3, edx_1 = MoveWindow(esi_1[7], arg4, Y_1, arg6 - arg4, arg7 - Y_1, 1)
        SYSTEMTIME* var_48_1 = &var_18
        uint16_t* var_4c_2 = &var_18.wDay
        uint16_t* var_50_2 = &var_18.wMonth
        sub_4529c0(arg2, edx_1, ecx_3, *(arg2 + 0x10), "%hd/%hd/%hd")
    label_503f57:
        SendMessageA(*(data_e47264 + 0x1c), 0x1002, 0, &var_18)
        ShowWindow(*(data_e47264 + 0x1c), SW_SHOW)
        result = SetFocus(*(data_e47264 + 0x1c))
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
