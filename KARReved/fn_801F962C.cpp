//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801CE778.hpp"
#include "fn_801F996C.hpp"
#include "fn_801F9688.hpp"



void fn_801F962C(PPC::Runtime::GCContext* context)
{
/*801F962C 001F642C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801F9630 001F6430*/ PPC::Runtime::ASM::mflr(context->r0);
/*801F9634 001F6434*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F9638 001F6438*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801F963C 001F643C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801F9640 001F6440*/ PPC::Runtime::ASM::bl(fn_801CE778);
/*801F9644 001F6444*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc30, context->r31));
/*801F9648 001F6448*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801F964C 001F644C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 5, 26, 26);
/*801F9650 001F6450*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc30, context->r31));
/*801F9654 001F6454*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc33, context->r31));
/* 801F9658 001F6458  54 00 07 FF */ clrlwi. context->r0 , context->r0 , 31
/*801F965C 001F645C*/ PPC::Runtime::ASM::beq(.L_801F966C);
/*801F9660 001F6460*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801F9664 001F6464*/ PPC::Runtime::ASM::bl(fn_801F996C);
/*801F9668 001F6468*/ PPC::Runtime::ASM::b(.L_801F9674);
RUNTIME_PPC_JUMP_LABEL(.L_801F966C, 0x801F966C) //this is a jump label
/*801F966C 001F646C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801F9670 001F6470*/ PPC::Runtime::ASM::bl(fn_801F9688);
RUNTIME_PPC_JUMP_LABEL(.L_801F9674, 0x801F9674) //this is a jump label
/*801F9674 001F6474*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F9678 001F6478*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801F967C 001F647C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801F9680 001F6480*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801F9684 001F6484*/ PPC::Runtime::ASM::blr();
}