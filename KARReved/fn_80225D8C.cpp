//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80225D8C(PPC::Runtime::GCContext* context)
{
/*80225D8C 00222B8C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80225D90 00222B90*/ PPC::Runtime::ASM::mflr(context->r0);
/*80225D94 00222B94*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2960 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80225D98 00222B98*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80225D9C 00222B9C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80225DA0 00222BA0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80225DA4 00222BA4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80225DA8 00222BA8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r4));
/*80225DAC 00222BAC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80225DB0 00222BB0*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80225DB4 00222BB4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80225DB8 00222BB8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e8, context->r3));
/*80225DBC 00222BBC*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*80225DC0 00222BC0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80225DC4 00222BC4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80225DC8 00222BC8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80225DCC 00222BCC*/ PPC::Runtime::ASM::bne(.L_80225DE0);
/*80225DD0 00222BD0*/ PPC::Runtime::ASM::li(context->r3, lbl_805D71F0 @ Get_MemoryOffset_SDA21);
/*80225DD4 00222BD4*/ PPC::Runtime::ASM::li(context->r4, 0x316);
/*80225DD8 00222BD8*/ PPC::Runtime::ASM::li(context->r5, lbl_805D71F8 @ Get_MemoryOffset_SDA21);
/*80225DDC 00222BDC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80225DE0, 0x80225DE0) //this is a jump label
/*80225DE0 00222BE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80225DE4 00222BE4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80225DE8 00222BE8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*80225DEC 00222BEC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80225DF0 00222BF0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*80225DF4 00222BF4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r31));
/*80225DF8 00222BF8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80225DFC 00222BFC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*80225E00 00222C00*/ PPC::Runtime::ASM::bne(.L_80225E4C);
/*80225E04 00222C04*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80225E08 00222C08*/ PPC::Runtime::ASM::beq(.L_80225E4C);
/*80225E0C 00222C0C*/ PPC::Runtime::ASM::bne(.L_80225E20);
/*80225E10 00222C10*/ PPC::Runtime::ASM::li(context->r3, lbl_805D71F0 @ Get_MemoryOffset_SDA21);
/*80225E14 00222C14*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*80225E18 00222C18*/ PPC::Runtime::ASM::li(context->r5, lbl_805D71F8 @ Get_MemoryOffset_SDA21);
/*80225E1C 00222C1C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80225E20, 0x80225E20) //this is a jump label
/*80225E20 00222C20*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80225E24 00222C24*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80225E28 00222C28*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*80225E2C 00222C2C*/ PPC::Runtime::ASM::bne(.L_80225E3C);
/*80225E30 00222C30*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*80225E34 00222C34*/ PPC::Runtime::ASM::beq(.L_80225E3C);
/*80225E38 00222C38*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80225E3C, 0x80225E3C) //this is a jump label
/*80225E3C 00222C3C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80225E40 00222C40*/ PPC::Runtime::ASM::bne(.L_80225E4C);
/*80225E44 00222C44*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80225E48 00222C48*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_80225E4C, 0x80225E4C) //this is a jump label
/*80225E4C 00222C4C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80225E50 00222C50*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80225E54 00222C54*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80225E58 00222C58*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80225E5C 00222C5C*/ PPC::Runtime::ASM::blr();
}