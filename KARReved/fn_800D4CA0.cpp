//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800D4CA0(PPC::Runtime::GCContext* context)
{
/*800D4CA0 000D1AA0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800D4CA4 000D1AA4*/ PPC::Runtime::ASM::mflr(context->r0);
/*800D4CA8 000D1AA8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800D4CAC 000D1AAC*/ PPC::Runtime::ASM::slwi(context->r0, context->r3, 3);
/*800D4CB0 000D1AB0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800D4CB4 000D1AB4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800D4CB8 000D1AB8*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*800D4CBC 000D1ABC*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800D4CC0 000D1AC0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r5));
/*800D4CC4 000D1AC4*/ PPC::Runtime::ASM::lwzx(context->r31, context->r3, context->r0);
/*800D4CC8 000D1AC8*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*800D4CCC 000D1ACC*/ PPC::Runtime::ASM::bne(.L_800D4CE0);
/*800D4CD0 000D1AD0*/ PPC::Runtime::ASM::li(context->r3, lbl_805D609C @ Get_MemoryOffset_SDA21);
/*800D4CD4 000D1AD4*/ PPC::Runtime::ASM::li(context->r4, 0x47c);
/*800D4CD8 000D1AD8*/ PPC::Runtime::ASM::li(context->r5, lbl_805D60A4 @ Get_MemoryOffset_SDA21);
/*800D4CDC 000D1ADC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800D4CE0, 0x800D4CE0) //this is a jump label
/*800D4CE0 000D1AE0*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*800D4CE4 000D1AE4*/ PPC::Runtime::ASM::beq(.L_800D4D28);
/*800D4CE8 000D1AE8*/ PPC::Runtime::ASM::bne(.L_800D4CFC);
/*800D4CEC 000D1AEC*/ PPC::Runtime::ASM::li(context->r3, lbl_805D609C @ Get_MemoryOffset_SDA21);
/*800D4CF0 000D1AF0*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*800D4CF4 000D1AF4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D60A4 @ Get_MemoryOffset_SDA21);
/*800D4CF8 000D1AF8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800D4CFC, 0x800D4CFC) //this is a jump label
/*800D4CFC 000D1AFC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*800D4D00 000D1B00*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800D4D04 000D1B04*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*800D4D08 000D1B08*/ PPC::Runtime::ASM::bne(.L_800D4D18);
/*800D4D0C 000D1B0C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*800D4D10 000D1B10*/ PPC::Runtime::ASM::beq(.L_800D4D18);
/*800D4D14 000D1B14*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800D4D18, 0x800D4D18) //this is a jump label
/*800D4D18 000D1B18*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800D4D1C 000D1B1C*/ PPC::Runtime::ASM::beq(.L_800D4D28);
/*800D4D20 000D1B20*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800D4D24 000D1B24*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetupMatrixSub);
RUNTIME_PPC_JUMP_LABEL(.L_800D4D28, 0x800D4D28) //this is a jump label
/*800D4D28 000D1B28*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r31));
/*800D4D2C 000D1B2C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*800D4D30 000D1B30*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r31));
/*800D4D34 000D1B34*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*800D4D38 000D1B38*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r31));
/*800D4D3C 000D1B3C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*800D4D40 000D1B40*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800D4D44 000D1B44*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800D4D48 000D1B48*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800D4D4C 000D1B4C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800D4D50 000D1B50*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800D4D54 000D1B54*/ PPC::Runtime::ASM::blr();
}