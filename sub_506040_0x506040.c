// 函数名称: sub_506040
// 虚拟地址: 0x506040
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

LRESULT __fastcallsub_506040(LRESULT arg1, void* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    LRESULT wParam = arg1
    
    if (*(arg2 + 0x14) != 0x63)
        void var_114
        _memset(&var_114, 0, 0x104)
        char* const edi_1 = &data_5559b1
        LRESULT lParam = SendMessageA(*(data_e47264 + 0x18), 0x199, arg1, 0)
        
        if (lParam == 0xffffffff || lParam == 0)
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return 0xffffffff
        
        int32_t eax_3 = *(arg2 + 0x14)
        
        switch (eax_3)
            case 0, 1, 2, 3, 7
                edi_1 = *(arg2 + 0x10)
            case 4
                uint32_t ecx = zx.d(*(arg2 + 0x10))
                uint32_t var_128_1 = zx.d(*(arg2 + 0x12))
                uint32_t var_12c_2 = ecx u>> 8
                uint32_t var_130_2 = zx.d(ecx.b)
                eax_3 = sub_5015e0(&var_114, 0x104, "%d,%d,%d")
                edi_1 = &var_114
            case 5
                eax_3 = sub_502ef0(*(arg2 + 0x10))
                edi_1 = &data_e49dd0
            case 6
                sub_502f70(*(arg2 + 0x10))
                *(arg2 + 8) = 0xe4a558
                eax_3 = *(arg2 + 0x10)
                edi_1 = *(eax_3 + 4)
            case 8
                edi_1 = &data_59d250
                eax_3 = &data_59cf5c
                
                if (*(arg2 + 0x10) == 0)
                    edi_1 = &data_59cf5c
            case 9
                int32_t ecx_3 = *(arg2 + 0x10)
                uint32_t var_128_2 = zx.d(ecx_3.b)
                uint32_t var_12c_3 = zx.d((ecx_3 u>> 8).b)
                uint32_t var_130_3 = zx.d((ecx_3 u>> 0x10).b)
                uint32_t var_134_2 = ecx_3 u>> 0x18
                eax_3 = sub_5015e0(&var_114, 0x104, "%d.%d.%d.%d")
                edi_1 = &var_114
            case 0xa
                eax_3 = GetDateFormatA(0x400, 1, *(arg2 + 0x10), nullptr, &var_114, 0x104)
                edi_1 = &var_114
            case 0xb
                eax_3 = GetTimeFormatA(0x400, 0, *(arg2 + 0x10), "hh':'mm':'ss tt", &var_114, 0x104)
                edi_1 = &var_114
            case 0xc
                GetDateFormatA(0x400, 1, *(arg2 + 0x10), nullptr, &var_114, 0x104)
                void* edi_2 = &wParam:3
                char i
                
                do
                    i = *(edi_2 + 1)
                    edi_2 += 1
                while (i != 0)
                
                void* ecx_5 = &var_114
                *edi_2 = 0x20
                
                do
                    i = *ecx_5
                    ecx_5 += 1
                while (i != 0)
                
                void var_113
                int32_t ecx_6 = ecx_5 - &var_113
                eax_3 = GetTimeFormatA(0x400, 0, *(arg2 + 0x10), "hh':'mm':'ss tt", &var_114 + ecx_6, 
                    0x104 - ecx_6)
                edi_1 = &var_114
        
        char** lParam_1 =
            sub_501690(eax_3, *(arg2 + 4), *lParam, edi_1, *(arg2 + 8), *(arg2 + 0xc), *(arg2 + 0x14))
        
        if (SendMessageA(*(data_e47264 + 0x18), 0x19a, wParam, lParam_1) != 0xffffffff)
            WPARAM wParam_1 = SendMessageA(*(data_e47264 + 0x14), 0x18f, 0, lParam)
            
            if (wParam_1 != 0xffffffff)
                LRESULT wParam_2 = SendMessageA(*(data_e47264 + 0x14), 0x19a, wParam_1, lParam_1)
                HWND hWnd = *(data_e47264 + 0x14)
                wParam = wParam_2
                RedrawWindow(hWnd, nullptr, nullptr, RDW_INVALIDATE | RDW_ERASE | RDW_UPDATENOW)
                LRESULT result = wParam
                
                if (result != 0xffffffff)
                    void* eax_21 = data_e47264
                    
                    if (lParam == *(eax_21 + 4))
                        *(eax_21 + 4) = lParam_1
                    
                    sub_501770(lParam)
                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                    return result
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return 0xffffffff
}
