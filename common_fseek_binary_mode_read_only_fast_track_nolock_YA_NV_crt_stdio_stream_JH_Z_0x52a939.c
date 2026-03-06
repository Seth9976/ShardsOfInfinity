// 函数名称: ?common_fseek_binary_mode_read_only_fast_track_nolock@@YA_NV__crt_stdio_stream@@_JH@Z
// 虚拟地址: 0x52a939
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t*?common_fseek_binary_mode_read_only_fast_track_nolock@@YA_NV__crt_stdio_stream@@_JH@Z(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_8 = edi
    int32_t* result
    
    if (arg3 == 2 || (arg1[3] & 0x4c0) == 0 || (arg1[3].b & 6) != 0)
        result.b = 0
    else if (arg1[2] s<= 0)
        result.b = 0
    else
        int32_t edx_1 = arg1[4]
        result = (edx_1 & 0x3f) * 0x30
        int32_t ecx_3 = (&data_65a778)[edx_1 s>> 6]
        
        if (*(ecx_3 + result + 0x28) s< 0 || *(ecx_3 + result + 0x29) != 0)
            result.b = 0
        else
            int32_t arg_8
            int32_t* esi_1
            
            if (arg3 != 0)
                esi_1 = arg1
            label_52a9e2:
                int32_t ecx_6 = *esi_1
                int32_t edx_4
                edx_4:result = sx.q(esi_1[1] - ecx_6)
                
                if (edx_4 s> arg2)
                    result.b = 0
                else
                    int32_t edi_4 = arg_8
                    
                    if (edx_4 s< arg2 || result u<= edi_4)
                        int32_t edx_5
                        edx_5:result = sx.q(esi_1[2])
                        
                        if (arg2 s> edx_5 || (arg2 s>= edx_5 && edi_4 u> result))
                            result.b = 0
                        else
                            result.b = 1
                            *esi_1 = ecx_6 + edi_4
                            arg1[2] -= edi_4
                    else
                        result.b = 0
            else
                int32_t edx_2
                result, edx_2 = __lseeki64_nolock(edx_1, 0, 0, FILE_CURRENT)
                
                if (edx_2 s> 0 || (edx_2 s>= 0 && result u>= 0))
                    esi_1 = arg1
                    int32_t eax_5
                    int32_t edx_3
                    edx_3:eax_5 = sx.q(esi_1[2])
                    
                    if (LongLongSub(arg_8, arg2, result - eax_5, sbb.d(edx_2, edx_3, result u< eax_5), 
                            &arg_8) s>= 0)
                        goto label_52a9e2
                    
                    result.b = 0
                else
                    result.b = 0
    
    return result
}
