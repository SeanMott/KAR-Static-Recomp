//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSReport.hpp"



void fn_80420628(PPC::Runtime::GCContext* context)
{
/*80420628 0041D428*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8042062C 0041D42C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80420630 0041D430*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80420634 0041D434*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80420638 0041D438*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*8042063C 0041D43C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80420640 0041D440*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80420644 0041D444*/ PPC::Runtime::ASM::b(.L_80420658);
RUNTIME_PPC_JUMP_LABEL(.L_80420648, 0x80420648) //this is a jump label
/*80420648 0041D448*/ PPC::Runtime::ASM::li(context->r3, MemoryOffset_483 @ Get_MemoryOffset_SDA21);
/*8042064C 0041D44C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80420650 0041D450*/ PPC::Runtime::ASM::bl(OSReport);
/*80420654 0041D454*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80420658, 0x80420658) //this is a jump label
/*80420658 0041D458*/ PPC::Runtime::ASM::cmpw(context->r31, context->r30);
/*8042065C 0041D45C*/ PPC::Runtime::ASM::blt(.L_80420648);
/*80420660 0041D460*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80420664 0041D464*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80420668 0041D468*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8042066C 0041D46C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80420670 0041D470*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80420674 0041D474*/ PPC::Runtime::ASM::blr();
}