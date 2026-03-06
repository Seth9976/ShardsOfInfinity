// 函数名称: ??R<lambda_54dcfcba6f8e0c549fa430f4d53fb7dd>@@QBEIXZ
// 虚拟地址: 0x5298b1
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __fastcall??R<lambda_54dcfcba6f8e0c549fa430f4d53fb7dd>@@QBEIXZ(int32_t* arg1)
{
    // 第一条实际指令: char var_8 = arg1.b
    char var_8 = arg1.b
    int32_t edi
    int32_t var_10 = edi
    int32_t* edi_1 = **arg1
    char eax_1 = ___acrt_stdio_begin_temporary_buffering_nolock(edi_1)
    uint32_t result = __fwrite_nolock(*arg1[1], *arg1[2], *arg1[3], **arg1)
    ___acrt_stdio_end_temporary_buffering_nolock(eax_1, edi_1)
    return result
}
