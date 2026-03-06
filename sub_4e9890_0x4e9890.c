// 函数名称: sub_4e9890
// 虚拟地址: 0x4e9890
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

BOOL __fastcallsub_4e9890(char* arg1)
{
    // 第一条实际指令: void var_2c
    void var_2c
    int32_t eax_1 = __security_cookie ^ &var_2c
    RECT rect
    BOOL result = GetClientRect(*(data_ce26f4 + 0x24), &rect)
    int32_t right = rect.right
    int32_t bottom = rect.bottom
    
    if (right != 0 && bottom != 0)
        int32_t* ecx = *(arg1 + 0x10)
        
        if (ecx != 0)
            BOOL* eax_3 = sub_454030(ecx)
            result = *eax_3
            
            if (*result != right || *(result + 4) != bottom)
                int32_t* ecx_1 = *(arg1 + 8)
                (*(*ecx_1 + 0x84))(ecx_1, 0, 0, 0)
                int32_t* eax_5 = sub_48f4d0(*(arg1 + 0x10))
                int32_t* eax_6 = sub_4ebf60(data_ce26f4 + 0x38, eax_5)
                int32_t* ecx_5 = eax_6[0xc]
                (*(*ecx_5 + 8))(ecx_5)
                int32_t* eax_8 = eax_6[7]
                eax_6[0xc] = 0
                (*(*eax_8 + 8))(eax_8)
                eax_6[7] = 0
                int32_t* eax_9 = *(arg1 + 0xc)
                int32_t edx_2
                result, edx_2 = (*(*eax_9 + 0x34))(eax_9, 0, 0, 0, 0, 0)
                
                if (result == 0x887a0005 || result == 0x887a0007)
                    sub_4e9800(result, edx_2, arg1, result)
                    noreturn
                
                int32_t var_40_1
                
                if (result s< 0)
                    char const* const var_3c_4 = "Dx11GraphicsInterface::ResizeWindow"
                    var_40_1 = 0x5dc
                label_4e9a27:
                    sub_44e4d0(result, &data_5559b1, "SUCCEEDED(hr)", 
                        "c:\ax2017\engine\windows\windowsdx11.cpp", var_40_1, 
                        "Dx11GraphicsInterface::ResizeWindow")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                int32_t* eax_10 = *(arg1 + 0xc)
                result = (*(*eax_10 + 0x24))(eax_10, 0, 0x59bbb4, &eax_6[7])
                
                if (result s< 0)
                    char const* const var_3c_6 = "Dx11GraphicsInterface::ResizeWindow"
                    var_40_1 = 0x5df
                    goto label_4e9a27
                
                **eax_3 = right
                *(*eax_3 + 4) = bottom
                int32_t* eax_13 = *(arg1 + 4)
                result = (*(*eax_13 + 0x24))(eax_13, eax_6[7], 0, &eax_6[0xc])
                
                if (result s< 0)
                    char const* const var_3c_9 = "Dx11GraphicsInterface::ResizeWindow"
                    var_40_1 = 0x5e5
                    goto label_4e9a27
                
                int32_t* ecx_11 = *(arg1 + 0x14)
                
                if (ecx_11 != 0)
                    int32_t** eax_14 = sub_454030(ecx_11)
                    sub_48f560(eax_14)
                    **eax_14 = right
                    result = *eax_14
                    *(result + 4) = bottom
    
    @__security_check_cookie@4(eax_1 ^ &var_2c)
    return result
}
