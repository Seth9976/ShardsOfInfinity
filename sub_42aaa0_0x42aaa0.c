// 函数名称: sub_42aaa0
// 虚拟地址: 0x42aaa0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_42aaa0(int32_t arg1)
{
    // 第一条实际指令: void* result_1 = data_65ac38
    void* result_1 = data_65ac38
    int32_t edx = 0
    int32_t esi = *(result_1 + 0xb20)
    void* result
    
    if (esi s> 0)
        result = result_1
        
        while (*(result + 0x23c) != arg1)
            edx += 1
            result += 0x2c8
            
            if (edx s>= esi)
                goto label_42aad0
    
    if (esi s<= 0 || result == 0)
    label_42aad0:
        result = result_1
        
        if (esi s<= 0)
            result = nullptr
        
        *(result_1 + 0xb24) = *(result + 0x23c)
    
    return result
}
