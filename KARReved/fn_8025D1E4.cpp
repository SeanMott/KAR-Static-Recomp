//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80250E54.hpp"



void fn_8025D1E4(PPC::Runtime::GCContext* context)
{
/*8025D1E4 00259FE4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025D1E8 00259FE8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025D1EC 00259FEC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025D1F0 00259FF0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8025D1F4 00259FF4*/ PPC::Runtime::ASM::bl(fn_80250E54);
/*8025D1F8 00259FF8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025D1FC 00259FFC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025D200 0025A000*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025D204 0025A004*/ PPC::Runtime::ASM::blr();
}