//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80250E54.hpp"



void fn_8025CC54(PPC::Runtime::GCContext* context)
{
/*8025CC54 00259A54*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025CC58 00259A58*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025CC5C 00259A5C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025CC60 00259A60*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8025CC64 00259A64*/ PPC::Runtime::ASM::bl(fn_80250E54);
/*8025CC68 00259A68*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025CC6C 00259A6C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025CC70 00259A70*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025CC74 00259A74*/ PPC::Runtime::ASM::blr();
}