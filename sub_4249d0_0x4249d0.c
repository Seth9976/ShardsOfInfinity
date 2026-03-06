// 函数名称: sub_4249d0
// 虚拟地址: 0x4249d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4249d0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    int32_t eax = sub_44d240(*arg1, &var_8)
    int32_t edx_1 = 0
    
    if (eax s> 0)
        int32_t* ebx_1 = var_8
        int32_t* ecx_1 = ebx_1
        
        do
            if (*ecx_1 == arg1[1])
                void* esi_2 = &ebx_1[edx_1 * 0x11]
                
                if (esi_2 == 0)
                    break
                
                int32_t result = *(esi_2 + 4)
                
                if (*arg1 == 1 || result != 1)
                    return result
                
                if (data_5c7980 == 1)
                    int32_t eax_6 = SteamApps()
                    
                    if ((*(*eax_6 + 0x1c))(*(esi_2 + 8)) != 0)
                        return 0
                
                return 1
            
            edx_1 += 1
            ecx_1 = &ecx_1[0x11]
        while (edx_1 s< eax)
    
    return 3
}
