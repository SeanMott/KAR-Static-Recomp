//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"



void fn_8000C01C(PPC::Runtime::GCContext* context)
{
/*8000C01C 00008E1C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8000C020 00008E20*/ PPC::Runtime::ASM::mflr(context->r0);
/*8000C024 00008E24*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000C028 00008E28*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8000C02C 00008E2C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8000C030 00008E30*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8000C034 00008E34*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*8000C038 00008E38*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*8000C03C 00008E3C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcc8, context->r3));
/*8000C040 00008E40*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8000C044 00008E44*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000C048 00008E48*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8000C04C 00008E4C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8000C050 00008E50*/ PPC::Runtime::ASM::blr();
}