// 函数名称: sub_50a560
// 虚拟地址: 0x50a560
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_50a560(void* arg1, int32_t arg2)
{
    // 第一条实际指令: sub_5090c0(arg1, arg2)
    sub_5090c0(arg1, arg2)
    bool cond:0 = *(arg1 + 0x38) > 1f
    *(arg1 + 0xac) = arg2
    int32_t ecx = *(arg1 + 0xb0)
    int32_t eax
    eax.b = cond:0
    
    if (eax == 0)
        int32_t edx_4
        
        if (ecx s>= 0)
            *(arg1 + 0xa4)
            edx_4 = mods.dp.d(sx.q(arg2 - *(arg1 + 0xa8) + ecx), *(arg1 + 0xa4))
        else
            *(arg1 + 0xb0) = 0
            edx_4 = 0
            *(arg1 + 0xa8) = arg2
        
        void* esi_2 = *(arg1 + 0xa0)
        uint32_t (* edi_1)[0x4] = *(arg1 + 0xb4) + (((esi_2 u>> 2) * edx_4) << 2)
        _memset(edi_1, 0, esi_2)
        return sub_50a080(arg1, edi_1) __tailcall
    
    int32_t edx
    
    if (ecx s>= 0)
        *(arg1 + 0xa4)
        edx = mods.dp.d(sx.q(arg2 - *(arg1 + 0xa8) + ecx), *(arg1 + 0xa4))
    else
        *(arg1 + 0xb0) = 0
        edx = 0
        *(arg1 + 0xa8) = arg2
    
    void* esi_1 = *(arg1 + 0xa0)
    float* edi = *(arg1 + 0xb4) + (((esi_1 u>> 2) * edx) << 2)
    _memset(edi, 0, esi_1)
    return sub_509d50(arg1, edi) __tailcall
}
