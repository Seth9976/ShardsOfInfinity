// 函数名称: __fpclass
// 虚拟地址: 0x52a176
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__fpclass(double arg1, int16_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    ecx.w = arg2
    int16_t eax = ecx.w & 0x7ff0
    
    if (eax != 0x7ff0)
        int32_t ecx_3 = zx.d(ecx.w) & 0x8000
        
        if (eax == 0 && ((arg1:4.d & 0xfffff) != 0 || arg1.d != 0))
            int32_t ecx_4 = neg.d(ecx_3)
            return (sbb.d(ecx_4, ecx_4, ecx_3 != 0) & 0xffffff90) + 0x80
        
        float.t(0) - fconvert.t(arg1)
        bool p = unimplemented  {test ah, 0x44}
        
        if (p)
            int32_t ecx_10 = neg.d(ecx_3)
            return (sbb.d(ecx_10, ecx_10, ecx_3 != 0) & 0xffffff08) + 0x100
        
        int32_t ecx_7 = neg.d(ecx_3)
        return (sbb.d(ecx_7, ecx_7, ecx_3 != 0) & 0xffffffe0) + 0x40
    
    int32_t var_c = ecx
    var_c.q = fconvert.d(fconvert.t(arg1))
    int32_t eax_1 = __sptype(var_c, ecx)
    
    if (eax_1 == 1)
        return 0x200
    
    if (eax_1 == 2)
        return 4
    
    if (eax_1 == 3)
        return 2
    
    return 1
}
