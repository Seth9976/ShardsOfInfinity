// 函数名称: ?swap@@YAXPAD0I@Z
// 虚拟地址: 0x52d0d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char*?swap@@YAXPAD0I@Z(int32_t arg1, char* arg2, int32_t arg3)
{
    // 第一条实际指令: char* result = arg2
    char* result = arg2
    int32_t edi
    int32_t var_8 = edi
    
    if (arg1 != result)
        int32_t i_1 = arg3
        
        if (i_1 != 0)
            void* edi_2 = arg1 - result
            int32_t i
            
            do
                char ecx = *result
                result = &result[1]
                char edx = *(edi_2 + result - 1)
                *(edi_2 + result - 1) = ecx
                result[0xffffffff] = edx
                i = i_1
                i_1 -= 1
            while (i != 1)
    
    return result
}
