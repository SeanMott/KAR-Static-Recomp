//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_chargeLogic?.hpp"



void fn_801F9F70(PPC::Runtime::GCContext* context)
{
/*801F9F70 001F6D70*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801F9F74 001F6D74*/ PPC::Runtime::ASM::mflr(context->r0);
/*801F9F78 001F6D78*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2190 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F9F7C 001F6D7C*/ PPC::Runtime::ASM::li(context->r4, 0x11);
/*801F9F80 001F6D80*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F9F84 001F6D84*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*801F9F88 001F6D88*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801F9F8C 001F6D8C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801F9F90 001F6D90*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801F9F94 001F6D94*/ PPC::Runtime::ASM::bl(fn_chargeLogic?);
/*801F9F98 001F6D98*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc33, context->r31));
/*801F9F9C 001F6D9C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801F9FA0 001F6DA0*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 0, 31, 31);
/*801F9FA4 001F6DA4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc33, context->r31));
/*801F9FA8 001F6DA8*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc39, context->r31));
/*801F9FAC 001F6DAC*/ PPC::Runtime::ASM::extrwi(context->r0, context->r3, 2, 26);
/*801F9FB0 001F6DB0*/ PPC::Runtime::ASM::ori(context->r0, context->r0, 0x1);
/*801F9FB4 001F6DB4*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r0, 4, 26, 27);
/*801F9FB8 001F6DB8*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc39, context->r31));
/*801F9FBC 001F6DBC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F9FC0 001F6DC0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801F9FC4 001F6DC4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801F9FC8 001F6DC8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801F9FCC 001F6DCC*/ PPC::Runtime::ASM::blr();
}