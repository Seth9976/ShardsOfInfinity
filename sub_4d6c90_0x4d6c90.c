// 函数名称: sub_4d6c90
// 虚拟地址: 0x4d6c90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_4d6c90(int32_t arg1 @ edi, void* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t i_2
    ecx, i_2 = __alloca_probe(0x404c)
    int32_t __saved_ebp
    int32_t var_c = __security_cookie ^ &__saved_ebp
    int32_t esi
    int32_t var_8 = esi
    void var_4010
    
    if (i_2 s> 0)
        void* esi_1 = &var_4010
        void* eax_3 = arg2 + 0x20
        int32_t i_1 = i_2
        int32_t i
        
        do
            int32_t xmm0_1 = *(eax_3 - 0x20)
            eax_3 += 0x40
            esi_1 += 0x40
            int32_t var_404c_1 = *(eax_3 - 0x50)
            int32_t var_4048_1 = *(eax_3 - 0x40)
            int32_t var_4044_1 = *(eax_3 - 0x30)
            int32_t xmm0_5 = *(eax_3 - 0x5c)
            int32_t var_403c_1 = *(eax_3 - 0x4c)
            int32_t var_4038_1 = *(eax_3 - 0x3c)
            int32_t var_4034_1 = *(eax_3 - 0x2c)
            int32_t xmm0_9 = *(eax_3 - 0x58)
            int32_t var_402c_1 = *(eax_3 - 0x48)
            int32_t var_4028_1 = *(eax_3 - 0x38)
            int32_t var_4024_1 = *(eax_3 - 0x28)
            int32_t xmm0_13 = *(eax_3 - 0x54)
            int32_t var_401c_1 = *(eax_3 - 0x44)
            int32_t var_4018_1 = *(eax_3 - 0x34)
            int32_t var_4014_1 = *(eax_3 - 0x24)
            *(esi_1 - 0x40) = xmm0_1.o
            *(esi_1 - 0x30) = xmm0_5.o
            *(esi_1 - 0x20) = xmm0_9.o
            *(esi_1 - 0x10) = xmm0_13.o
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int32_t result = (*__glewUniformMatrix4fv)(ecx, i_2, 0, &var_4010, arg1)
    @__security_check_cookie@4(arg1 ^ &__saved_ebp)
    return result
}
