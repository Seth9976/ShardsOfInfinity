// 函数名称: sub_4d7ee0
// 虚拟地址: 0x4d7ee0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __thiscallsub_4d7ee0(void* arg1, uint32_t arg2)
{
    // 第一条实际指令: int32_t* eax = sub_4dd530(arg1 + 0x4240, arg2)
    int32_t* eax = sub_4dd530(arg1 + 0x4240, arg2)
    
    if (*(arg1 + 0x5030) == 0)
        bool cond:1_1 = eax[0x39] == 0
        arg2 = *eax
        
        if (not(cond:1_1))
            (*__glewDeleteRenderbuffers)(1, &eax[0x39])
        
        if (eax[0x38] != 0)
            (*__glewDeleteFramebuffers)(1, &eax[0x38])
        
        if (arg2 != 0)
            glDeleteTextures(1, &arg2)
        
        void* ecx_3 = data_ce26e8
        
        if (*(ecx_3 + 0x409c) == arg2)
            *(ecx_3 + 0x409c) = 0xffffffff
        
        if (*(ecx_3 + 0x415c) == arg2)
            *(ecx_3 + 0x415c) = 0xffffffff
        
        if (*(ecx_3 + 0x40a0) == arg2)
            *(ecx_3 + 0x40a0) = 0xffffffff
        
        if (*(ecx_3 + 0x4160) == arg2)
            *(ecx_3 + 0x4160) = 0xffffffff
        
        if (*(ecx_3 + 0x40a4) == arg2)
            *(ecx_3 + 0x40a4) = 0xffffffff
        
        if (*(ecx_3 + 0x4164) == arg2)
            *(ecx_3 + 0x4164) = 0xffffffff
        
        if (*(ecx_3 + 0x40a8) == arg2)
            *(ecx_3 + 0x40a8) = 0xffffffff
        
        if (*(ecx_3 + 0x4168) == arg2)
            *(ecx_3 + 0x4168) = 0xffffffff
        
        if (*(ecx_3 + 0x40ac) == arg2)
            *(ecx_3 + 0x40ac) = 0xffffffff
        
        if (*(ecx_3 + 0x416c) == arg2)
            *(ecx_3 + 0x416c) = 0xffffffff
        
        if (*(ecx_3 + 0x40b0) == arg2)
            *(ecx_3 + 0x40b0) = 0xffffffff
        
        if (*(ecx_3 + 0x4170) == arg2)
            *(ecx_3 + 0x4170) = 0xffffffff
        
        if (*(ecx_3 + 0x40b4) == arg2)
            *(ecx_3 + 0x40b4) = 0xffffffff
        
        if (*(ecx_3 + 0x4174) == arg2)
            *(ecx_3 + 0x4174) = 0xffffffff
        
        if (*(ecx_3 + 0x40b8) == arg2)
            *(ecx_3 + 0x40b8) = 0xffffffff
        
        if (*(ecx_3 + 0x4178) == arg2)
            *(ecx_3 + 0x4178) = 0xffffffff
    
    uint32_t result = zx.d(eax[0x52].w)
    int32_t ecx_4 = *(arg1 + 0x424c)
    *(arg1 + 0x424c) = result
    eax[0x52] = ecx_4
    *(arg1 + 0x4250) -= 1
    return result
}
