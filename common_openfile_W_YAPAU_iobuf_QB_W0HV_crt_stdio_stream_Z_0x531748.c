// 函数名称: ??$common_openfile@_W@@YAPAU_iobuf@@QB_W0HV__crt_stdio_stream@@@Z
// 虚拟地址: 0x531748
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t*??$common_openfile@_W@@YAPAU_iobuf@@QB_W0HV__crt_stdio_stream@@@Z(uint8_t* arg1, char* arg2, int32_t arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_28 = edi
    void var_20
    int32_t* ecx
    int32_t edx
    int32_t* eax_1 = sub_531519(&var_20, edx, ecx, &var_20, arg2)
    int32_t var_14 = *eax_1
    int32_t var_10
    int32_t* edi_1 = &var_10
    void* esi_1 = &eax_1[1]
    *edi_1 = *esi_1
    edi_1[1] = *(esi_1 + 4)
    char var_c
    int32_t var_8
    
    if (var_c != 0 && __wsopen_s(&var_8, arg1, var_14, arg3, 0x180) == 0)
        data_65a3cc += 1
        arg4[3] |= var_10
        arg4[2] = 0
        arg4[7] = 0
        arg4[1] = 0
        *arg4 = 0
        arg4[4] = var_8
        return arg4
    
    return nullptr
}
