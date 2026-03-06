// 函数名称: sub_451ff0
// 虚拟地址: 0x451ff0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __fastcallsub_451ff0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    uint32_t result = arg1[1]
    arg1[0x1fa9].b = 1
    
    if (result s< 0x7d0 || result s< 0xbb8)
        result = (*(*data_65ae00 + 0x44))(arg1)
    else if (result s< 0xfa0)
        if (result != 0xbb8)
            sub_44e4d0(result, &data_5559b1, "Halt", "c:\ax2017\engine\voip.cpp", 0x815, 
                "VoipProcessMessage")
        label_452163:
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        result = sub_4a4f60(arg1)
    else if (result s< 0x1388)
        if (result s> 0xfa1)
            if (result != 0xfa2)
            label_452137:
                uint32_t result_1 = result
                sub_44e4d0(sub_44e260("unknown http message type %d"), &data_5559b1, "Halt", 
                    "c:\ax2017\engine\network.cpp", 0x5bb, "HTTPProcessMessage")
                goto label_452163
        else if (result != 0xfa1 && result != 0x3ea && result != 0xfa0)
            goto label_452137
        
        result = (*(*data_65ae00 + 0x44))(arg1)
        
        if (arg1[1] == 0xfa0)
            result = *arg1
            void* edx_1 = data_65acf4
            
            if (result != 0)
                uint32_t ecx_1 = zx.d(result.w)
                
                if (ecx_1 u< *(edx_1 + 4))
                    int128_t* ecx_3 = ecx_1 * 0x4c + *edx_1
                    
                    if (*(ecx_3 + 0x48) == result)
                        result = sub_450480(ecx_3)
    else if (result s< 0xf4628)
        result = (*(*data_65ae00 + 0x44))(arg1)
    
    if (arg1[0x1fa9].b == 0)
        return result
    
    char* eax_2 = arg1[0x1fa4]
    var_8 = arg1
    
    if (eax_2 != 0 && eax_2 != &data_5559b1)
        if (data_cdf414 != 0 && *eax_2 != 0)
            char* eax_3 = sub_44f000(&arg1[0x1fa4])
            int32_t temp0_1 = *(eax_3 + 4)
            *(eax_3 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_45d050(eax_3, *(eax_3 + 0xc) + 0x10)
        
        arg1[0x1fa4] = &data_5559b1
    
    return sub_429090(data_65acf4 + 0x50, &var_8)
}
