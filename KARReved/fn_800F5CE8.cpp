//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800DBAE0.hpp"
#include "fn_800DBAE0.hpp"



void fn_800F5CE8(PPC::Runtime::GCContext* context)
{
/*800F5CE8 000F2AE8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*800F5CEC 000F2AEC*/ PPC::Runtime::ASM::mflr(context->r0);
/*800F5CF0 000F2AF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800F5CF4 000F2AF4*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800F5CF8 000F2AF8*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*800F5CFC 000F2AFC*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800F5D00 000F2B00*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1)0, context->qr0);
/*800F5D04 000F2B04*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800F5D08 000F2B08*/ PPC::Runtime::ASM::lwz(context->r7, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800F5D0C 000F2B0C*/ PPC::Runtime::ASM::mr(context->r5, context->r4);
/*800F5D10 000F2B10*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800F5D14 000F2B14*/ PPC::Runtime::ASM::slwi(context->r0, context->r4, 3);
/*800F5D18 000F2B18*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r7));
/*800F5D1C 000F2B1C*/ PPC::Runtime::ASM::fmr(context->f31, context->f2);
/*800F5D20 000F2B20*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4, context->r31));
/*800F5D24 000F2B24*/ PPC::Runtime::ASM::fmr(context->f30, context->f1);
/*800F5D28 000F2B28*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r0);
/*800F5D2C 000F2B2C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*800F5D30 000F2B30*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r31));
/*800F5D34 000F2B34*/ PPC::Runtime::ASM::extrwi(context->r6, context->r3, 1, 24);
/*800F5D38 000F2B38*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe8, context->r31));
/*800F5D3C 000F2B3C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4, context->r31));
/*800F5D40 000F2B40*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800F5D44 000F2B44*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800F5D48 000F2B48*/ PPC::Runtime::ASM::beq(.L_800F5D68);
/*800F5D4C 000F2B4C*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*800F5D50 000F2B50*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*800F5D54 000F2B54*/ PPC::Runtime::ASM::fmr(context->f2, context->f30);
/*800F5D58 000F2B58*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r31));
/*800F5D5C 000F2B5C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*800F5D60 000F2B60*/ PPC::Runtime::ASM::bl(fn_800DBAE0);
/*800F5D64 000F2B64*/ PPC::Runtime::ASM::b(.L_800F5D88);
RUNTIME_PPC_JUMP_LABEL(.L_800F5D68, 0x800F5D68) //this is a jump label
/*800F5D68 000F2B68*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*800F5D6C 000F2B6C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*800F5D70 000F2B70*/ PPC::Runtime::ASM::fmr(context->f2, context->f30);
/*800F5D74 000F2B74*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r31));
/*800F5D78 000F2B78*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*800F5D7C 000F2B7C*/ PPC::Runtime::ASM::bl(fn_800DBAE0);
/*800F5D80 000F2B80*/ PPC::Runtime::ASM::fsubs(context->f0, context->f30, context->f31);
/*800F5D84 000F2B84*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe0, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_800F5D88, 0x800F5D88) //this is a jump label
/*800F5D88 000F2B88*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*800F5D8C 000F2B8C*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800F5D90 000F2B90*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1)0, context->qr0);
/*800F5D94 000F2B94*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800F5D98 000F2B98*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800F5D9C 000F2B9C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800F5DA0 000F2BA0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800F5DA4 000F2BA4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*800F5DA8 000F2BA8*/ PPC::Runtime::ASM::blr();
}