//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802FE614(PPC::Runtime::GCContext* context)
{
/*802FE614 002FB414*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802FE618 002FB418*/ PPC::Runtime::ASM::mflr(context->r0);
/*802FE61C 002FB41C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802FE620 002FB420*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802FE624 002FB424*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r12));
/*802FE628 002FB428*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802FE62C 002FB42C*/ PPC::Runtime::ASM::bctrl();
/*802FE630 002FB430*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r3, 24);
/*802FE634 002FB434*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r0);
/*802FE638 002FB438*/ PPC::Runtime::ASM::srwi(context->r3, context->r0, 5);
/*802FE63C 002FB43C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802FE640 002FB440*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802FE644 002FB444*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802FE648 002FB448*/ PPC::Runtime::ASM::blr();
}