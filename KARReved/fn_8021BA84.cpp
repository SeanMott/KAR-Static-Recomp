//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80206A7C.hpp"



void fn_8021BA84(PPC::Runtime::GCContext* context)
{
/*8021BA84 00218884*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8021BA88 00218888*/ PPC::Runtime::ASM::mflr(context->r0);
/*8021BA8C 0021888C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8021BA90 00218890*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8021BA94 00218894*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8021BA98 00218898*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8021BA9C 0021889C*/ PPC::Runtime::ASM::bl(fn_80206A7C);
/*8021BAA0 002188A0*/ PPC::Runtime::ASM::lha(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb60, context->r31));
/*8021BAA4 002188A4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8021BAA8 002188A8*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb60, context->r31));
/*8021BAAC 002188AC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8021BAB0 002188B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8021BAB4 002188B4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8021BAB8 002188B8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8021BABC 002188BC*/ PPC::Runtime::ASM::blr();
}