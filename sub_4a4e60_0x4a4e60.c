// 函数名称: sub_4a4e60
// 虚拟地址: 0x4a4e60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_4a4e60(float arg1, float arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    RECT rect
    GetClientRect(data_ce1790, &rect)
    int32_t right = rect.right
    
    if (right != 0)
        int32_t bottom = rect.bottom
        
        if (bottom != 0)
            void* edx = data_65ae00
            float xmm1_3 = _mm_cvtepi32_ps(zx.o(right)) * arg1 / _mm_cvtepi32_ps(zx.o(*(edx + 0x14)))
            float xmm1_4
            
            if (0 f<= xmm1_3)
                xmm1_4 = xmm1_3 + 0.5f
            else
                xmm1_4 = xmm1_3 - 0.5f
            
            int32_t result = int.d(xmm1_4)
            
            if (0 f<= _mm_cvtepi32_ps(zx.o(bottom)) * arg2 / _mm_cvtepi32_ps(zx.o(*(edx + 0x18))))
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return result
            
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return result
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return 0
}
