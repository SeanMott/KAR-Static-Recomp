//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80287AD8(PPC::Runtime::GCContext* context)
{
/*80287AD8 002848D8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80287ADC 002848DC*/ PPC::Runtime::ASM::mflr(context->r0);
/*80287AE0 002848E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80287AE4 002848E4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80287AE8 002848E8*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*80287AEC 002848EC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 80287AF0 002848F0  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*80287AF4 002848F4*/ PPC::Runtime::ASM::beq(.L_80287B24);
/*80287AF8 002848F8*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BC15C @ Get_MemoryOffset_HighBit);
/*80287AFC 002848FC*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BC15C @ Get_MemoryOffset_LowBit);
/*80287B00 00284900*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80287B04 00284904*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80287B08 00284908*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*80287B0C 0028490C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80287B10 00284910*/ PPC::Runtime::ASM::bctrl();
/*80287B14 00284914*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*80287B18 00284918*/ PPC::Runtime::ASM::ble(.L_80287B24);
/*80287B1C 0028491C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80287B20 00284920*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_80287B24, 0x80287B24) //this is a jump label
/*80287B24 00284924*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80287B28 00284928*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80287B2C 0028492C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80287B30 00284930*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80287B34 00284934*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80287B38 00284938*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80287B3C 0028493C*/ PPC::Runtime::ASM::blr();
}