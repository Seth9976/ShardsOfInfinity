// 函数名称: __clearfp
// 虚拟地址: 0x538251
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__clearfp(int32_t arg1 @ mxcsr)
{
    // 第一条实际指令: bool c0
    bool c0
    bool c1
    bool c2
    bool c3
    int16_t var_8 = (c0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9 | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe
    __fnclex()
    int32_t result
    
    if (data_65a2f4 s< 1)
        result = 0
        
        if ((var_8.b & 0x3f) != 0)
            result = (zx.d(var_8) & 1) << 4
            
            if ((var_8.b & 4) != 0)
                result |= 8
            
            if ((var_8.b & 8) != 0)
                result |= 4
            
            if ((var_8.b & 0x10) != 0)
                result |= 2
            
            if ((var_8.b & 0x20) != 0)
                result |= 1
            
            if ((var_8.b & 2) != 0)
                return result | 0x80000
    else
        int32_t ecx_1 = 0
        int32_t edx_1 = 0
        int32_t edi
        int32_t var_18_1 = edi
        
        if ((var_8.b & 0x3f) != 0)
            edx_1 = (zx.d(var_8) & 1) << 4
            
            if ((var_8.b & 4) != 0)
                edx_1 |= 8
            
            if ((var_8.b & 8) != 0)
                edx_1 |= 4
            
            if ((var_8.b & 0x10) != 0)
                edx_1 |= 2
            
            if ((var_8.b & 0x20) != 0)
                edx_1 |= 1
            
            if ((var_8.b & 2) != 0)
                edx_1 |= 0x80000
        
        int32_t var_10_1 = arg1 & 0xffffffc0
        
        if ((arg1.b & 0x3f) != 0)
            ecx_1 = (arg1 & 1) << 4
            
            if ((arg1.b & 4) != 0)
                ecx_1 |= 8
            
            if ((arg1.b & 8) != 0)
                ecx_1 |= 4
            
            if ((arg1.b & 0x10) != 0)
                ecx_1 |= 2
            
            if ((arg1.b & 0x20) != 0)
                ecx_1 |= 1
            
            if ((arg1.b & 2) != 0)
                ecx_1 |= 0x80000
        
        result = ecx_1 | edx_1
    
    return result
}
