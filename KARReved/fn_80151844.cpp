//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_80151844(PPC::Runtime::GCContext* context)
{
/*80151844 0014E644*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80151848 0014E648*/ PPC::Runtime::ASM::mflr(context->r0);
/*8015184C 0014E64C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80151850 0014E650*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80151854 0014E654*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*80151858 0014E658*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8015185C 0014E65C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80151860 0014E660*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80151864, 0x80151864) //this is a jump label
/*80151864 0014E664*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80151868 0014E668*/ PPC::Runtime::ASM::extsb(context->r0, context->r29);
/*8015186C 0014E66C*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80151870 0014E670*/ PPC::Runtime::ASM::add(context->r30, context->r3, context->r0);
/*80151874 0014E674*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x520, context->r30));
/*80151878 0014E678*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8015187C 0014E67C*/ PPC::Runtime::ASM::beq(.L_80151888);
/*80151880 0014E680*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*80151884 0014E684*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x520, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80151888, 0x80151888) //this is a jump label
/*80151888 0014E688*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*8015188C 0014E68C*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x14);
/*80151890 0014E690*/ PPC::Runtime::ASM::blt(.L_80151864);
/*80151894 0014E694*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80151898 0014E698*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8015189C 0014E69C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801518A0 0014E6A0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801518A4 0014E6A4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801518A8 0014E6A8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801518AC 0014E6AC*/ PPC::Runtime::ASM::blr();
}