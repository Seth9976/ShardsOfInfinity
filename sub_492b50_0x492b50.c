// 函数名称: sub_492b50
// 虚拟地址: 0x492b50
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_492b50(void* arg1, char* arg2)
{
    // 第一条实际指令: char* ebx = arg2
    char* ebx = arg2
    int32_t* result = sub_492ea0(arg1, arg2)
    
    if (result == 0)
        int32_t** edi_1 = data_cdf47c
        edi_1[3] += 1
        result = *edi_1
        
        if (result == 0)
            sub_494390(edi_1)
            result = *edi_1
        
        *edi_1 = *result
        result[2] = 0
        result[3] = 0
        result[4] = 0
        *result = &data_5559b1
        result[1] = &data_5559b1
        int32_t* result_1 = result
        sub_429090(arg1 + 4, &result_1)
    else
        sub_44f590(&result[1], &data_5559b1)
        char** ecx_1 = result[2]
        
        if (ecx_1 != 0)
            sub_491590(ecx_1)
            result[2] = 0
            sub_44f590(result, ebx)
            return result
    
    sub_44f590(result, ebx)
    return result
}
