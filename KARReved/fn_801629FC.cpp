//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_801629FC(PPC::Runtime::GCContext* context)
{
/*801629FC 0015F7FC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80162A00 0015F800*/ PPC::Runtime::ASM::mflr(context->r0);
/*80162A04 0015F804*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80162A08 0015F808*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80162A0C 0015F80C*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80162A10 0015F810*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80162A14 0015F814*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e8, context->r3));
/*80162A18 0015F818*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80162A1C 0015F81C*/ PPC::Runtime::ASM::beq(.L_80162A2C);
/*80162A20 0015F820*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*80162A24 0015F824*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80162A28 0015F828*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80162A2C, 0x80162A2C) //this is a jump label
/*80162A2C 0015F82C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80162A30 0015F830*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80162A34 0015F834*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80162A38 0015F838*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80162A3C 0015F83C*/ PPC::Runtime::ASM::blr();
}