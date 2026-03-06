// 函数名称: sub_4c1e70
// 虚拟地址: 0x4c1e70
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_4c1e70(int32_t* arg1, char* arg2)
{
    // 第一条实际指令: int32_t* eax = arg1
    int32_t* eax = arg1
    char* var_c = arg2
    int32_t i = 0
    int32_t* var_8 = eax
    
    if (eax[1] s> 0)
        int32_t edi_1 = 0
        
        do
            int32_t* result = *eax + edi_1
            
            if (__stricmp(arg2, *result) == 0)
                return result
            
            eax = var_8
            i += 1
            arg2 = var_c
            edi_1 += 0x10
        while (i s< eax[1])
    
    return 0
}
