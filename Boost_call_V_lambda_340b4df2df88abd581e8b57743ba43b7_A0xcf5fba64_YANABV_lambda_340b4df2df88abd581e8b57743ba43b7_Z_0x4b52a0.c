// 函数名称: ??$_Boost_call@V<lambda_340b4df2df88abd581e8b57743ba43b7>@@@?A0xcf5fba64@@YANABV<lambda_340b4df2df88abd581e8b57743ba43b7>@@@Z
// 虚拟地址: 0x4b52a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcall??$_Boost_call@V<lambda_340b4df2df88abd581e8b57743ba43b7>@@@?A0xcf5fba64@@YANABV<lambda_340b4df2df88abd581e8b57743ba43b7>@@@Z(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5449b8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_14
    int32_t* var_30 = &var_14
    int32_t* var_18
    sub_42ce10(&var_18, arg1, 4)
    int32_t var_8_1 = 0
    void* ebx = var_14 + arg2 * 0x14
    int32_t result = *(ebx + 8)
    
    if (result == 0)
        result = (*(*data_ce19b4 + 0x44))(arg1, arg2)
        *(ebx + 8) = result
    
    int32_t* ecx_3 = var_18
    
    if (ecx_3 != 0)
        ecx_3[7] -= 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
