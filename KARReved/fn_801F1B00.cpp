//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801F1B00(PPC::Runtime::GCContext* context)
{
/*801F1B00 001EE900*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801F1B04 001EE904*/ PPC::Runtime::ASM::mflr(context->r0);
/*801F1B08 001EE908*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801F1B0C 001EE90C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801F1B10 001EE910*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801F1B14 001EE914*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F1B18 001EE918*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*801F1B1C 001EE91C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x314, context->r3));
/*801F1B20 001EE920*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r3));
/*801F1B24 001EE924*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r3));
/*801F1B28 001EE928*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*801F1B2C 001EE92C*/ PPC::Runtime::ASM::bne(.L_801F1B40);
/*801F1B30 001EE930*/ PPC::Runtime::ASM::li(context->r3, lbl_805D7098 @ Get_MemoryOffset_SDA21);
/*801F1B34 001EE934*/ PPC::Runtime::ASM::li(context->r4, 0x3e4);
/*801F1B38 001EE938*/ PPC::Runtime::ASM::li(context->r5, lbl_805D70A0 @ Get_MemoryOffset_SDA21);
/*801F1B3C 001EE93C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801F1B40, 0x801F1B40) //this is a jump label
/*801F1B40 001EE940*/ PPC::Runtime::ASM::addic.(context->r0, context->r29, 0x1ac0);
/*801F1B44 001EE944*/ PPC::Runtime::ASM::bne(.L_801F1B5C);
/*801F1B48 001EE948*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_14 @ Get_MemoryOffset_HighBit);
/*801F1B4C 001EE94C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D7098 @ Get_MemoryOffset_SDA21);
/*801F1B50 001EE950*/ PPC::Runtime::ASM::addi(context->r5, context->r4, MemoryOffset_14 @ Get_MemoryOffset_LowBit);
/*801F1B54 001EE954*/ PPC::Runtime::ASM::li(context->r4, 0x3e5);
/*801F1B58 001EE958*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801F1B5C, 0x801F1B5C) //this is a jump label
/*801F1B5C 001EE95C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*801F1B60 001EE960*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*801F1B64 001EE964*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*801F1B68 001EE968*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ac0, context->r29));
/*801F1B6C 001EE96C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ac4, context->r29));
/*801F1B70 001EE970*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*801F1B74 001EE974*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ac8, context->r29));
/*801F1B78 001EE978*/ PPC::Runtime::ASM::bne(.L_801F1B8C);
/*801F1B7C 001EE97C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D7098 @ Get_MemoryOffset_SDA21);
/*801F1B80 001EE980*/ PPC::Runtime::ASM::li(context->r4, 0x3e4);
/*801F1B84 001EE984*/ PPC::Runtime::ASM::li(context->r5, lbl_805D70A0 @ Get_MemoryOffset_SDA21);
/*801F1B88 001EE988*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801F1B8C, 0x801F1B8C) //this is a jump label
/*801F1B8C 001EE98C*/ PPC::Runtime::ASM::addic.(context->r0, context->r29, 0x1acc);
/*801F1B90 001EE990*/ PPC::Runtime::ASM::bne(.L_801F1BA8);
/*801F1B94 001EE994*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_14 @ Get_MemoryOffset_HighBit);
/*801F1B98 001EE998*/ PPC::Runtime::ASM::li(context->r3, lbl_805D7098 @ Get_MemoryOffset_SDA21);
/*801F1B9C 001EE99C*/ PPC::Runtime::ASM::addi(context->r5, context->r4, MemoryOffset_14 @ Get_MemoryOffset_LowBit);
/*801F1BA0 001EE9A0*/ PPC::Runtime::ASM::li(context->r4, 0x3e5);
/*801F1BA4 001EE9A4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801F1BA8, 0x801F1BA8) //this is a jump label
/*801F1BA8 001EE9A8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*801F1BAC 001EE9AC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
/*801F1BB0 001EE9B0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2008 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F1BB4 001EE9B4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1acc, context->r29));
/*801F1BB8 001EE9B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ad0, context->r29));
/*801F1BBC 001EE9BC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r30));
/*801F1BC0 001EE9C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ad4, context->r29));
/*801F1BC4 001EE9C4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ae0, context->r29));
/*801F1BC8 001EE9C8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1adc, context->r29));
/*801F1BCC 001EE9CC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ad8, context->r29));
/*801F1BD0 001EE9D0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1aec, context->r29));
/*801F1BD4 001EE9D4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ae8, context->r29));
/*801F1BD8 001EE9D8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ae4, context->r29));
/*801F1BDC 001EE9DC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b18, context->r29));
/*801F1BE0 001EE9E0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b14, context->r29));
/*801F1BE4 001EE9E4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b10, context->r29));
/*801F1BE8 001EE9E8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b0c, context->r29));
/*801F1BEC 001EE9EC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1af8, context->r29));
/*801F1BF0 001EE9F0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1af4, context->r29));
/*801F1BF4 001EE9F4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1af0, context->r29));
/*801F1BF8 001EE9F8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b04, context->r29));
/*801F1BFC 001EE9FC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b00, context->r29));
/*801F1C00 001EEA00*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1afc, context->r29));
/*801F1C04 001EEA04*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b08, context->r29));
/*801F1C08 001EEA08*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801F1C0C 001EEA0C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801F1C10 001EEA10*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F1C14 001EEA14*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801F1C18 001EEA18*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801F1C1C 001EEA1C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801F1C20 001EEA20*/ PPC::Runtime::ASM::blr();
}