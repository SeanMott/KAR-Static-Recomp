//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8028EFFC(PPC::Runtime::GCContext* context)
{
/*8028EFFC 0028BDFC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8028F000 0028BE00*/ PPC::Runtime::ASM::mflr(context->r0);
/*8028F004 0028BE04*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8028F008 0028BE08*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8028F00C 0028BE0C*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8028F010 0028BE10*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 8028F014 0028BE14  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*8028F018 0028BE18*/ PPC::Runtime::ASM::beq(.L_8028F058);
/*8028F01C 0028BE1C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BE210 @ Get_MemoryOffset_HighBit);
/*8028F020 0028BE20*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BE210 @ Get_MemoryOffset_LowBit);
/*8028F024 0028BE24*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8028F028 0028BE28*/ PPC::Runtime::ASM::beq(.L_8028F048);
/*8028F02C 0028BE2C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BE238 @ Get_MemoryOffset_HighBit);
/*8028F030 0028BE30*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BE238 @ Get_MemoryOffset_LowBit);
/*8028F034 0028BE34*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8028F038 0028BE38*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8028F03C 0028BE3C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*8028F040 0028BE40*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8028F044 0028BE44*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8028F048, 0x8028F048) //this is a jump label
/*8028F048 0028BE48*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*8028F04C 0028BE4C*/ PPC::Runtime::ASM::ble(.L_8028F058);
/*8028F050 0028BE50*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8028F054 0028BE54*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_8028F058, 0x8028F058) //this is a jump label
/*8028F058 0028BE58*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8028F05C 0028BE5C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8028F060 0028BE60*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8028F064 0028BE64*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8028F068 0028BE68*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8028F06C 0028BE6C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8028F070 0028BE70*/ PPC::Runtime::ASM::blr();
}