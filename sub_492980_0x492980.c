// 函数名称: sub_492980
// 虚拟地址: 0x492980
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t (* __convention("regparm")sub_492980(int32_t arg1, void* arg2, int32_t* arg3, void* arg4, char arg5))[0x4]
{
    // 第一条实际指令: uint32_t (* result)[0x4] = arg3
    uint32_t (* result)[0x4] = arg3
    int32_t* result_1 = result
    
    if (arg5 == 0)
        result = sub_48b160(arg3, arg2)
    
    if (arg4 == 0)
        return result
    
    *(arg4 + 0x10) = arg2
    
    if (*(arg2 + 0x18) != 0 && *(arg2 + 0x14) != 0)
        int32_t* esi_1 = *(arg4 + 4)
        
        if (esi_1 == 0)
        label_4929eb:
            result = nullptr
        else
            while (true)
                int32_t* eax = *esi_1
                char* const ecx = &data_5559b1
                esi_1 = esi_1[1]
                char* eax_1 = *eax
                
                if (eax_1 != 0)
                    ecx = eax_1
                
                if (__stricmp(ecx, "_version") == 0)
                    int32_t* ecx_2 = &data_5559b1
                    int32_t* eax_4 = eax[1]
                    
                    if (eax_4 != 0)
                        ecx_2 = eax_4
                    
                    result = __atoi64(ecx_2)
                    break
                
                if (esi_1 == 0)
                    goto label_4929eb
        
        int32_t ecx_1 = *(arg2 + 0x18)
        
        if (result != ecx_1)
            int32_t* esi_2 = *(arg4 + 0x10)
            int32_t edx = esi_2[5]
            
            if (edx != 0)
                result = edx(arg4, result, ecx_1)
                
                if (result.b == 0)
                    int32_t var_24_4 = *esi_2
                    sub_44e4d0(sub_44e260("Difficult versioning function failed on '%s'"), 
                        &data_5559b1, "result", "c:\ax2017\engine\defparsetree.cpp", 0x46e, 
                        "DefParseReadBlock")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
    
    return sub_492710(result, arg2, result_1, arg4)
}
