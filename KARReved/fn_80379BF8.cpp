//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80379BF8(PPC::Runtime::GCContext* context)
{
/*80379BF8 003769F8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80379BFC 003769FC*/ PPC::Runtime::ASM::mflr(context->r0);
/*80379C00 00376A00*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80379C04 00376A04*/ PPC::Runtime::ASM::li(context->r5, lbl_805DBBE8 @ Get_MemoryOffset_SDA21);
/*80379C08 00376A08*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80379C0C 00376A0C*/ PPC::Runtime::ASM::li(context->r6, lbl_805DBBE0 @ Get_MemoryOffset_SDA21);
/*80379C10 00376A10*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80379C14 00376A14*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80379C18 00376A18*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80379C1C 00376A1C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80379C20 00376A20*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDAF4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80379C24 00376A24*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r30));
/*80379C28 00376A28*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*80379C2C 00376A2C*/ PPC::Runtime::ASM::b(.L_80379C6C);
RUNTIME_PPC_JUMP_LABEL(.L_80379C30, 0x80379C30) //this is a jump label
/*80379C30 00376A30*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r3));
/*80379C34 00376A34*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80379C38 00376A38*/ PPC::Runtime::ASM::beq(.L_80379C5C);
/*80379C3C 00376A3C*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r4));
/*80379C40 00376A40*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*80379C44 00376A44*/ PPC::Runtime::ASM::cmplw(context->r4, context->r0);
/*80379C48 00376A48*/ PPC::Runtime::ASM::bne(.L_80379C5C);
/*80379C4C 00376A4C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80379C50 00376A50*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80379C54 00376A54*/ PPC::Runtime::ASM::beq(.L_80379C5C);
/*80379C58 00376A58*/ PPC::Runtime::ASM::b(.L_80379C78);
RUNTIME_PPC_JUMP_LABEL(.L_80379C5C, 0x80379C5C) //this is a jump label
/*80379C5C 00376A5C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80379C60 00376A60*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r12));
/*80379C64 00376A64*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80379C68 00376A68*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80379C6C, 0x80379C6C) //this is a jump label
/*80379C6C 00376A6C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80379C70 00376A70*/ PPC::Runtime::ASM::bne(.L_80379C30);
/*80379C74 00376A74*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80379C78, 0x80379C78) //this is a jump label
/*80379C78 00376A78*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80379C7C 00376A7C*/ PPC::Runtime::ASM::beq(.L_80379CC0);
/*80379C80 00376A80*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80379C84 00376A84*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80379C88 00376A88*/ PPC::Runtime::ASM::beq(.L_80379CC0);
/*80379C8C 00376A8C*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r30));
/*80379C90 00376A90*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4B58 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80379C94 00376A94*/ PPC::Runtime::ASM::ori(context->r0, context->r0, 0x2);
/*80379C98 00376A98*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4B5C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80379C9C 00376A9C*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r30));
/*80379CA0 00376AA0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r30));
/*80379CA4 00376AA4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80379CA8 00376AA8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80379CAC 00376AAC*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r30));
/*80379CB0 00376AB0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r30));
/*80379CB4 00376AB4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80379CB8 00376AB8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80379CBC 00376ABC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80379CC0, 0x80379CC0) //this is a jump label
/*80379CC0 00376AC0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80379CC4 00376AC4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80379CC8 00376AC8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80379CCC 00376ACC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80379CD0 00376AD0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80379CD4 00376AD4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80379CD8 00376AD8*/ PPC::Runtime::ASM::blr();
}