//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_IPSetConfigError.hpp"
#include "fn_Stop.hpp"



void fn_ExHandler(PPC::Runtime::GCContext* context)
{
/*80478650 00475450*/ PPC::Runtime::ASM::mflr(context->r0);
/*80478654 00475454*/ PPC::Runtime::ASM::li(context->r4, -0x65);
/*80478658 00475458*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*8047865C 0047545C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x18, context->r1));
/*80478660 00475460*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80478664 00475464*/ PPC::Runtime::ASM::subi(context->r31, context->r3, 0x3a0);
/*80478668 00475468*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8047866C 0047546C*/ PPC::Runtime::ASM::bl(fn_IPSetConfigError);
/*80478670 00475470*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80478674 00475474*/ PPC::Runtime::ASM::bl(fn_Stop);
/*80478678 00475478*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8047867C 0047547C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80478680 00475480*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x18);
/*80478684 00475484*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80478688 00475488*/ PPC::Runtime::ASM::blr();
}