//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802926E8(PPC::Runtime::GCContext* context)
{
/*802926E8 0028F4E8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802926EC 0028F4EC*/ PPC::Runtime::ASM::mflr(context->r0);
/*802926F0 0028F4F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802926F4 0028F4F4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802926F8 0028F4F8*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802926FC 0028F4FC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 80292700 0028F500  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*80292704 0028F504*/ PPC::Runtime::ASM::beq(.L_80292734);
/*80292708 0028F508*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BD658 @ Get_MemoryOffset_HighBit);
/*8029270C 0028F50C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BD658 @ Get_MemoryOffset_LowBit);
/*80292710 0028F510*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80292714 0028F514*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80292718 0028F518*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*8029271C 0028F51C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80292720 0028F520*/ PPC::Runtime::ASM::bctrl();
/*80292724 0028F524*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*80292728 0028F528*/ PPC::Runtime::ASM::ble(.L_80292734);
/*8029272C 0028F52C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80292730 0028F530*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_80292734, 0x80292734) //this is a jump label
/*80292734 0028F534*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80292738 0028F538*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8029273C 0028F53C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80292740 0028F540*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80292744 0028F544*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80292748 0028F548*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8029274C 0028F54C*/ PPC::Runtime::ASM::blr();
}