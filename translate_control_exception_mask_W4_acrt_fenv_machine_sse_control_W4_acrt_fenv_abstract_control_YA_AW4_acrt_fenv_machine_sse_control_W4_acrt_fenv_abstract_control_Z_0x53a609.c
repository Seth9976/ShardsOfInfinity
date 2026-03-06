// 函数名称: ??$translate_control_exception_mask@W4__acrt_fenv_machine_sse_control@@W4__acrt_fenv_abstract_control@@@@YA?AW4__acrt_fenv_machine_sse_control@@W4__acrt_fenv_abstract_control@@@Z
// 虚拟地址: 0x53a609
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t??$translate_control_exception_mask@W4__acrt_fenv_machine_sse_control@@W4__acrt_fenv_abstract_control@@@@YA?AW4__acrt_fenv_machine_sse_control@@W4__acrt_fenv_abstract_control@@@Z(int32_t arg1) __pure
{
    // 第一条实际指令: int32_t edx
    int32_t edx
    edx.b = arg1.b & 1
    int16_t esi_1 = ((zx.w((arg1 u>> 1).b) & 1) * 0x800) | ((zx.w((arg1 u>> 2).b) & 1) * 0x400)
        | ((zx.w((arg1 u>> 3).b) & 1) * 0x200) | ((zx.w((arg1 u>> 5).b) & 1) * 0x100)
    return (zx.w(edx.b) * 0x1000) | esi_1 | ((zx.w((arg1 u>> 4).b) & 1) * 0x80)
}
