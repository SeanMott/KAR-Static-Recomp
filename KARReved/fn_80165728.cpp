//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_80165728(PPC::Runtime::GCContext* context)
{
/*80165728 00162528*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8016572C 0016252C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80165730 00162530*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80165734 00162534*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80165738 00162538*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8016573C 0016253C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80165740 00162540*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9dc, context->r3));
/*80165744 00162544*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80165748 00162548*/ PPC::Runtime::ASM::beq(.L_80165758);
/*8016574C 0016254C*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*80165750 00162550*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80165754 00162554*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9dc, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80165758, 0x80165758) //this is a jump label
/*80165758 00162558*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8016575C 0016255C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80165760 00162560*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80165764 00162564*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80165768 00162568*/ PPC::Runtime::ASM::blr();
}