// 函数名称: sub_4d6400
// 虚拟地址: 0x4d6400
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_4d6400(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp_1
    int32_t __saved_ebp_1
    int32_t __saved_ebp = __saved_ebp_1
    void var_2f0
    int32_t eax_1 = __security_cookie ^ &var_2f0
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    int32_t __saved_edi_1
    int32_t __saved_edi = __saved_edi_1
    int32_t var_20 = 0
    int32_t var_18 = 0
    int32_t* var_1c = arg3
    int32_t var_30c = 0
    int32_t var_310 = 0
    
    if (ov_open_callbacks(&var_2f0, &var_2f0, 0, 0, data_572bb0.o) s< 0)
        int32_t eax_2
        eax_2.b = 0
        @__security_check_cookie@4(eax_1 ^ &var_2f0)
        return eax_2
    
    int128_t var_308_1
    var_308_1:0xc.d = 0xffffffff
    var_308_1:8.d = &var_2f0
    void* eax_3 = ov_info()
    arg3[1] = 0x10
    var_308_1:0xc.d = 0xffffffff
    int32_t var_2e8
    var_308_1:8.d = &var_2e8
    arg3[2] = *(eax_3 + 4)
    *arg3 = *(eax_3 + 8)
    int32_t eax_4 = ov_pcm_total()
    void var_2e0
    var_308_1:0xc.d = &var_2e0
    arg3[3] = *(eax_3 + 4) * eax_4 * 2
    ov_clear()
    int32_t eax_5
    eax_5.b = 1
    @__security_check_cookie@4(arg4 ^ &var_2e0)
    return eax_5
}
