//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80055DAC(PPC::Runtime::GCContext* context)
{
/*80055DAC 00052BAC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80055DB0 00052BB0*/ PPC::Runtime::ASM::mflr(context->r0);
/*80055DB4 00052BB4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80055DB8 00052BB8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/* 80055DBC 00052BBC  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*80055DC0 00052BC0*/ PPC::Runtime::ASM::beq(.L_80055DE4);
/*80055DC4 00052BC4*/ PPC::Runtime::ASM::bl(fn_HSD_JObjCheckDepend);
/*80055DC8 00052BC8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80055DCC 00052BCC*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80055DD0 00052BD0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r31));
/*80055DD4 00052BD4*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r5));
/*80055DD8 00052BD8*/ PPC::Runtime::ASM::bl(fn_HSD_AObjInterpretAnim);
/*80055DDC 00052BDC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r31));
/*80055DE0 00052BE0*/ PPC::Runtime::ASM::bl(fn_HSD_RObjAnimAll);
RUNTIME_PPC_JUMP_LABEL(.L_80055DE4, 0x80055DE4) //this is a jump label
/*80055DE4 00052BE4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80055DE8 00052BE8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80055DEC 00052BEC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80055DF0 00052BF0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80055DF4 00052BF4*/ PPC::Runtime::ASM::blr();
}