//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802D96E4(PPC::Runtime::GCContext* context)
{
/*802D96E4 002D64E4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802D96E8 002D64E8*/ PPC::Runtime::ASM::mflr(context->r0);
/*802D96EC 002D64EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802D96F0 002D64F0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802D96F4 002D64F4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802D96F8 002D64F8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*802D96FC 002D64FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r3));
/*802D9700 002D6500*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802D9704 002D6504*/ PPC::Runtime::ASM::beq(.L_802D9710);
/* 802D9708 002D6508  54 00 07 FF */ clrlwi. context->r0 , context->r0 , 31
/*802D970C 002D650C*/ PPC::Runtime::ASM::beq(.L_802D975C);
RUNTIME_PPC_JUMP_LABEL(.L_802D9710, 0x802D9710) //this is a jump label
/*802D9710 002D6510*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x474, context->r3));
/*802D9714 002D6514*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*802D9718 002D6518*/ PPC::Runtime::ASM::ori(context->r0, context->r0, 0x10);
/*802D971C 002D651C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*802D9720 002D6520*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802D9724 002D6524*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x460, context->r3));
/*802D9728 002D6528*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802D972C 002D652C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*802D9730 002D6530*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802D9734 002D6534*/ PPC::Runtime::ASM::bctrl();
/*802D9738 002D6538*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802D973C 002D653C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r3));
/*802D9740 002D6540*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xe);
/*802D9744 002D6544*/ PPC::Runtime::ASM::bge(.L_802D975C);
/*802D9748 002D6548*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x540, context->r3));
/*802D974C 002D654C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802D9750 002D6550*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*802D9754 002D6554*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802D9758 002D6558*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802D975C, 0x802D975C) //this is a jump label
/*802D975C 002D655C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802D9760 002D6560*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802D9764 002D6564*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802D9768 002D6568*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802D976C 002D656C*/ PPC::Runtime::ASM::blr();
}