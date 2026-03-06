// 函数名称: sub_46ade0
// 虚拟地址: 0x46ade0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __fastcallsub_46ade0(void* arg1)
{
    // 第一条实际指令: void* var_c = arg1
    void* var_c = arg1
    void* esi = arg1
    
    while (*(esi + 0x784) != 0)
        esi = *(esi + 0x784)
        
        if (*(esi + 0x784) == 0)
            break
        
        int32_t* eax_1 = sub_45d320(esi)
        char* result = sub_4b8a40(eax_1, eax_1, &data_5b1d6c, 0x6b)
        
        if (result != 0 && *result != 0)
            return result
    
    return &data_5559b1
}
