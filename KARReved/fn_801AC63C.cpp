//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80194168.hpp"
#include "fn_801AC684.hpp"



void fn_801AC63C(PPC::Runtime::GCContext* context)
{
/*801AC63C 001A943C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801AC640 001A9440*/ PPC::Runtime::ASM::mflr(context->r0);
/*801AC644 001A9444*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AC648 001A9448*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801AC64C 001A944C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801AC650 001A9450*/ PPC::Runtime::ASM::bl(fn_80194168);
/*801AC654 001A9454*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801AC658 001A9458*/ PPC::Runtime::ASM::beq(.L_801AC66C);
/*801AC65C 001A945C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801AC660 001A9460*/ PPC::Runtime::ASM::bl(fn_801AC684);
/*801AC664 001A9464*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801AC668 001A9468*/ PPC::Runtime::ASM::b(.L_801AC670);
RUNTIME_PPC_JUMP_LABEL(.L_801AC66C, 0x801AC66C) //this is a jump label
/*801AC66C 001A946C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801AC670, 0x801AC670) //this is a jump label
/*801AC670 001A9470*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AC674 001A9474*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801AC678 001A9478*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801AC67C 001A947C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801AC680 001A9480*/ PPC::Runtime::ASM::blr();
}