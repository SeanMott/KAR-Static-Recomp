//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800E5F5C.hpp"



void fn_800F63F0(PPC::Runtime::GCContext* context)
{
/*800F63F0 000F31F0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800F63F4 000F31F4*/ PPC::Runtime::ASM::mflr(context->r0);
/*800F63F8 000F31F8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0xc);
/*800F63FC 000F31FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F6400 000F3200*/ PPC::Runtime::ASM::bl(fn_800E5F5C);
/*800F6404 000F3204*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F6408 000F3208*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800F640C 000F320C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800F6410 000F3210*/ PPC::Runtime::ASM::blr();
}