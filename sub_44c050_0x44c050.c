// 函数名称: sub_44c050
// 虚拟地址: 0x44c050
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_44c050(int32_t arg1, uint32_t arg2, void* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t* ecx = arg4
    int32_t* ecx = arg4
    uint32_t eax = *ecx
    uint32_t edx = zx.d(eax.w)
    int32_t var_28
    char const* const var_24_1
    char* ecx_1
    
    if (edx u>= 0xc8)
        var_24_1 = "CardGet"
        var_28 = 0x90
        ecx_1 = "idNoMimic < MAX_CARDS"
    label_44c115:
        sub_44e4d0(eax, &data_5559b1, ecx_1, "c:\ax2017\jams\shards\code\shardsgame.cpp", var_28, 
            var_24_1)
        
        if (IsDebuggerPresent() != 1)
            sub_44e680()
            noreturn
        
        breakpoint
    
    int32_t esi_1 = ecx[1]
    uint32_t edx_1 = edx << 5
    uint32_t var_c_1 = edx_1
    
    if (esi_1 s< 4)
        while (true)
            int32_t var_14 = *ecx
            eax = *(edx_1 + arg3 + 4)
            int32_t var_10_1 = esi_1
            
            if (eax != 5 && eax != 0xa && eax != 6)
                var_24_1 = "ShResumePowerRef"
                var_28 = 0xcef
                ecx_1 = "c.where == CW_PLAYER_RESOLVING || c.where == CW_PLAYER_CONSTRUCT || c.where == "
                "CW_PLAYER_IN_PLAY"
                goto label_44c115
            
            int32_t* eax_3 = &var_14
            int32_t* var_24_2 = &var_14
            int32_t* result
            
            if (*(*(edx_1 + arg3 + 0x14) + 0x28) != 2)
                result = sub_4495f0(eax_3, arg2, arg3, var_24_2)
            else
                result = sub_44a900(eax_3, arg2, arg3, var_24_2)
            
            if (*(arg3 + 0x1a04) != 0)
                return result
            
            esi_1 += 1
            
            if (esi_1 s>= 4)
                eax = *arg4
                break
            
            ecx = arg4
            edx_1 = var_c_1
    
    return sub_44bfb0(eax, arg2, arg3, eax)
}
