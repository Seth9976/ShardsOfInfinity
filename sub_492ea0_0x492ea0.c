// 函数名称: sub_492ea0
// 虚拟地址: 0x492ea0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_492ea0(void* arg1, char* arg2)
{
    // 第一条实际指令: if (arg1 != 0)
    if (arg1 != 0)
        int32_t* i = *(arg1 + 4)
        
        while (i != 0)
            int32_t* result = *i
            char* const ecx = &data_5559b1
            i = i[1]
            char* eax_1 = *result
            
            if (eax_1 != 0)
                ecx = eax_1
            
            if (__stricmp(ecx, arg2) == 0)
                return result
    
    return 0
}
