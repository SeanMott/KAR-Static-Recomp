//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019C9BC.hpp"



void fn_8019C95C(PPC::Runtime::GCContext* context)
{
/*8019C95C 0019975C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8019C960 00199760*/ PPC::Runtime::ASM::mflr(context->r0);
/*8019C964 00199764*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019C968 00199768*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8019C96C 0019976C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8019C970 00199770*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x77c, context->r3));
/*8019C974 00199774*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8019C978 00199778*/ PPC::Runtime::ASM::beq(.L_8019C9A8);
/*8019C97C 0019977C*/ PPC::Runtime::ASM::bl(fn_8019C9BC);
/*8019C980 00199780*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x77c, context->r31));
/*8019C984 00199784*/ PPC::Runtime::ASM::bl(fn_HSD_JObjRemoveAll?);
/*8019C988 00199788*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8019C98C 0019978C*/ PPC::Runtime::ASM::lis(context->r3, lbl_80559EE8 @ Get_MemoryOffset_HighBit);
/*8019C990 00199790*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x77c, context->r31));
/*8019C994 00199794*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80559EE8 @ Get_MemoryOffset_LowBit);
/*8019C998 00199798*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x784, context->r31));
/*8019C99C 0019979C*/ PPC::Runtime::ASM::bl(fn_HSD_ObjFree);
/*8019C9A0 001997A0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8019C9A4 001997A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x784, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8019C9A8, 0x8019C9A8) //this is a jump label
/*8019C9A8 001997A8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019C9AC 001997AC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8019C9B0 001997B0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8019C9B4 001997B4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8019C9B8 001997B8*/ PPC::Runtime::ASM::blr();
}