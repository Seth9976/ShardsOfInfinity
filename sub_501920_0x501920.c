// 函数名称: sub_501920
// 虚拟地址: 0x501920
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __fastcallsub_501920(char* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0
    int32_t var_8 = 0
    char* edx = arg1
    int32_t var_c = 0
    int32_t var_10 = 0
    void* ecx = &edx[1]
    char i
    
    do
        i = *edx
        edx = &edx[1]
    while (i != 0)
    
    if (edx != ecx)
        int32_t* var_20_1 = &var_8
        int32_t* var_24_1 = &var_c
        int32_t* var_28_1 = &var_10
        
        if (sub_4529c0(&var_10, edx - ecx, ecx, arg1, "#%02x%02x%02x") == 0)
            void* eax_2
            int32_t ecx_1
            int32_t edx_2
            eax_2, ecx_1, edx_2 = _strchr(arg1, 0x2c)
            int32_t* var_20_2 = &var_8
            int32_t* var_24_3 = &var_c
            int32_t* var_28_2 = &var_10
            char const* const var_2c_1
            
            if (eax_2 == 0)
                var_2c_1 = "%d %d %d"
            else
                var_2c_1 = "%d,%d,%d"
            
            sub_4529c0(&var_10, edx_2, ecx_1, arg1, var_2c_1)
    
    return (zx.d(var_8.b) << 8 | zx.d(var_c.b)) << 8 | zx.d(var_10.b)
}
