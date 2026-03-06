// 函数名称: sub_4158d0
// 虚拟地址: 0x4158d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct InputHitResult::HitResult::VTable**sub_4158d0(struct InputHitResult::HitResult::VTable** arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_3c = 0
    int32_t var_3c = 0
    int32_t var_38 = 0
    
    if (sub_481020(arg2, &var_3c) != 0)
        sub_415790(arg1, &var_3c)
        return arg1
    
    int32_t ecx_2 = var_3c
    arg1[2] = var_3c
    int32_t eax_3 = var_3c
    *arg1 = &HitResult::`vftable'{for `InputHitResult'}
    arg1[1] = 0
    arg1[6] = ecx_2
    int32_t ecx_3 = var_3c
    arg1[5] = eax_3
    arg1[7] = ecx_3
    arg1[3] = &UI2HitResult::`vftable'{for `InputHitResult'}
    arg1[4] = 0
    int64_t var_14
    *(arg1 + 0x20) = var_14
    int32_t var_c
    arg1[0xa] = var_c
    return arg1
}
