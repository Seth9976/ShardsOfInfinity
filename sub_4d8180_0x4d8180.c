// 函数名称: sub_4d8180
// 虚拟地址: 0x4d8180
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __thiscallsub_4d8180(void* arg1, uint32_t arg2)
{
    // 第一条实际指令: void* var_8 = arg1
    void* var_8 = arg1
    uint32_t result = arg2
    void* edx = arg1
    void* var_8_1 = edx
    
    if (result != 0)
        uint32_t ecx = zx.d(result.w)
        
        if (ecx u< *(edx + 0x4244))
            int32_t edi
            int32_t var_c = edi
            int32_t* esp_1 = &var_c
            int32_t* edi_2 = ecx * 0x14c + *(edx + 0x4240)
            
            if (edi_2[0x52] == result)
                if (edi_2[0x4f].b == 0)
                    int32_t ebx
                    int32_t var_10_1 = ebx
                    arg2 = *edi_2
                    int32_t esi
                    int32_t var_14_1 = esi
                    (*__glewDeleteBuffers)(1, &arg2)
                    void* esi_1 = &edi_2[5]
                    int32_t i_1 = 0x10
                    int32_t i
                    
                    do
                        if (*esi_1 != 0)
                            (*__glewDeleteVertexArrays)(1, esi_1)
                        
                        esi_1 += 0xc
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
                    void* eax_3 = edi_2[0x36]
                    int32_t __saved_ebp
                    esp_1 = &__saved_ebp
                    
                    if (eax_3 != 0)
                        var_8_1 = eax_3
                        _aligned_free_base(var_8_1)
                        esp_1 = &__saved_ebp
                        edi_2[0x36] = 0
                    
                    edx = var_8_1
                
                result = zx.d(edi_2[0x52].w)
                int32_t ecx_1 = *(edx + 0x424c)
                *(edx + 0x424c) = result
                edi_2[0x52] = ecx_1
                *(edx + 0x4250) -= 1
            
            *esp_1
    
    return result
}
