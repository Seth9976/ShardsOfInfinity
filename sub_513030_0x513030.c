// 函数名称: sub_513030
// 虚拟地址: 0x513030
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char*sub_513030(char* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: char* edx = nullptr
    char* edx = nullptr
    
    if (arg3 s> 0)
        char* esi_1 = arg1
        
        do
            int32_t eax_1 = 0
            
            if (arg4 s> 0)
                do
                    esi_1[eax_1] = edx[arg2]
                    eax_1 += 1
                while (eax_1 s< arg4)
            
            edx = &edx[1]
            esi_1 = &esi_1[arg4]
        while (edx s< arg3)
    
    return arg1
}
