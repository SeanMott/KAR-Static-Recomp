//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_8014A65C(PPC::Runtime::GCContext* context)
{
/*8014A65C 0014745C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8014A660 00147460*/ PPC::Runtime::ASM::mflr(context->r0);
/*8014A664 00147464*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8014A668 00147468*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8014A66C 0014746C*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8014A670 00147470*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8014A674 00147474*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x378, context->r3));
/*8014A678 00147478*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8014A67C 0014747C*/ PPC::Runtime::ASM::beq(.L_8014A68C);
/*8014A680 00147480*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*8014A684 00147484*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8014A688 00147488*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x378, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8014A68C, 0x8014A68C) //this is a jump label
/*8014A68C 0014748C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8014A690 00147490*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8014A694 00147494*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8014A698 00147498*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8014A69C 0014749C*/ PPC::Runtime::ASM::blr();
}