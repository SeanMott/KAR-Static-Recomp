//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8018C8C4.hpp"



void fn_80221368(PPC::Runtime::GCContext* context)
{
/*80221368 0021E168*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8022136C 0021E16C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80221370 0021E170*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80221374 0021E174*/ PPC::Runtime::ASM::slwi(context->r0, context->r5, 2);
/*80221378 0021E178*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r3));
/*8022137C 0021E17C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x108, context->r3));
/*80221380 0021E180*/ PPC::Runtime::ASM::lwzx(context->r5, context->r5, context->r0);
/*80221384 0021E184*/ PPC::Runtime::ASM::bl(fn_8018C8C4);
/*80221388 0021E188*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8022138C 0021E18C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80221390 0021E190*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80221394 0021E194*/ PPC::Runtime::ASM::blr();
}