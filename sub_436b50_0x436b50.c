// 函数名称: sub_436b50
// 虚拟地址: 0x436b50
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_436b50(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: void* eax = sub_4297e0(arg3, arg2)
    void* eax = sub_4297e0(arg3, arg2)
    int32_t eax_1 = *(eax + 0xc)
    sub_436820(eax, arg4)
    int32_t edx_2 = *(eax + 0xc) - eax_1
    void* esi_1 = data_65aabc
    int32_t eax_3 = *eax + eax_1
    
    if (esi_1 == 0)
        sub_44e4d0(eax_3, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 
            0x74, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    void* result = *(esi_1 + 0x434)
    
    if (result != 5)
        if (result == 1)
            *(esi_1 + 0x438)
            TPI1::QueryTiForCVRecord(arg3)
            result = sub_41af80(&arg3[2], arg2)
            
            if (*(result + 0x14) != 3)
                *arg3
                return sub_411480()
        else if (result == 2)
            int32_t eax_5 = *arg3
            *(esi_1 + 0xc) += 1
            *(esi_1 + 8) = eax_5
            int32_t var_30 = *(esi_1 + 0xc)
            int32_t var_2c_1 = *arg3
            int32_t var_24_1 = eax_1
            int32_t var_18_1 = edx_2
            int32_t var_28_1 = arg2
            int32_t var_20_1 = eax_3
            char var_14_1 = 0
            void* eax_9
            int32_t* ecx_6
            eax_9, ecx_6 = sub_41af80(&arg3[2], arg2)
            
            if (*(eax_9 + 0x14) != 3)
                int32_t* var_44_1 = &var_30
                sub_452560(&var_30, arg2, *(esi_1 + 0x14), ecx_6)
                *arg3
                return sub_411480()
            
            sub_44e4d0(eax_9, &data_5559b1, "IsAI(save, who) == false", 
                "c:\ax2017\jams\shards\code\shardsclient.cpp", 0xb6e, "LogAdd")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
    
    return result
}
