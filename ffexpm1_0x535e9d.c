// 函数名称: __ffexpm1
// 虚拟地址: 0x535e9d
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __fastcall__ffexpm1(int16_t arg1, void* arg2 @ ebp, long double arg3 @ st0)
{
    // 第一条实际指令: long double x87_r7 = fabs(arg3)
    long double x87_r7 = fabs(arg3)
    long double x87_r6 = data_54f36e
    x87_r6 - x87_r7
    *(arg2 - 0xa0) = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7 ? 1 : 0) << 0xe
    
    if ((*(arg2 - 0x9f) & 0x41) != 0)
        long double temp1 = float.t(0)
        arg3 - temp1
        *(arg2 - 0xa0) = (arg3 < temp1 ? 1 : 0) << 8 | (is_unordered.t(arg3, temp1) ? 1 : 0) << 0xa
            | (arg3 == temp1 ? 1 : 0) << 0xe
        
        if ((*(arg2 - 0x9f) & 1) != 0)
            *(arg2 - 0x90) = 4
            return sub_53608a() __tailcall
        
        data_54f350
        arg1:1.b = arg1:1.b
        return 
    
    long double x87_r7_2 = roundint.t(arg3)
    long double temp2 = float.t(0)
    x87_r7_2 - temp2
    *(arg2 - 0xa0) = (x87_r7_2 < temp2 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_2, temp2) ? 1 : 0) << 0xa
        | (x87_r7_2 == temp2 ? 1 : 0) << 0xe | 0x3800
    int32_t edx
    edx.b = *(arg2 - 0x9f)
    long double x87_r7_4 = arg3 - x87_r7_2
    long double temp3 = float.t(0)
    x87_r7_4 - temp3
    *(arg2 - 0xa0) = (x87_r7_4 < temp3 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_4, temp3) ? 1 : 0) << 0xa
        | (x87_r7_4 == temp3 ? 1 : 0) << 0xe | 0x3800
    __f2xm1(fabs(x87_r7_4))
}
