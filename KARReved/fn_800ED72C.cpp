//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "memset.hpp"
#include "fn_800ED520.hpp"
#include "fn_800EB374.hpp"



void fn_800ED72C(PPC::Runtime::GCContext* context)
{
/*800ED72C 000EA52C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800ED730 000EA530*/ PPC::Runtime::ASM::mflr(context->r0);
/*800ED734 000EA534*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800ED738 000EA538*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800ED73C 000EA53C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800ED740 000EA540*/ PPC::Runtime::ASM::beq(.L_800ED774);
/*800ED744 000EA544*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x3c);
/*800ED748 000EA548*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800ED74C 000EA54C*/ PPC::Runtime::ASM::li(context->r5, 0x10);
/*800ED750 000EA550*/ PPC::Runtime::ASM::bl(memset);
/*800ED754 000EA554*/ PPC::Runtime::ASM::bl(fn_800ED520);
/*800ED758 000EA558*/ PPC::Runtime::ASM::bl(fn_800EB374);
/*800ED75C 000EA55C*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD6F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800ED760 000EA560*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r4));
/* 800ED764 000EA564  54 60 07 FF */ clrlwi. context->r0 , context->r3 , 31
/*800ED768 000EA568*/ PPC::Runtime::ASM::beq(.L_800ED774);
/*800ED76C 000EA56C*/ PPC::Runtime::ASM::xori(context->r0, context->r3, 0x1);
/*800ED770 000EA570*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_800ED774, 0x800ED774) //this is a jump label
/*800ED774 000EA574*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800ED778 000EA578*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800ED77C 000EA57C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800ED780 000EA580*/ PPC::Runtime::ASM::blr();
}