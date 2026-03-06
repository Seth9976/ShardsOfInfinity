// 函数名称: sub_483cd0
// 虚拟地址: 0x483cd0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __fastcallsub_483cd0(int32_t* arg1)
{
    // 第一条实际指令: void var_bc
    void var_bc
    uint32_t result = __security_cookie ^ &var_bc
    uint32_t result_1 = result
    int32_t* i = *arg1
    uint32_t edi_1 = arg1[2] * 0xa8 + 0xc
    
    while (i != 0)
        int32_t* edx_1 = *i
        i = i[1]
        uint32_t var_b8[0x4]
        sub_483990(result, edx_1, &var_b8, edi_1)
        int32_t edx
        int32_t var_cc_2 = edx
        result = _fwrite(&var_b8, 0xa8, 1)
        
        if (result != 1)
            result.b = 0
            @__security_check_cookie@4(result_1 ^ &var_bc)
            return result
        
        int32_t var_a8
        edi_1 += var_a8
    
    result.b = 1
    @__security_check_cookie@4(result_1 ^ &var_bc)
    return result
}
