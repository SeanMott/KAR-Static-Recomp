//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_HSD_CObjSetCurrent?.hpp"
#include "fn_8042A0B4.hpp"
#include "fn_HSD_CObjEndCurrent.hpp"



void fn_8042A29C(PPC::Runtime::GCContext* context)
{
/*8042A29C 0042709C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8042A2A0 004270A0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8042A2A4 004270A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8042A2A8 004270A8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8042A2AC 004270AC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8042A2B0 004270B0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*8042A2B4 004270B4*/ PPC::Runtime::ASM::bl(fn_HSD_CObjSetCurrent?);
/*8042A2B8 004270B8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8042A2BC 004270BC*/ PPC::Runtime::ASM::beq(.L_8042A2D0);
/*8042A2C0 004270C0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8042A2C4 004270C4*/ PPC::Runtime::ASM::li(context->r4, 0x7);
/*8042A2C8 004270C8*/ PPC::Runtime::ASM::bl(fn_8042A0B4);
/*8042A2CC 004270CC*/ PPC::Runtime::ASM::bl(fn_HSD_CObjEndCurrent);
RUNTIME_PPC_JUMP_LABEL(.L_8042A2D0, 0x8042A2D0) //this is a jump label
/*8042A2D0 004270D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8042A2D4 004270D4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8042A2D8 004270D8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8042A2DC 004270DC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8042A2E0 004270E0*/ PPC::Runtime::ASM::blr();
}