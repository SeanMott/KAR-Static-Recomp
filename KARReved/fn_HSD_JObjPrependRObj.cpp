//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_HSD_JObjPrependRObj(PPC::Runtime::GCContext* context)
{
/*8040BCCC 00408ACC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8040BCD0 00408AD0*/ PPC::Runtime::ASM::beqlr();
/*8040BCD4 00408AD4*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8040BCD8 00408AD8*/ PPC::Runtime::ASM::bne(.L_8040BCE0);
/*8040BCDC 00408ADC*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8040BCE0, 0x8040BCE0) //this is a jump label
/*8040BCE0 00408AE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r3));
/*8040BCE4 00408AE4*/ PPC::Runtime::ASM::bne(.L_8040BCEC);
/*8040BCE8 00408AE8*/ PPC::Runtime::ASM::b(.L_8040BCF4);
RUNTIME_PPC_JUMP_LABEL(.L_8040BCEC, 0x8040BCEC) //this is a jump label
/*8040BCEC 00408AEC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8040BCF0 00408AF0*/ PPC::Runtime::ASM::mr(context->r0, context->r4);
RUNTIME_PPC_JUMP_LABEL(.L_8040BCF4, 0x8040BCF4) //this is a jump label
/*8040BCF4 00408AF4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r3));
/*8040BCF8 00408AF8*/ PPC::Runtime::ASM::blr();
}