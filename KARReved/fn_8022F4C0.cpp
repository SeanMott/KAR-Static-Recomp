//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8022D248.hpp"



void fn_8022F4C0(PPC::Runtime::GCContext* context)
{
/*8022F4C0 0022C2C0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8022F4C4 0022C2C4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8022F4C8 0022C2C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8022F4CC 0022C2CC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8022F4D0 0022C2D0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8022F4D4 0022C2D4*/ PPC::Runtime::ASM::bl(fn_8022D248);
/*8022F4D8 0022C2D8*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x5);
/*8022F4DC 0022C2DC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8022F4E0 0022C2E0*/ PPC::Runtime::ASM::blt(.L_8022F4FC);
/*8022F4E4 0022C2E4*/ PPC::Runtime::ASM::lis(context->r3, String_ "plclearcheckerlib." Get_MemoryOffset_HighBit);
/*8022F4E8 0022C2E8*/ PPC::Runtime::ASM::lis(context->r5, lbl_804B4CF0 @ Get_MemoryOffset_HighBit);
/*8022F4EC 0022C2EC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, String_ "plclearcheckerlib." Get_MemoryOffset_LowBit);
/*8022F4F0 0022C2F0*/ PPC::Runtime::ASM::li(context->r4, 0x3f3);
/*8022F4F4 0022C2F4*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_804B4CF0 @ Get_MemoryOffset_LowBit);
/*8022F4F8 0022C2F8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8022F4FC, 0x8022F4FC) //this is a jump label
/*8022F4FC 0022C2FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8022F500 0022C300*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4bc, context->r31));
/*8022F504 0022C304*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8022F508 0022C308*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8022F50C 0022C30C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8022F510 0022C310*/ PPC::Runtime::ASM::blr();
}