//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80186F50.hpp"
#include "fn_80186F84.hpp"
#include "fn_80186FD8.hpp"



void fn_80139348(PPC::Runtime::GCContext* context)
{
/*80139348 00136148*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8013934C 0013614C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80139350 00136150*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80139354 00136154*/ PPC::Runtime::ASM::bl(fn_80186F50);
/*80139358 00136158*/ PPC::Runtime::ASM::bl(fn_80186F84);
/*8013935C 0013615C*/ PPC::Runtime::ASM::bl(fn_80186FD8);
/*80139360 00136160*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80139364 00136164*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80139368 00136168*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8013936C 0013616C*/ PPC::Runtime::ASM::blr();
}