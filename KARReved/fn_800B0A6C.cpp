//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800B7E90.hpp"
#include "fn_800B7E90.hpp"
#include "fn_800B7E90.hpp"
#include "fn_800B7E90.hpp"



void fn_800B0A6C(PPC::Runtime::GCContext* context)
{
/*800B0A6C 000AD86C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*800B0A70 000AD870*/ PPC::Runtime::ASM::mflr(context->r0);
/*800B0A74 000AD874*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF1E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800B0A78 000AD878*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*800B0A7C 000AD87C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF1F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800B0A80 000AD880*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*800B0A84 000AD884*/ PPC::Runtime::ASM::mr(context->r31, context->r6);
/*800B0A88 000AD888*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*800B0A8C 000AD88C*/ PPC::Runtime::ASM::mr(context->r30, context->r5);
/*800B0A90 000AD890*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800B0A94 000AD894*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*800B0A98 000AD898*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*800B0A9C 000AD89C*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*800B0AA0 000AD8A0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*800B0AA4 000AD8A4*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*800B0AA8 000AD8A8*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*800B0AAC 000AD8AC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*800B0AB0 000AD8B0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*800B0AB4 000AD8B4*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r28));
/*800B0AB8 000AD8B8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*800B0ABC 000AD8BC*/ PPC::Runtime::ASM::lfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r28));
/*800B0AC0 000AD8C0*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f1);
/*800B0AC4 000AD8C4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*800B0AC8 000AD8C8*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r28));
/*800B0ACC 000AD8CC*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*800B0AD0 000AD8D0*/ PPC::Runtime::ASM::fmadds(context->f0, context->f6, context->f2, context->f0);
/*800B0AD4 000AD8D4*/ PPC::Runtime::ASM::fmadds(context->f0, context->f5, context->f4, context->f0);
/*800B0AD8 000AD8D8*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*800B0ADC 000AD8DC*/ PPC::Runtime::ASM::fmadds(context->f2, context->f2, context->f0, context->f6);
/*800B0AE0 000AD8E0*/ PPC::Runtime::ASM::fmadds(context->f1, context->f1, context->f0, context->f3);
/*800B0AE4 000AD8E4*/ PPC::Runtime::ASM::fmadds(context->f0, context->f4, context->f0, context->f5);
/*800B0AE8 000AD8E8*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800B0AEC 000AD8EC*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800B0AF0 000AD8F0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*800B0AF4 000AD8F4*/ PPC::Runtime::ASM::bl(fn_800B7E90);
/*800B0AF8 000AD8F8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF1F4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800B0AFC 000AD8FC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800B0B00 000AD900*/ PPC::Runtime::ASM::bge(.L_800B0BA4);
/*800B0B04 000AD904*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r28));
/*800B0B08 000AD908*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*800B0B0C 000AD90C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*800B0B10 000AD910*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*800B0B14 000AD914*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r28));
/*800B0B18 000AD918*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f2);
/*800B0B1C 000AD91C*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*800B0B20 000AD920*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r28));
/*800B0B24 000AD924*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*800B0B28 000AD928*/ PPC::Runtime::ASM::fmadds(context->f1, context->f1, context->f5, context->f0);
/*800B0B2C 000AD92C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r28));
/*800B0B30 000AD930*/ PPC::Runtime::ASM::fmadds(context->f1, context->f4, context->f3, context->f1);
/*800B0B34 000AD934*/ PPC::Runtime::ASM::fneg(context->f1, context->f1);
/*800B0B38 000AD938*/ PPC::Runtime::ASM::fmadds(context->f0, context->f5, context->f1, context->f0);
/*800B0B3C 000AD93C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800B0B40 000AD940*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r28));
/*800B0B44 000AD944*/ PPC::Runtime::ASM::fmadds(context->f0, context->f2, context->f1, context->f0);
/*800B0B48 000AD948*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800B0B4C 000AD94C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r28));
/*800B0B50 000AD950*/ PPC::Runtime::ASM::fmadds(context->f0, context->f3, context->f1, context->f0);
/*800B0B54 000AD954*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*800B0B58 000AD958*/ PPC::Runtime::ASM::bl(fn_800B7E90);
/*800B0B5C 000AD95C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF1F4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800B0B60 000AD960*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800B0B64 000AD964*/ PPC::Runtime::ASM::ble(.L_800B0B90);
/*800B0B68 000AD968*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800B0B6C 000AD96C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800B0B70 000AD970*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*800B0B74 000AD974*/ PPC::Runtime::ASM::fneg(context->f2, context->f2);
/*800B0B78 000AD978*/ PPC::Runtime::ASM::fneg(context->f1, context->f1);
/*800B0B7C 000AD97C*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*800B0B80 000AD980*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800B0B84 000AD984*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800B0B88 000AD988*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*800B0B8C 000AD98C*/ PPC::Runtime::ASM::b(.L_800B0BA4);
RUNTIME_PPC_JUMP_LABEL(.L_800B0B90, 0x800B0B90) //this is a jump label
/*800B0B90 000AD990*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF1E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800B0B94 000AD994*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF1F8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800B0B98 000AD998*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800B0B9C 000AD99C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800B0BA0 000AD9A0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_800B0BA4, 0x800B0BA4) //this is a jump label
/*800B0BA4 000AD9A4*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*800B0BA8 000AD9A8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800B0BAC 000AD9AC*/ PPC::Runtime::ASM::lfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800B0BB0 000AD9B0*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*800B0BB4 000AD9B4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*800B0BB8 000AD9B8*/ PPC::Runtime::ASM::lfs(context->f7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*800B0BBC 000AD9BC*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f6);
/*800B0BC0 000AD9C0*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*800B0BC4 000AD9C4*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800B0BC8 000AD9C8*/ PPC::Runtime::ASM::fmuls(context->f1, context->f7, context->f2);
/*800B0BCC 000AD9CC*/ PPC::Runtime::ASM::fmsubs(context->f2, context->f5, context->f2, context->f0);
/*800B0BD0 000AD9D0*/ PPC::Runtime::ASM::fmuls(context->f0, context->f5, context->f4);
/*800B0BD4 000AD9D4*/ PPC::Runtime::ASM::fmsubs(context->f1, context->f3, context->f4, context->f1);
/*800B0BD8 000AD9D8*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800B0BDC 000AD9DC*/ PPC::Runtime::ASM::fmsubs(context->f0, context->f7, context->f6, context->f0);
/*800B0BE0 000AD9E0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800B0BE4 000AD9E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800B0BE8 000AD9E8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800B0BEC 000AD9EC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800B0BF0 000AD9F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800B0BF4 000AD9F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800B0BF8 000AD9F8*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800B0BFC 000AD9FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*800B0C00 000ADA00*/ PPC::Runtime::ASM::bl(fn_800B7E90);
/*800B0C04 000ADA04*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF1F4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800B0C08 000ADA08*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800B0C0C 000ADA0C*/ PPC::Runtime::ASM::bge(.L_800B0C24);
/*800B0C10 000ADA10*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF1F8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800B0C14 000ADA14*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF1E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800B0C18 000ADA18*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800B0C1C 000ADA1C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800B0C20 000ADA20*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_800B0C24, 0x800B0C24) //this is a jump label
/*800B0C24 000ADA24*/ PPC::Runtime::ASM::lfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800B0C28 000ADA28*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*800B0C2C 000ADA2C*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*800B0C30 000ADA30*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*800B0C34 000ADA34*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*800B0C38 000ADA38*/ PPC::Runtime::ASM::lfs(context->f7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800B0C3C 000ADA3C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f6, context->f5);
/*800B0C40 000ADA40*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*800B0C44 000ADA44*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*800B0C48 000ADA48*/ PPC::Runtime::ASM::fmuls(context->f1, context->f7, context->f3);
/*800B0C4C 000ADA4C*/ PPC::Runtime::ASM::fmsubs(context->f0, context->f7, context->f2, context->f0);
/*800B0C50 000ADA50*/ PPC::Runtime::ASM::fmuls(context->f2, context->f4, context->f2);
/*800B0C54 000ADA54*/ PPC::Runtime::ASM::fmsubs(context->f1, context->f4, context->f5, context->f1);
/*800B0C58 000ADA58*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800B0C5C 000ADA5C*/ PPC::Runtime::ASM::fmsubs(context->f0, context->f6, context->f3, context->f2);
/*800B0C60 000ADA60*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800B0C64 000ADA64*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800B0C68 000ADA68*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800B0C6C 000ADA6C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800B0C70 000ADA70*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800B0C74 000ADA74*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800B0C78 000ADA78*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800B0C7C 000ADA7C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*800B0C80 000ADA80*/ PPC::Runtime::ASM::bl(fn_800B7E90);
/*800B0C84 000ADA84*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF1F4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800B0C88 000ADA88*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800B0C8C 000ADA8C*/ PPC::Runtime::ASM::bge(.L_800B0CA4);
/*800B0C90 000ADA90*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF1E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800B0C94 000ADA94*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF1F8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800B0C98 000ADA98*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800B0C9C 000ADA9C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800B0CA0 000ADAA0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_800B0CA4, 0x800B0CA4) //this is a jump label
/*800B0CA4 000ADAA4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800B0CA8 000ADAA8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800B0CAC 000ADAAC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*800B0CB0 000ADAB0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*800B0CB4 000ADAB4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*800B0CB8 000ADAB8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*800B0CBC 000ADABC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*800B0CC0 000ADAC0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*800B0CC4 000ADAC4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800B0CC8 000ADAC8*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*800B0CCC 000ADACC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*800B0CD0 000ADAD0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800B0CD4 000ADAD4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*800B0CD8 000ADAD8*/ PPC::Runtime::ASM::blr();
}